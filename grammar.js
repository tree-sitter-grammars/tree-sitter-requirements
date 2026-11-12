/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @todo Support environment variables anywhere
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: 'requirements',

  extras: $ => [$.linebreak],

  inline: $ => [
    $._package_list,
    $._end_of_line,
    $._statement
  ],

  conflicts: $ => [
    [$.requirement],
    // a space after a marker either continues it with and/or
    // or separates it from an option or an inline comment
    [$.marker_spec, $._marker_and, $._marker_or],
    [$._url_marker_spec, $._marker_and, $._marker_or],
    [$._url_semicolon_marker_spec, $._marker_and, $._marker_or],
    // a ";" after a URL either stays in the URL or opens its marker, which only a space
    // after it can tell
    [$._url_line_semicolon],
    [$._url_line_semicolon, $._url_marker_spec],
  ],

  word: $ => $.package,

  rules: {
    file: $ => seq(
      repeat(
        choice(
          seq(
            optional($._space),
            optional($.comment),
            /\r?\n/
          ),
          seq(
            optional($._space),
            $._statement,
            $._end_of_line
          )
        )
      ),
      // the last line of a file may end without a line break
      optional(choice(
        $._space,
        seq(optional($._space), $.comment),
        seq(
          optional($._space),
          $._statement,
          optional(seq($._space, optional($.comment)))
        )
      ))
    ),

    _statement: $ => choice(
      $.requirement,
      seq(
        alias($._url_line, $.url),
        optional(alias($._url_marker_spec, $.marker_spec))
      ),
      // a URL that ends in ";": the line ends there, or the marker follows right after it
      seq(
        alias($._url_line_semicolon, $.url),
        optional(choice(
          alias($._url_semicolon_marker_spec, $.marker_spec),
          seq($._semicolon_space, optional($.comment))
        ))
      ),
      seq(
        alias(token(choice(
          /[./][^\s;]*/,
          // pip expands the variable first; with a "/" after it, the line is a path
          /\$\{[A-Z0-9_]+\}\/[^\s;]*/
        )), $.path),
        // pip splits a path line at the ";", and with nothing after it there is no marker
        optional(choice($.marker_spec, ';'))
      ),
      seq(
        $.global_opt,
        repeat(seq($._space, choice($.global_opt, $._ignored_word)))
      )
    ),

    // pip splits a marker off a URL line only at the first ";" with a space after it, so a
    // ";" with anything else after it stays in the URL
    _url_line: $ => seq(
      field('scheme', choice(
        /[a-zA-Z+]+:\/\//,
        /[bB][zZ][rR]\+[lL][pP]:/
      )),
      repeat1(choice($.env_var, /[^\s;]/, /;+[^\s;]/))
    ),

    _url_line_semicolon: $ => seq($._url_line, repeat1(';')),

    _url_marker_spec: $ => seq(
      optional($._space),
      ';',
      $._semicolon_space,
      optional($._space),
      $._marker
    ),

    // a space right after the last ";" of the URL is _semicolon_space, so the whitespace
    // here starts with a tab, which pip strips off the end of the URL
    _url_semicolon_marker_spec: $ => seq(
      optional($._space),
      ';',
      $._semicolon_space,
      optional($._space),
      $._marker
    ),

    // the space right after a ";" on a URL line, where pip splits off the marker; a tab
    // there does not split
    _semicolon_space: _ => token(prec(1, / /)),

    // optparse reads the options of a line and pip drops the words left over. Before that,
    // pip strips a comment and splits the words with shlex, so such a word does not start
    // with "#", closes its quotes, has no "#" right after a space inside them, and does not
    // end in "\" (where pip joins the next line); and it must not start with "-" once its
    // quotes are removed
    _ignored_word: _ => {
      const inDouble = choice(/[^\s"\\]/, /\\\S/, /[ \t]+[^\s"\\#]/, /[ \t]+\\\S/);
      const inSingle = choice(/[^\s']/, /[ \t]+[^\s'#]/);
      return token(seq(
        choice(
          /[^\s#'"\\-]/,
          /\\[^\s\\-]/,
          seq('"', choice(/[^\s"\\-]/, /\\\S/, /[ \t]+[^\s"\\#]/, /[ \t]+\\\S/), repeat(inDouble), /[ \t]*/, '"'),
          seq("'", choice(/[^\s'-]/, /[ \t]+[^\s'#]/), repeat(inSingle), /[ \t]*/, "'")
        ),
        repeat(choice(
          /[^\s'"\\]/,
          /\\[^\s\\]/,
          seq('"', repeat(inDouble), /[ \t]*/, '"'),
          seq("'", repeat(inSingle), /[ \t]*/, "'")
        ))
      ));
    },

    requirement: $ => seq(
      $.package,
      optional($.extras),
      optional(choice(
        $.version_spec,
        $.url_spec
      )),
      optional($.marker_spec),
      optional(seq(
        $.requirement_opt,
        repeat(choice($.requirement_opt, seq($._space, $._ignored_word)))
      ))
    ),

    package: _ => /[a-zA-Z0-9]([a-zA-Z0-9._-]*[a-zA-Z0-9])?/,

    extras: $ => seq(
      optional($._space),
      '[',
      optional($._space),
      $._package_list,
      optional($._space),
      ']'
    ),

    _package_list: $ => seq(
      optional($._space),
      $.package,
      repeat(seq(
        optional($._space),
        ',',
        optional($._space),
        $.package
      ))
    ),

    url_spec: $ => seq(
      optional($._space),
      '@',
      optional($._space),
      $.url
    ),

    url: $ => seq(
      field('scheme', choice(
        /[a-zA-Z+]+:\/\//,
        /[bB][zZ][rR]\+[lL][pP]:/
      )),
      repeat1(choice($.env_var, /\S/)),
    ),

    version_spec: $ => choice(
      $._version_list,
      seq(
        optional($._space),
        '(',
        $._version_list,
        optional($._space),
        ')'
      )
    ),

    _version_list: $ => prec.left(seq(
      optional($._space),
      $.version_cmp,
      optional($._space),
      $.version,
      repeat(seq(
        optional($._space),
        ',',
        optional($._space),
        $.version_cmp,
        optional($._space),
        $.version
      ))
    )),

    version: _ => /[a-zA-Z0-9*!+._-]+/,

    version_cmp: _ => token(choice(
      '<', '<=', '!=', '==', '>=', '>', '!=', '===', '~='
    )),

    marker_spec: $ => seq(
      optional($._space),
      ';',
      optional($._space),
      $._marker
    ),

    marker_op: $ => choice('in', seq('not', $._space, 'in')),

    marker_var: _ => choice(
      'python_version',
      'python_full_version',
      'os_name',
      'sys_platform',
      'platform_release',
      'platform_system',
      'platform_version',
      'platform_machine',
      'platform_python_implementation',
      'implementation_name',
      'implementation_version',
      'extra'
    ),

    _marker: $ => choice(
      $._marker_expr,
      $._marker_or,
      $._marker_and,
      $._marker_paren
    ),

    _marker_expr: $ => seq(
      $.marker_var,
      optional($._space),
      choice($.version_cmp, $.marker_op),
      optional($._space),
      $.quoted_string
    ),

    _marker_paren: $ => prec.left(seq(
      '(',
      optional($._space),
      $._marker,
      optional($._space),
      ')'
    )),

    _marker_and: $ => prec.left(seq(
      $._marker,
      optional($._space),
      alias('and', $.marker_op),
      optional($._space),
      $._marker
    )),

    _marker_or: $ => prec.left(seq(
      $._marker,
      optional($._space),
      alias('or', $.marker_op),
      optional($._space),
      $._marker
    )),

    global_opt: $ => prec.left(1, choice(
      seq(
        alias(
          choice(
            '--no-binary',
            '--only-binary',
            '--trusted-host',
            '--use-feature'
          ),
          $.option
        ),
        choice('=', $._space),
        choice($.argument, $.quoted_string)
      ),
      alias(
        choice(
          '--no-index',
          '--prefer-binary',
          '--require-hashes',
          '--pre'
        ),
        $.option
      ),
      seq(
        alias(
          '-i',
          $.option
        ),
        optional($._space),
        choice($.url, $.quoted_string)
      ),
      seq(
        alias(
          choice(
            '--index-url',
            '--extra-index-url'
          ),
          $.option
        ),
        choice('=', $._space),
        choice($.url, $.quoted_string)
      ),
      seq(
        alias(
          choice('-c', '-r'),
          $.option
        ),
        optional($._space),
        choice(
          alias($.argument, $.path),
          $.quoted_string
        )
      ),
      seq(
        alias(
          choice(
            '--constraint',
            '--requirement'
          ),
          $.option
        ),
        choice('=', $._space),
        choice(
          alias($.argument, $.path),
          $.quoted_string
        )
      ),
      seq(
        alias(
          choice('-e', '-f'),
          $.option
        ),
        optional($._space),
        choice(
          alias($.argument, $.path),
          $.quoted_string,
          $.url
        )
      ),
      seq(
        alias(
          choice(
            '--editable',
            '--find-links'
          ),
          $.option
        ),
        choice('=', $._space),
        choice(
          alias($.argument, $.path),
          $.quoted_string,
          $.url
        )
      ),
    )),

    requirement_opt: $ => seq(
      optional($._space),
      alias(
        choice(
          '--global-option',
          '--config-settings',
          '--hash'
        ),
        $.option
      ),
      choice('=', $._space),
      choice($.argument, $.quoted_string)
    ),

    argument: _ => repeat1(/(\S|\\ )/),

    quoted_string: _ => choice(
      seq('"', field('content', /([^"]|\\")+/), '"'),
      seq("'", field('content', /([^']|\\')+/), "'")
    ),

    env_var: _ => seq('${', field('name', /[A-Z0-9_]+/), '}'),

    linebreak: $ => seq('\\', $._end_of_line),

    _end_of_line: $ => choice(
      seq($._space, $.comment, /\r?\n/),
      seq(optional($._space), /\r?\n/)
    ),

    comment: _ => /#[^\n]*/,

    _space: _ => prec(-1, repeat1(/[ \t]/))
  }
});
