#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_COLON = 4,
  sym_function_name = 5,
  anon_sym_DQUOTE = 6,
  aux_sym__double_quoted_string_token1 = 7,
  aux_sym__quoted_string_token1 = 8,
  aux_sym__quoted_string_token2 = 9,
  sym_escape_sequence = 10,
  anon_sym_DASH = 11,
  aux_sym_symbolic_character_name_token1 = 12,
  aux_sym_symbolic_character_name_token2 = 13,
  aux_sym_symbolic_character_name_token3 = 14,
  aux_sym_symbolic_character_name_token4 = 15,
  aux_sym_symbolic_character_name_token5 = 16,
  aux_sym_symbolic_character_name_token6 = 17,
  aux_sym_symbolic_character_name_token7 = 18,
  aux_sym_symbolic_character_name_token8 = 19,
  aux_sym_symbolic_character_name_token9 = 20,
  aux_sym_symbolic_character_name_token10 = 21,
  aux_sym_symbolic_character_name_token11 = 22,
  aux_sym_symbolic_character_name_token12 = 23,
  sym_key_literal = 24,
  sym_source = 25,
  sym_comment = 26,
  sym_key_binding = 27,
  sym_keyseq = 28,
  sym_macro = 29,
  sym__double_quoted_string = 30,
  sym__quoted_string = 31,
  sym_keyname = 32,
  sym_symbolic_character_name = 33,
  aux_sym_source_repeat1 = 34,
  aux_sym__double_quoted_string_repeat1 = 35,
  aux_sym__quoted_string_repeat1 = 36,
  aux_sym_keyname_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_COLON] = ":",
  [sym_function_name] = "function_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quoted_string_token1] = "_double_quoted_string_token1",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [aux_sym__quoted_string_token2] = "_quoted_string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DASH] = "-",
  [aux_sym_symbolic_character_name_token1] = "symbolic_character_name_token1",
  [aux_sym_symbolic_character_name_token2] = "symbolic_character_name_token2",
  [aux_sym_symbolic_character_name_token3] = "symbolic_character_name_token3",
  [aux_sym_symbolic_character_name_token4] = "symbolic_character_name_token4",
  [aux_sym_symbolic_character_name_token5] = "symbolic_character_name_token5",
  [aux_sym_symbolic_character_name_token6] = "symbolic_character_name_token6",
  [aux_sym_symbolic_character_name_token7] = "symbolic_character_name_token7",
  [aux_sym_symbolic_character_name_token8] = "symbolic_character_name_token8",
  [aux_sym_symbolic_character_name_token9] = "symbolic_character_name_token9",
  [aux_sym_symbolic_character_name_token10] = "symbolic_character_name_token10",
  [aux_sym_symbolic_character_name_token11] = "symbolic_character_name_token11",
  [aux_sym_symbolic_character_name_token12] = "symbolic_character_name_token12",
  [sym_key_literal] = "key_literal",
  [sym_source] = "source",
  [sym_comment] = "comment",
  [sym_key_binding] = "key_binding",
  [sym_keyseq] = "keyseq",
  [sym_macro] = "macro",
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_keyname] = "keyname",
  [sym_symbolic_character_name] = "symbolic_character_name",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym_keyname_repeat1] = "keyname_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_function_name] = sym_function_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quoted_string_token1] = aux_sym__double_quoted_string_token1,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [aux_sym__quoted_string_token2] = aux_sym__quoted_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_symbolic_character_name_token1] = aux_sym_symbolic_character_name_token1,
  [aux_sym_symbolic_character_name_token2] = aux_sym_symbolic_character_name_token2,
  [aux_sym_symbolic_character_name_token3] = aux_sym_symbolic_character_name_token3,
  [aux_sym_symbolic_character_name_token4] = aux_sym_symbolic_character_name_token4,
  [aux_sym_symbolic_character_name_token5] = aux_sym_symbolic_character_name_token5,
  [aux_sym_symbolic_character_name_token6] = aux_sym_symbolic_character_name_token6,
  [aux_sym_symbolic_character_name_token7] = aux_sym_symbolic_character_name_token7,
  [aux_sym_symbolic_character_name_token8] = aux_sym_symbolic_character_name_token8,
  [aux_sym_symbolic_character_name_token9] = aux_sym_symbolic_character_name_token9,
  [aux_sym_symbolic_character_name_token10] = aux_sym_symbolic_character_name_token10,
  [aux_sym_symbolic_character_name_token11] = aux_sym_symbolic_character_name_token11,
  [aux_sym_symbolic_character_name_token12] = aux_sym_symbolic_character_name_token12,
  [sym_key_literal] = sym_key_literal,
  [sym_source] = sym_source,
  [sym_comment] = sym_comment,
  [sym_key_binding] = sym_key_binding,
  [sym_keyseq] = sym_keyseq,
  [sym_macro] = sym_macro,
  [sym__double_quoted_string] = sym__double_quoted_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_keyname] = sym_keyname,
  [sym_symbolic_character_name] = sym_symbolic_character_name,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__double_quoted_string_repeat1] = aux_sym__double_quoted_string_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym_keyname_repeat1] = aux_sym_keyname_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token12] = {
    .visible = false,
    .named = false,
  },
  [sym_key_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_key_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_keyseq] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_keyname] = {
    .visible = true,
    .named = true,
  },
  [sym_symbolic_character_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyname_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'd'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__quoted_string_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(1),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(1),
    [sym_key_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(25),
    [sym_comment] = STATE(28),
    [sym_key_binding] = STATE(28),
    [sym_keyseq] = STATE(21),
    [sym__double_quoted_string] = STATE(20),
    [sym_keyname] = STATE(21),
    [sym_symbolic_character_name] = STATE(16),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_keyname_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(9),
    [sym_key_literal] = ACTIONS(13),
  },
  [2] = {
    [sym_comment] = STATE(28),
    [sym_key_binding] = STATE(28),
    [sym_keyseq] = STATE(21),
    [sym__double_quoted_string] = STATE(20),
    [sym_keyname] = STATE(21),
    [sym_symbolic_character_name] = STATE(16),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_keyname_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(9),
    [sym_key_literal] = ACTIONS(13),
  },
  [3] = {
    [sym_comment] = STATE(28),
    [sym_key_binding] = STATE(28),
    [sym_keyseq] = STATE(21),
    [sym__double_quoted_string] = STATE(20),
    [sym_keyname] = STATE(21),
    [sym_symbolic_character_name] = STATE(16),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_keyname_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(28),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(28),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(25),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(25),
    [sym_key_literal] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(34), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(17), 13,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_DQUOTE,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [21] = 5,
    ACTIONS(42), 1,
      sym_key_literal,
    STATE(5), 1,
      aux_sym_keyname_repeat1,
    STATE(27), 1,
      sym_symbolic_character_name,
    ACTIONS(39), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(36), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [47] = 5,
    ACTIONS(44), 1,
      sym_key_literal,
    STATE(5), 1,
      aux_sym_keyname_repeat1,
    STATE(15), 1,
      sym_symbolic_character_name,
    ACTIONS(11), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(9), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [73] = 2,
    ACTIONS(42), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(46), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [91] = 4,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(52), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym__double_quoted_string_repeat1,
  [104] = 4,
    ACTIONS(54), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(56), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(59), 1,
      sym_escape_sequence,
    STATE(9), 1,
      aux_sym__quoted_string_repeat1,
  [117] = 4,
    ACTIONS(62), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(64), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(66), 1,
      sym_escape_sequence,
    STATE(9), 1,
      aux_sym__quoted_string_repeat1,
  [130] = 4,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(73), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym__double_quoted_string_repeat1,
  [143] = 4,
    ACTIONS(76), 1,
      sym_function_name,
    ACTIONS(78), 1,
      aux_sym__quoted_string_token1,
    STATE(24), 1,
      sym_macro,
    STATE(26), 1,
      sym__quoted_string,
  [156] = 3,
    ACTIONS(80), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(82), 1,
      sym_escape_sequence,
    STATE(10), 1,
      aux_sym__quoted_string_repeat1,
  [166] = 3,
    ACTIONS(84), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(86), 1,
      sym_escape_sequence,
    STATE(8), 1,
      aux_sym__double_quoted_string_repeat1,
  [176] = 2,
    ACTIONS(88), 1,
      anon_sym_COLON,
    ACTIONS(90), 1,
      anon_sym_DASH,
  [183] = 2,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      anon_sym_COLON,
  [190] = 2,
    ACTIONS(94), 1,
      aux_sym_source_token1,
    ACTIONS(96), 1,
      aux_sym_comment_token2,
  [197] = 1,
    ACTIONS(98), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [202] = 1,
    ACTIONS(88), 1,
      anon_sym_COLON,
  [206] = 1,
    ACTIONS(100), 1,
      anon_sym_COLON,
  [210] = 1,
    ACTIONS(102), 1,
      anon_sym_COLON,
  [214] = 1,
    ACTIONS(104), 1,
      anon_sym_COLON,
  [218] = 1,
    ACTIONS(92), 1,
      anon_sym_COLON,
  [222] = 1,
    ACTIONS(106), 1,
      aux_sym_source_token1,
  [226] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [230] = 1,
    ACTIONS(110), 1,
      aux_sym_source_token1,
  [234] = 1,
    ACTIONS(90), 1,
      anon_sym_DASH,
  [238] = 1,
    ACTIONS(112), 1,
      aux_sym_source_token1,
  [242] = 1,
    ACTIONS(114), 1,
      aux_sym_source_token1,
  [246] = 1,
    ACTIONS(116), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 197,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 210,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 230,
  [SMALL_STATE(27)] = 234,
  [SMALL_STATE(28)] = 238,
  [SMALL_STATE(29)] = 242,
  [SMALL_STATE(30)] = 246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(18),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_readline(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
