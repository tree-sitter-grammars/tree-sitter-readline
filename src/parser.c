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
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 1
#define TOKEN_COUNT 101
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 2

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
  aux_sym__application_test_token1 = 20,
  anon_sym_DOLLARinclude = 21,
  anon_sym_set = 22,
  anon_sym_1 = 23,
  aux_sym_bool_value_token1 = 24,
  aux_sym_bool_value_token2 = 25,
  aux_sym_bell_value_token1 = 26,
  aux_sym_bell_value_token2 = 27,
  aux_sym_bell_value_token3 = 28,
  sym_number_value = 29,
  aux_sym_edit_mode_value_token1 = 30,
  aux_sym_edit_mode_value_token2 = 31,
  sym_keymap_value = 32,
  aux_sym_bool_variable_token1 = 33,
  aux_sym_bool_variable_token2 = 34,
  aux_sym_bool_variable_token3 = 35,
  aux_sym_bool_variable_token4 = 36,
  aux_sym_bool_variable_token5 = 37,
  aux_sym_bool_variable_token6 = 38,
  aux_sym_bool_variable_token7 = 39,
  aux_sym_bool_variable_token8 = 40,
  aux_sym_bool_variable_token9 = 41,
  aux_sym_bool_variable_token10 = 42,
  aux_sym_bool_variable_token11 = 43,
  aux_sym_bool_variable_token12 = 44,
  aux_sym_bool_variable_token13 = 45,
  aux_sym_bool_variable_token14 = 46,
  aux_sym_bool_variable_token15 = 47,
  aux_sym_bool_variable_token16 = 48,
  aux_sym_bool_variable_token17 = 49,
  aux_sym_bool_variable_token18 = 50,
  aux_sym_bool_variable_token19 = 51,
  aux_sym_bool_variable_token20 = 52,
  aux_sym_bool_variable_token21 = 53,
  aux_sym_bool_variable_token22 = 54,
  aux_sym_bool_variable_token23 = 55,
  aux_sym_bool_variable_token24 = 56,
  aux_sym_bool_variable_token25 = 57,
  aux_sym_bool_variable_token26 = 58,
  aux_sym_bool_variable_token27 = 59,
  aux_sym_bool_variable_token28 = 60,
  aux_sym_bool_variable_token29 = 61,
  aux_sym_bool_variable_token30 = 62,
  aux_sym_bool_variable_token31 = 63,
  aux_sym_bool_variable_token32 = 64,
  aux_sym_bell_variable_token1 = 65,
  aux_sym_string_variable_token1 = 66,
  aux_sym_string_variable_token2 = 67,
  aux_sym_string_variable_token3 = 68,
  aux_sym_string_variable_token4 = 69,
  aux_sym_string_variable_token5 = 70,
  aux_sym_string_variable_token6 = 71,
  aux_sym_string_variable_token7 = 72,
  aux_sym_number_variable_token1 = 73,
  aux_sym_number_variable_token2 = 74,
  aux_sym_number_variable_token3 = 75,
  aux_sym_number_variable_token4 = 76,
  aux_sym_number_variable_token5 = 77,
  aux_sym_edit_mode_variable_token1 = 78,
  aux_sym_keymap_variable_token1 = 79,
  anon_sym_COLON = 80,
  sym_function_name = 81,
  anon_sym_DQUOTE = 82,
  aux_sym__double_quoted_string_token1 = 83,
  aux_sym__quoted_string_token1 = 84,
  aux_sym__quoted_string_token2 = 85,
  sym_escape_sequence = 86,
  anon_sym_DASH = 87,
  aux_sym_symbolic_character_name_token1 = 88,
  aux_sym_symbolic_character_name_token2 = 89,
  aux_sym_symbolic_character_name_token3 = 90,
  aux_sym_symbolic_character_name_token4 = 91,
  aux_sym_symbolic_character_name_token5 = 92,
  aux_sym_symbolic_character_name_token6 = 93,
  aux_sym_symbolic_character_name_token7 = 94,
  aux_sym_symbolic_character_name_token8 = 95,
  aux_sym_symbolic_character_name_token9 = 96,
  aux_sym_symbolic_character_name_token10 = 97,
  aux_sym_symbolic_character_name_token11 = 98,
  aux_sym_symbolic_character_name_token12 = 99,
  sym_key_literal = 100,
  sym_source = 101,
  sym__statement = 102,
  sym_comment = 103,
  sym_conditional_construct = 104,
  sym_test = 105,
  sym__mode_test = 106,
  sym__term_test = 107,
  sym__version_test = 108,
  sym__application_test = 109,
  sym__variable_test = 110,
  sym_include_directive = 111,
  sym_variable_setting = 112,
  sym__bool_assignment = 113,
  sym__bell_assignment = 114,
  sym__string_assignment = 115,
  sym__number_assignment = 116,
  sym__edit_mode_assignment = 117,
  sym__keymap_assignment = 118,
  sym_bool_value = 119,
  sym_bell_value = 120,
  sym_string_value = 121,
  sym_edit_mode_value = 122,
  sym_bool_variable = 123,
  sym_bell_variable = 124,
  sym_string_variable = 125,
  sym_number_variable = 126,
  sym_edit_mode_variable = 127,
  sym_keymap_variable = 128,
  sym_key_binding = 129,
  sym_keyseq = 130,
  sym_macro = 131,
  sym__double_quoted_string = 132,
  sym__quoted_string = 133,
  sym_keyname = 134,
  sym_symbolic_character_name = 135,
  aux_sym_source_repeat1 = 136,
  aux_sym__statement_repeat1 = 137,
  aux_sym__double_quoted_string_repeat1 = 138,
  aux_sym__quoted_string_repeat1 = 139,
  aux_sym_keyname_repeat1 = 140,
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
  [aux_sym__application_test_token1] = "application_name",
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
  [aux_sym__application_test_token1] = aux_sym__application_test_token1,
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
  [aux_sym__application_test_token1] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 8,
  [13] = 11,
  [14] = 9,
  [15] = 6,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 25,
  [29] = 26,
  [30] = 30,
  [31] = 17,
  [32] = 30,
  [33] = 33,
  [34] = 33,
  [35] = 5,
  [36] = 36,
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
  [47] = 39,
  [48] = 40,
  [49] = 46,
  [50] = 42,
  [51] = 44,
  [52] = 37,
  [53] = 45,
  [54] = 43,
  [55] = 36,
  [56] = 41,
  [57] = 38,
  [58] = 5,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 97,
  [102] = 89,
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
  [114] = 96,
  [115] = 115,
  [116] = 116,
  [117] = 95,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 118,
  [126] = 126,
  [127] = 116,
  [128] = 88,
  [129] = 98,
  [130] = 119,
  [131] = 131,
  [132] = 94,
  [133] = 123,
  [134] = 93,
  [135] = 135,
  [136] = 136,
  [137] = 121,
  [138] = 120,
  [139] = 139,
  [140] = 140,
  [141] = 92,
  [142] = 105,
  [143] = 115,
  [144] = 111,
  [145] = 5,
  [146] = 5,
  [147] = 5,
  [148] = 110,
  [149] = 109,
  [150] = 140,
  [151] = 135,
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
  [164] = 158,
  [165] = 165,
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
  [211] = 200,
  [212] = 209,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
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
      if (eof) ADVANCE(116);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(886);
      if (lookahead == '-') ADVANCE(893);
      if (lookahead == '1') ADVANCE(820);
      if (lookahead == ':') ADVANCE(880);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(886);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(881);
      if (lookahead != 0) ADVANCE(886);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(909);
      if (lookahead == 'S') ADVANCE(920);
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(922);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(912);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(917);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead != 0) ADVANCE(906);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '1') ADVANCE(819);
      if (lookahead == ':') ADVANCE(880);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(883);
      if (lookahead == 'v') ADVANCE(882);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(887);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(881);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0) ADVANCE(886);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(893);
      if (lookahead == '1') ADVANCE(819);
      if (lookahead == ':') ADVANCE(880);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(887);
      if (lookahead != 0) ADVANCE(888);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(830);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(831);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(830);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(830);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(891);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(889);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(310);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(582);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(425);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(311);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(327);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(816);
      END_STATE();
    case 59:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(887);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(881);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(895);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(905);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(912);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(906);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(897);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(899);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 79:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 80:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(822);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(896);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(894);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(827);
      END_STATE();
    case 103:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 107:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(903);
      END_STATE();
    case 108:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 110:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(121);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(892);
      END_STATE();
    case 114:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(907);
      if (lookahead == 'S') ADVANCE(920);
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(912);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead != 0) ADVANCE(906);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOLLARif);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOLLARelse);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOLLARendif);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__mode_test_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__term_test_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__version_test_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(675);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(333);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(458);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(246);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(673);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(583);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(586);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(524);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(356);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(634);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(671);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_DOLLARinclude);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keymap_value);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_bell_variable_token1);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_edit_mode_variable_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_keymap_variable_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'i') ADVANCE(831);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(889);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(890);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(889);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(815);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(891);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(889);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 115},
  [7] = {.lex_state = 115},
  [8] = {.lex_state = 115},
  [9] = {.lex_state = 115},
  [10] = {.lex_state = 115},
  [11] = {.lex_state = 115},
  [12] = {.lex_state = 115},
  [13] = {.lex_state = 115},
  [14] = {.lex_state = 115},
  [15] = {.lex_state = 115},
  [16] = {.lex_state = 115},
  [17] = {.lex_state = 115},
  [18] = {.lex_state = 115},
  [19] = {.lex_state = 115},
  [20] = {.lex_state = 115},
  [21] = {.lex_state = 115},
  [22] = {.lex_state = 115},
  [23] = {.lex_state = 115},
  [24] = {.lex_state = 115},
  [25] = {.lex_state = 115},
  [26] = {.lex_state = 115},
  [27] = {.lex_state = 115},
  [28] = {.lex_state = 115},
  [29] = {.lex_state = 115},
  [30] = {.lex_state = 115},
  [31] = {.lex_state = 115},
  [32] = {.lex_state = 115},
  [33] = {.lex_state = 115},
  [34] = {.lex_state = 115},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 115},
  [37] = {.lex_state = 115},
  [38] = {.lex_state = 115},
  [39] = {.lex_state = 115},
  [40] = {.lex_state = 115},
  [41] = {.lex_state = 115},
  [42] = {.lex_state = 115},
  [43] = {.lex_state = 115},
  [44] = {.lex_state = 115},
  [45] = {.lex_state = 115},
  [46] = {.lex_state = 115},
  [47] = {.lex_state = 115},
  [48] = {.lex_state = 115},
  [49] = {.lex_state = 115},
  [50] = {.lex_state = 115},
  [51] = {.lex_state = 115},
  [52] = {.lex_state = 115},
  [53] = {.lex_state = 115},
  [54] = {.lex_state = 115},
  [55] = {.lex_state = 115},
  [56] = {.lex_state = 115},
  [57] = {.lex_state = 115},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 60},
  [78] = {.lex_state = 60},
  [79] = {.lex_state = 60},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 111},
  [83] = {.lex_state = 111},
  [84] = {.lex_state = 111},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 115},
  [88] = {.lex_state = 115},
  [89] = {.lex_state = 115},
  [90] = {.lex_state = 60},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 115},
  [93] = {.lex_state = 115},
  [94] = {.lex_state = 115},
  [95] = {.lex_state = 115},
  [96] = {.lex_state = 115},
  [97] = {.lex_state = 115},
  [98] = {.lex_state = 115},
  [99] = {.lex_state = 60},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 115},
  [102] = {.lex_state = 115},
  [103] = {.lex_state = 115},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 115},
  [106] = {.lex_state = 115},
  [107] = {.lex_state = 115},
  [108] = {.lex_state = 115},
  [109] = {.lex_state = 115},
  [110] = {.lex_state = 115},
  [111] = {.lex_state = 115},
  [112] = {.lex_state = 59},
  [113] = {.lex_state = 60},
  [114] = {.lex_state = 115},
  [115] = {.lex_state = 115},
  [116] = {.lex_state = 115},
  [117] = {.lex_state = 115},
  [118] = {.lex_state = 115},
  [119] = {.lex_state = 115},
  [120] = {.lex_state = 115},
  [121] = {.lex_state = 115},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 115},
  [124] = {.lex_state = 60},
  [125] = {.lex_state = 115},
  [126] = {.lex_state = 27},
  [127] = {.lex_state = 115},
  [128] = {.lex_state = 115},
  [129] = {.lex_state = 115},
  [130] = {.lex_state = 115},
  [131] = {.lex_state = 115},
  [132] = {.lex_state = 115},
  [133] = {.lex_state = 115},
  [134] = {.lex_state = 115},
  [135] = {.lex_state = 115},
  [136] = {.lex_state = 115},
  [137] = {.lex_state = 115},
  [138] = {.lex_state = 115},
  [139] = {.lex_state = 115},
  [140] = {.lex_state = 115},
  [141] = {.lex_state = 115},
  [142] = {.lex_state = 115},
  [143] = {.lex_state = 115},
  [144] = {.lex_state = 115},
  [145] = {.lex_state = 59},
  [146] = {.lex_state = 60},
  [147] = {.lex_state = 111},
  [148] = {.lex_state = 115},
  [149] = {.lex_state = 115},
  [150] = {.lex_state = 115},
  [151] = {.lex_state = 115},
  [152] = {.lex_state = 115},
  [153] = {.lex_state = 115},
  [154] = {.lex_state = 115},
  [155] = {.lex_state = 115},
  [156] = {.lex_state = 115},
  [157] = {.lex_state = 115},
  [158] = {.lex_state = 115},
  [159] = {.lex_state = 115},
  [160] = {.lex_state = 115},
  [161] = {.lex_state = 115},
  [162] = {.lex_state = 115},
  [163] = {.lex_state = 115},
  [164] = {.lex_state = 115},
  [165] = {.lex_state = 115},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 115},
  [168] = {.lex_state = 115},
  [169] = {.lex_state = 115},
  [170] = {.lex_state = 115},
  [171] = {.lex_state = 115},
  [172] = {.lex_state = 115},
  [173] = {.lex_state = 115},
  [174] = {.lex_state = 115},
  [175] = {.lex_state = 115},
  [176] = {.lex_state = 115},
  [177] = {.lex_state = 115},
  [178] = {.lex_state = 115},
  [179] = {.lex_state = 115},
  [180] = {.lex_state = 115},
  [181] = {.lex_state = 115},
  [182] = {.lex_state = 115},
  [183] = {.lex_state = 115},
  [184] = {.lex_state = 115},
  [185] = {.lex_state = 115},
  [186] = {.lex_state = 115},
  [187] = {.lex_state = 115},
  [188] = {.lex_state = 115},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 115},
  [191] = {.lex_state = 115},
  [192] = {.lex_state = 115},
  [193] = {.lex_state = 115},
  [194] = {.lex_state = 115},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 115},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 115},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 115},
  [204] = {.lex_state = 115},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 114},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 115},
  [210] = {.lex_state = 115},
  [211] = {.lex_state = 115},
  [212] = {.lex_state = 115},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 115},
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
    [aux_sym__application_test_token1] = ACTIONS(1),
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
    [sym_source] = STATE(201),
    [sym__statement] = STATE(18),
    [sym_comment] = STATE(200),
    [sym_conditional_construct] = STATE(18),
    [sym_include_directive] = STATE(200),
    [sym_variable_setting] = STATE(105),
    [sym_key_binding] = STATE(105),
    [sym_keyseq] = STATE(198),
    [sym__double_quoted_string] = STATE(199),
    [sym_keyname] = STATE(198),
    [sym_symbolic_character_name] = STATE(196),
    [aux_sym_source_repeat1] = STATE(18),
    [aux_sym__statement_repeat1] = STATE(33),
    [aux_sym_keyname_repeat1] = STATE(59),
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
    [sym__mode_test] = STATE(188),
    [sym__term_test] = STATE(188),
    [sym__version_test] = STATE(188),
    [sym__application_test] = STATE(188),
    [sym__variable_test] = STATE(188),
    [sym_bool_variable] = STATE(168),
    [sym_bell_variable] = STATE(170),
    [sym_string_variable] = STATE(171),
    [sym_number_variable] = STATE(172),
    [sym_edit_mode_variable] = STATE(173),
    [sym_keymap_variable] = STATE(175),
    [aux_sym__statement_repeat1] = STATE(5),
    [aux_sym__statement_token1] = ACTIONS(25),
    [aux_sym__mode_test_token1] = ACTIONS(27),
    [aux_sym__term_test_token1] = ACTIONS(29),
    [aux_sym__version_test_token1] = ACTIONS(31),
    [aux_sym__application_test_token1] = ACTIONS(33),
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
    [sym__mode_test] = STATE(188),
    [sym__term_test] = STATE(188),
    [sym__version_test] = STATE(188),
    [sym__application_test] = STATE(188),
    [sym__variable_test] = STATE(188),
    [sym_bool_variable] = STATE(168),
    [sym_bell_variable] = STATE(170),
    [sym_string_variable] = STATE(171),
    [sym_number_variable] = STATE(172),
    [sym_edit_mode_variable] = STATE(173),
    [sym_keymap_variable] = STATE(175),
    [aux_sym__statement_repeat1] = STATE(5),
    [aux_sym__statement_token1] = ACTIONS(25),
    [aux_sym__mode_test_token1] = ACTIONS(27),
    [aux_sym__term_test_token1] = ACTIONS(29),
    [aux_sym__version_test_token1] = ACTIONS(31),
    [aux_sym__application_test_token1] = ACTIONS(33),
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
  [0] = 15,
    ACTIONS(25), 1,
      aux_sym__statement_token1,
    ACTIONS(37), 1,
      aux_sym_bell_variable_token1,
    ACTIONS(43), 1,
      aux_sym_edit_mode_variable_token1,
    ACTIONS(45), 1,
      aux_sym_keymap_variable_token1,
    STATE(5), 1,
      aux_sym__statement_repeat1,
    STATE(87), 1,
      sym_string_variable,
    STATE(131), 1,
      sym_number_variable,
    STATE(136), 1,
      sym_bell_variable,
    STATE(139), 1,
      sym_bool_variable,
    STATE(180), 1,
      sym_edit_mode_variable,
    STATE(181), 1,
      sym_keymap_variable,
    ACTIONS(41), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(177), 6,
      sym__bool_assignment,
      sym__bell_assignment,
      sym__string_assignment,
      sym__number_assignment,
      sym__edit_mode_assignment,
      sym__keymap_assignment,
    ACTIONS(39), 7,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
    ACTIONS(35), 32,
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
  [92] = 4,
    ACTIONS(47), 1,
      aux_sym__statement_token1,
    ACTIONS(52), 1,
      aux_sym__application_test_token1,
    STATE(5), 1,
      aux_sym__statement_repeat1,
    ACTIONS(50), 50,
      aux_sym__mode_test_token1,
      aux_sym__term_test_token1,
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
  [154] = 19,
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(57), 1,
      aux_sym__statement_token2,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLARif,
    ACTIONS(68), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(71), 1,
      anon_sym_set,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_key_literal,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(66), 2,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
    ACTIONS(80), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(77), 10,
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
  [228] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(92), 1,
      anon_sym_DOLLARelse,
    ACTIONS(94), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [304] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(96), 1,
      aux_sym__statement_token2,
    ACTIONS(98), 1,
      anon_sym_DOLLARelse,
    ACTIONS(100), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [380] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(102), 1,
      aux_sym__statement_token2,
    ACTIONS(104), 1,
      anon_sym_DOLLARelse,
    ACTIONS(106), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [456] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(108), 1,
      anon_sym_DOLLARelse,
    ACTIONS(110), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [532] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(98), 1,
      anon_sym_DOLLARelse,
    ACTIONS(100), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [608] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(112), 1,
      aux_sym__statement_token2,
    ACTIONS(114), 1,
      anon_sym_DOLLARelse,
    ACTIONS(116), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(10), 3,
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
  [684] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(114), 1,
      anon_sym_DOLLARelse,
    ACTIONS(116), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [760] = 20,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(118), 1,
      aux_sym__statement_token2,
    ACTIONS(120), 1,
      anon_sym_DOLLARelse,
    ACTIONS(122), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [836] = 19,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(71), 1,
      anon_sym_set,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_key_literal,
    ACTIONS(124), 1,
      aux_sym__statement_token1,
    ACTIONS(127), 1,
      aux_sym__statement_token2,
    ACTIONS(130), 1,
      anon_sym_DOLLARif,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(80), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(105), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(200), 2,
      sym_comment,
      sym_include_directive,
    STATE(15), 3,
      sym__statement,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    ACTIONS(77), 10,
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
  [909] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(133), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [982] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(135), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [1055] = 19,
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
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      aux_sym__statement_token2,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(105), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(200), 2,
      sym_comment,
      sym_include_directive,
    STATE(15), 3,
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
  [1128] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(110), 1,
      anon_sym_DOLLARendif,
    ACTIONS(141), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [1201] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(143), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [1274] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(133), 1,
      anon_sym_DOLLARendif,
    ACTIONS(145), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [1347] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(143), 1,
      anon_sym_DOLLARendif,
    ACTIONS(147), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(23), 3,
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
  [1420] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(149), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [1493] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(94), 1,
      anon_sym_DOLLARendif,
    ACTIONS(151), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
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
  [1566] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(149), 1,
      anon_sym_DOLLARendif,
    ACTIONS(153), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(26), 3,
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
  [1639] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(155), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [1712] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(157), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [1785] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(157), 1,
      anon_sym_DOLLARendif,
    ACTIONS(159), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [1858] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(161), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [1931] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(161), 1,
      anon_sym_DOLLARendif,
    ACTIONS(163), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [2004] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(88), 1,
      aux_sym__statement_token2,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(165), 1,
      anon_sym_DOLLARendif,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(6), 3,
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
  [2077] = 19,
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
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(155), 1,
      anon_sym_DOLLARendif,
    ACTIONS(167), 1,
      aux_sym__statement_token2,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(142), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(211), 2,
      sym_comment,
      sym_include_directive,
    STATE(17), 3,
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
  [2150] = 18,
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
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(171), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(56), 1,
      sym_conditional_construct,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(151), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
      sym_keyseq,
      sym_keyname,
    STATE(212), 2,
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
  [2218] = 18,
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
    ACTIONS(90), 1,
      anon_sym_DOLLARif,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(173), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(41), 1,
      sym_conditional_construct,
    STATE(59), 1,
      aux_sym_keyname_repeat1,
    STATE(196), 1,
      sym_symbolic_character_name,
    STATE(199), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(135), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(198), 2,
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
  [2286] = 4,
    ACTIONS(175), 1,
      aux_sym__statement_token1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    ACTIONS(52), 4,
      aux_sym_edit_mode_value_token2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(50), 20,
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
  [2321] = 2,
    ACTIONS(180), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(178), 19,
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
  [2348] = 2,
    ACTIONS(184), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(182), 19,
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
  [2375] = 2,
    ACTIONS(188), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(186), 19,
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
  [2402] = 2,
    ACTIONS(192), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(190), 19,
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
  [2429] = 2,
    ACTIONS(196), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(194), 19,
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
  [2456] = 2,
    ACTIONS(200), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(198), 19,
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
  [2483] = 2,
    ACTIONS(204), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(202), 19,
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
  [2510] = 2,
    ACTIONS(208), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(206), 19,
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
  [2537] = 2,
    ACTIONS(212), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(210), 19,
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
  [2564] = 2,
    ACTIONS(216), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(214), 19,
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
  [2591] = 2,
    ACTIONS(220), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(218), 19,
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
  [2618] = 2,
    ACTIONS(192), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(190), 18,
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
  [2644] = 2,
    ACTIONS(196), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(194), 18,
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
  [2670] = 2,
    ACTIONS(220), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(218), 18,
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
  [2696] = 2,
    ACTIONS(204), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(202), 18,
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
  [2722] = 2,
    ACTIONS(212), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(210), 18,
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
  [2748] = 2,
    ACTIONS(184), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(182), 18,
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
  [2774] = 2,
    ACTIONS(216), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(214), 18,
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
  [2800] = 2,
    ACTIONS(208), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(206), 18,
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
  [2826] = 2,
    ACTIONS(180), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(178), 18,
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
  [2852] = 2,
    ACTIONS(200), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(198), 18,
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
  [2878] = 2,
    ACTIONS(188), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(186), 18,
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
  [2904] = 4,
    ACTIONS(222), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(52), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_name,
    ACTIONS(50), 9,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
      sym_keymap_value,
      aux_sym__quoted_string_token1,
  [2928] = 5,
    ACTIONS(225), 1,
      sym_key_literal,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(166), 1,
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
  [2954] = 5,
    ACTIONS(233), 1,
      sym_key_literal,
    STATE(60), 1,
      aux_sym_keyname_repeat1,
    STATE(205), 1,
      sym_symbolic_character_name,
    ACTIONS(230), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(227), 10,
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
  [2980] = 2,
    ACTIONS(233), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(235), 10,
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
  [2998] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(239), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 4,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
  [3016] = 4,
    ACTIONS(243), 1,
      aux_sym__statement_token1,
    STATE(66), 1,
      aux_sym__statement_repeat1,
    STATE(191), 1,
      sym_bool_value,
    ACTIONS(245), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [3031] = 4,
    ACTIONS(247), 1,
      aux_sym__statement_token1,
    STATE(65), 1,
      aux_sym__statement_repeat1,
    STATE(191), 1,
      sym_bell_value,
    ACTIONS(249), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [3046] = 4,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(179), 1,
      sym_bell_value,
    ACTIONS(249), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [3061] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(179), 1,
      sym_bool_value,
    ACTIONS(245), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [3076] = 4,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(186), 1,
      sym_bell_value,
    ACTIONS(249), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [3091] = 6,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(251), 1,
      sym_function_name,
    ACTIONS(253), 1,
      aux_sym__quoted_string_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(156), 1,
      sym__quoted_string,
    STATE(165), 1,
      sym_macro,
  [3110] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(183), 1,
      sym_bool_value,
    ACTIONS(245), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [3125] = 6,
    ACTIONS(253), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(255), 1,
      aux_sym__statement_token1,
    ACTIONS(257), 1,
      sym_function_name,
    STATE(68), 1,
      aux_sym__statement_repeat1,
    STATE(156), 1,
      sym__quoted_string,
    STATE(157), 1,
      sym_macro,
  [3144] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(259), 1,
      anon_sym_EQ,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(261), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3158] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(263), 1,
      anon_sym_EQ,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(265), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3172] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(267), 1,
      anon_sym_EQ,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(269), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3186] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(271), 1,
      anon_sym_EQ,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(273), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3200] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(275), 1,
      anon_sym_EQ,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(277), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3214] = 4,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(279), 1,
      anon_sym_EQ,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(281), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3228] = 4,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(179), 1,
      sym_edit_mode_value,
    ACTIONS(283), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3242] = 4,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(192), 1,
      sym_edit_mode_value,
    ACTIONS(283), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3256] = 4,
    ACTIONS(285), 1,
      aux_sym__statement_token1,
    STATE(77), 1,
      aux_sym__statement_repeat1,
    STATE(191), 1,
      sym_edit_mode_value,
    ACTIONS(283), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3270] = 3,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(289), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [3281] = 3,
    ACTIONS(292), 1,
      aux_sym__quoted_string_token1,
    STATE(81), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(294), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [3292] = 4,
    ACTIONS(297), 1,
      aux_sym__statement_token1,
    ACTIONS(299), 1,
      aux_sym_comment_token2,
    STATE(147), 1,
      aux_sym__statement_repeat1,
    STATE(194), 1,
      sym_string_value,
  [3305] = 4,
    ACTIONS(297), 1,
      aux_sym__statement_token1,
    ACTIONS(299), 1,
      aux_sym_comment_token2,
    STATE(147), 1,
      aux_sym__statement_repeat1,
    STATE(179), 1,
      sym_string_value,
  [3318] = 4,
    ACTIONS(299), 1,
      aux_sym_comment_token2,
    ACTIONS(301), 1,
      aux_sym__statement_token1,
    STATE(83), 1,
      aux_sym__statement_repeat1,
    STATE(191), 1,
      sym_string_value,
  [3331] = 3,
    ACTIONS(303), 1,
      aux_sym__quoted_string_token1,
    STATE(81), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(305), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [3342] = 3,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(309), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [3353] = 3,
    ACTIONS(311), 1,
      aux_sym__statement_token1,
    ACTIONS(313), 1,
      aux_sym__statement_token2,
    STATE(82), 1,
      aux_sym__statement_repeat1,
  [3363] = 3,
    ACTIONS(315), 1,
      aux_sym__statement_token1,
    ACTIONS(317), 1,
      aux_sym__statement_token2,
    STATE(121), 1,
      aux_sym__statement_repeat1,
  [3373] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(319), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3383] = 3,
    ACTIONS(321), 1,
      aux_sym__statement_token1,
    ACTIONS(323), 1,
      sym_number_value,
    STATE(146), 1,
      aux_sym__statement_repeat1,
  [3393] = 3,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(325), 1,
      sym_keymap_value,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [3403] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(327), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3413] = 3,
    ACTIONS(329), 1,
      aux_sym__statement_token1,
    ACTIONS(331), 1,
      aux_sym__statement_token2,
    STATE(92), 1,
      aux_sym__statement_repeat1,
  [3423] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(331), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3433] = 3,
    ACTIONS(333), 1,
      aux_sym__statement_token1,
    ACTIONS(335), 1,
      aux_sym__statement_token2,
    STATE(94), 1,
      aux_sym__statement_repeat1,
  [3443] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(335), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3453] = 3,
    ACTIONS(337), 1,
      aux_sym__statement_token1,
    ACTIONS(339), 1,
      aux_sym__statement_token2,
    STATE(114), 1,
      aux_sym__statement_repeat1,
  [3463] = 3,
    ACTIONS(341), 1,
      aux_sym__statement_token1,
    ACTIONS(343), 1,
      aux_sym__statement_token2,
    STATE(116), 1,
      aux_sym__statement_repeat1,
  [3473] = 3,
    ACTIONS(345), 1,
      aux_sym__statement_token1,
    ACTIONS(347), 1,
      sym_number_value,
    STATE(124), 1,
      aux_sym__statement_repeat1,
  [3483] = 3,
    ACTIONS(347), 1,
      sym_keymap_value,
    ACTIONS(349), 1,
      aux_sym__statement_token1,
    STATE(126), 1,
      aux_sym__statement_repeat1,
  [3493] = 3,
    ACTIONS(351), 1,
      aux_sym__statement_token1,
    ACTIONS(353), 1,
      aux_sym__statement_token2,
    STATE(96), 1,
      aux_sym__statement_repeat1,
  [3503] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(355), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3513] = 3,
    ACTIONS(357), 1,
      aux_sym__statement_token1,
    ACTIONS(359), 1,
      aux_sym__statement_token2,
    STATE(102), 1,
      aux_sym__statement_repeat1,
  [3523] = 2,
    STATE(86), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(361), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [3531] = 3,
    ACTIONS(171), 1,
      aux_sym__statement_token2,
    ACTIONS(363), 1,
      aux_sym__statement_token1,
    STATE(150), 1,
      aux_sym__statement_repeat1,
  [3541] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(365), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3551] = 3,
    ACTIONS(367), 1,
      aux_sym__statement_token1,
    ACTIONS(369), 1,
      aux_sym__statement_token2,
    STATE(106), 1,
      aux_sym__statement_repeat1,
  [3561] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(369), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3571] = 3,
    ACTIONS(371), 1,
      aux_sym__statement_token1,
    ACTIONS(373), 1,
      aux_sym__statement_token2,
    STATE(108), 1,
      aux_sym__statement_repeat1,
  [3581] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(373), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3591] = 3,
    ACTIONS(375), 1,
      aux_sym__statement_token1,
    ACTIONS(377), 1,
      aux_sym__statement_token2,
    STATE(110), 1,
      aux_sym__statement_repeat1,
  [3601] = 3,
    ACTIONS(379), 1,
      aux_sym__statement_token1,
    ACTIONS(381), 1,
      aux_sym__version_test_token2,
    STATE(145), 1,
      aux_sym__statement_repeat1,
  [3611] = 2,
    STATE(169), 1,
      sym_edit_mode_value,
    ACTIONS(283), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [3619] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(383), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3629] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(377), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3639] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(385), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3649] = 3,
    ACTIONS(383), 1,
      aux_sym__statement_token2,
    ACTIONS(387), 1,
      aux_sym__statement_token1,
    STATE(132), 1,
      aux_sym__statement_repeat1,
  [3659] = 3,
    ACTIONS(385), 1,
      aux_sym__statement_token2,
    ACTIONS(389), 1,
      aux_sym__statement_token1,
    STATE(133), 1,
      aux_sym__statement_repeat1,
  [3669] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(391), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3679] = 3,
    ACTIONS(393), 1,
      aux_sym__statement_token1,
    ACTIONS(395), 1,
      aux_sym__statement_token2,
    STATE(115), 1,
      aux_sym__statement_repeat1,
  [3689] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(395), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3699] = 2,
    STATE(85), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(397), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [3707] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(317), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3717] = 3,
    ACTIONS(321), 1,
      aux_sym__statement_token1,
    ACTIONS(399), 1,
      sym_number_value,
    STATE(146), 1,
      aux_sym__statement_repeat1,
  [3727] = 3,
    ACTIONS(401), 1,
      aux_sym__statement_token1,
    ACTIONS(403), 1,
      aux_sym__statement_token2,
    STATE(123), 1,
      aux_sym__statement_repeat1,
  [3737] = 3,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    ACTIONS(399), 1,
      sym_keymap_value,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [3747] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(403), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3757] = 3,
    ACTIONS(405), 1,
      aux_sym__statement_token1,
    ACTIONS(407), 1,
      aux_sym__statement_token2,
    STATE(137), 1,
      aux_sym__statement_repeat1,
  [3767] = 3,
    ACTIONS(409), 1,
      aux_sym__statement_token1,
    ACTIONS(411), 1,
      aux_sym__statement_token2,
    STATE(127), 1,
      aux_sym__statement_repeat1,
  [3777] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(413), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3787] = 3,
    ACTIONS(415), 1,
      aux_sym__statement_token1,
    ACTIONS(417), 1,
      aux_sym__statement_token2,
    STATE(90), 1,
      aux_sym__statement_repeat1,
  [3797] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(419), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3807] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(407), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3817] = 3,
    ACTIONS(419), 1,
      aux_sym__statement_token2,
    ACTIONS(421), 1,
      aux_sym__statement_token1,
    STATE(141), 1,
      aux_sym__statement_repeat1,
  [3827] = 3,
    ACTIONS(423), 1,
      aux_sym__statement_token1,
    ACTIONS(425), 1,
      aux_sym__statement_token2,
    STATE(130), 1,
      aux_sym__statement_repeat1,
  [3837] = 3,
    ACTIONS(427), 1,
      aux_sym__statement_token1,
    ACTIONS(429), 1,
      aux_sym__statement_token2,
    STATE(67), 1,
      aux_sym__statement_repeat1,
  [3847] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(431), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3857] = 3,
    ACTIONS(431), 1,
      aux_sym__statement_token2,
    ACTIONS(433), 1,
      aux_sym__statement_token1,
    STATE(143), 1,
      aux_sym__statement_repeat1,
  [3867] = 3,
    ACTIONS(435), 1,
      aux_sym__statement_token1,
    ACTIONS(437), 1,
      aux_sym__statement_token2,
    STATE(69), 1,
      aux_sym__statement_repeat1,
  [3877] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(425), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3887] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(439), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3897] = 3,
    ACTIONS(173), 1,
      aux_sym__statement_token2,
    ACTIONS(441), 1,
      aux_sym__statement_token1,
    STATE(140), 1,
      aux_sym__statement_repeat1,
  [3907] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(443), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3917] = 3,
    ACTIONS(443), 1,
      aux_sym__statement_token2,
    ACTIONS(445), 1,
      aux_sym__statement_token1,
    STATE(148), 1,
      aux_sym__statement_repeat1,
  [3927] = 3,
    ACTIONS(50), 1,
      aux_sym__version_test_token2,
    ACTIONS(447), 1,
      aux_sym__statement_token1,
    STATE(145), 1,
      aux_sym__statement_repeat1,
  [3937] = 3,
    ACTIONS(50), 1,
      sym_number_value,
    ACTIONS(450), 1,
      aux_sym__statement_token1,
    STATE(146), 1,
      aux_sym__statement_repeat1,
  [3947] = 3,
    ACTIONS(52), 1,
      aux_sym_comment_token2,
    ACTIONS(453), 1,
      aux_sym__statement_token1,
    STATE(147), 1,
      aux_sym__statement_repeat1,
  [3957] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(456), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3967] = 3,
    ACTIONS(456), 1,
      aux_sym__statement_token2,
    ACTIONS(458), 1,
      aux_sym__statement_token1,
    STATE(152), 1,
      aux_sym__statement_repeat1,
  [3977] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [3987] = 3,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
    ACTIONS(462), 1,
      aux_sym__statement_token1,
    STATE(119), 1,
      aux_sym__statement_repeat1,
  [3997] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(464), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [4007] = 3,
    ACTIONS(464), 1,
      aux_sym__statement_token2,
    ACTIONS(466), 1,
      aux_sym__statement_token1,
    STATE(155), 1,
      aux_sym__statement_repeat1,
  [4017] = 3,
    ACTIONS(468), 1,
      aux_sym__statement_token1,
    ACTIONS(470), 1,
      aux_sym__statement_token2,
    STATE(89), 1,
      aux_sym__statement_repeat1,
  [4027] = 3,
    ACTIONS(169), 1,
      aux_sym__statement_token1,
    ACTIONS(472), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [4037] = 1,
    ACTIONS(474), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4042] = 1,
    ACTIONS(476), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4047] = 2,
    ACTIONS(478), 1,
      aux_sym__statement_token1,
    STATE(3), 1,
      aux_sym__statement_repeat1,
  [4054] = 1,
    ACTIONS(480), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4059] = 1,
    ACTIONS(482), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4064] = 1,
    ACTIONS(484), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4069] = 1,
    ACTIONS(486), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4074] = 2,
    ACTIONS(488), 1,
      aux_sym__statement_token1,
    STATE(62), 1,
      aux_sym__statement_repeat1,
  [4081] = 2,
    ACTIONS(490), 1,
      aux_sym__statement_token1,
    STATE(2), 1,
      aux_sym__statement_repeat1,
  [4088] = 1,
    ACTIONS(492), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4093] = 2,
    ACTIONS(494), 1,
      anon_sym_COLON,
    ACTIONS(496), 1,
      anon_sym_DASH,
  [4100] = 1,
    ACTIONS(498), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4105] = 2,
    ACTIONS(500), 1,
      aux_sym__statement_token1,
    STATE(72), 1,
      aux_sym__statement_repeat1,
  [4112] = 1,
    ACTIONS(502), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4117] = 2,
    ACTIONS(504), 1,
      aux_sym__statement_token1,
    STATE(71), 1,
      aux_sym__statement_repeat1,
  [4124] = 2,
    ACTIONS(506), 1,
      aux_sym__statement_token1,
    STATE(73), 1,
      aux_sym__statement_repeat1,
  [4131] = 2,
    ACTIONS(508), 1,
      aux_sym__statement_token1,
    STATE(74), 1,
      aux_sym__statement_repeat1,
  [4138] = 2,
    ACTIONS(510), 1,
      aux_sym__statement_token1,
    STATE(75), 1,
      aux_sym__statement_repeat1,
  [4145] = 1,
    ACTIONS(512), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4150] = 2,
    ACTIONS(514), 1,
      aux_sym__statement_token1,
    STATE(76), 1,
      aux_sym__statement_repeat1,
  [4157] = 2,
    ACTIONS(516), 1,
      aux_sym__statement_token1,
    STATE(112), 1,
      aux_sym__statement_repeat1,
  [4164] = 1,
    ACTIONS(518), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4169] = 1,
    ACTIONS(520), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4174] = 1,
    ACTIONS(522), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4179] = 2,
    ACTIONS(524), 1,
      aux_sym__statement_token1,
    STATE(78), 1,
      aux_sym__statement_repeat1,
  [4186] = 2,
    ACTIONS(526), 1,
      aux_sym__statement_token1,
    STATE(91), 1,
      aux_sym__statement_repeat1,
  [4193] = 1,
    ACTIONS(528), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4198] = 1,
    ACTIONS(530), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4203] = 1,
    ACTIONS(532), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4208] = 2,
    ACTIONS(534), 1,
      aux_sym__statement_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
  [4215] = 1,
    ACTIONS(536), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4220] = 1,
    ACTIONS(538), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4225] = 1,
    ACTIONS(540), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4230] = 2,
    ACTIONS(542), 1,
      aux_sym__statement_token2,
    ACTIONS(544), 1,
      aux_sym_comment_token2,
  [4237] = 1,
    ACTIONS(546), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4242] = 1,
    ACTIONS(548), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4247] = 1,
    ACTIONS(550), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4252] = 1,
    ACTIONS(552), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4257] = 1,
    ACTIONS(554), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4262] = 1,
    ACTIONS(556), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [4267] = 2,
    ACTIONS(496), 1,
      anon_sym_DASH,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [4274] = 1,
    ACTIONS(560), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [4279] = 1,
    ACTIONS(562), 1,
      anon_sym_COLON,
  [4283] = 1,
    ACTIONS(564), 1,
      anon_sym_COLON,
  [4287] = 1,
    ACTIONS(171), 1,
      aux_sym__statement_token2,
  [4291] = 1,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
  [4295] = 1,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [4299] = 1,
    ACTIONS(568), 1,
      aux_sym__statement_token2,
  [4303] = 1,
    ACTIONS(570), 1,
      aux_sym__statement_token1,
  [4307] = 1,
    ACTIONS(496), 1,
      anon_sym_DASH,
  [4311] = 1,
    ACTIONS(572), 1,
      aux_sym_comment_token2,
  [4315] = 1,
    ACTIONS(574), 1,
      aux_sym__term_test_token2,
  [4319] = 1,
    ACTIONS(576), 1,
      anon_sym_COLON,
  [4323] = 1,
    ACTIONS(425), 1,
      aux_sym__statement_token2,
  [4327] = 1,
    ACTIONS(578), 1,
      aux_sym__statement_token2,
  [4331] = 1,
    ACTIONS(173), 1,
      aux_sym__statement_token2,
  [4335] = 1,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
  [4339] = 1,
    ACTIONS(494), 1,
      anon_sym_COLON,
  [4343] = 1,
    ACTIONS(580), 1,
      anon_sym_EQ,
  [4347] = 1,
    ACTIONS(582), 1,
      anon_sym_EQ,
  [4351] = 1,
    ACTIONS(584), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 380,
  [SMALL_STATE(10)] = 456,
  [SMALL_STATE(11)] = 532,
  [SMALL_STATE(12)] = 608,
  [SMALL_STATE(13)] = 684,
  [SMALL_STATE(14)] = 760,
  [SMALL_STATE(15)] = 836,
  [SMALL_STATE(16)] = 909,
  [SMALL_STATE(17)] = 982,
  [SMALL_STATE(18)] = 1055,
  [SMALL_STATE(19)] = 1128,
  [SMALL_STATE(20)] = 1201,
  [SMALL_STATE(21)] = 1274,
  [SMALL_STATE(22)] = 1347,
  [SMALL_STATE(23)] = 1420,
  [SMALL_STATE(24)] = 1493,
  [SMALL_STATE(25)] = 1566,
  [SMALL_STATE(26)] = 1639,
  [SMALL_STATE(27)] = 1712,
  [SMALL_STATE(28)] = 1785,
  [SMALL_STATE(29)] = 1858,
  [SMALL_STATE(30)] = 1931,
  [SMALL_STATE(31)] = 2004,
  [SMALL_STATE(32)] = 2077,
  [SMALL_STATE(33)] = 2150,
  [SMALL_STATE(34)] = 2218,
  [SMALL_STATE(35)] = 2286,
  [SMALL_STATE(36)] = 2321,
  [SMALL_STATE(37)] = 2348,
  [SMALL_STATE(38)] = 2375,
  [SMALL_STATE(39)] = 2402,
  [SMALL_STATE(40)] = 2429,
  [SMALL_STATE(41)] = 2456,
  [SMALL_STATE(42)] = 2483,
  [SMALL_STATE(43)] = 2510,
  [SMALL_STATE(44)] = 2537,
  [SMALL_STATE(45)] = 2564,
  [SMALL_STATE(46)] = 2591,
  [SMALL_STATE(47)] = 2618,
  [SMALL_STATE(48)] = 2644,
  [SMALL_STATE(49)] = 2670,
  [SMALL_STATE(50)] = 2696,
  [SMALL_STATE(51)] = 2722,
  [SMALL_STATE(52)] = 2748,
  [SMALL_STATE(53)] = 2774,
  [SMALL_STATE(54)] = 2800,
  [SMALL_STATE(55)] = 2826,
  [SMALL_STATE(56)] = 2852,
  [SMALL_STATE(57)] = 2878,
  [SMALL_STATE(58)] = 2904,
  [SMALL_STATE(59)] = 2928,
  [SMALL_STATE(60)] = 2954,
  [SMALL_STATE(61)] = 2980,
  [SMALL_STATE(62)] = 2998,
  [SMALL_STATE(63)] = 3016,
  [SMALL_STATE(64)] = 3031,
  [SMALL_STATE(65)] = 3046,
  [SMALL_STATE(66)] = 3061,
  [SMALL_STATE(67)] = 3076,
  [SMALL_STATE(68)] = 3091,
  [SMALL_STATE(69)] = 3110,
  [SMALL_STATE(70)] = 3125,
  [SMALL_STATE(71)] = 3144,
  [SMALL_STATE(72)] = 3158,
  [SMALL_STATE(73)] = 3172,
  [SMALL_STATE(74)] = 3186,
  [SMALL_STATE(75)] = 3200,
  [SMALL_STATE(76)] = 3214,
  [SMALL_STATE(77)] = 3228,
  [SMALL_STATE(78)] = 3242,
  [SMALL_STATE(79)] = 3256,
  [SMALL_STATE(80)] = 3270,
  [SMALL_STATE(81)] = 3281,
  [SMALL_STATE(82)] = 3292,
  [SMALL_STATE(83)] = 3305,
  [SMALL_STATE(84)] = 3318,
  [SMALL_STATE(85)] = 3331,
  [SMALL_STATE(86)] = 3342,
  [SMALL_STATE(87)] = 3353,
  [SMALL_STATE(88)] = 3363,
  [SMALL_STATE(89)] = 3373,
  [SMALL_STATE(90)] = 3383,
  [SMALL_STATE(91)] = 3393,
  [SMALL_STATE(92)] = 3403,
  [SMALL_STATE(93)] = 3413,
  [SMALL_STATE(94)] = 3423,
  [SMALL_STATE(95)] = 3433,
  [SMALL_STATE(96)] = 3443,
  [SMALL_STATE(97)] = 3453,
  [SMALL_STATE(98)] = 3463,
  [SMALL_STATE(99)] = 3473,
  [SMALL_STATE(100)] = 3483,
  [SMALL_STATE(101)] = 3493,
  [SMALL_STATE(102)] = 3503,
  [SMALL_STATE(103)] = 3513,
  [SMALL_STATE(104)] = 3523,
  [SMALL_STATE(105)] = 3531,
  [SMALL_STATE(106)] = 3541,
  [SMALL_STATE(107)] = 3551,
  [SMALL_STATE(108)] = 3561,
  [SMALL_STATE(109)] = 3571,
  [SMALL_STATE(110)] = 3581,
  [SMALL_STATE(111)] = 3591,
  [SMALL_STATE(112)] = 3601,
  [SMALL_STATE(113)] = 3611,
  [SMALL_STATE(114)] = 3619,
  [SMALL_STATE(115)] = 3629,
  [SMALL_STATE(116)] = 3639,
  [SMALL_STATE(117)] = 3649,
  [SMALL_STATE(118)] = 3659,
  [SMALL_STATE(119)] = 3669,
  [SMALL_STATE(120)] = 3679,
  [SMALL_STATE(121)] = 3689,
  [SMALL_STATE(122)] = 3699,
  [SMALL_STATE(123)] = 3707,
  [SMALL_STATE(124)] = 3717,
  [SMALL_STATE(125)] = 3727,
  [SMALL_STATE(126)] = 3737,
  [SMALL_STATE(127)] = 3747,
  [SMALL_STATE(128)] = 3757,
  [SMALL_STATE(129)] = 3767,
  [SMALL_STATE(130)] = 3777,
  [SMALL_STATE(131)] = 3787,
  [SMALL_STATE(132)] = 3797,
  [SMALL_STATE(133)] = 3807,
  [SMALL_STATE(134)] = 3817,
  [SMALL_STATE(135)] = 3827,
  [SMALL_STATE(136)] = 3837,
  [SMALL_STATE(137)] = 3847,
  [SMALL_STATE(138)] = 3857,
  [SMALL_STATE(139)] = 3867,
  [SMALL_STATE(140)] = 3877,
  [SMALL_STATE(141)] = 3887,
  [SMALL_STATE(142)] = 3897,
  [SMALL_STATE(143)] = 3907,
  [SMALL_STATE(144)] = 3917,
  [SMALL_STATE(145)] = 3927,
  [SMALL_STATE(146)] = 3937,
  [SMALL_STATE(147)] = 3947,
  [SMALL_STATE(148)] = 3957,
  [SMALL_STATE(149)] = 3967,
  [SMALL_STATE(150)] = 3977,
  [SMALL_STATE(151)] = 3987,
  [SMALL_STATE(152)] = 3997,
  [SMALL_STATE(153)] = 4007,
  [SMALL_STATE(154)] = 4017,
  [SMALL_STATE(155)] = 4027,
  [SMALL_STATE(156)] = 4037,
  [SMALL_STATE(157)] = 4042,
  [SMALL_STATE(158)] = 4047,
  [SMALL_STATE(159)] = 4054,
  [SMALL_STATE(160)] = 4059,
  [SMALL_STATE(161)] = 4064,
  [SMALL_STATE(162)] = 4069,
  [SMALL_STATE(163)] = 4074,
  [SMALL_STATE(164)] = 4081,
  [SMALL_STATE(165)] = 4088,
  [SMALL_STATE(166)] = 4093,
  [SMALL_STATE(167)] = 4100,
  [SMALL_STATE(168)] = 4105,
  [SMALL_STATE(169)] = 4112,
  [SMALL_STATE(170)] = 4117,
  [SMALL_STATE(171)] = 4124,
  [SMALL_STATE(172)] = 4131,
  [SMALL_STATE(173)] = 4138,
  [SMALL_STATE(174)] = 4145,
  [SMALL_STATE(175)] = 4150,
  [SMALL_STATE(176)] = 4157,
  [SMALL_STATE(177)] = 4164,
  [SMALL_STATE(178)] = 4169,
  [SMALL_STATE(179)] = 4174,
  [SMALL_STATE(180)] = 4179,
  [SMALL_STATE(181)] = 4186,
  [SMALL_STATE(182)] = 4193,
  [SMALL_STATE(183)] = 4198,
  [SMALL_STATE(184)] = 4203,
  [SMALL_STATE(185)] = 4208,
  [SMALL_STATE(186)] = 4215,
  [SMALL_STATE(187)] = 4220,
  [SMALL_STATE(188)] = 4225,
  [SMALL_STATE(189)] = 4230,
  [SMALL_STATE(190)] = 4237,
  [SMALL_STATE(191)] = 4242,
  [SMALL_STATE(192)] = 4247,
  [SMALL_STATE(193)] = 4252,
  [SMALL_STATE(194)] = 4257,
  [SMALL_STATE(195)] = 4262,
  [SMALL_STATE(196)] = 4267,
  [SMALL_STATE(197)] = 4274,
  [SMALL_STATE(198)] = 4279,
  [SMALL_STATE(199)] = 4283,
  [SMALL_STATE(200)] = 4287,
  [SMALL_STATE(201)] = 4291,
  [SMALL_STATE(202)] = 4295,
  [SMALL_STATE(203)] = 4299,
  [SMALL_STATE(204)] = 4303,
  [SMALL_STATE(205)] = 4307,
  [SMALL_STATE(206)] = 4311,
  [SMALL_STATE(207)] = 4315,
  [SMALL_STATE(208)] = 4319,
  [SMALL_STATE(209)] = 4323,
  [SMALL_STATE(210)] = 4327,
  [SMALL_STATE(211)] = 4331,
  [SMALL_STATE(212)] = 4335,
  [SMALL_STATE(213)] = 4339,
  [SMALL_STATE(214)] = 4343,
  [SMALL_STATE(215)] = 4347,
  [SMALL_STATE(216)] = 4351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(189),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(158),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(206),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(185),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(104),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(195),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(195),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(202),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(164),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 12),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 8),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 13),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 11),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 10),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 7),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 9),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(58),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(195),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(195),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(80),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(81),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(145),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(146),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(147),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_variable, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_variable, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mode_test, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_test, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 5),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_test, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [566] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_variable, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_variable, 1),
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
