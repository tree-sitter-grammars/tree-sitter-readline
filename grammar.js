const NEWLINE = /\r?\n/;
// TODO: Add this between things like set keyword, if keyword, etc.
const WHITE_SPACE = /[ \t\f\v]/;
const ANYTHING = /[^\r\n]+/;

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

  // TODO: Control whitespace explicitly
  // extras: $ => [],

  rules: {
    source: ($) =>
      repeat(
        choice(
          $.conditional_construct,
          seq($.include_directive, NEWLINE),
          seq($.comment, NEWLINE),
          seq($.variable_setting, NEWLINE),
          seq($.key_binding, NEWLINE),
        ),
      ),

    comment: ($) => seq(/#/, optional(ANYTHING)),

    conditional_construct: ($) =>
      seq(
        '$if',
        $.test,
        NEWLINE,
        repeat(choice(
          seq($.include_directive, NEWLINE),
          seq($.comment, NEWLINE),
          seq($.variable_setting, NEWLINE),
          seq($.key_binding, NEWLINE),
        )),
        optional(seq(
          '$else',
          NEWLINE,
          repeat(choice(
            seq($.include_directive, NEWLINE),
            seq($.comment, NEWLINE),
            seq($.variable_setting, NEWLINE),
            seq($.key_binding, NEWLINE),
          )),
        )),
        '$endif',
        NEWLINE,
      ),

    test: ($) =>
      choice(
        $._mode_test,
        $._term_test,
        $._version_test,
        // $._application_test,
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
        /\S+/,
      ),

    _version_test: ($) =>
      seq(
        alias(choice(...caseInsensitive(['version'])), 'version'),
        choice('=', '==', '>=', '<=', '!=', '>', '<'),
        alias(/[\d\.]+/, $.version_number),
      ),

    _application_test: ($) => /\S+/,

    _variable_test: ($) =>
      seq(
        choice(
          seq($.bool_variable, choice('=', '==', '!='), $.bool_value),
          seq($.bell_variable, choice('=', '==', '!='), $.bell_value),
          seq($.string_variable, choice('=', '==', '!='), $.string_value),
          seq($.number_variable, choice('=', '==', '!='), $.number_value),
          seq($.edit_mode_variable, choice('=', '==', '!='), $.edit_mode_value),
          seq($.keymap_variable, choice('=', '==', '!='), $.keymap_value),
        ),
      ),

    include_directive: ($) => seq('$include', alias(ANYTHING, $.file_path)),

    variable_setting: ($) =>
      seq(
        'set',
        choice(
          $._bool_assignment,
          $._bell_assignment,
          $._string_assignment,
          $._number_assignment,
          $._edit_mode_assignment,
          $._keymap_assignment,
        ),
      ),

    _bool_assignment: ($) => seq($.bool_variable, optional($.bool_value)),
    _bell_assignment: ($) => seq($.bell_variable, optional($.bell_value)),
    _string_assignment: ($) => seq($.string_variable, optional($.string_value)),
    _number_assignment: ($) => seq($.number_variable, optional($.number_value)),
    _edit_mode_assignment: ($) => seq($.edit_mode_variable, $.edit_mode_value),
    _keymap_assignment: ($) => seq($.keymap_variable, $.keymap_value),

    bool_value: ($) => choice('1', ...caseInsensitive(['on', 'off'])),
    bell_value: ($) =>
      choice(...caseInsensitive(['none', 'visible', 'audible'])),
    string_value: ($) => ANYTHING,
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
      seq(choice($.keyname, $.keyseq), ':', choice($.function_name, $.macro)),

    // users can define custom function names
    function_name: ($) => /[a-zA-Z\-]/,

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
