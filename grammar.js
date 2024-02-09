const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[ \t\f\v]/;
const ANYTHING = /[^\r\n]+/;
const ANYTHING_STARTING_NON_WHITESPACE = /\S[^\r\n]*/;

// not necessary in v0.20.9
function caseInsensitive(values) {
  return values.map((value) => {
    let out = '';
    for (const c of value) {
      if (c.match(/[a-zA-Z]/)) {
        out += `[${c.toLowerCase()}${c.toUpperCase()}]`;
      } else {
        out += c;
      }
    }
    return new RegExp(out);
  });
}

module.exports = grammar({
  name: 'readline',

  // Control whitespace explicitly
  extras: ($) => [],

  rules: {
    source: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        seq(repeat(WHITE_SPACE), $.conditional_construct, NEWLINE),
        seq(repeat(WHITE_SPACE), $.include_directive, NEWLINE),
        seq(repeat(WHITE_SPACE), $.comment, NEWLINE),
        seq(
          repeat(WHITE_SPACE),
          $.variable_setting,
          repeat(WHITE_SPACE),
          NEWLINE,
        ),
        seq(repeat(WHITE_SPACE), $.key_binding, repeat(WHITE_SPACE), NEWLINE),
        seq(repeat(WHITE_SPACE), NEWLINE),
      ),

    comment: ($) => seq(/#/, optional(ANYTHING)),

    conditional_construct: ($) =>
      seq(
        alias(choice(...caseInsensitive(['\\$if'])), '$if'),
        repeat1(WHITE_SPACE),
        $.test,
        repeat(WHITE_SPACE),
        NEWLINE,
        alias(repeat($._statement), $.consequence),
        optional(seq(
          repeat(WHITE_SPACE),
          alias(choice(...caseInsensitive(['\\$else'])), '$else'),
          repeat(WHITE_SPACE),
          NEWLINE,
          alias(repeat($._statement), $.alternative),
        )),
        repeat(WHITE_SPACE),
        alias(choice(...caseInsensitive(['\\$endif'])), '$endif'),
        repeat(WHITE_SPACE),
      ),

    test: ($) =>
      choice(
        $._mode_test,
        $._term_test,
        $._version_test,
        $._application_test,
        $._variable_test,
      ),

    _mode_test: ($) =>
      seq(
        alias(choice(...caseInsensitive(['mode'])), 'mode'),
        '=',
        $.edit_mode_value,
      ),

    _term_test: ($) =>
      seq(
        alias(choice(...caseInsensitive(['term'])), 'term'),
        '=',
        alias(/\S+/, $.term_name),
      ),

    _version_test: ($) =>
      prec(
        9,
        seq(
          alias(choice(...caseInsensitive(['version'])), 'version'),
          repeat1(WHITE_SPACE),
          choice('=', '==', '>=', '<=', '!=', '>', '<'),
          repeat1(WHITE_SPACE),
          alias(/\d+\.?\d*/, $.version_number),
        ),
      ),

    _application_test: ($) => alias(token(prec(-1, /\S+/)), $.application_name),

    _variable_test: ($) =>
      seq(
        choice(
          seq(
            $.bool_variable,
            repeat1(WHITE_SPACE),
            choice('=', '==', '!='),
            repeat(WHITE_SPACE),
            $.bool_value,
          ),
          seq(
            $.bell_variable,
            repeat1(WHITE_SPACE),
            choice('=', '==', '!='),
            repeat(WHITE_SPACE),
            $.bell_value,
          ),
          seq(
            $.string_variable,
            repeat1(WHITE_SPACE),
            choice('=', '==', '!='),
            repeat(WHITE_SPACE),
            $.string_value,
          ),
          seq(
            $.number_variable,
            repeat1(WHITE_SPACE),
            choice('=', '==', '!='),
            repeat(WHITE_SPACE),
            $.number_value,
          ),
          seq(
            $.edit_mode_variable,
            repeat1(WHITE_SPACE),
            choice('=', '==', '!='),
            repeat(WHITE_SPACE),
            $.edit_mode_value,
          ),
          seq(
            $.keymap_variable,
            repeat1(WHITE_SPACE),
            choice('=', '==', '!='),
            repeat(WHITE_SPACE),
            $.keymap_value,
          ),
        ),
      ),

    include_directive: ($) =>
      seq(
        alias(choice(...caseInsensitive(['\\$include'])), '$include'),
        choice(
          repeat(WHITE_SPACE),
          seq(
            repeat1(WHITE_SPACE),
            alias(ANYTHING_STARTING_NON_WHITESPACE, $.file_path),
          ),
        ),
      ),

    variable_setting: ($) =>
      seq(
        alias(choice(...caseInsensitive(['set'])), 'set'),
        repeat1(WHITE_SPACE),
        choice(
          $._bool_assignment,
          $._bell_assignment,
          $._string_assignment,
          $._number_assignment,
          $._edit_mode_assignment,
          $._keymap_assignment,
        ),
      ),

    _bool_assignment: ($) =>
      prec.right(
        seq(
          $.bool_variable,
          choice(repeat(WHITE_SPACE), seq(repeat1(WHITE_SPACE), $.bool_value)),
        ),
      ),
    _bell_assignment: ($) =>
      prec.right(
        seq(
          $.bell_variable,
          choice(repeat(WHITE_SPACE), seq(repeat1(WHITE_SPACE), $.bell_value)),
        ),
      ),
    _string_assignment: ($) =>
      prec.right(
        seq(
          $.string_variable,
          choice(
            repeat(WHITE_SPACE),
            seq(repeat1(WHITE_SPACE), $.string_value),
          ),
        ),
      ),
    _number_assignment: ($) =>
      prec.right(
        seq(
          $.number_variable,
          choice(
            repeat(WHITE_SPACE),
            seq(repeat1(WHITE_SPACE), $.number_value),
          ),
        ),
      ),
    _edit_mode_assignment: ($) =>
      prec.right(
        seq(
          $.edit_mode_variable,
          choice(
            repeat(WHITE_SPACE),
            seq(repeat1(WHITE_SPACE), $.edit_mode_value),
          ),
        ),
      ),
    _keymap_assignment: ($) =>
      prec.right(
        seq(
          $.keymap_variable,
          choice(
            repeat(WHITE_SPACE),
            seq(repeat1(WHITE_SPACE), $.keymap_value),
          ),
        ),
      ),

    bool_value: ($) => choice('1', ...caseInsensitive(['on', 'off'])),
    bell_value: ($) =>
      choice(...caseInsensitive(['none', 'visible', 'audible'])),
    string_value: ($) => ANYTHING_STARTING_NON_WHITESPACE,
    number_value: ($) => /[-+]?\d+/,
    edit_mode_value: ($) => choice(...caseInsensitive(['emacs', 'vi'])),
    keymap_value: ($) =>
      /(emacs(-standard|-meta|-ctlx)?|vi(-move|-command|-insert)?)/,

    bool_variable: ($) =>
      choice(...caseInsensitive([
        'bind-tty-special-chars',
        'blink-matching-paren',
        'colored-completion-prefix',
        'colored-stats',
        'completion-ignore-case',
        'completion-map-case',
        'convert-meta',
        'disable-completion',
        'echo-control-characters',
        'enable-active-region',
        'enable-bracketed-paste',
        'enable-keypad',
        'enable-meta-key',
        'expand-tilde',
        'history-preserve-point',
        'horizontal-scroll-mode',
        'input-meta',
        'mark-directories',
        'mark-modified-lines',
        'mark-symlinked-directories',
        'match-hidden-files',
        'menu-complete-display-prefix',
        'meta-flag',
        'output-meta',
        'page-completions',
        'print-completions-horizontally',
        'revert-all-at-newline',
        'show-all-if-ambiguous',
        'show-all-if-unmodified',
        'show-mode-in-prompt',
        'skip-completed-text',
        'visible-stats',
      ])),
    bell_variable: ($) => choice(...caseInsensitive(['bell-style'])),
    string_variable: ($) =>
      choice(...caseInsensitive([
        'active-region-end-color',
        'active-region-start-color',
        'comment-begin',
        'emacs-mode-string',
        'isearch-terminators',
        'vi-cmd-mode-string',
        'vi-ins-mode-string',
      ])),
    number_variable: ($) =>
      choice(...caseInsensitive([
        'completion-display-width',
        'completion-prefix-display-length',
        'completion-query-items',
        'history-size',
        'keyseq-timeout',
      ])),
    edit_mode_variable: ($) => choice(...caseInsensitive(['editing-mode'])),
    keymap_variable: ($) => choice(...caseInsensitive(['keymap'])),

    key_binding: ($) =>
      seq(
        choice($.keyname, $.keyseq),
        ':',
        repeat(WHITE_SPACE),
        choice($.function_name, $.macro),
      ),

    // users can define custom function names
    function_name: ($) => /[a-zA-Z\-]+/,

    keyseq: ($) => $._double_quoted_string,

    macro: ($) => $._quoted_string,

    _double_quoted_string: ($) =>
      seq('"', repeat1(choice(/[^"\\]/, $.escape_sequence)), '"'),

    _quoted_string: ($) =>
      seq(/["']/, repeat1(choice(/[^"'\\]/, $.escape_sequence)), /["']/),

    escape_sequence: ($) =>
      /\\([abdefnrtv'"\\]|x[0-9a-fA-F]{1,2}|[0-7]{1,3}|[CM]-)/,

    keyname: ($) =>
      seq(
        repeat(seq($.symbolic_character_name, '-')),
        choice($.symbolic_character_name, $.key_literal),
      ),

    symbolic_character_name: ($) =>
      choice(
        ...caseInsensitive([
          'Control',
          'Meta',
          'Del',
          'Esc',
          'Escape',
          'LFD',
          'Newline',
          'Ret',
          'Return',
          'Rubout',
          'Space',
          'Spc',
        ]),
      ),

    key_literal: ($) => /\S/,
  },
});
