const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[ \t\f\v]/;
const ANYTHING = /[^\r\n]+/;

// not necessary in v0.20.9
function case_insensitive(values) {
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

  rules: {
    source: ($) =>
      repeat(
        choice(
          // $.conditional_construct,
          seq($.comment, NEWLINE),
          // $.variable_setting,
          seq($.key_binding, NEWLINE),
        ),
      ),

    comment: ($) => seq(/#/, optional(ANYTHING)),

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
        ...case_insensitive([
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
