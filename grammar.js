/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @todo Support environment variables anywhere
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'requirements',

  extras: $ => [$.linebreak],

  inline: $ => [
    $._package_list,
    $._end_of_line
  ],

  conflicts: $ => [
    // FIXME: prec.right breaks inline comments
    [$.requirement],
  ],

  word: $ => $.package,

  rules: {
    file: $ => repeat(
      choice(
        seq(
          optional($._space),
          optional($.comment),
          /\r?\n/
        ),
        seq(
          optional($._space),
          choice(
            $.requirement,
            $.url,
            alias(/[./]\S*/, $.path),
            $.global_opt
          ),
          $._end_of_line
        )
      )
    ),

    requirement: $ => seq(
      $.package,
      optional($.extras),
      optional(choice(
        $.version_spec,
        $.url_spec
      )),
      optional($.marker_spec),
      repeat($.requirement_opt)
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

    marker_spec: $ => prec.right(seq(
      optional($._space),
      ';',
      optional($._space),
      $._marker
    )),

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
          choice('-i'),
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
