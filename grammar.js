/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://pip.pypa.io/en/stable/reference/requirements-file-format/|file format}
 * @see {@link https://peps.python.org/pep-0508/|dependency specification}
 * @see {@link https://peps.python.org/pep-0440/|version identification}
 * @see {@link https://pip.pypa.io/en/stable/topics/vcs-support/|VCS support}
 * @todo Support per-requirement options
 * @todo Support environment variables
 */

module.exports = grammar({
  name: 'requirements',

  extras: $ => [$.linebreak],

  inline: $ => [
    $._package_list,
    $._end_of_line
  ],

  // FIXME: resolve the conflict
  conflicts: $ => [
    [$._version_list, $._version_list]
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

    requirement: $ => prec.right(seq(
      $.package,
      optional($.extras),
      optional(choice(
        $.version_spec,
        $.url_spec
      )),
      optional($.marker_spec)
    )),

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

    // TODO: parse URL fields
    url: _ => choice(
      /[a-z+]*:\/\/\S+/i,
      /bzr\+lp:\S+/i
    ),

    version_spec: $ => choice(
      seq(
        optional($._space),
        $._version_list
      ),
      seq(
        optional($._space),
        '(',
        optional($._space),
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

    // TODO: parse version fields
    version: _ => /[a-zA-Z0-9*!+._-]+/,

    version_cmp: _ => choice(
      '<', '<=', '!=', '==', '>=', '>', '!=', '===', '~='
    ),

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
          choice('-c', '-e', '-i', '-f', '-r'),
          $.option
        ),
        optional($._space),
        $.argument
      ),
      seq(
        alias(
          choice(
            '--index-url',
            '--extra-index-url',
            '--constraint',
            '--requirement',
            '--editable',
            '--index-url',
            '--find-links',
            '--no-binary',
            '--only-binary',
            '--trusted-host',
            '--use-feature'
          ),
          $.option
        ),
        choice('=', $._space),
        $.argument
      ),
      alias(
        choice(
          '--no-index',
          '--prefer-binary',
          '--require-hashes',
          '--pre'
        ),
        $.option
      )
    )),

    argument: $ => choice(
      /(\S|\\ )+/,
      $.quoted_string
    ),

    quoted_string: _ => choice(
      seq('"', field('content', /([^"]|\\")+/), '"'),
      seq("'", field('content', /([^']|\\')+/), "'")
    ),

    linebreak: $ => seq('\\', $._end_of_line),

    _end_of_line: $ => choice(
      seq($._space, $.comment, /\r?\n/),
      seq(optional($._space), /\r?\n/)
    ),

    comment: _ => /#[^\n]*/,

    _space: _ => prec(-1, /[ \t]+/)
  }
});
