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
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 1
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_source_token1 = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_DOLLARif = 4,
  anon_sym_DOLLARelse = 5,
  anon_sym_DOLLARendif = 6,
  aux_sym__mode_test_token1 = 7,
  anon_sym_EQ = 8,
  aux_sym__term_test_token1 = 9,
  aux_sym__term_test_token2 = 10,
  aux_sym__version_test_token1 = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  aux_sym__version_test_token2 = 18,
  anon_sym_DOLLARinclude = 19,
  anon_sym_set = 20,
  anon_sym_1 = 21,
  aux_sym_bool_value_token1 = 22,
  aux_sym_bool_value_token2 = 23,
  aux_sym_bell_value_token1 = 24,
  aux_sym_bell_value_token2 = 25,
  aux_sym_bell_value_token3 = 26,
  sym_number_value = 27,
  aux_sym_edit_mode_value_token1 = 28,
  aux_sym_edit_mode_value_token2 = 29,
  sym_keymap_value = 30,
  aux_sym_bool_variable_token1 = 31,
  aux_sym_bool_variable_token2 = 32,
  aux_sym_bool_variable_token3 = 33,
  aux_sym_bool_variable_token4 = 34,
  aux_sym_bool_variable_token5 = 35,
  aux_sym_bool_variable_token6 = 36,
  aux_sym_bool_variable_token7 = 37,
  aux_sym_bool_variable_token8 = 38,
  aux_sym_bool_variable_token9 = 39,
  aux_sym_bool_variable_token10 = 40,
  aux_sym_bool_variable_token11 = 41,
  aux_sym_bool_variable_token12 = 42,
  aux_sym_bool_variable_token13 = 43,
  aux_sym_bool_variable_token14 = 44,
  aux_sym_bool_variable_token15 = 45,
  aux_sym_bool_variable_token16 = 46,
  aux_sym_bool_variable_token17 = 47,
  aux_sym_bool_variable_token18 = 48,
  aux_sym_bool_variable_token19 = 49,
  aux_sym_bool_variable_token20 = 50,
  aux_sym_bool_variable_token21 = 51,
  aux_sym_bool_variable_token22 = 52,
  aux_sym_bool_variable_token23 = 53,
  aux_sym_bool_variable_token24 = 54,
  aux_sym_bool_variable_token25 = 55,
  aux_sym_bool_variable_token26 = 56,
  aux_sym_bool_variable_token27 = 57,
  aux_sym_bool_variable_token28 = 58,
  aux_sym_bool_variable_token29 = 59,
  aux_sym_bool_variable_token30 = 60,
  aux_sym_bool_variable_token31 = 61,
  aux_sym_bool_variable_token32 = 62,
  aux_sym_bell_variable_token1 = 63,
  aux_sym_string_variable_token1 = 64,
  aux_sym_string_variable_token2 = 65,
  aux_sym_string_variable_token3 = 66,
  aux_sym_string_variable_token4 = 67,
  aux_sym_string_variable_token5 = 68,
  aux_sym_string_variable_token6 = 69,
  aux_sym_string_variable_token7 = 70,
  aux_sym_number_variable_token1 = 71,
  aux_sym_number_variable_token2 = 72,
  aux_sym_number_variable_token3 = 73,
  aux_sym_number_variable_token4 = 74,
  aux_sym_number_variable_token5 = 75,
  aux_sym_edit_mode_variable_token1 = 76,
  aux_sym_keymap_variable_token1 = 77,
  anon_sym_COLON = 78,
  sym_function_name = 79,
  anon_sym_DQUOTE = 80,
  aux_sym__double_quoted_string_token1 = 81,
  aux_sym__quoted_string_token1 = 82,
  aux_sym__quoted_string_token2 = 83,
  sym_escape_sequence = 84,
  anon_sym_DASH = 85,
  aux_sym_symbolic_character_name_token1 = 86,
  aux_sym_symbolic_character_name_token2 = 87,
  aux_sym_symbolic_character_name_token3 = 88,
  aux_sym_symbolic_character_name_token4 = 89,
  aux_sym_symbolic_character_name_token5 = 90,
  aux_sym_symbolic_character_name_token6 = 91,
  aux_sym_symbolic_character_name_token7 = 92,
  aux_sym_symbolic_character_name_token8 = 93,
  aux_sym_symbolic_character_name_token9 = 94,
  aux_sym_symbolic_character_name_token10 = 95,
  aux_sym_symbolic_character_name_token11 = 96,
  aux_sym_symbolic_character_name_token12 = 97,
  sym_key_literal = 98,
  sym_source = 99,
  sym_comment = 100,
  sym_conditional_construct = 101,
  sym_test = 102,
  sym__mode_test = 103,
  sym__term_test = 104,
  sym__version_test = 105,
  sym__variable_test = 106,
  sym_include_directive = 107,
  sym_variable_setting = 108,
  sym__bool_assignment = 109,
  sym__bell_assignment = 110,
  sym__string_assignment = 111,
  sym__number_assignment = 112,
  sym__edit_mode_assignment = 113,
  sym__keymap_assignment = 114,
  sym_bool_value = 115,
  sym_bell_value = 116,
  sym_string_value = 117,
  sym_edit_mode_value = 118,
  sym_bool_variable = 119,
  sym_bell_variable = 120,
  sym_string_variable = 121,
  sym_number_variable = 122,
  sym_edit_mode_variable = 123,
  sym_keymap_variable = 124,
  sym_key_binding = 125,
  sym_keyseq = 126,
  sym_macro = 127,
  sym__double_quoted_string = 128,
  sym__quoted_string = 129,
  sym_keyname = 130,
  sym_symbolic_character_name = 131,
  aux_sym_source_repeat1 = 132,
  aux_sym_conditional_construct_repeat1 = 133,
  aux_sym__double_quoted_string_repeat1 = 134,
  aux_sym__quoted_string_repeat1 = 135,
  aux_sym_keyname_repeat1 = 136,
  alias_sym_file_path = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_DOLLARif] = "$if",
  [anon_sym_DOLLARelse] = "$else",
  [anon_sym_DOLLARendif] = "$endif",
  [aux_sym__mode_test_token1] = "mode",
  [anon_sym_EQ] = "=",
  [aux_sym__term_test_token1] = "term",
  [aux_sym__term_test_token2] = "_term_test_token2",
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
  [sym_comment] = "comment",
  [sym_conditional_construct] = "conditional_construct",
  [sym_test] = "test",
  [sym__mode_test] = "_mode_test",
  [sym__term_test] = "_term_test",
  [sym__version_test] = "_version_test",
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
  [aux_sym_conditional_construct_repeat1] = "conditional_construct_repeat1",
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym_keyname_repeat1] = "keyname_repeat1",
  [alias_sym_file_path] = "file_path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
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
  [sym_comment] = sym_comment,
  [sym_conditional_construct] = sym_conditional_construct,
  [sym_test] = sym_test,
  [sym__mode_test] = sym__mode_test,
  [sym__term_test] = sym__term_test,
  [sym__version_test] = sym__version_test,
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
  [aux_sym_conditional_construct_repeat1] = aux_sym_conditional_construct_repeat1,
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
    .visible = false,
    .named = false,
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
  [aux_sym_conditional_construct_repeat1] = {
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 31,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 42,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 46,
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
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
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
      if (eof) ADVANCE(810);
      if (lookahead == '!') ADVANCE(947);
      if (lookahead == '"') ADVANCE(923);
      if (lookahead == '#') ADVANCE(814);
      if (lookahead == '$') ADVANCE(948);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead == '-') ADVANCE(933);
      if (lookahead == '1') ADVANCE(837);
      if (lookahead == ':') ADVANCE(901);
      if (lookahead == '<') ADVANCE(832);
      if (lookahead == '=') ADVANCE(823);
      if (lookahead == '>') ADVANCE(831);
      if (lookahead == 'E') ADVANCE(908);
      if (lookahead == 'S') ADVANCE(919);
      if (lookahead == 'V') ADVANCE(910);
      if (lookahead == '\\') ADVANCE(950);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == 's') ADVANCE(905);
      if (lookahead == 'v') ADVANCE(903);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(909);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(911);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(922);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(915);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(920);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(921);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(912);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(906);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(917);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(907);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(902);
      if (lookahead != 0) ADVANCE(946);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(409);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0) ADVANCE(817);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '-') ADVANCE(933);
      if (lookahead == '1') ADVANCE(836);
      if (lookahead == ':') ADVANCE(901);
      if (lookahead == '<') ADVANCE(832);
      if (lookahead == '=') ADVANCE(823);
      if (lookahead == '>') ADVANCE(831);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(558);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(381);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(257);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '=') ADVANCE(823);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '=') ADVANCE(823);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(807);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(923);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(924);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(430);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(370);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(785);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(494);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(724);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(696);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(690);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(744);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(738);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(413);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(689);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(496);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(691);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(439);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(497);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(728);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(250);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(692);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(731);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(464);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(215);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(505);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(475);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(700);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(701);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(511);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(512);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(512);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == '=') ADVANCE(830);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(822);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(500);
      if (lookahead == 'I') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(672);
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'M') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(706);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(847);
      if (lookahead == 's') ADVANCE(846);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(927);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(818);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(820);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(853);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(103);
      END_STATE();
    case 135:
      if (lookahead == 'x') ADVANCE(808);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(931);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(929);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(851);
      END_STATE();
    case 137:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(816);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(137)
      if (lookahead != 0) ADVANCE(817);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(902);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(935);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(945);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(653);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(281);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(487);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 172:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 183:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(577);
      END_STATE();
    case 184:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(450);
      END_STATE();
    case 185:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      END_STATE();
    case 186:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(393);
      END_STATE();
    case 187:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 188:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(453);
      END_STATE();
    case 189:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(454);
      END_STATE();
    case 190:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(485);
      END_STATE();
    case 191:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(606);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(937);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(956);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(958);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(955);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(953);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(957);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (lookahead != 0) ADVANCE(946);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(500);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 203:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 204:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 205:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 206:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(685);
      END_STATE();
    case 207:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 208:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 209:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 210:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 211:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 212:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 213:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 214:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(583);
      END_STATE();
    case 215:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 216:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 217:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      END_STATE();
    case 218:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 219:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(598);
      END_STATE();
    case 220:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(599);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(753);
      END_STATE();
    case 221:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      END_STATE();
    case 222:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 223:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(939);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(865);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(882);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(414);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(576);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(794);
      END_STATE();
    case 230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(651);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(775);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 240:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 241:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 242:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 243:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 244:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 245:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 246:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 247:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 248:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 249:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 250:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 251:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 253:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 254:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 323:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 325:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 329:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 334:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 338:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 341:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 342:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      END_STATE();
    case 343:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(839);
      END_STATE();
    case 344:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 345:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(425);
      END_STATE();
    case 346:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(379);
      END_STATE();
    case 347:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(387);
      END_STATE();
    case 348:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(389);
      END_STATE();
    case 349:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 350:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(457);
      END_STATE();
    case 351:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      END_STATE();
    case 352:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(890);
      END_STATE();
    case 353:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(892);
      END_STATE();
    case 354:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(893);
      END_STATE();
    case 355:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(876);
      END_STATE();
    case 356:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 357:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(772);
      END_STATE();
    case 358:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(554);
      END_STATE();
    case 359:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 360:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(720);
      END_STATE();
    case 361:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(415);
      END_STATE();
    case 362:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 363:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(424);
      END_STATE();
    case 364:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 365:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(384);
      END_STATE();
    case 366:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(894);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(895);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(391);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 372:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 373:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 374:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(601);
      END_STATE();
    case 375:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(787);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 419:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 421:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 422:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 423:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 425:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 427:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 428:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 429:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 430:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 431:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 432:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 433:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 434:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 435:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 436:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 437:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 438:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 439:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 440:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 441:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(323);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(491);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(491);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 474:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 475:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 476:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 477:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 478:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 479:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 480:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 481:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 482:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 483:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 485:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 486:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(824);
      END_STATE();
    case 487:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 488:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 489:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(618);
      END_STATE();
    case 490:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 491:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(451);
      END_STATE();
    case 492:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 493:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 494:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 495:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      END_STATE();
    case 496:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 497:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 498:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 499:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 500:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 501:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 502:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 503:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      END_STATE();
    case 504:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 505:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      END_STATE();
    case 506:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 507:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(621);
      END_STATE();
    case 508:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(623);
      END_STATE();
    case 509:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(625);
      END_STATE();
    case 510:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 511:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(602);
      END_STATE();
    case 512:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(942);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(861);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(855);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(765);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 537:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 538:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 539:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 540:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 541:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 542:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 543:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 544:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 545:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 546:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 547:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 548:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 549:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 550:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 551:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 552:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 553:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 554:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 555:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(773);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 577:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 581:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 582:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(774);
      END_STATE();
    case 583:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 584:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 585:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 586:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 587:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 588:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 589:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 590:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 591:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 592:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 593:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 594:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 595:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 596:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 597:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 598:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 599:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 600:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 601:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 602:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 603:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 604:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(770);
      END_STATE();
    case 605:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(900);
      END_STATE();
    case 606:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 607:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 608:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 609:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 610:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(592);
      END_STATE();
    case 611:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 612:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(711);
      END_STATE();
    case 613:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 614:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 615:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(643);
      END_STATE();
    case 616:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 617:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 618:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 619:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(462);
      END_STATE();
    case 620:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 621:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 622:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(666);
      END_STATE();
    case 623:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 624:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(668);
      END_STATE();
    case 625:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 626:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(483);
      END_STATE();
    case 627:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(776);
      END_STATE();
    case 628:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 629:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 630:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(58);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(887);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(888);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 657:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 661:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 662:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 663:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 664:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 665:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 666:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 667:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 668:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 669:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 670:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 671:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 672:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(847);
      END_STATE();
    case 673:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(885);
      END_STATE();
    case 674:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(857);
      END_STATE();
    case 675:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(871);
      END_STATE();
    case 676:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(878);
      END_STATE();
    case 677:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(874);
      END_STATE();
    case 678:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(891);
      END_STATE();
    case 679:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(872);
      END_STATE();
    case 680:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(881);
      END_STATE();
    case 681:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(854);
      END_STATE();
    case 682:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(896);
      END_STATE();
    case 683:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      END_STATE();
    case 684:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
      END_STATE();
    case 685:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(845);
      END_STATE();
    case 686:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      END_STATE();
    case 687:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(390);
      END_STATE();
    case 688:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(608);
      END_STATE();
    case 689:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(714);
      END_STATE();
    case 690:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 691:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      END_STATE();
    case 692:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      END_STATE();
    case 693:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 694:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 695:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 696:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 697:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      END_STATE();
    case 698:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(741);
      END_STATE();
    case 699:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 700:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(761);
      END_STATE();
    case 701:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(763);
      END_STATE();
    case 702:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 703:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      END_STATE();
    case 704:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      END_STATE();
    case 705:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 706:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(941);
      END_STATE();
    case 708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(941);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(943);
      END_STATE();
    case 710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(898);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      END_STATE();
    case 712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(884);
      END_STATE();
    case 713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(868);
      END_STATE();
    case 714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(801);
      END_STATE();
    case 715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      END_STATE();
    case 725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(673);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(674);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(796);
      END_STATE();
    case 743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      END_STATE();
    case 744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      END_STATE();
    case 746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      END_STATE();
    case 750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      END_STATE();
    case 751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      END_STATE();
    case 752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      END_STATE();
    case 756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      END_STATE();
    case 757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      END_STATE();
    case 758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(423);
      END_STATE();
    case 759:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      END_STATE();
    case 760:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      END_STATE();
    case 761:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(662);
      END_STATE();
    case 762:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      END_STATE();
    case 763:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      END_STATE();
    case 764:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 765:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 766:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      END_STATE();
    case 767:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 768:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      END_STATE();
    case 769:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 770:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(722);
      END_STATE();
    case 771:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(709);
      END_STATE();
    case 772:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 773:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(680);
      END_STATE();
    case 774:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(710);
      END_STATE();
    case 775:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 776:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(748);
      END_STATE();
    case 777:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 778:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 779:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 780:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(308);
      END_STATE();
    case 781:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 782:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 783:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 784:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(449);
      END_STATE();
    case 785:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(395);
      END_STATE();
    case 786:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(478);
      END_STATE();
    case 787:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(856);
      END_STATE();
    case 788:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(875);
      END_STATE();
    case 789:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(712);
      END_STATE();
    case 790:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 791:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(488);
      END_STATE();
    case 792:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(866);
      END_STATE();
    case 793:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(879);
      END_STATE();
    case 794:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(492);
      END_STATE();
    case 795:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 796:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 797:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 798:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 799:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 800:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(609);
      END_STATE();
    case 801:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(460);
      END_STATE();
    case 802:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 803:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(579);
      END_STATE();
    case 804:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(269);
      END_STATE();
    case 805:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(588);
      END_STATE();
    case 806:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(806)
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 807:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      END_STATE();
    case 808:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(932);
      END_STATE();
    case 809:
      if (eof) ADVANCE(810);
      if (lookahead == '"') ADVANCE(923);
      if (lookahead == '#') ADVANCE(814);
      if (lookahead == '$') ADVANCE(948);
      if (lookahead == 'S') ADVANCE(957);
      if (lookahead == 's') ADVANCE(949);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(956);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(958);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(955);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(953);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(809)
      if (lookahead != 0) ADVANCE(946);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0) ADVANCE(817);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(817);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_DOLLARif);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_DOLLARelse);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_DOLLARendif);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__mode_test_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(827);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__term_test_token1);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__version_test_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(828);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(829);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_DOLLARinclude);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      if (lookahead == '-') ADVANCE(691);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_keymap_value);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_bell_variable_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_edit_mode_variable_token1);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_keymap_variable_token1);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I') ADVANCE(849);
      if (lookahead == 'i') ADVANCE(850);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(606);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(384);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(606);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(716);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(384);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(924);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(927);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(929);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(930);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(929);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == '=') ADVANCE(830);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(808);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(931);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(929);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 809},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 809},
  [5] = {.lex_state = 809},
  [6] = {.lex_state = 809},
  [7] = {.lex_state = 809},
  [8] = {.lex_state = 809},
  [9] = {.lex_state = 809},
  [10] = {.lex_state = 809},
  [11] = {.lex_state = 809},
  [12] = {.lex_state = 809},
  [13] = {.lex_state = 809},
  [14] = {.lex_state = 809},
  [15] = {.lex_state = 809},
  [16] = {.lex_state = 809},
  [17] = {.lex_state = 809},
  [18] = {.lex_state = 809},
  [19] = {.lex_state = 809},
  [20] = {.lex_state = 195},
  [21] = {.lex_state = 195},
  [22] = {.lex_state = 195},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 79},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 138},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 137},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 806},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 137},
  [86] = {.lex_state = 79},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 79},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 79},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_DOLLARif] = ACTIONS(1),
    [anon_sym_DOLLARelse] = ACTIONS(1),
    [anon_sym_DOLLARendif] = ACTIONS(1),
    [aux_sym__mode_test_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__term_test_token1] = ACTIONS(1),
    [aux_sym__version_test_token1] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym__version_test_token2] = ACTIONS(1),
    [anon_sym_DOLLARinclude] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [aux_sym_bool_value_token1] = ACTIONS(1),
    [aux_sym_bool_value_token2] = ACTIONS(1),
    [aux_sym_bell_value_token1] = ACTIONS(1),
    [aux_sym_bell_value_token2] = ACTIONS(1),
    [aux_sym_bell_value_token3] = ACTIONS(1),
    [aux_sym_edit_mode_value_token1] = ACTIONS(1),
    [aux_sym_edit_mode_value_token2] = ACTIONS(1),
    [sym_keymap_value] = ACTIONS(1),
    [aux_sym_bool_variable_token1] = ACTIONS(1),
    [aux_sym_bool_variable_token2] = ACTIONS(1),
    [aux_sym_bool_variable_token3] = ACTIONS(1),
    [aux_sym_bool_variable_token4] = ACTIONS(1),
    [aux_sym_bool_variable_token5] = ACTIONS(1),
    [aux_sym_bool_variable_token6] = ACTIONS(1),
    [aux_sym_bool_variable_token7] = ACTIONS(1),
    [aux_sym_bool_variable_token8] = ACTIONS(1),
    [aux_sym_bool_variable_token9] = ACTIONS(1),
    [aux_sym_bool_variable_token10] = ACTIONS(1),
    [aux_sym_bool_variable_token11] = ACTIONS(1),
    [aux_sym_bool_variable_token12] = ACTIONS(1),
    [aux_sym_bool_variable_token13] = ACTIONS(1),
    [aux_sym_bool_variable_token14] = ACTIONS(1),
    [aux_sym_bool_variable_token15] = ACTIONS(1),
    [aux_sym_bool_variable_token16] = ACTIONS(1),
    [aux_sym_bool_variable_token17] = ACTIONS(1),
    [aux_sym_bool_variable_token18] = ACTIONS(1),
    [aux_sym_bool_variable_token19] = ACTIONS(1),
    [aux_sym_bool_variable_token20] = ACTIONS(1),
    [aux_sym_bool_variable_token21] = ACTIONS(1),
    [aux_sym_bool_variable_token22] = ACTIONS(1),
    [aux_sym_bool_variable_token24] = ACTIONS(1),
    [aux_sym_bool_variable_token25] = ACTIONS(1),
    [aux_sym_bool_variable_token26] = ACTIONS(1),
    [aux_sym_bool_variable_token27] = ACTIONS(1),
    [aux_sym_bool_variable_token28] = ACTIONS(1),
    [aux_sym_bool_variable_token29] = ACTIONS(1),
    [aux_sym_bool_variable_token30] = ACTIONS(1),
    [aux_sym_bool_variable_token31] = ACTIONS(1),
    [aux_sym_bool_variable_token32] = ACTIONS(1),
    [aux_sym_bell_variable_token1] = ACTIONS(1),
    [aux_sym_string_variable_token1] = ACTIONS(1),
    [aux_sym_string_variable_token2] = ACTIONS(1),
    [aux_sym_string_variable_token3] = ACTIONS(1),
    [aux_sym_string_variable_token4] = ACTIONS(1),
    [aux_sym_string_variable_token5] = ACTIONS(1),
    [aux_sym_string_variable_token6] = ACTIONS(1),
    [aux_sym_string_variable_token7] = ACTIONS(1),
    [aux_sym_number_variable_token1] = ACTIONS(1),
    [aux_sym_number_variable_token2] = ACTIONS(1),
    [aux_sym_number_variable_token3] = ACTIONS(1),
    [aux_sym_number_variable_token4] = ACTIONS(1),
    [aux_sym_number_variable_token5] = ACTIONS(1),
    [aux_sym_edit_mode_variable_token1] = ACTIONS(1),
    [aux_sym_keymap_variable_token1] = ACTIONS(1),
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
    [sym_source] = STATE(105),
    [sym_comment] = STATE(104),
    [sym_conditional_construct] = STATE(5),
    [sym_include_directive] = STATE(104),
    [sym_variable_setting] = STATE(104),
    [sym_key_binding] = STATE(104),
    [sym_keyseq] = STATE(103),
    [sym__double_quoted_string] = STATE(102),
    [sym_keyname] = STATE(103),
    [sym_symbolic_character_name] = STATE(59),
    [aux_sym_source_repeat1] = STATE(5),
    [aux_sym_keyname_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_DOLLARif] = ACTIONS(7),
    [anon_sym_DOLLARinclude] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(17),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(17),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(15),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(15),
    [sym_key_literal] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(21), 1,
      aux_sym__mode_test_token1,
    ACTIONS(23), 1,
      aux_sym__term_test_token1,
    ACTIONS(25), 1,
      aux_sym__version_test_token1,
    ACTIONS(29), 1,
      aux_sym_bell_variable_token1,
    ACTIONS(35), 1,
      aux_sym_edit_mode_variable_token1,
    ACTIONS(37), 1,
      aux_sym_keymap_variable_token1,
    STATE(38), 1,
      sym_bool_variable,
    STATE(44), 1,
      sym_keymap_variable,
    STATE(45), 1,
      sym_edit_mode_variable,
    STATE(47), 1,
      sym_number_variable,
    STATE(49), 1,
      sym_string_variable,
    STATE(52), 1,
      sym_bell_variable,
    STATE(96), 1,
      sym_test,
    STATE(95), 4,
      sym__mode_test,
      sym__term_test,
      sym__version_test,
      sym__variable_test,
    ACTIONS(33), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    ACTIONS(31), 7,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
    ACTIONS(27), 32,
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
  [96] = 13,
    ACTIONS(35), 1,
      aux_sym_edit_mode_variable_token1,
    ACTIONS(37), 1,
      aux_sym_keymap_variable_token1,
    ACTIONS(41), 1,
      aux_sym_bell_variable_token1,
    STATE(24), 1,
      sym_bell_variable,
    STATE(26), 1,
      sym_bool_variable,
    STATE(40), 1,
      sym_edit_mode_variable,
    STATE(43), 1,
      sym_string_variable,
    STATE(57), 1,
      sym_number_variable,
    STATE(90), 1,
      sym_keymap_variable,
    ACTIONS(45), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(92), 6,
      sym__bool_assignment,
      sym__bell_assignment,
      sym__string_assignment,
      sym__number_assignment,
      sym__edit_mode_assignment,
      sym__keymap_assignment,
    ACTIONS(43), 7,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
    ACTIONS(39), 32,
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
  [182] = 15,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      anon_sym_DOLLARif,
    ACTIONS(55), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(58), 1,
      anon_sym_set,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      sym_key_literal,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(67), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(4), 2,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(104), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(64), 10,
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
  [243] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_DOLLARif,
    ACTIONS(9), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_key_literal,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(4), 2,
      sym_conditional_construct,
      aux_sym_source_repeat1,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(104), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(15), 10,
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
  [304] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_key_literal,
    ACTIONS(75), 1,
      anon_sym_DOLLARelse,
    ACTIONS(77), 1,
      anon_sym_DOLLARendif,
    STATE(8), 1,
      aux_sym_conditional_construct_repeat1,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(81), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(15), 10,
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
  [364] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_key_literal,
    ACTIONS(79), 1,
      anon_sym_DOLLARelse,
    ACTIONS(81), 1,
      anon_sym_DOLLARendif,
    STATE(6), 1,
      aux_sym_conditional_construct_repeat1,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(81), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(15), 10,
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
  [424] = 14,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(88), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(91), 1,
      anon_sym_set,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_key_literal,
    STATE(8), 1,
      aux_sym_conditional_construct_repeat1,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(86), 2,
      anon_sym_DOLLARelse,
      anon_sym_DOLLARendif,
    ACTIONS(100), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(81), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(97), 10,
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
  [482] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_key_literal,
    ACTIONS(106), 1,
      anon_sym_DOLLARendif,
    STATE(12), 1,
      aux_sym_conditional_construct_repeat1,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(81), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(15), 10,
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
  [539] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_key_literal,
    ACTIONS(108), 1,
      anon_sym_DOLLARendif,
    STATE(11), 1,
      aux_sym_conditional_construct_repeat1,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(81), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(15), 10,
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
  [596] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_key_literal,
    ACTIONS(110), 1,
      anon_sym_DOLLARendif,
    STATE(8), 1,
      aux_sym_conditional_construct_repeat1,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(81), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(15), 10,
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
  [653] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLARinclude,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_key_literal,
    ACTIONS(108), 1,
      anon_sym_DOLLARendif,
    STATE(8), 1,
      aux_sym_conditional_construct_repeat1,
    STATE(21), 1,
      aux_sym_keyname_repeat1,
    STATE(59), 1,
      sym_symbolic_character_name,
    STATE(102), 1,
      sym__double_quoted_string,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(103), 2,
      sym_keyseq,
      sym_keyname,
    STATE(81), 4,
      sym_comment,
      sym_include_directive,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(15), 10,
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
  [710] = 2,
    ACTIONS(114), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(112), 16,
      ts_builtin_sym_end,
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
  [734] = 2,
    ACTIONS(118), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
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
  [758] = 2,
    ACTIONS(122), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
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
  [782] = 2,
    ACTIONS(124), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(47), 16,
      ts_builtin_sym_end,
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
  [806] = 2,
    ACTIONS(128), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(126), 16,
      ts_builtin_sym_end,
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
  [830] = 2,
    ACTIONS(132), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
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
  [854] = 2,
    ACTIONS(134), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(86), 16,
      aux_sym_comment_token1,
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
  [878] = 5,
    ACTIONS(142), 1,
      sym_key_literal,
    STATE(20), 1,
      aux_sym_keyname_repeat1,
    STATE(75), 1,
      sym_symbolic_character_name,
    ACTIONS(139), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(136), 10,
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
  [904] = 5,
    ACTIONS(144), 1,
      sym_key_literal,
    STATE(20), 1,
      aux_sym_keyname_repeat1,
    STATE(58), 1,
      sym_symbolic_character_name,
    ACTIONS(17), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(15), 10,
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
  [930] = 2,
    ACTIONS(142), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(146), 10,
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
  [948] = 2,
    ACTIONS(148), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
  [960] = 3,
    ACTIONS(152), 1,
      aux_sym_source_token1,
    STATE(63), 1,
      sym_bell_value,
    ACTIONS(154), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [972] = 2,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(158), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [982] = 3,
    ACTIONS(160), 1,
      aux_sym_source_token1,
    STATE(84), 1,
      sym_bool_value,
    ACTIONS(162), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [994] = 4,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(169), 1,
      sym_escape_sequence,
    STATE(27), 1,
      aux_sym__double_quoted_string_repeat1,
  [1007] = 2,
    STATE(83), 1,
      sym_bell_value,
    ACTIONS(172), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [1016] = 2,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(176), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_keymap_value,
  [1025] = 2,
    STATE(83), 1,
      sym_bool_value,
    ACTIONS(178), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [1034] = 2,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [1043] = 2,
    ACTIONS(184), 1,
      aux_sym_source_token1,
    ACTIONS(186), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [1052] = 4,
    ACTIONS(188), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(190), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(192), 1,
      sym_escape_sequence,
    STATE(35), 1,
      aux_sym__quoted_string_repeat1,
  [1065] = 4,
    ACTIONS(194), 1,
      sym_function_name,
    ACTIONS(196), 1,
      aux_sym__quoted_string_token1,
    STATE(72), 1,
      sym_macro,
    STATE(74), 1,
      sym__quoted_string,
  [1078] = 4,
    ACTIONS(198), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(200), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(203), 1,
      sym_escape_sequence,
    STATE(35), 1,
      aux_sym__quoted_string_repeat1,
  [1091] = 4,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(210), 1,
      sym_escape_sequence,
    STATE(27), 1,
      aux_sym__double_quoted_string_repeat1,
  [1104] = 2,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1112] = 2,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1120] = 3,
    ACTIONS(216), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(218), 1,
      sym_escape_sequence,
    STATE(33), 1,
      aux_sym__quoted_string_repeat1,
  [1130] = 2,
    STATE(68), 1,
      sym_edit_mode_value,
    ACTIONS(220), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [1138] = 2,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(180), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1146] = 2,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1154] = 3,
    ACTIONS(226), 1,
      aux_sym_source_token1,
    ACTIONS(228), 1,
      aux_sym_comment_token2,
    STATE(65), 1,
      sym_string_value,
  [1164] = 2,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(232), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1172] = 2,
    ACTIONS(234), 1,
      anon_sym_EQ,
    ACTIONS(236), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1180] = 2,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(240), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1188] = 2,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1196] = 2,
    STATE(83), 1,
      sym_edit_mode_value,
    ACTIONS(220), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [1204] = 2,
    ACTIONS(246), 1,
      anon_sym_EQ,
    ACTIONS(248), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1212] = 2,
    STATE(76), 1,
      sym_edit_mode_value,
    ACTIONS(220), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [1220] = 3,
    ACTIONS(250), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(252), 1,
      sym_escape_sequence,
    STATE(36), 1,
      aux_sym__double_quoted_string_repeat1,
  [1230] = 2,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(256), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1238] = 2,
    ACTIONS(258), 1,
      aux_sym_source_token1,
    ACTIONS(260), 1,
      aux_sym_comment_token2,
  [1245] = 1,
    ACTIONS(262), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [1250] = 1,
    ACTIONS(222), 2,
      aux_sym_source_token1,
      aux_sym_comment_token2,
  [1255] = 2,
    ACTIONS(264), 1,
      aux_sym_comment_token2,
    STATE(83), 1,
      sym_string_value,
  [1262] = 2,
    ACTIONS(266), 1,
      aux_sym_source_token1,
    ACTIONS(268), 1,
      sym_number_value,
  [1269] = 2,
    ACTIONS(270), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      anon_sym_DASH,
  [1276] = 2,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [1283] = 2,
    ACTIONS(238), 1,
      sym_number_value,
    ACTIONS(240), 1,
      aux_sym_source_token1,
  [1290] = 1,
    ACTIONS(276), 1,
      aux_sym__term_test_token2,
  [1294] = 1,
    ACTIONS(278), 1,
      aux_sym_source_token1,
  [1298] = 1,
    ACTIONS(280), 1,
      aux_sym_source_token1,
  [1302] = 1,
    ACTIONS(282), 1,
      aux_sym_source_token1,
  [1306] = 1,
    ACTIONS(284), 1,
      aux_sym_source_token1,
  [1310] = 1,
    ACTIONS(286), 1,
      aux_sym_source_token1,
  [1314] = 1,
    ACTIONS(288), 1,
      aux_sym_source_token1,
  [1318] = 1,
    ACTIONS(290), 1,
      aux_sym_source_token1,
  [1322] = 1,
    ACTIONS(292), 1,
      aux_sym_source_token1,
  [1326] = 1,
    ACTIONS(294), 1,
      anon_sym_COLON,
  [1330] = 1,
    ACTIONS(296), 1,
      sym_number_value,
  [1334] = 1,
    ACTIONS(298), 1,
      aux_sym_source_token1,
  [1338] = 1,
    ACTIONS(296), 1,
      sym_keymap_value,
  [1342] = 1,
    ACTIONS(300), 1,
      aux_sym_source_token1,
  [1346] = 1,
    ACTIONS(272), 1,
      anon_sym_DASH,
  [1350] = 1,
    ACTIONS(302), 1,
      aux_sym_source_token1,
  [1354] = 1,
    ACTIONS(304), 1,
      aux_sym_source_token1,
  [1358] = 1,
    ACTIONS(306), 1,
      aux_sym_source_token1,
  [1362] = 1,
    ACTIONS(308), 1,
      aux_sym_source_token1,
  [1366] = 1,
    ACTIONS(310), 1,
      aux_sym_source_token1,
  [1370] = 1,
    ACTIONS(312), 1,
      aux_sym_source_token1,
  [1374] = 1,
    ACTIONS(314), 1,
      aux_sym_source_token1,
  [1378] = 1,
    ACTIONS(316), 1,
      aux_sym_source_token1,
  [1382] = 1,
    ACTIONS(318), 1,
      aux_sym_source_token1,
  [1386] = 1,
    ACTIONS(320), 1,
      aux_sym_comment_token2,
  [1390] = 1,
    ACTIONS(322), 1,
      aux_sym__version_test_token2,
  [1394] = 1,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [1398] = 1,
    ACTIONS(324), 1,
      aux_sym_source_token1,
  [1402] = 1,
    ACTIONS(326), 1,
      aux_sym_source_token1,
  [1406] = 1,
    ACTIONS(328), 1,
      sym_keymap_value,
  [1410] = 1,
    ACTIONS(330), 1,
      aux_sym_source_token1,
  [1414] = 1,
    ACTIONS(332), 1,
      aux_sym_source_token1,
  [1418] = 1,
    ACTIONS(334), 1,
      aux_sym_source_token1,
  [1422] = 1,
    ACTIONS(336), 1,
      aux_sym_source_token1,
  [1426] = 1,
    ACTIONS(338), 1,
      aux_sym_source_token1,
  [1430] = 1,
    ACTIONS(340), 1,
      aux_sym_source_token1,
  [1434] = 1,
    ACTIONS(342), 1,
      anon_sym_EQ,
  [1438] = 1,
    ACTIONS(344), 1,
      aux_sym_source_token1,
  [1442] = 1,
    ACTIONS(346), 1,
      anon_sym_EQ,
  [1446] = 1,
    ACTIONS(348), 1,
      aux_sym_source_token1,
  [1450] = 1,
    ACTIONS(350), 1,
      aux_sym_source_token1,
  [1454] = 1,
    ACTIONS(352), 1,
      anon_sym_COLON,
  [1458] = 1,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [1462] = 1,
    ACTIONS(356), 1,
      aux_sym_source_token1,
  [1466] = 1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [1470] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 304,
  [SMALL_STATE(7)] = 364,
  [SMALL_STATE(8)] = 424,
  [SMALL_STATE(9)] = 482,
  [SMALL_STATE(10)] = 539,
  [SMALL_STATE(11)] = 596,
  [SMALL_STATE(12)] = 653,
  [SMALL_STATE(13)] = 710,
  [SMALL_STATE(14)] = 734,
  [SMALL_STATE(15)] = 758,
  [SMALL_STATE(16)] = 782,
  [SMALL_STATE(17)] = 806,
  [SMALL_STATE(18)] = 830,
  [SMALL_STATE(19)] = 854,
  [SMALL_STATE(20)] = 878,
  [SMALL_STATE(21)] = 904,
  [SMALL_STATE(22)] = 930,
  [SMALL_STATE(23)] = 948,
  [SMALL_STATE(24)] = 960,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 982,
  [SMALL_STATE(27)] = 994,
  [SMALL_STATE(28)] = 1007,
  [SMALL_STATE(29)] = 1016,
  [SMALL_STATE(30)] = 1025,
  [SMALL_STATE(31)] = 1034,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1052,
  [SMALL_STATE(34)] = 1065,
  [SMALL_STATE(35)] = 1078,
  [SMALL_STATE(36)] = 1091,
  [SMALL_STATE(37)] = 1104,
  [SMALL_STATE(38)] = 1112,
  [SMALL_STATE(39)] = 1120,
  [SMALL_STATE(40)] = 1130,
  [SMALL_STATE(41)] = 1138,
  [SMALL_STATE(42)] = 1146,
  [SMALL_STATE(43)] = 1154,
  [SMALL_STATE(44)] = 1164,
  [SMALL_STATE(45)] = 1172,
  [SMALL_STATE(46)] = 1180,
  [SMALL_STATE(47)] = 1188,
  [SMALL_STATE(48)] = 1196,
  [SMALL_STATE(49)] = 1204,
  [SMALL_STATE(50)] = 1212,
  [SMALL_STATE(51)] = 1220,
  [SMALL_STATE(52)] = 1230,
  [SMALL_STATE(53)] = 1238,
  [SMALL_STATE(54)] = 1245,
  [SMALL_STATE(55)] = 1250,
  [SMALL_STATE(56)] = 1255,
  [SMALL_STATE(57)] = 1262,
  [SMALL_STATE(58)] = 1269,
  [SMALL_STATE(59)] = 1276,
  [SMALL_STATE(60)] = 1283,
  [SMALL_STATE(61)] = 1290,
  [SMALL_STATE(62)] = 1294,
  [SMALL_STATE(63)] = 1298,
  [SMALL_STATE(64)] = 1302,
  [SMALL_STATE(65)] = 1306,
  [SMALL_STATE(66)] = 1310,
  [SMALL_STATE(67)] = 1314,
  [SMALL_STATE(68)] = 1318,
  [SMALL_STATE(69)] = 1322,
  [SMALL_STATE(70)] = 1326,
  [SMALL_STATE(71)] = 1330,
  [SMALL_STATE(72)] = 1334,
  [SMALL_STATE(73)] = 1338,
  [SMALL_STATE(74)] = 1342,
  [SMALL_STATE(75)] = 1346,
  [SMALL_STATE(76)] = 1350,
  [SMALL_STATE(77)] = 1354,
  [SMALL_STATE(78)] = 1358,
  [SMALL_STATE(79)] = 1362,
  [SMALL_STATE(80)] = 1366,
  [SMALL_STATE(81)] = 1370,
  [SMALL_STATE(82)] = 1374,
  [SMALL_STATE(83)] = 1378,
  [SMALL_STATE(84)] = 1382,
  [SMALL_STATE(85)] = 1386,
  [SMALL_STATE(86)] = 1390,
  [SMALL_STATE(87)] = 1394,
  [SMALL_STATE(88)] = 1398,
  [SMALL_STATE(89)] = 1402,
  [SMALL_STATE(90)] = 1406,
  [SMALL_STATE(91)] = 1410,
  [SMALL_STATE(92)] = 1414,
  [SMALL_STATE(93)] = 1418,
  [SMALL_STATE(94)] = 1422,
  [SMALL_STATE(95)] = 1426,
  [SMALL_STATE(96)] = 1430,
  [SMALL_STATE(97)] = 1434,
  [SMALL_STATE(98)] = 1438,
  [SMALL_STATE(99)] = 1442,
  [SMALL_STATE(100)] = 1446,
  [SMALL_STATE(101)] = 1450,
  [SMALL_STATE(102)] = 1454,
  [SMALL_STATE(103)] = 1458,
  [SMALL_STATE(104)] = 1462,
  [SMALL_STATE(105)] = 1466,
  [SMALL_STATE(106)] = 1470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(53),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(85),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(51),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(54),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(54),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(106),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_construct_repeat1, 2), SHIFT_REPEAT(53),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_construct_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_construct_repeat1, 2), SHIFT_REPEAT(85),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_construct_repeat1, 2), SHIFT_REPEAT(3),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_construct_repeat1, 2), SHIFT_REPEAT(51),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_construct_repeat1, 2), SHIFT_REPEAT(54),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_construct_repeat1, 2), SHIFT_REPEAT(54),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_construct_repeat1, 2), SHIFT_REPEAT(106),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 8),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_construct, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_construct_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(54),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(54),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edit_mode_variable, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_variable, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keymap_variable, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_variable, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_variable, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bell_variable, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_variable, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(35),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(35),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_variable, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_variable, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_assignment, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_variable, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mode_test, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_test, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_test, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
