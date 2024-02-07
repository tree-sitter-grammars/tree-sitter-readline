#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 218
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 2
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym__statement_token1 = 1,
  aux_sym__statement_token2 = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_DOLLARif = 5,
  anon_sym_DOLLARelse = 6,
  anon_sym_DOLLARendif = 7,
  aux_sym__mode_test_token1 = 8,
  anon_sym_EQ = 9,
  aux_sym__term_test_token1 = 10,
  aux_sym__term_test_token2 = 11,
  aux_sym__version_test_token1 = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_GT = 17,
  anon_sym_LT = 18,
  aux_sym__version_test_token2 = 19,
  anon_sym_DOLLARinclude = 20,
  anon_sym_set = 21,
  anon_sym_1 = 22,
  aux_sym_bool_value_token1 = 23,
  aux_sym_bool_value_token2 = 24,
  aux_sym_bell_value_token1 = 25,
  aux_sym_bell_value_token2 = 26,
  aux_sym_bell_value_token3 = 27,
  sym_number_value = 28,
  aux_sym_edit_mode_value_token1 = 29,
  aux_sym_edit_mode_value_token2 = 30,
  sym_keymap_value = 31,
  aux_sym_bool_variable_token1 = 32,
  aux_sym_bool_variable_token2 = 33,
  aux_sym_bool_variable_token3 = 34,
  aux_sym_bool_variable_token4 = 35,
  aux_sym_bool_variable_token5 = 36,
  aux_sym_bool_variable_token6 = 37,
  aux_sym_bool_variable_token7 = 38,
  aux_sym_bool_variable_token8 = 39,
  aux_sym_bool_variable_token9 = 40,
  aux_sym_bool_variable_token10 = 41,
  aux_sym_bool_variable_token11 = 42,
  aux_sym_bool_variable_token12 = 43,
  aux_sym_bool_variable_token13 = 44,
  aux_sym_bool_variable_token14 = 45,
  aux_sym_bool_variable_token15 = 46,
  aux_sym_bool_variable_token16 = 47,
  aux_sym_bool_variable_token17 = 48,
  aux_sym_bool_variable_token18 = 49,
  aux_sym_bool_variable_token19 = 50,
  aux_sym_bool_variable_token20 = 51,
  aux_sym_bool_variable_token21 = 52,
  aux_sym_bool_variable_token22 = 53,
  aux_sym_bool_variable_token23 = 54,
  aux_sym_bool_variable_token24 = 55,
  aux_sym_bool_variable_token25 = 56,
  aux_sym_bool_variable_token26 = 57,
  aux_sym_bool_variable_token27 = 58,
  aux_sym_bool_variable_token28 = 59,
  aux_sym_bool_variable_token29 = 60,
  aux_sym_bool_variable_token30 = 61,
  aux_sym_bool_variable_token31 = 62,
  aux_sym_bool_variable_token32 = 63,
  aux_sym_bell_variable_token1 = 64,
  aux_sym_string_variable_token1 = 65,
  aux_sym_string_variable_token2 = 66,
  aux_sym_string_variable_token3 = 67,
  aux_sym_string_variable_token4 = 68,
  aux_sym_string_variable_token5 = 69,
  aux_sym_string_variable_token6 = 70,
  aux_sym_string_variable_token7 = 71,
  aux_sym_number_variable_token1 = 72,
  aux_sym_number_variable_token2 = 73,
  aux_sym_number_variable_token3 = 74,
  aux_sym_number_variable_token4 = 75,
  aux_sym_number_variable_token5 = 76,
  aux_sym_edit_mode_variable_token1 = 77,
  aux_sym_keymap_variable_token1 = 78,
  anon_sym_COLON = 79,
  sym_function_name = 80,
  anon_sym_DQUOTE = 81,
  aux_sym__double_quoted_string_token1 = 82,
  aux_sym__quoted_string_token1 = 83,
  aux_sym__quoted_string_token2 = 84,
  sym_escape_sequence = 85,
  anon_sym_DASH = 86,
  aux_sym_symbolic_character_name_token1 = 87,
  aux_sym_symbolic_character_name_token2 = 88,
  aux_sym_symbolic_character_name_token3 = 89,
  aux_sym_symbolic_character_name_token4 = 90,
  aux_sym_symbolic_character_name_token5 = 91,
  aux_sym_symbolic_character_name_token6 = 92,
  aux_sym_symbolic_character_name_token7 = 93,
  aux_sym_symbolic_character_name_token8 = 94,
  aux_sym_symbolic_character_name_token9 = 95,
  aux_sym_symbolic_character_name_token10 = 96,
  aux_sym_symbolic_character_name_token11 = 97,
  aux_sym_symbolic_character_name_token12 = 98,
  sym_key_literal = 99,
  sym_source = 100,
  sym__statement = 101,
  sym_comment = 102,
  sym_conditional_construct = 103,
  sym_test = 104,
  sym__mode_test = 105,
  sym__term_test = 106,
  sym__version_test = 107,
  sym__application_test = 108,
  sym__variable_test = 109,
  sym_include_directive = 110,
  sym_variable_setting = 111,
  sym__bool_assignment = 112,
  sym__bell_assignment = 113,
  sym__string_assignment = 114,
  sym__number_assignment = 115,
  sym__edit_mode_assignment = 116,
  sym__keymap_assignment = 117,
  sym_bool_value = 118,
  sym_bell_value = 119,
  sym_string_value = 120,
  sym_edit_mode_value = 121,
  sym_bool_variable = 122,
  sym_bell_variable = 123,
  sym_string_variable = 124,
  sym_number_variable = 125,
  sym_edit_mode_variable = 126,
  sym_keymap_variable = 127,
  sym_key_binding = 128,
  sym_keyseq = 129,
  sym_macro = 130,
  sym__double_quoted_string = 131,
  sym__quoted_string = 132,
  sym_keyname = 133,
  sym_symbolic_character_name = 134,
  aux_sym_source_repeat1 = 135,
  aux_sym__statement_repeat1 = 136,
  aux_sym__double_quoted_string_repeat1 = 137,
  aux_sym__quoted_string_repeat1 = 138,
  aux_sym_keyname_repeat1 = 139,
  alias_sym_application_name = 140,
  alias_sym_file_path = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__statement_token2] = "_statement_token2",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_DOLLARif] = "$if",
  [anon_sym_DOLLARelse] = "$else",
  [anon_sym_DOLLARendif] = "$endif",
  [aux_sym__mode_test_token1] = "mode",
  [anon_sym_EQ] = "=",
  [aux_sym__term_test_token1] = "term",
  [aux_sym__term_test_token2] = "term_name",
  [aux_sym__version_test_token1] = "version",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym__version_test_token2] = "version_number",
  [anon_sym_DOLLARinclude] = "$include",
  [anon_sym_set] = "set",
  [anon_sym_1] = "1",
  [aux_sym_bool_value_token1] = "bool_value_token1",
  [aux_sym_bool_value_token2] = "bool_value_token2",
  [aux_sym_bell_value_token1] = "bell_value_token1",
  [aux_sym_bell_value_token2] = "bell_value_token2",
  [aux_sym_bell_value_token3] = "bell_value_token3",
  [sym_number_value] = "number_value",
  [aux_sym_edit_mode_value_token1] = "edit_mode_value_token1",
  [aux_sym_edit_mode_value_token2] = "edit_mode_value_token2",
  [sym_keymap_value] = "keymap_value",
  [aux_sym_bool_variable_token1] = "bool_variable_token1",
  [aux_sym_bool_variable_token2] = "bool_variable_token2",
  [aux_sym_bool_variable_token3] = "bool_variable_token3",
  [aux_sym_bool_variable_token4] = "bool_variable_token4",
  [aux_sym_bool_variable_token5] = "bool_variable_token5",
  [aux_sym_bool_variable_token6] = "bool_variable_token6",
  [aux_sym_bool_variable_token7] = "bool_variable_token7",
  [aux_sym_bool_variable_token8] = "bool_variable_token8",
  [aux_sym_bool_variable_token9] = "bool_variable_token9",
  [aux_sym_bool_variable_token10] = "bool_variable_token10",
  [aux_sym_bool_variable_token11] = "bool_variable_token11",
  [aux_sym_bool_variable_token12] = "bool_variable_token12",
  [aux_sym_bool_variable_token13] = "bool_variable_token13",
  [aux_sym_bool_variable_token14] = "bool_variable_token14",
  [aux_sym_bool_variable_token15] = "bool_variable_token15",
  [aux_sym_bool_variable_token16] = "bool_variable_token16",
  [aux_sym_bool_variable_token17] = "bool_variable_token17",
  [aux_sym_bool_variable_token18] = "bool_variable_token18",
  [aux_sym_bool_variable_token19] = "bool_variable_token19",
  [aux_sym_bool_variable_token20] = "bool_variable_token20",
  [aux_sym_bool_variable_token21] = "bool_variable_token21",
  [aux_sym_bool_variable_token22] = "bool_variable_token22",
  [aux_sym_bool_variable_token23] = "bool_variable_token23",
  [aux_sym_bool_variable_token24] = "bool_variable_token24",
  [aux_sym_bool_variable_token25] = "bool_variable_token25",
  [aux_sym_bool_variable_token26] = "bool_variable_token26",
  [aux_sym_bool_variable_token27] = "bool_variable_token27",
  [aux_sym_bool_variable_token28] = "bool_variable_token28",
  [aux_sym_bool_variable_token29] = "bool_variable_token29",
  [aux_sym_bool_variable_token30] = "bool_variable_token30",
  [aux_sym_bool_variable_token31] = "bool_variable_token31",
  [aux_sym_bool_variable_token32] = "bool_variable_token32",
  [aux_sym_bell_variable_token1] = "bell_variable_token1",
  [aux_sym_string_variable_token1] = "string_variable_token1",
  [aux_sym_string_variable_token2] = "string_variable_token2",
  [aux_sym_string_variable_token3] = "string_variable_token3",
  [aux_sym_string_variable_token4] = "string_variable_token4",
  [aux_sym_string_variable_token5] = "string_variable_token5",
  [aux_sym_string_variable_token6] = "string_variable_token6",
  [aux_sym_string_variable_token7] = "string_variable_token7",
  [aux_sym_number_variable_token1] = "number_variable_token1",
  [aux_sym_number_variable_token2] = "number_variable_token2",
  [aux_sym_number_variable_token3] = "number_variable_token3",
  [aux_sym_number_variable_token4] = "number_variable_token4",
  [aux_sym_number_variable_token5] = "number_variable_token5",
  [aux_sym_edit_mode_variable_token1] = "edit_mode_variable_token1",
  [aux_sym_keymap_variable_token1] = "keymap_variable_token1",
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
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_conditional_construct] = "conditional_construct",
  [sym_test] = "test",
  [sym__mode_test] = "_mode_test",
  [sym__term_test] = "_term_test",
  [sym__version_test] = "_version_test",
  [sym__application_test] = "_application_test",
  [sym__variable_test] = "_variable_test",
  [sym_include_directive] = "include_directive",
  [sym_variable_setting] = "variable_setting",
  [sym__bool_assignment] = "_bool_assignment",
  [sym__bell_assignment] = "_bell_assignment",
  [sym__string_assignment] = "_string_assignment",
  [sym__number_assignment] = "_number_assignment",
  [sym__edit_mode_assignment] = "_edit_mode_assignment",
  [sym__keymap_assignment] = "_keymap_assignment",
  [sym_bool_value] = "bool_value",
  [sym_bell_value] = "bell_value",
  [sym_string_value] = "string_value",
  [sym_edit_mode_value] = "edit_mode_value",
  [sym_bool_variable] = "bool_variable",
  [sym_bell_variable] = "bell_variable",
  [sym_string_variable] = "string_variable",
  [sym_number_variable] = "number_variable",
  [sym_edit_mode_variable] = "edit_mode_variable",
  [sym_keymap_variable] = "keymap_variable",
  [sym_key_binding] = "key_binding",
  [sym_keyseq] = "keyseq",
  [sym_macro] = "macro",
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_keyname] = "keyname",
  [sym_symbolic_character_name] = "symbolic_character_name",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym_keyname_repeat1] = "keyname_repeat1",
  [alias_sym_application_name] = "application_name",
  [alias_sym_file_path] = "file_path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__statement_token2] = aux_sym__statement_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_DOLLARif] = anon_sym_DOLLARif,
  [anon_sym_DOLLARelse] = anon_sym_DOLLARelse,
  [anon_sym_DOLLARendif] = anon_sym_DOLLARendif,
  [aux_sym__mode_test_token1] = aux_sym__mode_test_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__term_test_token1] = aux_sym__term_test_token1,
  [aux_sym__term_test_token2] = aux_sym__term_test_token2,
  [aux_sym__version_test_token1] = aux_sym__version_test_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym__version_test_token2] = aux_sym__version_test_token2,
  [anon_sym_DOLLARinclude] = anon_sym_DOLLARinclude,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_1] = anon_sym_1,
  [aux_sym_bool_value_token1] = aux_sym_bool_value_token1,
  [aux_sym_bool_value_token2] = aux_sym_bool_value_token2,
  [aux_sym_bell_value_token1] = aux_sym_bell_value_token1,
  [aux_sym_bell_value_token2] = aux_sym_bell_value_token2,
  [aux_sym_bell_value_token3] = aux_sym_bell_value_token3,
  [sym_number_value] = sym_number_value,
  [aux_sym_edit_mode_value_token1] = aux_sym_edit_mode_value_token1,
  [aux_sym_edit_mode_value_token2] = aux_sym_edit_mode_value_token2,
  [sym_keymap_value] = sym_keymap_value,
  [aux_sym_bool_variable_token1] = aux_sym_bool_variable_token1,
  [aux_sym_bool_variable_token2] = aux_sym_bool_variable_token2,
  [aux_sym_bool_variable_token3] = aux_sym_bool_variable_token3,
  [aux_sym_bool_variable_token4] = aux_sym_bool_variable_token4,
  [aux_sym_bool_variable_token5] = aux_sym_bool_variable_token5,
  [aux_sym_bool_variable_token6] = aux_sym_bool_variable_token6,
  [aux_sym_bool_variable_token7] = aux_sym_bool_variable_token7,
  [aux_sym_bool_variable_token8] = aux_sym_bool_variable_token8,
  [aux_sym_bool_variable_token9] = aux_sym_bool_variable_token9,
  [aux_sym_bool_variable_token10] = aux_sym_bool_variable_token10,
  [aux_sym_bool_variable_token11] = aux_sym_bool_variable_token11,
  [aux_sym_bool_variable_token12] = aux_sym_bool_variable_token12,
  [aux_sym_bool_variable_token13] = aux_sym_bool_variable_token13,
  [aux_sym_bool_variable_token14] = aux_sym_bool_variable_token14,
  [aux_sym_bool_variable_token15] = aux_sym_bool_variable_token15,
  [aux_sym_bool_variable_token16] = aux_sym_bool_variable_token16,
  [aux_sym_bool_variable_token17] = aux_sym_bool_variable_token17,
  [aux_sym_bool_variable_token18] = aux_sym_bool_variable_token18,
  [aux_sym_bool_variable_token19] = aux_sym_bool_variable_token19,
  [aux_sym_bool_variable_token20] = aux_sym_bool_variable_token20,
  [aux_sym_bool_variable_token21] = aux_sym_bool_variable_token21,
  [aux_sym_bool_variable_token22] = aux_sym_bool_variable_token22,
  [aux_sym_bool_variable_token23] = aux_sym_bool_variable_token23,
  [aux_sym_bool_variable_token24] = aux_sym_bool_variable_token24,
  [aux_sym_bool_variable_token25] = aux_sym_bool_variable_token25,
  [aux_sym_bool_variable_token26] = aux_sym_bool_variable_token26,
  [aux_sym_bool_variable_token27] = aux_sym_bool_variable_token27,
  [aux_sym_bool_variable_token28] = aux_sym_bool_variable_token28,
  [aux_sym_bool_variable_token29] = aux_sym_bool_variable_token29,
  [aux_sym_bool_variable_token30] = aux_sym_bool_variable_token30,
  [aux_sym_bool_variable_token31] = aux_sym_bool_variable_token31,
  [aux_sym_bool_variable_token32] = aux_sym_bool_variable_token32,
  [aux_sym_bell_variable_token1] = aux_sym_bell_variable_token1,
  [aux_sym_string_variable_token1] = aux_sym_string_variable_token1,
  [aux_sym_string_variable_token2] = aux_sym_string_variable_token2,
  [aux_sym_string_variable_token3] = aux_sym_string_variable_token3,
  [aux_sym_string_variable_token4] = aux_sym_string_variable_token4,
  [aux_sym_string_variable_token5] = aux_sym_string_variable_token5,
  [aux_sym_string_variable_token6] = aux_sym_string_variable_token6,
  [aux_sym_string_variable_token7] = aux_sym_string_variable_token7,
  [aux_sym_number_variable_token1] = aux_sym_number_variable_token1,
  [aux_sym_number_variable_token2] = aux_sym_number_variable_token2,
  [aux_sym_number_variable_token3] = aux_sym_number_variable_token3,
  [aux_sym_number_variable_token4] = aux_sym_number_variable_token4,
  [aux_sym_number_variable_token5] = aux_sym_number_variable_token5,
  [aux_sym_edit_mode_variable_token1] = aux_sym_edit_mode_variable_token1,
  [aux_sym_keymap_variable_token1] = aux_sym_keymap_variable_token1,
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
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_conditional_construct] = sym_conditional_construct,
  [sym_test] = sym_test,
  [sym__mode_test] = sym__mode_test,
  [sym__term_test] = sym__term_test,
  [sym__version_test] = sym__version_test,
  [sym__application_test] = sym__application_test,
  [sym__variable_test] = sym__variable_test,
  [sym_include_directive] = sym_include_directive,
  [sym_variable_setting] = sym_variable_setting,
  [sym__bool_assignment] = sym__bool_assignment,
  [sym__bell_assignment] = sym__bell_assignment,
  [sym__string_assignment] = sym__string_assignment,
  [sym__number_assignment] = sym__number_assignment,
  [sym__edit_mode_assignment] = sym__edit_mode_assignment,
  [sym__keymap_assignment] = sym__keymap_assignment,
  [sym_bool_value] = sym_bool_value,
  [sym_bell_value] = sym_bell_value,
  [sym_string_value] = sym_string_value,
  [sym_edit_mode_value] = sym_edit_mode_value,
  [sym_bool_variable] = sym_bool_variable,
  [sym_bell_variable] = sym_bell_variable,
  [sym_string_variable] = sym_string_variable,
  [sym_number_variable] = sym_number_variable,
  [sym_edit_mode_variable] = sym_edit_mode_variable,
  [sym_keymap_variable] = sym_keymap_variable,
  [sym_key_binding] = sym_key_binding,
  [sym_keyseq] = sym_keyseq,
  [sym_macro] = sym_macro,
  [sym__double_quoted_string] = sym__double_quoted_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_keyname] = sym_keyname,
  [sym_symbolic_character_name] = sym_symbolic_character_name,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym__double_quoted_string_repeat1] = aux_sym__double_quoted_string_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym_keyname_repeat1] = aux_sym_keyname_repeat1,
  [alias_sym_application_name] = alias_sym_application_name,
  [alias_sym_file_path] = alias_sym_file_path,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_token2] = {
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
  [anon_sym_DOLLARif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARendif] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__mode_test_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__term_test_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__term_test_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__version_test_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__version_test_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLARinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bool_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bell_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bell_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bell_value_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_edit_mode_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_edit_mode_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keymap_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_bool_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bell_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_edit_mode_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keymap_variable_token1] = {
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__mode_test] = {
    .visible = false,
    .named = true,
  },
  [sym__term_test] = {
    .visible = false,
    .named = true,
  },
  [sym__version_test] = {
    .visible = false,
    .named = true,
  },
  [sym__application_test] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_test] = {
    .visible = false,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_setting] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__bell_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__string_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__number_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__edit_mode_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__keymap_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_bool_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bell_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_edit_mode_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_bell_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_number_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_edit_mode_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_keymap_variable] = {
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
  [aux_sym__statement_repeat1] = {
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
  [alias_sym_application_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_file_path] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_file_path,
  },
  [2] = {
    [0] = alias_sym_application_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 10,
  [13] = 9,
  [14] = 14,
  [15] = 14,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 22,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 18,
  [30] = 20,
  [31] = 27,
  [32] = 21,
  [33] = 28,
  [34] = 34,
  [35] = 34,
  [36] = 4,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 37,
  [49] = 38,
  [50] = 47,
  [51] = 46,
  [52] = 44,
  [53] = 43,
  [54] = 41,
  [55] = 39,
  [56] = 40,
  [57] = 42,
  [58] = 45,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 90,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 96,
  [116] = 116,
  [117] = 117,
  [118] = 95,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 119,
  [127] = 127,
  [128] = 117,
  [129] = 124,
  [130] = 99,
  [131] = 131,
  [132] = 132,
  [133] = 94,
  [134] = 123,
  [135] = 93,
  [136] = 116,
  [137] = 137,
  [138] = 121,
  [139] = 114,
  [140] = 122,
  [141] = 141,
  [142] = 89,
  [143] = 105,
  [144] = 112,
  [145] = 111,
  [146] = 4,
  [147] = 4,
  [148] = 4,
  [149] = 110,
  [150] = 109,
  [151] = 141,
  [152] = 108,
  [153] = 107,
  [154] = 103,
  [155] = 106,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 158,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 201,
  [212] = 212,
  [213] = 209,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
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
      if (eof) ADVANCE(790);
      if (lookahead == '"') ADVANCE(1459);
      if (lookahead == '#') ADVANCE(795);
      if (lookahead == '\'') ADVANCE(1460);
      if (lookahead == '-') ADVANCE(1467);
      if (lookahead == '1') ADVANCE(1379);
      if (lookahead == ':') ADVANCE(1441);
      if (lookahead == '<') ADVANCE(1373);
      if (lookahead == '=') ADVANCE(801);
      if (lookahead == '>') ADVANCE(1371);
      if (lookahead == '\\') ADVANCE(1484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1460);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(791);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1442);
      if (lookahead != 0) ADVANCE(1460);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(794);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1459);
      if (lookahead == '#') ADVANCE(795);
      if (lookahead == '$') ADVANCE(1483);
      if (lookahead == 'S') ADVANCE(1494);
      if (lookahead == 's') ADVANCE(1482);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1493);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1485);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1492);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1490);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1489);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1491);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(791);
      if (lookahead != 0) ADVANCE(1480);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(796);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '1') ADVANCE(1378);
      if (lookahead == ':') ADVANCE(1441);
      if (lookahead == '<') ADVANCE(1374);
      if (lookahead == '=') ADVANCE(802);
      if (lookahead == '>') ADVANCE(1372);
      if (lookahead == 'E') ADVANCE(1447);
      if (lookahead == 'V') ADVANCE(1454);
      if (lookahead == 'e') ADVANCE(1444);
      if (lookahead == 'v') ADVANCE(1443);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(1461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1448);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1458);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1456);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1457);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1449);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1445);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1452);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1450);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1453);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == '-' ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1442);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1459);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead != 0) ADVANCE(1460);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(1467);
      if (lookahead == '1') ADVANCE(1378);
      if (lookahead == ':') ADVANCE(1441);
      if (lookahead == '=') ADVANCE(801);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(270);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(543);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(369);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(254);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(791);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(1463);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(225);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(486);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(764);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(681);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(481);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(207);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(677);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(671);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(712);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(724);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(719);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(525);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(409);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(338);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(673);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(430);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(250);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(708);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(711);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(454);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(464);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(487);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(210);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(682);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(492);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(684);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(494);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(496);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(497);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(1370);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(485);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(668);
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(687);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == 's') ADVANCE(1391);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(1461);
      if (lookahead != 0) ADVANCE(1462);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(1389);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(1389);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(1376);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(1389);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(791);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(797);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(799);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(1392);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(1393);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(1377);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 134:
      if (lookahead == 'x') ADVANCE(787);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1465);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(1463);
      END_STATE();
    case 135:
      if (lookahead == 'x') ADVANCE(1389);
      END_STATE();
    case 136:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(903);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(952);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1182);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1040);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1044);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1152);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(953);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(863);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(864);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1031);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(957);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(960);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(792);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(1366);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(1461);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1375);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1442);
      END_STATE();
    case 138:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(753);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1385);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1469);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1410);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1417);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1400);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1479);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(635);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(273);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(548);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 172:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 182:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 183:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(442);
      END_STATE();
    case 184:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(474);
      END_STATE();
    case 185:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      END_STATE();
    case 186:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(386);
      END_STATE();
    case 187:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(455);
      END_STATE();
    case 188:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(456);
      END_STATE();
    case 189:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(460);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1493);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1485);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1490);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1487);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1489);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1480);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1471);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(591);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(668);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 203:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 204:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 205:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(667);
      END_STATE();
    case 206:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 207:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(583);
      END_STATE();
    case 208:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 209:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 210:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 211:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      END_STATE();
    case 212:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 213:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 214:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(580);
      END_STATE();
    case 215:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 216:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(581);
      END_STATE();
    case 217:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      END_STATE();
    case 218:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      END_STATE();
    case 219:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 220:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(747);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1473);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1405);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1422);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(411);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(547);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(773);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(633);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(754);
      END_STATE();
    case 230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 243:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 244:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 245:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 246:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 247:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 248:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(426);
      END_STATE();
    case 249:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 250:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1478);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1472);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1474);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1439);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1420);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1398);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1384);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(791);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 334:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(335);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1380);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 335:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1381);
      END_STATE();
    case 336:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 337:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 338:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 339:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(371);
      END_STATE();
    case 340:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(377);
      END_STATE();
    case 341:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(380);
      END_STATE();
    case 342:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 343:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 344:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1416);
      END_STATE();
    case 345:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1430);
      END_STATE();
    case 346:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1432);
      END_STATE();
    case 347:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1433);
      END_STATE();
    case 348:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(752);
      END_STATE();
    case 349:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 350:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 351:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(701);
      END_STATE();
    case 352:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 353:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(413);
      END_STATE();
    case 354:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(388);
      END_STATE();
    case 355:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 356:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(407);
      END_STATE();
    case 357:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1434);
      END_STATE();
    case 358:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1435);
      END_STATE();
    case 359:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(545);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(378);
      END_STATE();
    case 360:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(544);
      END_STATE();
    case 361:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 362:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 363:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 364:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(588);
      END_STATE();
    case 365:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 366:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 425:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(653);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 427:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 428:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(9);
      END_STATE();
    case 429:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 430:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(277);
      END_STATE();
    case 431:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(303);
      END_STATE();
    case 432:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1470);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1468);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 474:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(304);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 482:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(664);
      END_STATE();
    case 483:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 484:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 485:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 486:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      END_STATE();
    case 487:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      END_STATE();
    case 488:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      END_STATE();
    case 489:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 490:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(605);
      END_STATE();
    case 491:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(577);
      END_STATE();
    case 492:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(575);
      END_STATE();
    case 493:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(604);
      END_STATE();
    case 494:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(317);
      END_STATE();
    case 495:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      END_STATE();
    case 496:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 497:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 498:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(608);
      END_STATE();
    case 499:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 500:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1476);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1429);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1401);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1403);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1395);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(755);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(695);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 537:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 538:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 539:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 540:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 541:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 577:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 581:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 582:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 583:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 584:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 585:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 586:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 587:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 588:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 589:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1440);
      END_STATE();
    case 590:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 591:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 592:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 593:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 594:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 595:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 596:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(693);
      END_STATE();
    case 597:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 598:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(626);
      END_STATE();
    case 599:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 600:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 601:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 602:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 603:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 604:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(451);
      END_STATE();
    case 605:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 606:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(466);
      END_STATE();
    case 607:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(649);
      END_STATE();
    case 608:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 609:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(471);
      END_STATE();
    case 610:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(651);
      END_STATE();
    case 611:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 612:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 613:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 614:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(756);
      END_STATE();
    case 615:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(53);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1427);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1428);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1425);
      END_STATE();
    case 656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1397);
      END_STATE();
    case 657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1411);
      END_STATE();
    case 658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1418);
      END_STATE();
    case 659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1414);
      END_STATE();
    case 660:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1431);
      END_STATE();
    case 661:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1412);
      END_STATE();
    case 662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1421);
      END_STATE();
    case 663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1436);
      END_STATE();
    case 665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1402);
      END_STATE();
    case 666:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1413);
      END_STATE();
    case 667:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1386);
      END_STATE();
    case 668:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      END_STATE();
    case 669:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      END_STATE();
    case 670:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      END_STATE();
    case 671:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      END_STATE();
    case 672:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(696);
      END_STATE();
    case 673:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      END_STATE();
    case 674:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 675:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 676:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      END_STATE();
    case 677:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(597);
      END_STATE();
    case 678:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 679:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      END_STATE();
    case 680:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(721);
      END_STATE();
    case 681:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(725);
      END_STATE();
    case 682:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      END_STATE();
    case 683:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 684:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(740);
      END_STATE();
    case 685:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      END_STATE();
    case 686:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      END_STATE();
    case 687:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1475);
      END_STATE();
    case 690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
      END_STATE();
    case 691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1477);
      END_STATE();
    case 692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1423);
      END_STATE();
    case 694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1424);
      END_STATE();
    case 695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1408);
      END_STATE();
    case 696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(780);
      END_STATE();
    case 697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(552);
      END_STATE();
    case 698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      END_STATE();
    case 699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(358);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      END_STATE();
    case 703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      END_STATE();
    case 707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      END_STATE();
    case 712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      END_STATE();
    case 713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      END_STATE();
    case 724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(636);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(614);
      END_STATE();
    case 747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(427);
      END_STATE();
    case 748:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(691);
      END_STATE();
    case 749:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(705);
      END_STATE();
    case 750:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(662);
      END_STATE();
    case 751:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(692);
      END_STATE();
    case 752:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 753:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 754:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 755:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 756:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(742);
      END_STATE();
    case 757:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 758:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 759:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 760:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(323);
      END_STATE();
    case 761:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 762:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 763:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 764:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(385);
      END_STATE();
    case 765:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(468);
      END_STATE();
    case 766:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1396);
      END_STATE();
    case 767:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1415);
      END_STATE();
    case 768:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(694);
      END_STATE();
    case 769:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 770:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 771:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1406);
      END_STATE();
    case 772:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1419);
      END_STATE();
    case 773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(484);
      END_STATE();
    case 774:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 775:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 776:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 777:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 778:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 779:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 780:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(446);
      END_STATE();
    case 781:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 782:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(568);
      END_STATE();
    case 783:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(260);
      END_STATE();
    case 784:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(574);
      END_STATE();
    case 785:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(793);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(796);
      END_STATE();
    case 786:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1385);
      END_STATE();
    case 787:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1466);
      END_STATE();
    case 788:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 789:
      if (eof) ADVANCE(790);
      if (lookahead == '\n') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1459);
      if (lookahead == '#') ADVANCE(795);
      if (lookahead == '$') ADVANCE(1481);
      if (lookahead == 'S') ADVANCE(1494);
      if (lookahead == 's') ADVANCE(1482);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1493);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1485);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1490);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1487);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1489);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(791);
      if (lookahead != 0) ADVANCE(1480);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(796);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_DOLLARif);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_DOLLARelse);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_DOLLARendif);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__mode_test_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1367);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__term_test_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(907);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1244);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1151);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1130);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1096);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(926);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1263);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(968);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1032);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1065);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(866);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(865);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1073);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1068);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1024);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(895);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1261);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1094);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1153);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1247);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1183);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1275);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1186);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(868);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(987);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1260);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1088);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1366);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1368);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1369);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1375);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_DOLLARinclude);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1375);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1385);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_keymap_value);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_bell_variable_token1);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_edit_mode_variable_token1);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_keymap_variable_token1);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(1390);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'M') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(591);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(591);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(335);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1380);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(545);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(378);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1463);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1464);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1463);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(621);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(787);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1465);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(1463);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1388);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 789},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 136},
  [7] = {.lex_state = 789},
  [8] = {.lex_state = 789},
  [9] = {.lex_state = 789},
  [10] = {.lex_state = 789},
  [11] = {.lex_state = 789},
  [12] = {.lex_state = 789},
  [13] = {.lex_state = 789},
  [14] = {.lex_state = 789},
  [15] = {.lex_state = 789},
  [16] = {.lex_state = 789},
  [17] = {.lex_state = 789},
  [18] = {.lex_state = 789},
  [19] = {.lex_state = 789},
  [20] = {.lex_state = 789},
  [21] = {.lex_state = 789},
  [22] = {.lex_state = 789},
  [23] = {.lex_state = 789},
  [24] = {.lex_state = 789},
  [25] = {.lex_state = 789},
  [26] = {.lex_state = 789},
  [27] = {.lex_state = 789},
  [28] = {.lex_state = 789},
  [29] = {.lex_state = 789},
  [30] = {.lex_state = 789},
  [31] = {.lex_state = 789},
  [32] = {.lex_state = 789},
  [33] = {.lex_state = 789},
  [34] = {.lex_state = 789},
  [35] = {.lex_state = 789},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 789},
  [38] = {.lex_state = 789},
  [39] = {.lex_state = 789},
  [40] = {.lex_state = 789},
  [41] = {.lex_state = 789},
  [42] = {.lex_state = 789},
  [43] = {.lex_state = 789},
  [44] = {.lex_state = 789},
  [45] = {.lex_state = 789},
  [46] = {.lex_state = 789},
  [47] = {.lex_state = 789},
  [48] = {.lex_state = 789},
  [49] = {.lex_state = 789},
  [50] = {.lex_state = 789},
  [51] = {.lex_state = 789},
  [52] = {.lex_state = 789},
  [53] = {.lex_state = 789},
  [54] = {.lex_state = 789},
  [55] = {.lex_state = 789},
  [56] = {.lex_state = 789},
  [57] = {.lex_state = 789},
  [58] = {.lex_state = 789},
  [59] = {.lex_state = 190},
  [60] = {.lex_state = 190},
  [61] = {.lex_state = 190},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 138},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 138},
  [66] = {.lex_state = 137},
  [67] = {.lex_state = 137},
  [68] = {.lex_state = 138},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 285},
  [72] = {.lex_state = 285},
  [73] = {.lex_state = 285},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 785},
  [81] = {.lex_state = 785},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 785},
  [85] = {.lex_state = 85},
  [86] = {.lex_state = 85},
  [87] = {.lex_state = 789},
  [88] = {.lex_state = 85},
  [89] = {.lex_state = 789},
  [90] = {.lex_state = 789},
  [91] = {.lex_state = 138},
  [92] = {.lex_state = 103},
  [93] = {.lex_state = 789},
  [94] = {.lex_state = 789},
  [95] = {.lex_state = 789},
  [96] = {.lex_state = 789},
  [97] = {.lex_state = 789},
  [98] = {.lex_state = 789},
  [99] = {.lex_state = 789},
  [100] = {.lex_state = 138},
  [101] = {.lex_state = 103},
  [102] = {.lex_state = 789},
  [103] = {.lex_state = 789},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 789},
  [106] = {.lex_state = 789},
  [107] = {.lex_state = 789},
  [108] = {.lex_state = 789},
  [109] = {.lex_state = 789},
  [110] = {.lex_state = 789},
  [111] = {.lex_state = 789},
  [112] = {.lex_state = 789},
  [113] = {.lex_state = 137},
  [114] = {.lex_state = 789},
  [115] = {.lex_state = 789},
  [116] = {.lex_state = 789},
  [117] = {.lex_state = 789},
  [118] = {.lex_state = 789},
  [119] = {.lex_state = 789},
  [120] = {.lex_state = 285},
  [121] = {.lex_state = 789},
  [122] = {.lex_state = 789},
  [123] = {.lex_state = 789},
  [124] = {.lex_state = 789},
  [125] = {.lex_state = 138},
  [126] = {.lex_state = 789},
  [127] = {.lex_state = 103},
  [128] = {.lex_state = 789},
  [129] = {.lex_state = 789},
  [130] = {.lex_state = 789},
  [131] = {.lex_state = 789},
  [132] = {.lex_state = 789},
  [133] = {.lex_state = 789},
  [134] = {.lex_state = 789},
  [135] = {.lex_state = 789},
  [136] = {.lex_state = 789},
  [137] = {.lex_state = 789},
  [138] = {.lex_state = 789},
  [139] = {.lex_state = 789},
  [140] = {.lex_state = 789},
  [141] = {.lex_state = 789},
  [142] = {.lex_state = 789},
  [143] = {.lex_state = 789},
  [144] = {.lex_state = 789},
  [145] = {.lex_state = 789},
  [146] = {.lex_state = 137},
  [147] = {.lex_state = 138},
  [148] = {.lex_state = 785},
  [149] = {.lex_state = 789},
  [150] = {.lex_state = 789},
  [151] = {.lex_state = 789},
  [152] = {.lex_state = 789},
  [153] = {.lex_state = 789},
  [154] = {.lex_state = 789},
  [155] = {.lex_state = 789},
  [156] = {.lex_state = 789},
  [157] = {.lex_state = 789},
  [158] = {.lex_state = 789},
  [159] = {.lex_state = 789},
  [160] = {.lex_state = 789},
  [161] = {.lex_state = 789},
  [162] = {.lex_state = 789},
  [163] = {.lex_state = 789},
  [164] = {.lex_state = 789},
  [165] = {.lex_state = 789},
  [166] = {.lex_state = 789},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 789},
  [169] = {.lex_state = 789},
  [170] = {.lex_state = 789},
  [171] = {.lex_state = 789},
  [172] = {.lex_state = 789},
  [173] = {.lex_state = 789},
  [174] = {.lex_state = 789},
  [175] = {.lex_state = 789},
  [176] = {.lex_state = 789},
  [177] = {.lex_state = 789},
  [178] = {.lex_state = 789},
  [179] = {.lex_state = 789},
  [180] = {.lex_state = 789},
  [181] = {.lex_state = 789},
  [182] = {.lex_state = 789},
  [183] = {.lex_state = 789},
  [184] = {.lex_state = 789},
  [185] = {.lex_state = 789},
  [186] = {.lex_state = 789},
  [187] = {.lex_state = 789},
  [188] = {.lex_state = 789},
  [189] = {.lex_state = 789},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 789},
  [192] = {.lex_state = 789},
  [193] = {.lex_state = 789},
  [194] = {.lex_state = 789},
  [195] = {.lex_state = 789},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 789},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 789},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 789},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 789},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 789},
  [210] = {.lex_state = 789},
  [211] = {.lex_state = 789},
  [212] = {.lex_state = 788},
  [213] = {.lex_state = 789},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 789},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__statement_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym__version_test_token2] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__double_quoted_string_token1] = ACTIONS(1),
    [aux_sym__quoted_string_token1] = ACTIONS(1),
    [aux_sym__quoted_string_token2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_key_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(202),
    [sym__statement] = STATE(17),
    [sym_comment] = STATE(201),
    [sym_conditional_construct] = STATE(17),
    [sym_include_directive] = STATE(201),
    [sym_variable_setting] = STATE(105),
    [sym_key_binding] = STATE(105),
    [sym_keyseq] = STATE(199),
    [sym__double_quoted_string] = STATE(200),
    [sym_keyname] = STATE(199),
    [sym_symbolic_character_name] = STATE(197),
    [aux_sym_source_repeat1] = STATE(17),
    [aux_sym__statement_repeat1] = STATE(34),
    [aux_sym_keyname_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__statement_token1] = ACTIONS(5),
    [aux_sym__statement_token2] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
    [anon_sym_DOLLARif] = ACTIONS(11),
    [anon_sym_DOLLARinclude] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(21),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(21),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(19),
    [sym_key_literal] = ACTIONS(23),
  },
  [2] = {
    [sym_test] = STATE(154),
    [sym__mode_test] = STATE(169),
    [sym__term_test] = STATE(169),
    [sym__version_test] = STATE(169),
    [sym__application_test] = STATE(169),
    [sym__variable_test] = STATE(169),
    [sym_bool_variable] = STATE(172),
    [sym_bell_variable] = STATE(173),
    [sym_string_variable] = STATE(174),
    [sym_number_variable] = STATE(176),
    [sym_edit_mode_variable] = STATE(178),
    [sym_keymap_variable] = STATE(180),
    [aux_sym__statement_repeat1] = STATE(6),
    [aux_sym__statement_token1] = ACTIONS(25),
    [aux_sym__mode_test_token1] = ACTIONS(27),
    [aux_sym__term_test_token1] = ACTIONS(29),
    [aux_sym__term_test_token2] = ACTIONS(31),
    [aux_sym__version_test_token1] = ACTIONS(33),
    [aux_sym_bool_variable_token1] = ACTIONS(35),
    [aux_sym_bool_variable_token2] = ACTIONS(35),
    [aux_sym_bool_variable_token3] = ACTIONS(35),
    [aux_sym_bool_variable_token4] = ACTIONS(35),
    [aux_sym_bool_variable_token5] = ACTIONS(35),
    [aux_sym_bool_variable_token6] = ACTIONS(35),
    [aux_sym_bool_variable_token7] = ACTIONS(35),
    [aux_sym_bool_variable_token8] = ACTIONS(35),
    [aux_sym_bool_variable_token9] = ACTIONS(35),
    [aux_sym_bool_variable_token10] = ACTIONS(35),
    [aux_sym_bool_variable_token11] = ACTIONS(35),
    [aux_sym_bool_variable_token12] = ACTIONS(35),
    [aux_sym_bool_variable_token13] = ACTIONS(35),
    [aux_sym_bool_variable_token14] = ACTIONS(35),
    [aux_sym_bool_variable_token15] = ACTIONS(35),
    [aux_sym_bool_variable_token16] = ACTIONS(35),
    [aux_sym_bool_variable_token17] = ACTIONS(35),
    [aux_sym_bool_variable_token18] = ACTIONS(35),
    [aux_sym_bool_variable_token19] = ACTIONS(35),
    [aux_sym_bool_variable_token20] = ACTIONS(35),
    [aux_sym_bool_variable_token21] = ACTIONS(35),
    [aux_sym_bool_variable_token22] = ACTIONS(35),
    [aux_sym_bool_variable_token23] = ACTIONS(35),
    [aux_sym_bool_variable_token24] = ACTIONS(35),
    [aux_sym_bool_variable_token25] = ACTIONS(35),
    [aux_sym_bool_variable_token26] = ACTIONS(35),
    [aux_sym_bool_variable_token27] = ACTIONS(35),
    [aux_sym_bool_variable_token28] = ACTIONS(35),
    [aux_sym_bool_variable_token29] = ACTIONS(35),
    [aux_sym_bool_variable_token30] = ACTIONS(35),
    [aux_sym_bool_variable_token31] = ACTIONS(35),
    [aux_sym_bool_variable_token32] = ACTIONS(35),
    [aux_sym_bell_variable_token1] = ACTIONS(37),
    [aux_sym_string_variable_token1] = ACTIONS(39),
    [aux_sym_string_variable_token2] = ACTIONS(39),
    [aux_sym_string_variable_token3] = ACTIONS(39),
    [aux_sym_string_variable_token4] = ACTIONS(39),
    [aux_sym_string_variable_token5] = ACTIONS(39),
    [aux_sym_string_variable_token6] = ACTIONS(39),
    [aux_sym_string_variable_token7] = ACTIONS(39),
    [aux_sym_number_variable_token1] = ACTIONS(41),
    [aux_sym_number_variable_token2] = ACTIONS(41),
    [aux_sym_number_variable_token3] = ACTIONS(41),
    [aux_sym_number_variable_token4] = ACTIONS(41),
    [aux_sym_number_variable_token5] = ACTIONS(41),
    [aux_sym_edit_mode_variable_token1] = ACTIONS(43),
    [aux_sym_keymap_variable_token1] = ACTIONS(45),
  },
  [3] = {
    [sym_test] = STATE(103),
    [sym__mode_test] = STATE(169),
    [sym__term_test] = STATE(169),
    [sym__version_test] = STATE(169),
    [sym__application_test] = STATE(169),
    [sym__variable_test] = STATE(169),
    [sym_bool_variable] = STATE(172),
    [sym_bell_variable] = STATE(173),
    [sym_string_variable] = STATE(174),
    [sym_number_variable] = STATE(176),
    [sym_edit_mode_variable] = STATE(178),
    [sym_keymap_variable] = STATE(180),
    [aux_sym__statement_repeat1] = STATE(6),
    [aux_sym__statement_token1] = ACTIONS(25),
    [aux_sym__mode_test_token1] = ACTIONS(27),
    [aux_sym__term_test_token1] = ACTIONS(29),
    [aux_sym__term_test_token2] = ACTIONS(31),
    [aux_sym__version_test_token1] = ACTIONS(33),
    [aux_sym_bool_variable_token1] = ACTIONS(35),
    [aux_sym_bool_variable_token2] = ACTIONS(35),
    [aux_sym_bool_variable_token3] = ACTIONS(35),
    [aux_sym_bool_variable_token4] = ACTIONS(35),
    [aux_sym_bool_variable_token5] = ACTIONS(35),
    [aux_sym_bool_variable_token6] = ACTIONS(35),
    [aux_sym_bool_variable_token7] = ACTIONS(35),
    [aux_sym_bool_variable_token8] = ACTIONS(35),
    [aux_sym_bool_variable_token9] = ACTIONS(35),
    [aux_sym_bool_variable_token10] = ACTIONS(35),
    [aux_sym_bool_variable_token11] = ACTIONS(35),
    [aux_sym_bool_variable_token12] = ACTIONS(35),
    [aux_sym_bool_variable_token13] = ACTIONS(35),
    [aux_sym_bool_variable_token14] = ACTIONS(35),
    [aux_sym_bool_variable_token15] = ACTIONS(35),
    [aux_sym_bool_variable_token16] = ACTIONS(35),
    [aux_sym_bool_variable_token17] = ACTIONS(35),
    [aux_sym_bool_variable_token18] = ACTIONS(35),
    [aux_sym_bool_variable_token19] = ACTIONS(35),
    [aux_sym_bool_variable_token20] = ACTIONS(35),
    [aux_sym_bool_variable_token21] = ACTIONS(35),
    [aux_sym_bool_variable_token22] = ACTIONS(35),
    [aux_sym_bool_variable_token23] = ACTIONS(35),
    [aux_sym_bool_variable_token24] = ACTIONS(35),
    [aux_sym_bool_variable_token25] = ACTIONS(35),
    [aux_sym_bool_variable_token26] = ACTIONS(35),
    [aux_sym_bool_variable_token27] = ACTIONS(35),
    [aux_sym_bool_variable_token28] = ACTIONS(35),
    [aux_sym_bool_variable_token29] = ACTIONS(35),
    [aux_sym_bool_variable_token30] = ACTIONS(35),
    [aux_sym_bool_variable_token31] = ACTIONS(35),
    [aux_sym_bool_variable_token32] = ACTIONS(35),
    [aux_sym_bell_variable_token1] = ACTIONS(37),
    [aux_sym_string_variable_token1] = ACTIONS(39),
    [aux_sym_string_variable_token2] = ACTIONS(39),
    [aux_sym_string_variable_token3] = ACTIONS(39),
    [aux_sym_string_variable_token4] = ACTIONS(39),
    [aux_sym_string_variable_token5] = ACTIONS(39),
    [aux_sym_string_variable_token6] = ACTIONS(39),
    [aux_sym_string_variable_token7] = ACTIONS(39),
    [aux_sym_number_variable_token1] = ACTIONS(41),
    [aux_sym_number_variable_token2] = ACTIONS(41),
    [aux_sym_number_variable_token3] = ACTIONS(41),
    [aux_sym_number_variable_token4] = ACTIONS(41),
    [aux_sym_number_variable_token5] = ACTIONS(41),
    [aux_sym_edit_mode_variable_token1] = ACTIONS(43),
    [aux_sym_keymap_variable_token1] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(47), 1,
      aux_sym__statement_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(50), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      sym_keymap_value,
      sym_function_name,
    ACTIONS(52), 55,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
      aux_sym_bool_variable_token1,
      aux_sym_bool_variable_token2,
      aux_sym_bool_variable_token3,
      aux_sym_bool_variable_token4,
      aux_sym_bool_variable_token5,
      aux_sym_bool_variable_token6,
      aux_sym_bool_variable_token7,
      aux_sym_bool_variable_token8,
      aux_sym_bool_variable_token9,
      aux_sym_bool_variable_token10,
      aux_sym_bool_variable_token11,
      aux_sym_bool_variable_token12,
      aux_sym_bool_variable_token13,
      aux_sym_bool_variable_token14,
      aux_sym_bool_variable_token15,
      aux_sym_bool_variable_token16,
      aux_sym_bool_variable_token17,
      aux_sym_bool_variable_token18,
      aux_sym_bool_variable_token19,
      aux_sym_bool_variable_token20,
      aux_sym_bool_variable_token21,
      aux_sym_bool_variable_token22,
      aux_sym_bool_variable_token23,
      aux_sym_bool_variable_token24,
      aux_sym_bool_variable_token25,
      aux_sym_bool_variable_token26,
      aux_sym_bool_variable_token27,
      aux_sym_bool_variable_token28,
      aux_sym_bool_variable_token29,
      aux_sym_bool_variable_token30,
      aux_sym_bool_variable_token31,
      aux_sym_bool_variable_token32,
      aux_sym_bell_variable_token1,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
      aux_sym_edit_mode_variable_token1,
      aux_sym_keymap_variable_token1,
      aux_sym__quoted_string_token1,
  [71] = 15,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(58), 1,
      aux_sym_bell_variable_token1,
    ACTIONS(64), 1,
      aux_sym_edit_mode_variable_token1,
    ACTIONS(66), 1,
      aux_sym_keymap_variable_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(87), 1,
      sym_bell_variable,
    STATE(131), 1,
      sym_number_variable,
    STATE(132), 1,
      sym_string_variable,
    STATE(137), 1,
      sym_bool_variable,
    STATE(183), 1,
      sym_edit_mode_variable,
    STATE(185), 1,
      sym_keymap_variable,
    ACTIONS(62), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(181), 6,
      sym__bool_assignment,
      sym__bell_assignment,
      sym__string_assignment,
      sym__number_assignment,
      sym__edit_mode_assignment,
      sym__keymap_assignment,
    ACTIONS(60), 7,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
    ACTIONS(56), 32,
      aux_sym_bool_variable_token1,
      aux_sym_bool_variable_token2,
      aux_sym_bool_variable_token3,
      aux_sym_bool_variable_token4,
      aux_sym_bool_variable_token5,
      aux_sym_bool_variable_token6,
      aux_sym_bool_variable_token7,
      aux_sym_bool_variable_token8,
      aux_sym_bool_variable_token9,
      aux_sym_bool_variable_token10,
      aux_sym_bool_variable_token11,
      aux_sym_bool_variable_token12,
      aux_sym_bool_variable_token13,
      aux_sym_bool_variable_token14,
      aux_sym_bool_variable_token15,
      aux_sym_bool_variable_token16,
      aux_sym_bool_variable_token17,
      aux_sym_bool_variable_token18,
      aux_sym_bool_variable_token19,
      aux_sym_bool_variable_token20,
      aux_sym_bool_variable_token21,
      aux_sym_bool_variable_token22,
      aux_sym_bool_variable_token23,
      aux_sym_bool_variable_token24,
      aux_sym_bool_variable_token25,
      aux_sym_bool_variable_token26,
      aux_sym_bool_variable_token27,
      aux_sym_bool_variable_token28,
      aux_sym_bool_variable_token29,
      aux_sym_bool_variable_token30,
      aux_sym_bool_variable_token31,
      aux_sym_bool_variable_token32,
  [163] = 3,
    ACTIONS(68), 1,
      aux_sym__statement_token1,
    STATE(6), 1,
      aux_sym__statement_repeat1,
    ACTIONS(50), 51,
      aux_sym__mode_test_token1,
      aux_sym__term_test_token1,
      aux_sym__term_test_token2,
      aux_sym__version_test_token1,
      aux_sym_bool_variable_token1,
      aux_sym_bool_variable_token2,
      aux_sym_bool_variable_token3,
      aux_sym_bool_variable_token4,
      aux_sym_bool_variable_token5,
      aux_sym_bool_variable_token6,
      aux_sym_bool_variable_token7,
      aux_sym_bool_variable_token8,
      aux_sym_bool_variable_token9,
      aux_sym_bool_variable_token10,
      aux_sym_bool_variable_token11,
      aux_sym_bool_variable_token12,
      aux_sym_bool_variable_token13,
      aux_sym_bool_variable_token14,
      aux_sym_bool_variable_token15,
      aux_sym_bool_variable_token16,
      aux_sym_bool_variable_token17,
      aux_sym_bool_variable_token18,
      aux_sym_bool_variable_token19,
      aux_sym_bool_variable_token20,
      aux_sym_bool_variable_token21,
      aux_sym_bool_variable_token22,
      aux_sym_bool_variable_token23,
      aux_sym_bool_variable_token24,
      aux_sym_bool_variable_token25,
      aux_sym_bool_variable_token26,
      aux_sym_bool_variable_token27,
      aux_sym_bool_variable_token28,
      aux_sym_bool_variable_token29,
      aux_sym_bool_variable_token30,
      aux_sym_bool_variable_token31,
      aux_sym_bool_variable_token32,
      aux_sym_bell_variable_token1,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
      aux_sym_edit_mode_variable_token1,
      aux_sym_keymap_variable_token1,
  [223] = 19,
    ACTIONS(71), 1,
      aux_sym__statement_token1,
    ACTIONS(74), 1,
      aux_sym__statement_token2,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
    ACTIONS(80), 1,
      anon_sym_DOLLARif,
    ACTIONS(85), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(88), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      sym_key_literal,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(83), 2,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
    ACTIONS(97), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(94), 10,
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
  [297] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(109), 1,
      anon_sym_DOLLARelse,
    ACTIONS(111), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [373] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(113), 1,
      anon_sym_DOLLARelse,
    ACTIONS(115), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [449] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(113), 1,
      anon_sym_DOLLARelse,
    ACTIONS(115), 1,
      anon_sym_DOLLARendif,
    ACTIONS(117), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(8), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [525] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(119), 1,
      anon_sym_DOLLARelse,
    ACTIONS(121), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [601] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(123), 1,
      aux_sym__statement_token2,
    ACTIONS(125), 1,
      anon_sym_DOLLARelse,
    ACTIONS(127), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(11), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [677] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(125), 1,
      anon_sym_DOLLARelse,
    ACTIONS(127), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [753] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(129), 1,
      aux_sym__statement_token2,
    ACTIONS(131), 1,
      anon_sym_DOLLARelse,
    ACTIONS(133), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(13), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [829] = 20,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(135), 1,
      aux_sym__statement_token2,
    ACTIONS(137), 1,
      anon_sym_DOLLARelse,
    ACTIONS(139), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(9), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [905] = 19,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(88), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      sym_key_literal,
    ACTIONS(141), 1,
      aux_sym__statement_token1,
    ACTIONS(144), 1,
      aux_sym__statement_token2,
    ACTIONS(147), 1,
      anon_sym_DOLLARif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(97), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(105), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(201), 2,
      sym_comment,
      sym_include_directive,
    STATE(16), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(94), 10,
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
  [978] = 19,
    ACTIONS(5), 1,
      aux_sym__statement_token1,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_DOLLARif,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(105), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(201), 2,
      sym_comment,
      sym_include_directive,
    STATE(16), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1051] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(154), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1124] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(121), 1,
      anon_sym_DOLLARendif,
    ACTIONS(156), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(20), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1197] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(158), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1270] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(158), 1,
      anon_sym_DOLLARendif,
    ACTIONS(160), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(24), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1343] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(162), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1416] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(111), 1,
      anon_sym_DOLLARendif,
    ACTIONS(164), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(30), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1489] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(166), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1562] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(166), 1,
      anon_sym_DOLLARendif,
    ACTIONS(168), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(31), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1635] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(162), 1,
      anon_sym_DOLLARendif,
    ACTIONS(170), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(27), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1708] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(172), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1781] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(172), 1,
      anon_sym_DOLLARendif,
    ACTIONS(174), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(29), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1854] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(176), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [1927] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(178), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [2000] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(105), 1,
      aux_sym__statement_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(180), 1,
      anon_sym_DOLLARendif,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(7), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [2073] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(178), 1,
      anon_sym_DOLLARendif,
    ACTIONS(182), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(22), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [2146] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(180), 1,
      anon_sym_DOLLARendif,
    ACTIONS(184), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(143), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(18), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(19), 10,
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
  [2219] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_DOLLARif,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(188), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(54), 1,
      sym_conditional_construct,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(122), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(213), 2,
      sym_comment,
      sym_include_directive,
    ACTIONS(19), 10,
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
  [2287] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(107), 1,
      anon_sym_DOLLARif,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(190), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(41), 1,
      sym_conditional_construct,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(197), 1,
      sym_symbolic_character_name,
    STATE(200), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(140), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(199), 2,
      sym_keyseq,
      sym_keyname,
    STATE(209), 2,
      sym_comment,
      sym_include_directive,
    ACTIONS(19), 10,
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
  [2355] = 4,
    ACTIONS(192), 1,
      aux_sym__statement_token1,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    ACTIONS(50), 4,
      aux_sym_edit_mode_value_token2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(52), 20,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
      aux_sym_edit_mode_value_token1,
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
  [2390] = 2,
    ACTIONS(197), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(195), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2417] = 2,
    ACTIONS(201), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(199), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2444] = 2,
    ACTIONS(205), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(203), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2471] = 2,
    ACTIONS(209), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(207), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2498] = 2,
    ACTIONS(213), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(211), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2525] = 2,
    ACTIONS(217), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(215), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2552] = 2,
    ACTIONS(221), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(219), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2579] = 2,
    ACTIONS(225), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(223), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2606] = 2,
    ACTIONS(229), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(227), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2633] = 2,
    ACTIONS(233), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(231), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2660] = 2,
    ACTIONS(237), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(235), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2687] = 2,
    ACTIONS(197), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(195), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2713] = 2,
    ACTIONS(201), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(199), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2739] = 2,
    ACTIONS(237), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(235), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2765] = 2,
    ACTIONS(233), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(231), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2791] = 2,
    ACTIONS(225), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(223), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2817] = 2,
    ACTIONS(221), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(219), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2843] = 2,
    ACTIONS(213), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(211), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2869] = 2,
    ACTIONS(205), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(203), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2895] = 2,
    ACTIONS(209), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(207), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2921] = 2,
    ACTIONS(217), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(215), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2947] = 2,
    ACTIONS(229), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(227), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      anon_sym_DOLLARif,
      anon_sym_DOLLARinclude,
      anon_sym_set,
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
  [2973] = 5,
    ACTIONS(245), 1,
      sym_key_literal,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(205), 1,
      sym_symbolic_character_name,
    ACTIONS(242), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(239), 10,
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
  [2999] = 5,
    ACTIONS(247), 1,
      sym_key_literal,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(167), 1,
      sym_symbolic_character_name,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(19), 10,
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
  [3025] = 2,
    ACTIONS(245), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(249), 10,
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
  [3043] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(251), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 4,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
  [3061] = 4,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(182), 1,
      sym_bell_value,
    ACTIONS(255), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [3076] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(182), 1,
      sym_bool_value,
    ACTIONS(257), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [3091] = 4,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(189), 1,
      sym_bell_value,
    ACTIONS(255), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [3106] = 6,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(259), 1,
      sym_function_name,
    ACTIONS(261), 1,
      aux_sym__quoted_string_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(156), 1,
      sym__quoted_string,
    STATE(166), 1,
      sym_macro,
  [3125] = 6,
    ACTIONS(261), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(263), 1,
      aux_sym__statement_token1,
    ACTIONS(265), 1,
      sym_function_name,
    STATE(66), 1,
      aux_sym__statement_repeat1,
    STATE(156), 1,
      sym__quoted_string,
    STATE(187), 1,
      sym_macro,
  [3144] = 4,
    ACTIONS(267), 1,
      aux_sym__statement_token1,
    STATE(63), 1,
      aux_sym__statement_repeat1,
    STATE(157), 1,
      sym_bell_value,
    ACTIONS(255), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [3159] = 4,
    ACTIONS(269), 1,
      aux_sym__statement_token1,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    STATE(157), 1,
      sym_bool_value,
    ACTIONS(257), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [3174] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(179), 1,
      sym_bool_value,
    ACTIONS(257), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [3189] = 4,
    ACTIONS(271), 1,
      aux_sym__statement_token1,
    STATE(73), 1,
      aux_sym__statement_repeat1,
    STATE(157), 1,
      sym_edit_mode_value,
    ACTIONS(273), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3203] = 4,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(193), 1,
      sym_edit_mode_value,
    ACTIONS(273), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3217] = 4,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(182), 1,
      sym_edit_mode_value,
    ACTIONS(273), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3231] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(275), 1,
      anon_sym_EQ,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(277), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3245] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(279), 1,
      anon_sym_EQ,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(281), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3259] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(283), 1,
      anon_sym_EQ,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(285), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3273] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(287), 1,
      anon_sym_EQ,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(289), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3287] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(291), 1,
      anon_sym_EQ,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(293), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3301] = 4,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(297), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3315] = 4,
    ACTIONS(299), 1,
      aux_sym__statement_token1,
    ACTIONS(301), 1,
      aux_sym_comment_token2,
    STATE(148), 1,
      aux_sym__statement_repeat1,
    STATE(182), 1,
      sym_string_value,
  [3328] = 4,
    ACTIONS(299), 1,
      aux_sym__statement_token1,
    ACTIONS(301), 1,
      aux_sym_comment_token2,
    STATE(148), 1,
      aux_sym__statement_repeat1,
    STATE(195), 1,
      sym_string_value,
  [3341] = 3,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(305), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [3352] = 3,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(310), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [3363] = 4,
    ACTIONS(301), 1,
      aux_sym_comment_token2,
    ACTIONS(312), 1,
      aux_sym__statement_token1,
    STATE(80), 1,
      aux_sym__statement_repeat1,
    STATE(157), 1,
      sym_string_value,
  [3376] = 3,
    ACTIONS(314), 1,
      aux_sym__quoted_string_token1,
    STATE(86), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(316), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [3387] = 3,
    ACTIONS(318), 1,
      aux_sym__quoted_string_token1,
    STATE(86), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(320), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [3398] = 3,
    ACTIONS(323), 1,
      aux_sym__statement_token1,
    ACTIONS(325), 1,
      aux_sym__statement_token2,
    STATE(65), 1,
      aux_sym__statement_repeat1,
  [3408] = 2,
    STATE(85), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(327), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [3416] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(329), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3426] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(331), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3436] = 3,
    ACTIONS(333), 1,
      aux_sym__statement_token1,
    ACTIONS(335), 1,
      sym_number_value,
    STATE(147), 1,
      aux_sym__statement_repeat1,
  [3446] = 3,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(337), 1,
      sym_keymap_value,
    STATE(4), 1,
      aux_sym__statement_repeat1,
  [3456] = 3,
    ACTIONS(339), 1,
      aux_sym__statement_token1,
    ACTIONS(341), 1,
      aux_sym__statement_token2,
    STATE(89), 1,
      aux_sym__statement_repeat1,
  [3466] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(341), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3476] = 3,
    ACTIONS(343), 1,
      aux_sym__statement_token1,
    ACTIONS(345), 1,
      aux_sym__statement_token2,
    STATE(94), 1,
      aux_sym__statement_repeat1,
  [3486] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(345), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3496] = 3,
    ACTIONS(347), 1,
      aux_sym__statement_token1,
    ACTIONS(349), 1,
      aux_sym__statement_token2,
    STATE(96), 1,
      aux_sym__statement_repeat1,
  [3506] = 3,
    ACTIONS(351), 1,
      aux_sym__statement_token1,
    ACTIONS(353), 1,
      aux_sym__statement_token2,
    STATE(115), 1,
      aux_sym__statement_repeat1,
  [3516] = 3,
    ACTIONS(355), 1,
      aux_sym__statement_token1,
    ACTIONS(357), 1,
      aux_sym__statement_token2,
    STATE(117), 1,
      aux_sym__statement_repeat1,
  [3526] = 3,
    ACTIONS(359), 1,
      aux_sym__statement_token1,
    ACTIONS(361), 1,
      sym_number_value,
    STATE(125), 1,
      aux_sym__statement_repeat1,
  [3536] = 3,
    ACTIONS(361), 1,
      sym_keymap_value,
    ACTIONS(363), 1,
      aux_sym__statement_token1,
    STATE(127), 1,
      aux_sym__statement_repeat1,
  [3546] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(365), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3556] = 3,
    ACTIONS(367), 1,
      aux_sym__statement_token1,
    ACTIONS(369), 1,
      aux_sym__statement_token2,
    STATE(102), 1,
      aux_sym__statement_repeat1,
  [3566] = 2,
    STATE(83), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(371), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [3574] = 3,
    ACTIONS(188), 1,
      aux_sym__statement_token2,
    ACTIONS(373), 1,
      aux_sym__statement_token1,
    STATE(151), 1,
      aux_sym__statement_repeat1,
  [3584] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(375), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3594] = 3,
    ACTIONS(377), 1,
      aux_sym__statement_token1,
    ACTIONS(379), 1,
      aux_sym__statement_token2,
    STATE(106), 1,
      aux_sym__statement_repeat1,
  [3604] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(379), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3614] = 3,
    ACTIONS(381), 1,
      aux_sym__statement_token1,
    ACTIONS(383), 1,
      aux_sym__statement_token2,
    STATE(108), 1,
      aux_sym__statement_repeat1,
  [3624] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(383), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3634] = 3,
    ACTIONS(385), 1,
      aux_sym__statement_token1,
    ACTIONS(387), 1,
      aux_sym__statement_token2,
    STATE(110), 1,
      aux_sym__statement_repeat1,
  [3644] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(387), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3654] = 3,
    ACTIONS(389), 1,
      aux_sym__statement_token1,
    ACTIONS(391), 1,
      aux_sym__version_test_token2,
    STATE(146), 1,
      aux_sym__statement_repeat1,
  [3664] = 3,
    ACTIONS(393), 1,
      aux_sym__statement_token1,
    ACTIONS(395), 1,
      aux_sym__statement_token2,
    STATE(112), 1,
      aux_sym__statement_repeat1,
  [3674] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(397), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3684] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(399), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3694] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(401), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3704] = 3,
    ACTIONS(397), 1,
      aux_sym__statement_token2,
    ACTIONS(403), 1,
      aux_sym__statement_token1,
    STATE(133), 1,
      aux_sym__statement_repeat1,
  [3714] = 3,
    ACTIONS(401), 1,
      aux_sym__statement_token2,
    ACTIONS(405), 1,
      aux_sym__statement_token1,
    STATE(134), 1,
      aux_sym__statement_repeat1,
  [3724] = 2,
    STATE(170), 1,
      sym_edit_mode_value,
    ACTIONS(273), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3732] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(395), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3742] = 3,
    ACTIONS(407), 1,
      aux_sym__statement_token1,
    ACTIONS(409), 1,
      aux_sym__statement_token2,
    STATE(116), 1,
      aux_sym__statement_repeat1,
  [3752] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(411), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3762] = 3,
    ACTIONS(411), 1,
      aux_sym__statement_token2,
    ACTIONS(413), 1,
      aux_sym__statement_token1,
    STATE(121), 1,
      aux_sym__statement_repeat1,
  [3772] = 3,
    ACTIONS(333), 1,
      aux_sym__statement_token1,
    ACTIONS(415), 1,
      sym_number_value,
    STATE(147), 1,
      aux_sym__statement_repeat1,
  [3782] = 3,
    ACTIONS(417), 1,
      aux_sym__statement_token1,
    ACTIONS(419), 1,
      aux_sym__statement_token2,
    STATE(123), 1,
      aux_sym__statement_repeat1,
  [3792] = 3,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(415), 1,
      sym_keymap_value,
    STATE(4), 1,
      aux_sym__statement_repeat1,
  [3802] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(419), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3812] = 3,
    ACTIONS(421), 1,
      aux_sym__statement_token1,
    ACTIONS(423), 1,
      aux_sym__statement_token2,
    STATE(138), 1,
      aux_sym__statement_repeat1,
  [3822] = 3,
    ACTIONS(425), 1,
      aux_sym__statement_token1,
    ACTIONS(427), 1,
      aux_sym__statement_token2,
    STATE(128), 1,
      aux_sym__statement_repeat1,
  [3832] = 3,
    ACTIONS(429), 1,
      aux_sym__statement_token1,
    ACTIONS(431), 1,
      aux_sym__statement_token2,
    STATE(91), 1,
      aux_sym__statement_repeat1,
  [3842] = 3,
    ACTIONS(433), 1,
      aux_sym__statement_token1,
    ACTIONS(435), 1,
      aux_sym__statement_token2,
    STATE(81), 1,
      aux_sym__statement_repeat1,
  [3852] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(437), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3862] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(423), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3872] = 3,
    ACTIONS(437), 1,
      aux_sym__statement_token2,
    ACTIONS(439), 1,
      aux_sym__statement_token1,
    STATE(142), 1,
      aux_sym__statement_repeat1,
  [3882] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(441), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3892] = 3,
    ACTIONS(443), 1,
      aux_sym__statement_token1,
    ACTIONS(445), 1,
      aux_sym__statement_token2,
    STATE(70), 1,
      aux_sym__statement_repeat1,
  [3902] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(447), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3912] = 3,
    ACTIONS(447), 1,
      aux_sym__statement_token2,
    ACTIONS(449), 1,
      aux_sym__statement_token1,
    STATE(144), 1,
      aux_sym__statement_repeat1,
  [3922] = 3,
    ACTIONS(451), 1,
      aux_sym__statement_token1,
    ACTIONS(453), 1,
      aux_sym__statement_token2,
    STATE(136), 1,
      aux_sym__statement_repeat1,
  [3932] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(453), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3942] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(455), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3952] = 3,
    ACTIONS(190), 1,
      aux_sym__statement_token2,
    ACTIONS(457), 1,
      aux_sym__statement_token1,
    STATE(141), 1,
      aux_sym__statement_repeat1,
  [3962] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(459), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [3972] = 3,
    ACTIONS(459), 1,
      aux_sym__statement_token2,
    ACTIONS(461), 1,
      aux_sym__statement_token1,
    STATE(149), 1,
      aux_sym__statement_repeat1,
  [3982] = 3,
    ACTIONS(52), 1,
      aux_sym__version_test_token2,
    ACTIONS(463), 1,
      aux_sym__statement_token1,
    STATE(146), 1,
      aux_sym__statement_repeat1,
  [3992] = 3,
    ACTIONS(52), 1,
      sym_number_value,
    ACTIONS(466), 1,
      aux_sym__statement_token1,
    STATE(147), 1,
      aux_sym__statement_repeat1,
  [4002] = 3,
    ACTIONS(50), 1,
      aux_sym_comment_token2,
    ACTIONS(469), 1,
      aux_sym__statement_token1,
    STATE(148), 1,
      aux_sym__statement_repeat1,
  [4012] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(472), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [4022] = 3,
    ACTIONS(472), 1,
      aux_sym__statement_token2,
    ACTIONS(474), 1,
      aux_sym__statement_token1,
    STATE(152), 1,
      aux_sym__statement_repeat1,
  [4032] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(409), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [4042] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(476), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [4052] = 3,
    ACTIONS(476), 1,
      aux_sym__statement_token2,
    ACTIONS(478), 1,
      aux_sym__statement_token1,
    STATE(155), 1,
      aux_sym__statement_repeat1,
  [4062] = 3,
    ACTIONS(480), 1,
      aux_sym__statement_token1,
    ACTIONS(482), 1,
      aux_sym__statement_token2,
    STATE(90), 1,
      aux_sym__statement_repeat1,
  [4072] = 3,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(484), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [4082] = 1,
    ACTIONS(486), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4087] = 1,
    ACTIONS(488), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4092] = 2,
    ACTIONS(490), 1,
      aux_sym__statement_token1,
    STATE(3), 1,
      aux_sym__statement_repeat1,
  [4099] = 1,
    ACTIONS(492), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4104] = 1,
    ACTIONS(494), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4109] = 1,
    ACTIONS(496), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4114] = 1,
    ACTIONS(498), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4119] = 2,
    ACTIONS(500), 1,
      aux_sym__statement_token1,
    STATE(62), 1,
      aux_sym__statement_repeat1,
  [4126] = 1,
    ACTIONS(502), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4131] = 2,
    ACTIONS(504), 1,
      aux_sym__statement_token1,
    STATE(2), 1,
      aux_sym__statement_repeat1,
  [4138] = 1,
    ACTIONS(506), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4143] = 2,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(510), 1,
      anon_sym_DASH,
  [4150] = 1,
    ACTIONS(512), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4155] = 1,
    ACTIONS(514), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4160] = 1,
    ACTIONS(516), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4165] = 1,
    ACTIONS(518), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4170] = 2,
    ACTIONS(520), 1,
      aux_sym__statement_token1,
    STATE(74), 1,
      aux_sym__statement_repeat1,
  [4177] = 2,
    ACTIONS(522), 1,
      aux_sym__statement_token1,
    STATE(75), 1,
      aux_sym__statement_repeat1,
  [4184] = 2,
    ACTIONS(524), 1,
      aux_sym__statement_token1,
    STATE(76), 1,
      aux_sym__statement_repeat1,
  [4191] = 2,
    ACTIONS(526), 1,
      aux_sym__statement_token1,
    STATE(113), 1,
      aux_sym__statement_repeat1,
  [4198] = 2,
    ACTIONS(528), 1,
      aux_sym__statement_token1,
    STATE(77), 1,
      aux_sym__statement_repeat1,
  [4205] = 1,
    ACTIONS(530), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4210] = 2,
    ACTIONS(532), 1,
      aux_sym__statement_token1,
    STATE(78), 1,
      aux_sym__statement_repeat1,
  [4217] = 1,
    ACTIONS(534), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4222] = 2,
    ACTIONS(536), 1,
      aux_sym__statement_token1,
    STATE(79), 1,
      aux_sym__statement_repeat1,
  [4229] = 1,
    ACTIONS(538), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4234] = 1,
    ACTIONS(540), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4239] = 2,
    ACTIONS(542), 1,
      aux_sym__statement_token1,
    STATE(72), 1,
      aux_sym__statement_repeat1,
  [4246] = 1,
    ACTIONS(544), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4251] = 2,
    ACTIONS(546), 1,
      aux_sym__statement_token1,
    STATE(92), 1,
      aux_sym__statement_repeat1,
  [4258] = 1,
    ACTIONS(548), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4263] = 1,
    ACTIONS(550), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4268] = 2,
    ACTIONS(552), 1,
      aux_sym__statement_token1,
    STATE(5), 1,
      aux_sym__statement_repeat1,
  [4275] = 1,
    ACTIONS(554), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4280] = 2,
    ACTIONS(556), 1,
      aux_sym__statement_token2,
    ACTIONS(558), 1,
      aux_sym_comment_token2,
  [4287] = 1,
    ACTIONS(560), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4292] = 1,
    ACTIONS(562), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4297] = 1,
    ACTIONS(564), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4302] = 1,
    ACTIONS(566), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4307] = 1,
    ACTIONS(568), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4312] = 1,
    ACTIONS(570), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [4317] = 2,
    ACTIONS(510), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [4324] = 1,
    ACTIONS(574), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4329] = 1,
    ACTIONS(576), 1,
      anon_sym_COLON,
  [4333] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [4337] = 1,
    ACTIONS(188), 1,
      aux_sym__statement_token2,
  [4341] = 1,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
  [4345] = 1,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [4349] = 1,
    ACTIONS(582), 1,
      aux_sym__statement_token2,
  [4353] = 1,
    ACTIONS(510), 1,
      anon_sym_DASH,
  [4357] = 1,
    ACTIONS(584), 1,
      aux_sym__statement_token1,
  [4361] = 1,
    ACTIONS(586), 1,
      aux_sym_comment_token2,
  [4365] = 1,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [4369] = 1,
    ACTIONS(453), 1,
      aux_sym__statement_token2,
  [4373] = 1,
    ACTIONS(590), 1,
      aux_sym__statement_token2,
  [4377] = 1,
    ACTIONS(190), 1,
      aux_sym__statement_token2,
  [4381] = 1,
    ACTIONS(592), 1,
      aux_sym__term_test_token2,
  [4385] = 1,
    ACTIONS(409), 1,
      aux_sym__statement_token2,
  [4389] = 1,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [4393] = 1,
    ACTIONS(594), 1,
      anon_sym_EQ,
  [4397] = 1,
    ACTIONS(596), 1,
      anon_sym_EQ,
  [4401] = 1,
    ACTIONS(598), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 163,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 297,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 449,
  [SMALL_STATE(11)] = 525,
  [SMALL_STATE(12)] = 601,
  [SMALL_STATE(13)] = 677,
  [SMALL_STATE(14)] = 753,
  [SMALL_STATE(15)] = 829,
  [SMALL_STATE(16)] = 905,
  [SMALL_STATE(17)] = 978,
  [SMALL_STATE(18)] = 1051,
  [SMALL_STATE(19)] = 1124,
  [SMALL_STATE(20)] = 1197,
  [SMALL_STATE(21)] = 1270,
  [SMALL_STATE(22)] = 1343,
  [SMALL_STATE(23)] = 1416,
  [SMALL_STATE(24)] = 1489,
  [SMALL_STATE(25)] = 1562,
  [SMALL_STATE(26)] = 1635,
  [SMALL_STATE(27)] = 1708,
  [SMALL_STATE(28)] = 1781,
  [SMALL_STATE(29)] = 1854,
  [SMALL_STATE(30)] = 1927,
  [SMALL_STATE(31)] = 2000,
  [SMALL_STATE(32)] = 2073,
  [SMALL_STATE(33)] = 2146,
  [SMALL_STATE(34)] = 2219,
  [SMALL_STATE(35)] = 2287,
  [SMALL_STATE(36)] = 2355,
  [SMALL_STATE(37)] = 2390,
  [SMALL_STATE(38)] = 2417,
  [SMALL_STATE(39)] = 2444,
  [SMALL_STATE(40)] = 2471,
  [SMALL_STATE(41)] = 2498,
  [SMALL_STATE(42)] = 2525,
  [SMALL_STATE(43)] = 2552,
  [SMALL_STATE(44)] = 2579,
  [SMALL_STATE(45)] = 2606,
  [SMALL_STATE(46)] = 2633,
  [SMALL_STATE(47)] = 2660,
  [SMALL_STATE(48)] = 2687,
  [SMALL_STATE(49)] = 2713,
  [SMALL_STATE(50)] = 2739,
  [SMALL_STATE(51)] = 2765,
  [SMALL_STATE(52)] = 2791,
  [SMALL_STATE(53)] = 2817,
  [SMALL_STATE(54)] = 2843,
  [SMALL_STATE(55)] = 2869,
  [SMALL_STATE(56)] = 2895,
  [SMALL_STATE(57)] = 2921,
  [SMALL_STATE(58)] = 2947,
  [SMALL_STATE(59)] = 2973,
  [SMALL_STATE(60)] = 2999,
  [SMALL_STATE(61)] = 3025,
  [SMALL_STATE(62)] = 3043,
  [SMALL_STATE(63)] = 3061,
  [SMALL_STATE(64)] = 3076,
  [SMALL_STATE(65)] = 3091,
  [SMALL_STATE(66)] = 3106,
  [SMALL_STATE(67)] = 3125,
  [SMALL_STATE(68)] = 3144,
  [SMALL_STATE(69)] = 3159,
  [SMALL_STATE(70)] = 3174,
  [SMALL_STATE(71)] = 3189,
  [SMALL_STATE(72)] = 3203,
  [SMALL_STATE(73)] = 3217,
  [SMALL_STATE(74)] = 3231,
  [SMALL_STATE(75)] = 3245,
  [SMALL_STATE(76)] = 3259,
  [SMALL_STATE(77)] = 3273,
  [SMALL_STATE(78)] = 3287,
  [SMALL_STATE(79)] = 3301,
  [SMALL_STATE(80)] = 3315,
  [SMALL_STATE(81)] = 3328,
  [SMALL_STATE(82)] = 3341,
  [SMALL_STATE(83)] = 3352,
  [SMALL_STATE(84)] = 3363,
  [SMALL_STATE(85)] = 3376,
  [SMALL_STATE(86)] = 3387,
  [SMALL_STATE(87)] = 3398,
  [SMALL_STATE(88)] = 3408,
  [SMALL_STATE(89)] = 3416,
  [SMALL_STATE(90)] = 3426,
  [SMALL_STATE(91)] = 3436,
  [SMALL_STATE(92)] = 3446,
  [SMALL_STATE(93)] = 3456,
  [SMALL_STATE(94)] = 3466,
  [SMALL_STATE(95)] = 3476,
  [SMALL_STATE(96)] = 3486,
  [SMALL_STATE(97)] = 3496,
  [SMALL_STATE(98)] = 3506,
  [SMALL_STATE(99)] = 3516,
  [SMALL_STATE(100)] = 3526,
  [SMALL_STATE(101)] = 3536,
  [SMALL_STATE(102)] = 3546,
  [SMALL_STATE(103)] = 3556,
  [SMALL_STATE(104)] = 3566,
  [SMALL_STATE(105)] = 3574,
  [SMALL_STATE(106)] = 3584,
  [SMALL_STATE(107)] = 3594,
  [SMALL_STATE(108)] = 3604,
  [SMALL_STATE(109)] = 3614,
  [SMALL_STATE(110)] = 3624,
  [SMALL_STATE(111)] = 3634,
  [SMALL_STATE(112)] = 3644,
  [SMALL_STATE(113)] = 3654,
  [SMALL_STATE(114)] = 3664,
  [SMALL_STATE(115)] = 3674,
  [SMALL_STATE(116)] = 3684,
  [SMALL_STATE(117)] = 3694,
  [SMALL_STATE(118)] = 3704,
  [SMALL_STATE(119)] = 3714,
  [SMALL_STATE(120)] = 3724,
  [SMALL_STATE(121)] = 3732,
  [SMALL_STATE(122)] = 3742,
  [SMALL_STATE(123)] = 3752,
  [SMALL_STATE(124)] = 3762,
  [SMALL_STATE(125)] = 3772,
  [SMALL_STATE(126)] = 3782,
  [SMALL_STATE(127)] = 3792,
  [SMALL_STATE(128)] = 3802,
  [SMALL_STATE(129)] = 3812,
  [SMALL_STATE(130)] = 3822,
  [SMALL_STATE(131)] = 3832,
  [SMALL_STATE(132)] = 3842,
  [SMALL_STATE(133)] = 3852,
  [SMALL_STATE(134)] = 3862,
  [SMALL_STATE(135)] = 3872,
  [SMALL_STATE(136)] = 3882,
  [SMALL_STATE(137)] = 3892,
  [SMALL_STATE(138)] = 3902,
  [SMALL_STATE(139)] = 3912,
  [SMALL_STATE(140)] = 3922,
  [SMALL_STATE(141)] = 3932,
  [SMALL_STATE(142)] = 3942,
  [SMALL_STATE(143)] = 3952,
  [SMALL_STATE(144)] = 3962,
  [SMALL_STATE(145)] = 3972,
  [SMALL_STATE(146)] = 3982,
  [SMALL_STATE(147)] = 3992,
  [SMALL_STATE(148)] = 4002,
  [SMALL_STATE(149)] = 4012,
  [SMALL_STATE(150)] = 4022,
  [SMALL_STATE(151)] = 4032,
  [SMALL_STATE(152)] = 4042,
  [SMALL_STATE(153)] = 4052,
  [SMALL_STATE(154)] = 4062,
  [SMALL_STATE(155)] = 4072,
  [SMALL_STATE(156)] = 4082,
  [SMALL_STATE(157)] = 4087,
  [SMALL_STATE(158)] = 4092,
  [SMALL_STATE(159)] = 4099,
  [SMALL_STATE(160)] = 4104,
  [SMALL_STATE(161)] = 4109,
  [SMALL_STATE(162)] = 4114,
  [SMALL_STATE(163)] = 4119,
  [SMALL_STATE(164)] = 4126,
  [SMALL_STATE(165)] = 4131,
  [SMALL_STATE(166)] = 4138,
  [SMALL_STATE(167)] = 4143,
  [SMALL_STATE(168)] = 4150,
  [SMALL_STATE(169)] = 4155,
  [SMALL_STATE(170)] = 4160,
  [SMALL_STATE(171)] = 4165,
  [SMALL_STATE(172)] = 4170,
  [SMALL_STATE(173)] = 4177,
  [SMALL_STATE(174)] = 4184,
  [SMALL_STATE(175)] = 4191,
  [SMALL_STATE(176)] = 4198,
  [SMALL_STATE(177)] = 4205,
  [SMALL_STATE(178)] = 4210,
  [SMALL_STATE(179)] = 4217,
  [SMALL_STATE(180)] = 4222,
  [SMALL_STATE(181)] = 4229,
  [SMALL_STATE(182)] = 4234,
  [SMALL_STATE(183)] = 4239,
  [SMALL_STATE(184)] = 4246,
  [SMALL_STATE(185)] = 4251,
  [SMALL_STATE(186)] = 4258,
  [SMALL_STATE(187)] = 4263,
  [SMALL_STATE(188)] = 4268,
  [SMALL_STATE(189)] = 4275,
  [SMALL_STATE(190)] = 4280,
  [SMALL_STATE(191)] = 4287,
  [SMALL_STATE(192)] = 4292,
  [SMALL_STATE(193)] = 4297,
  [SMALL_STATE(194)] = 4302,
  [SMALL_STATE(195)] = 4307,
  [SMALL_STATE(196)] = 4312,
  [SMALL_STATE(197)] = 4317,
  [SMALL_STATE(198)] = 4324,
  [SMALL_STATE(199)] = 4329,
  [SMALL_STATE(200)] = 4333,
  [SMALL_STATE(201)] = 4337,
  [SMALL_STATE(202)] = 4341,
  [SMALL_STATE(203)] = 4345,
  [SMALL_STATE(204)] = 4349,
  [SMALL_STATE(205)] = 4353,
  [SMALL_STATE(206)] = 4357,
  [SMALL_STATE(207)] = 4361,
  [SMALL_STATE(208)] = 4365,
  [SMALL_STATE(209)] = 4369,
  [SMALL_STATE(210)] = 4373,
  [SMALL_STATE(211)] = 4377,
  [SMALL_STATE(212)] = 4381,
  [SMALL_STATE(213)] = 4385,
  [SMALL_STATE(214)] = 4389,
  [SMALL_STATE(215)] = 4393,
  [SMALL_STATE(216)] = 4397,
  [SMALL_STATE(217)] = 4401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(190),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(158),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(207),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(188),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(104),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(196),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(196),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(203),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(165),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(36),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 12),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 8),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 9),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 10),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 11),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(196),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(196),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(82),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(86),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(146),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(147),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(148),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_variable, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_variable, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__application_test, 1, .production_id = 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mode_test, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_test, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_test, 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [580] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_variable, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_variable, 1),
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
