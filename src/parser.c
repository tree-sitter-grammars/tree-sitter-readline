#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  sym_keyseq = 6,
  sym_macro = 7,
  anon_sym_DASH = 8,
  aux_sym_symbolic_character_name_token1 = 9,
  aux_sym_symbolic_character_name_token2 = 10,
  aux_sym_symbolic_character_name_token3 = 11,
  aux_sym_symbolic_character_name_token4 = 12,
  aux_sym_symbolic_character_name_token5 = 13,
  aux_sym_symbolic_character_name_token6 = 14,
  aux_sym_symbolic_character_name_token7 = 15,
  aux_sym_symbolic_character_name_token8 = 16,
  aux_sym_symbolic_character_name_token9 = 17,
  aux_sym_symbolic_character_name_token10 = 18,
  aux_sym_symbolic_character_name_token11 = 19,
  aux_sym_symbolic_character_name_token12 = 20,
  sym_key_literal = 21,
  sym_source = 22,
  sym_comment = 23,
  sym_key_binding = 24,
  sym_keyname = 25,
  sym_symbolic_character_name = 26,
  aux_sym_source_repeat1 = 27,
  aux_sym_keyname_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_COLON] = ":",
  [sym_function_name] = "function_name",
  [sym_keyseq] = "keyseq",
  [sym_macro] = "macro",
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
  [sym_keyname] = "keyname",
  [sym_symbolic_character_name] = "symbolic_character_name",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_keyname_repeat1] = "keyname_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_function_name] = sym_function_name,
  [sym_keyseq] = sym_keyseq,
  [sym_macro] = sym_macro,
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
  [sym_keyname] = sym_keyname,
  [sym_symbolic_character_name] = sym_symbolic_character_name,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
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
  [sym_keyseq] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_keyseq);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_macro);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [sym_keyseq] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source] = STATE(15),
    [sym_comment] = STATE(16),
    [sym_key_binding] = STATE(3),
    [sym_keyname] = STATE(19),
    [sym_symbolic_character_name] = STATE(9),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_keyname_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [sym_keyseq] = ACTIONS(7),
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
    [sym_comment] = STATE(16),
    [sym_key_binding] = STATE(2),
    [sym_keyname] = STATE(19),
    [sym_symbolic_character_name] = STATE(9),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_keyname_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(17),
    [sym_keyseq] = ACTIONS(20),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(26),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(26),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(23),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(23),
    [sym_key_literal] = ACTIONS(29),
  },
  [3] = {
    [sym_comment] = STATE(16),
    [sym_key_binding] = STATE(2),
    [sym_keyname] = STATE(19),
    [sym_symbolic_character_name] = STATE(9),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_keyname_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_comment_token1] = ACTIONS(5),
    [sym_keyseq] = ACTIONS(7),
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
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_comment_token1] = ACTIONS(34),
    [sym_keyseq] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(36),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(36),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(34),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(34),
    [sym_key_literal] = ACTIONS(36),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(15),
    [sym_keyseq] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(38),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(38),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(15),
    [sym_key_literal] = ACTIONS(38),
  },
  [6] = {
    [sym_symbolic_character_name] = STATE(13),
    [aux_sym_keyname_repeat1] = STATE(7),
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
    [sym_key_literal] = ACTIONS(40),
  },
  [7] = {
    [sym_symbolic_character_name] = STATE(20),
    [aux_sym_keyname_repeat1] = STATE(7),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(45),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(45),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(42),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(42),
    [sym_key_literal] = ACTIONS(48),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(48), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(50), 10,
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
  [18] = 2,
    ACTIONS(52), 1,
      anon_sym_COLON,
    ACTIONS(54), 1,
      anon_sym_DASH,
  [25] = 1,
    ACTIONS(56), 2,
      sym_function_name,
      sym_macro,
  [30] = 2,
    ACTIONS(58), 1,
      aux_sym_source_token1,
    ACTIONS(60), 1,
      aux_sym_comment_token2,
  [37] = 1,
    ACTIONS(62), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [42] = 2,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(64), 1,
      anon_sym_COLON,
  [49] = 1,
    ACTIONS(52), 1,
      anon_sym_COLON,
  [53] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [57] = 1,
    ACTIONS(68), 1,
      aux_sym_source_token1,
  [61] = 1,
    ACTIONS(70), 1,
      aux_sym_source_token1,
  [65] = 1,
    ACTIONS(64), 1,
      anon_sym_COLON,
  [69] = 1,
    ACTIONS(72), 1,
      anon_sym_COLON,
  [73] = 1,
    ACTIONS(54), 1,
      anon_sym_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 18,
  [SMALL_STATE(10)] = 25,
  [SMALL_STATE(11)] = 30,
  [SMALL_STATE(12)] = 37,
  [SMALL_STATE(13)] = 42,
  [SMALL_STATE(14)] = 49,
  [SMALL_STATE(15)] = 53,
  [SMALL_STATE(16)] = 57,
  [SMALL_STATE(17)] = 61,
  [SMALL_STATE(18)] = 65,
  [SMALL_STATE(19)] = 69,
  [SMALL_STATE(20)] = 73,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(12),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(12),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
