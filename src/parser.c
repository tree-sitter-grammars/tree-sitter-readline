#include "tree_sitter/parser.h"

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
#define STATE_COUNT 169
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 3
#define TOKEN_COUNT 105
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  aux_sym__statement_token1 = 1,
  aux_sym__statement_token2 = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  aux_sym_conditional_construct_token1 = 5,
  aux_sym_conditional_construct_token2 = 6,
  aux_sym__endif_token1 = 7,
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
  aux_sym_include_directive_token1 = 21,
  aux_sym_include_directive_token2 = 22,
  aux_sym_variable_setting_token1 = 23,
  anon_sym_1 = 24,
  aux_sym_bool_value_token1 = 25,
  aux_sym_bool_value_token2 = 26,
  aux_sym_bool_value_token3 = 27,
  aux_sym_bell_value_token1 = 28,
  aux_sym_bell_value_token2 = 29,
  aux_sym_bell_value_token3 = 30,
  aux_sym_number_value_token1 = 31,
  aux_sym_edit_mode_value_token1 = 32,
  aux_sym_edit_mode_value_token2 = 33,
  aux_sym_keymap_value_token1 = 34,
  aux_sym_bool_variable_token1 = 35,
  aux_sym_bool_variable_token2 = 36,
  aux_sym_bool_variable_token3 = 37,
  aux_sym_bool_variable_token4 = 38,
  aux_sym_bool_variable_token5 = 39,
  aux_sym_bool_variable_token6 = 40,
  aux_sym_bool_variable_token7 = 41,
  aux_sym_bool_variable_token8 = 42,
  aux_sym_bool_variable_token9 = 43,
  aux_sym_bool_variable_token10 = 44,
  aux_sym_bool_variable_token11 = 45,
  aux_sym_bool_variable_token12 = 46,
  aux_sym_bool_variable_token13 = 47,
  aux_sym_bool_variable_token14 = 48,
  aux_sym_bool_variable_token15 = 49,
  aux_sym_bool_variable_token16 = 50,
  aux_sym_bool_variable_token17 = 51,
  aux_sym_bool_variable_token18 = 52,
  aux_sym_bool_variable_token19 = 53,
  aux_sym_bool_variable_token20 = 54,
  aux_sym_bool_variable_token21 = 55,
  aux_sym_bool_variable_token22 = 56,
  aux_sym_bool_variable_token23 = 57,
  aux_sym_bool_variable_token24 = 58,
  aux_sym_bool_variable_token25 = 59,
  aux_sym_bool_variable_token26 = 60,
  aux_sym_bool_variable_token27 = 61,
  aux_sym_bool_variable_token28 = 62,
  aux_sym_bool_variable_token29 = 63,
  aux_sym_bool_variable_token30 = 64,
  aux_sym_bool_variable_token31 = 65,
  aux_sym_bool_variable_token32 = 66,
  aux_sym_bool_variable_token33 = 67,
  aux_sym_bool_variable_token34 = 68,
  sym_bell_variable = 69,
  aux_sym_string_variable_token1 = 70,
  aux_sym_string_variable_token2 = 71,
  aux_sym_string_variable_token3 = 72,
  aux_sym_string_variable_token4 = 73,
  aux_sym_string_variable_token5 = 74,
  aux_sym_string_variable_token6 = 75,
  aux_sym_string_variable_token7 = 76,
  aux_sym_number_variable_token1 = 77,
  aux_sym_number_variable_token2 = 78,
  aux_sym_number_variable_token3 = 79,
  aux_sym_number_variable_token4 = 80,
  aux_sym_number_variable_token5 = 81,
  sym_edit_mode_variable = 82,
  sym_keymap_variable = 83,
  anon_sym_COLON = 84,
  sym_function_name = 85,
  anon_sym_DQUOTE = 86,
  aux_sym__double_quoted_string_token1 = 87,
  aux_sym__quoted_string_token1 = 88,
  aux_sym__quoted_string_token2 = 89,
  sym_escape_sequence = 90,
  anon_sym_DASH = 91,
  aux_sym_symbolic_character_name_token1 = 92,
  aux_sym_symbolic_character_name_token2 = 93,
  aux_sym_symbolic_character_name_token3 = 94,
  aux_sym_symbolic_character_name_token4 = 95,
  aux_sym_symbolic_character_name_token5 = 96,
  aux_sym_symbolic_character_name_token6 = 97,
  aux_sym_symbolic_character_name_token7 = 98,
  aux_sym_symbolic_character_name_token8 = 99,
  aux_sym_symbolic_character_name_token9 = 100,
  aux_sym_symbolic_character_name_token10 = 101,
  aux_sym_symbolic_character_name_token11 = 102,
  aux_sym_symbolic_character_name_token12 = 103,
  sym_key_literal = 104,
  sym_source = 105,
  sym__statement = 106,
  sym_comment = 107,
  sym_conditional_construct = 108,
  sym__endif = 109,
  sym_test = 110,
  sym__mode_test = 111,
  sym__term_test = 112,
  sym__version_test = 113,
  sym__application_test = 114,
  sym__variable_test = 115,
  sym_include_directive = 116,
  sym_variable_setting = 117,
  sym__bool_assignment = 118,
  sym__bell_assignment = 119,
  sym__string_assignment = 120,
  sym__number_assignment = 121,
  sym__edit_mode_assignment = 122,
  sym__keymap_assignment = 123,
  sym_bool_value = 124,
  sym_bell_value = 125,
  sym_string_value = 126,
  sym_number_value = 127,
  sym_edit_mode_value = 128,
  sym_keymap_value = 129,
  sym_bool_variable = 130,
  sym_string_variable = 131,
  sym_number_variable = 132,
  sym_key_binding = 133,
  sym_keyseq = 134,
  sym_macro = 135,
  sym__double_quoted_string = 136,
  sym__quoted_string = 137,
  sym_keyname = 138,
  sym_symbolic_character_name = 139,
  aux_sym_source_repeat1 = 140,
  aux_sym__statement_repeat1 = 141,
  aux_sym__double_quoted_string_repeat1 = 142,
  aux_sym__quoted_string_repeat1 = 143,
  aux_sym_keyname_repeat1 = 144,
  alias_sym_alternative = 145,
  alias_sym_consequence = 146,
  alias_sym_file_path = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__statement_token2] = "_statement_token2",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_conditional_construct_token1] = "$if",
  [aux_sym_conditional_construct_token2] = "$else",
  [aux_sym__endif_token1] = "$endif",
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
  [aux_sym_include_directive_token1] = "$include",
  [aux_sym_include_directive_token2] = "include_directive_token2",
  [aux_sym_variable_setting_token1] = "set",
  [anon_sym_1] = "1",
  [aux_sym_bool_value_token1] = "bool_value_token1",
  [aux_sym_bool_value_token2] = "bool_value_token2",
  [aux_sym_bool_value_token3] = "ERROR",
  [aux_sym_bell_value_token1] = "bell_value_token1",
  [aux_sym_bell_value_token2] = "bell_value_token2",
  [aux_sym_bell_value_token3] = "bell_value_token3",
  [aux_sym_number_value_token1] = "number_value_token1",
  [aux_sym_edit_mode_value_token1] = "edit_mode_value_token1",
  [aux_sym_edit_mode_value_token2] = "edit_mode_value_token2",
  [aux_sym_keymap_value_token1] = "keymap_value_token1",
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
  [aux_sym_bool_variable_token33] = "bool_variable_token33",
  [aux_sym_bool_variable_token34] = "bool_variable_token34",
  [sym_bell_variable] = "bell_variable",
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
  [sym_edit_mode_variable] = "edit_mode_variable",
  [sym_keymap_variable] = "keymap_variable",
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
  [sym__endif] = "_endif",
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
  [sym_number_value] = "number_value",
  [sym_edit_mode_value] = "edit_mode_value",
  [sym_keymap_value] = "keymap_value",
  [sym_bool_variable] = "bool_variable",
  [sym_string_variable] = "string_variable",
  [sym_number_variable] = "number_variable",
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
  [alias_sym_alternative] = "alternative",
  [alias_sym_consequence] = "consequence",
  [alias_sym_file_path] = "file_path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__statement_token2] = aux_sym__statement_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_conditional_construct_token1] = aux_sym_conditional_construct_token1,
  [aux_sym_conditional_construct_token2] = aux_sym_conditional_construct_token2,
  [aux_sym__endif_token1] = aux_sym__endif_token1,
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
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_include_directive_token2] = aux_sym_include_directive_token2,
  [aux_sym_variable_setting_token1] = aux_sym_variable_setting_token1,
  [anon_sym_1] = anon_sym_1,
  [aux_sym_bool_value_token1] = aux_sym_bool_value_token1,
  [aux_sym_bool_value_token2] = aux_sym_bool_value_token2,
  [aux_sym_bool_value_token3] = aux_sym_bool_value_token3,
  [aux_sym_bell_value_token1] = aux_sym_bell_value_token1,
  [aux_sym_bell_value_token2] = aux_sym_bell_value_token2,
  [aux_sym_bell_value_token3] = aux_sym_bell_value_token3,
  [aux_sym_number_value_token1] = aux_sym_number_value_token1,
  [aux_sym_edit_mode_value_token1] = aux_sym_edit_mode_value_token1,
  [aux_sym_edit_mode_value_token2] = aux_sym_edit_mode_value_token2,
  [aux_sym_keymap_value_token1] = aux_sym_keymap_value_token1,
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
  [aux_sym_bool_variable_token33] = aux_sym_bool_variable_token33,
  [aux_sym_bool_variable_token34] = aux_sym_bool_variable_token34,
  [sym_bell_variable] = sym_bell_variable,
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
  [sym_edit_mode_variable] = sym_edit_mode_variable,
  [sym_keymap_variable] = sym_keymap_variable,
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
  [sym__endif] = sym__endif,
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
  [sym_number_value] = sym_number_value,
  [sym_edit_mode_value] = sym_edit_mode_value,
  [sym_keymap_value] = sym_keymap_value,
  [sym_bool_variable] = sym_bool_variable,
  [sym_string_variable] = sym_string_variable,
  [sym_number_variable] = sym_number_variable,
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
  [alias_sym_alternative] = alias_sym_alternative,
  [alias_sym_consequence] = alias_sym_consequence,
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
  [aux_sym_conditional_construct_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_conditional_construct_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__endif_token1] = {
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
  [aux_sym_include_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_setting_token1] = {
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
  [aux_sym_bool_value_token3] = {
    .visible = true,
    .named = true,
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
  [aux_sym_number_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_edit_mode_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_edit_mode_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keymap_value_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_bool_variable_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token34] = {
    .visible = false,
    .named = false,
  },
  [sym_bell_variable] = {
    .visible = true,
    .named = true,
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
  [sym_edit_mode_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_keymap_variable] = {
    .visible = true,
    .named = true,
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
  [sym__endif] = {
    .visible = false,
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
  [sym_number_value] = {
    .visible = true,
    .named = true,
  },
  [sym_edit_mode_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keymap_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_variable] = {
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
  [alias_sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_consequence] = {
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
    [2] = alias_sym_file_path,
  },
  [2] = {
    [3] = alias_sym_consequence,
  },
  [3] = {
    [5] = alias_sym_alternative,
  },
  [4] = {
    [6] = alias_sym_alternative,
  },
  [5] = {
    [3] = alias_sym_consequence,
    [6] = alias_sym_alternative,
  },
  [6] = {
    [3] = alias_sym_consequence,
    [7] = alias_sym_alternative,
  },
  [7] = {
    [7] = alias_sym_alternative,
  },
  [8] = {
    [3] = alias_sym_consequence,
    [8] = alias_sym_alternative,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_source_repeat1, 3,
    aux_sym_source_repeat1,
    alias_sym_alternative,
    alias_sym_consequence,
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
  [28] = 4,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 4,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 4,
  [41] = 41,
  [42] = 42,
  [43] = 4,
  [44] = 44,
  [45] = 4,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 4,
  [55] = 55,
  [56] = 56,
  [57] = 4,
  [58] = 58,
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
  [72] = 4,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
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
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(918);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(919);
      if (lookahead == '-') ADVANCE(926);
      if (lookahead == '1') ADVANCE(798);
      if (lookahead == ':') ADVANCE(916);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(940);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(919);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(797);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(822);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(856);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(826);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(827);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(795);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == ':') ADVANCE(916);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(920);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(917);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(926);
      if (lookahead == ':') ADVANCE(916);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(922);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(920);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 15:
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(924);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(922);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(549);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(550);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(388);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(266);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(756);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(793);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(938);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(948);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(942);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(947);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(943);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(944);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(945);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(949);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(939);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(930);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(932);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(935);
      END_STATE();
    case 42:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(934);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(796);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(936);
      END_STATE();
    case 55:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(925);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(73);
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(918);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(941);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(948);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(942);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(947);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(943);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(944);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(945);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(946);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(939);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__endif_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__mode_test_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__term_test_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__version_test_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(922);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(770);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(726);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(884);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(891);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(710);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(783);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(788);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(725);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(784);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(646);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(288);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(704);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(720);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(743);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(746);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(589);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(780);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(707);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(644);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(761);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(871);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(771);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(890);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(905);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(907);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(908);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(760);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(909);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(910);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(789);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(776);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(790);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(684);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(768);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(555);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(766);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(868);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(754);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(702);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(758);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(759);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(915);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(757);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(902);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(903);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(782);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(900);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(885);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(892);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(906);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(886);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(896);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(911);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(887);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(703);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(738);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(749);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(913);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(898);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(899);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(882);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(787);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(753);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(732);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(699);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(747);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(889);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(893);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(925);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_include_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(795);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_variable_setting_token1);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(850);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(821);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(842);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(839);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(823);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(857);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_number_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_keymap_value_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_keymap_value_token1);
      if (lookahead == '-') ADVANCE(810);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_keymap_value_token1);
      if (lookahead == '-') ADVANCE(809);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_bool_variable_token33);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_bool_variable_token34);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_bell_variable);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_edit_mode_variable);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_keymap_variable);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(917);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(922);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(923);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(922);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(792);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(924);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(922);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 60},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 60},
  [74] = {.lex_state = 60},
  [75] = {.lex_state = 60},
  [76] = {.lex_state = 60},
  [77] = {.lex_state = 60},
  [78] = {.lex_state = 60},
  [79] = {.lex_state = 60},
  [80] = {.lex_state = 60},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 60},
  [84] = {.lex_state = 60},
  [85] = {.lex_state = 60},
  [86] = {.lex_state = 60},
  [87] = {.lex_state = 60},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 60},
  [90] = {.lex_state = 60},
  [91] = {.lex_state = 60},
  [92] = {.lex_state = 60},
  [93] = {.lex_state = 60},
  [94] = {.lex_state = 60},
  [95] = {.lex_state = 60},
  [96] = {.lex_state = 60},
  [97] = {.lex_state = 60},
  [98] = {.lex_state = 60},
  [99] = {.lex_state = 60},
  [100] = {.lex_state = 60},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 60},
  [103] = {.lex_state = 60},
  [104] = {.lex_state = 60},
  [105] = {.lex_state = 60},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 60},
  [108] = {.lex_state = 60},
  [109] = {.lex_state = 60},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 60},
  [112] = {.lex_state = 60},
  [113] = {.lex_state = 60},
  [114] = {.lex_state = 60},
  [115] = {.lex_state = 60},
  [116] = {.lex_state = 60},
  [117] = {.lex_state = 60},
  [118] = {.lex_state = 60},
  [119] = {.lex_state = 60},
  [120] = {.lex_state = 60},
  [121] = {.lex_state = 60},
  [122] = {.lex_state = 60},
  [123] = {.lex_state = 60},
  [124] = {.lex_state = 60},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 60},
  [127] = {.lex_state = 60},
  [128] = {.lex_state = 60},
  [129] = {.lex_state = 60},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 60},
  [133] = {.lex_state = 60},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 60},
  [136] = {.lex_state = 60},
  [137] = {.lex_state = 60},
  [138] = {.lex_state = 60},
  [139] = {.lex_state = 60},
  [140] = {.lex_state = 60},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 60},
  [144] = {.lex_state = 60},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 60},
  [148] = {.lex_state = 60},
  [149] = {.lex_state = 60},
  [150] = {.lex_state = 60},
  [151] = {.lex_state = 60},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 59},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 60},
  [156] = {.lex_state = 60},
  [157] = {.lex_state = 60},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 60},
  [160] = {.lex_state = 60},
  [161] = {.lex_state = 60},
  [162] = {.lex_state = 60},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 60},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 60},
  [168] = {.lex_state = 9},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__double_quoted_string_token1] = ACTIONS(1),
    [aux_sym__quoted_string_token1] = ACTIONS(1),
    [aux_sym__quoted_string_token2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_key_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(146),
    [sym__statement] = STATE(25),
    [sym_comment] = STATE(144),
    [sym_conditional_construct] = STATE(144),
    [sym_include_directive] = STATE(144),
    [sym_variable_setting] = STATE(85),
    [sym_key_binding] = STATE(85),
    [sym_keyseq] = STATE(154),
    [sym__double_quoted_string] = STATE(158),
    [sym_keyname] = STATE(154),
    [sym_symbolic_character_name] = STATE(125),
    [aux_sym_source_repeat1] = STATE(20),
    [aux_sym__statement_repeat1] = STATE(24),
    [aux_sym_keyname_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__statement_token1] = ACTIONS(5),
    [aux_sym__statement_token2] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
    [aux_sym_conditional_construct_token1] = ACTIONS(11),
    [aux_sym_include_directive_token1] = ACTIONS(13),
    [aux_sym_variable_setting_token1] = ACTIONS(15),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(25), 1,
      aux_sym__statement_token1,
    ACTIONS(27), 1,
      aux_sym__mode_test_token1,
    ACTIONS(29), 1,
      aux_sym__term_test_token1,
    ACTIONS(31), 1,
      aux_sym__version_test_token1,
    ACTIONS(33), 1,
      aux_sym__application_test_token1,
    ACTIONS(37), 1,
      sym_bell_variable,
    ACTIONS(43), 1,
      sym_edit_mode_variable,
    ACTIONS(45), 1,
      sym_keymap_variable,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(107), 1,
      sym_number_variable,
    STATE(108), 1,
      sym_string_variable,
    STATE(121), 1,
      sym_bool_variable,
    ACTIONS(41), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(86), 5,
      sym__mode_test,
      sym__term_test,
      sym__version_test,
      sym__application_test,
      sym__variable_test,
    ACTIONS(39), 7,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
    ACTIONS(35), 34,
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
      aux_sym_bool_variable_token33,
      aux_sym_bool_variable_token34,
  [96] = 12,
    ACTIONS(25), 1,
      aux_sym__statement_token1,
    ACTIONS(47), 1,
      sym_bell_variable,
    ACTIONS(49), 1,
      sym_edit_mode_variable,
    ACTIONS(51), 1,
      sym_keymap_variable,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(77), 1,
      sym_bool_variable,
    STATE(78), 1,
      sym_string_variable,
    STATE(79), 1,
      sym_number_variable,
    ACTIONS(41), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(120), 6,
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
    ACTIONS(35), 34,
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
      aux_sym_bool_variable_token33,
      aux_sym_bool_variable_token34,
  [181] = 4,
    ACTIONS(53), 1,
      aux_sym__statement_token1,
    ACTIONS(58), 1,
      aux_sym__application_test_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 52,
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
      aux_sym_bool_variable_token33,
      aux_sym_bool_variable_token34,
      sym_bell_variable,
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
      sym_edit_mode_variable,
      sym_keymap_variable,
  [245] = 22,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(60), 1,
      aux_sym__statement_token1,
    ACTIONS(62), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(21), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    STATE(159), 1,
      sym__endif,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [326] = 22,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(66), 1,
      aux_sym__statement_token1,
    ACTIONS(68), 1,
      aux_sym_conditional_construct_token2,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(22), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(148), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [407] = 20,
    ACTIONS(72), 1,
      aux_sym__statement_token1,
    ACTIONS(75), 1,
      aux_sym__statement_token2,
    ACTIONS(78), 1,
      aux_sym_comment_token1,
    ACTIONS(81), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(84), 1,
      aux_sym_include_directive_token1,
    ACTIONS(87), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym_key_literal,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(24), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(96), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      aux_sym_conditional_construct_token2,
      aux_sym__endif_token1,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(93), 10,
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
  [484] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(151), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [562] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(19), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    STATE(164), 1,
      sym__endif,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [640] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    STATE(160), 1,
      sym__endif,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [718] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(150), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [796] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(149), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [874] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(11), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(142), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [952] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(12), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(156), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1030] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(141), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1108] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(15), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(140), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1186] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(10), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(157), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1264] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(155), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1342] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(64), 1,
      aux_sym__endif_token1,
    ACTIONS(102), 1,
      aux_sym__statement_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(147), 1,
      sym__endif,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1420] = 20,
    ACTIONS(5), 1,
      aux_sym__statement_token1,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(24), 1,
      aux_sym__statement_repeat1,
    STATE(25), 1,
      sym__statement,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(85), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(144), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1495] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(108), 1,
      aux_sym__statement_token2,
    ACTIONS(110), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(112), 1,
      aux_sym__endif_token1,
    STATE(28), 1,
      aux_sym__statement_repeat1,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(74), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(143), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1567] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(108), 1,
      aux_sym__statement_token2,
    ACTIONS(112), 1,
      aux_sym__endif_token1,
    ACTIONS(114), 1,
      aux_sym_conditional_construct_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(74), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(143), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1639] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(108), 1,
      aux_sym__statement_token2,
    ACTIONS(112), 1,
      aux_sym__endif_token1,
    STATE(28), 1,
      aux_sym__statement_repeat1,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(74), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(143), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1708] = 17,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(108), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
    STATE(30), 1,
      aux_sym_keyname_repeat1,
    STATE(125), 1,
      sym_symbolic_character_name,
    STATE(158), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(74), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(154), 2,
      sym_keyseq,
      sym_keyname,
    STATE(143), 3,
      sym_comment,
      sym_conditional_construct,
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
  [1774] = 2,
    ACTIONS(118), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(116), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym__endif_token1,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
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
  [1802] = 2,
    ACTIONS(122), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(120), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym__endif_token1,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
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
  [1830] = 2,
    ACTIONS(126), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(124), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym__endif_token1,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
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
  [1858] = 4,
    ACTIONS(128), 1,
      aux_sym__statement_token1,
    STATE(28), 1,
      aux_sym__statement_repeat1,
    ACTIONS(58), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(56), 18,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym__endif_token1,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
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
  [1890] = 2,
    ACTIONS(133), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(131), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym__endif_token1,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
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
  [1918] = 5,
    ACTIONS(135), 1,
      sym_key_literal,
    STATE(31), 1,
      aux_sym_keyname_repeat1,
    STATE(106), 1,
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
  [1944] = 5,
    ACTIONS(143), 1,
      sym_key_literal,
    STATE(31), 1,
      aux_sym_keyname_repeat1,
    STATE(145), 1,
      sym_symbolic_character_name,
    ACTIONS(140), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(137), 10,
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
  [1970] = 2,
    ACTIONS(143), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(145), 10,
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
  [1988] = 4,
    ACTIONS(147), 1,
      aux_sym__statement_token1,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(58), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(56), 7,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      aux_sym__version_test_token2,
      sym_function_name,
      aux_sym__quoted_string_token1,
  [2009] = 4,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(152), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(154), 4,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
  [2027] = 6,
    ACTIONS(156), 1,
      aux_sym__statement_token1,
    ACTIONS(158), 1,
      aux_sym__statement_token2,
    ACTIONS(162), 1,
      aux_sym_bool_value_token3,
    STATE(40), 1,
      aux_sym__statement_repeat1,
    STATE(115), 1,
      sym_bool_value,
    ACTIONS(160), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [2048] = 6,
    ACTIONS(164), 1,
      aux_sym__statement_token1,
    ACTIONS(166), 1,
      aux_sym__statement_token2,
    ACTIONS(168), 1,
      aux_sym_bool_value_token3,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    STATE(110), 1,
      sym_bell_value,
    ACTIONS(170), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [2069] = 6,
    ACTIONS(172), 1,
      aux_sym__statement_token1,
    ACTIONS(174), 1,
      aux_sym__statement_token2,
    ACTIONS(176), 1,
      aux_sym_bool_value_token3,
    STATE(45), 1,
      aux_sym__statement_repeat1,
    STATE(111), 1,
      sym_edit_mode_value,
    ACTIONS(178), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [2089] = 5,
    ACTIONS(168), 1,
      aux_sym_bool_value_token3,
    ACTIONS(180), 1,
      aux_sym__statement_token1,
    STATE(41), 1,
      aux_sym__statement_repeat1,
    STATE(132), 1,
      sym_bell_value,
    ACTIONS(170), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [2107] = 5,
    ACTIONS(162), 1,
      aux_sym_bool_value_token3,
    ACTIONS(182), 1,
      aux_sym__statement_token1,
    STATE(42), 1,
      aux_sym__statement_repeat1,
    STATE(132), 1,
      sym_bool_value,
    ACTIONS(160), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [2125] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(184), 1,
      aux_sym__statement_token1,
    STATE(40), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 4,
      aux_sym__statement_token2,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [2141] = 5,
    ACTIONS(164), 1,
      aux_sym__statement_token1,
    ACTIONS(168), 1,
      aux_sym_bool_value_token3,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    STATE(133), 1,
      sym_bell_value,
    ACTIONS(170), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [2159] = 5,
    ACTIONS(156), 1,
      aux_sym__statement_token1,
    ACTIONS(162), 1,
      aux_sym_bool_value_token3,
    STATE(40), 1,
      aux_sym__statement_repeat1,
    STATE(133), 1,
      sym_bool_value,
    ACTIONS(160), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [2177] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(187), 1,
      aux_sym__statement_token1,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 4,
      aux_sym__statement_token2,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [2193] = 6,
    ACTIONS(190), 1,
      aux_sym__statement_token1,
    ACTIONS(192), 1,
      aux_sym__statement_token2,
    ACTIONS(194), 1,
      aux_sym_bool_value_token3,
    ACTIONS(196), 1,
      aux_sym_number_value_token1,
    STATE(57), 1,
      aux_sym__statement_repeat1,
    STATE(119), 1,
      sym_number_value,
  [2212] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    STATE(45), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 3,
      aux_sym__statement_token2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [2227] = 5,
    ACTIONS(172), 1,
      aux_sym__statement_token1,
    ACTIONS(176), 1,
      aux_sym_bool_value_token3,
    STATE(45), 1,
      aux_sym__statement_repeat1,
    STATE(133), 1,
      sym_edit_mode_value,
    ACTIONS(178), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [2244] = 6,
    ACTIONS(201), 1,
      aux_sym__statement_token1,
    ACTIONS(203), 1,
      sym_function_name,
    ACTIONS(205), 1,
      aux_sym__quoted_string_token1,
    STATE(50), 1,
      aux_sym__statement_repeat1,
    STATE(124), 1,
      sym_macro,
    STATE(128), 1,
      sym__quoted_string,
  [2263] = 5,
    ACTIONS(176), 1,
      aux_sym_bool_value_token3,
    ACTIONS(207), 1,
      aux_sym__statement_token1,
    STATE(46), 1,
      aux_sym__statement_repeat1,
    STATE(132), 1,
      sym_edit_mode_value,
    ACTIONS(178), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [2280] = 6,
    ACTIONS(209), 1,
      aux_sym__statement_token1,
    ACTIONS(211), 1,
      aux_sym__statement_token2,
    ACTIONS(213), 1,
      aux_sym_bool_value_token3,
    ACTIONS(215), 1,
      aux_sym_keymap_value_token1,
    STATE(54), 1,
      aux_sym__statement_repeat1,
    STATE(113), 1,
      sym_keymap_value,
  [2299] = 6,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(205), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(217), 1,
      sym_function_name,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    STATE(128), 1,
      sym__quoted_string,
    STATE(129), 1,
      sym_macro,
  [2318] = 4,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(219), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(221), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2332] = 5,
    ACTIONS(190), 1,
      aux_sym__statement_token1,
    ACTIONS(194), 1,
      aux_sym_bool_value_token3,
    ACTIONS(196), 1,
      aux_sym_number_value_token1,
    STATE(57), 1,
      aux_sym__statement_repeat1,
    STATE(133), 1,
      sym_number_value,
  [2348] = 5,
    ACTIONS(209), 1,
      aux_sym__statement_token1,
    ACTIONS(213), 1,
      aux_sym_bool_value_token3,
    ACTIONS(215), 1,
      aux_sym_keymap_value_token1,
    STATE(54), 1,
      aux_sym__statement_repeat1,
    STATE(133), 1,
      sym_keymap_value,
  [2364] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(223), 1,
      aux_sym__statement_token1,
    STATE(54), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 2,
      aux_sym__statement_token2,
      aux_sym_keymap_value_token1,
  [2378] = 5,
    ACTIONS(226), 1,
      aux_sym__statement_token1,
    ACTIONS(228), 1,
      aux_sym__statement_token2,
    ACTIONS(230), 1,
      aux_sym_include_directive_token2,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    STATE(117), 1,
      sym_string_value,
  [2394] = 5,
    ACTIONS(194), 1,
      aux_sym_bool_value_token3,
    ACTIONS(196), 1,
      aux_sym_number_value_token1,
    ACTIONS(232), 1,
      aux_sym__statement_token1,
    STATE(52), 1,
      aux_sym__statement_repeat1,
    STATE(132), 1,
      sym_number_value,
  [2410] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(234), 1,
      aux_sym__statement_token1,
    STATE(57), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 2,
      aux_sym__statement_token2,
      aux_sym_number_value_token1,
  [2424] = 5,
    ACTIONS(213), 1,
      aux_sym_bool_value_token3,
    ACTIONS(215), 1,
      aux_sym_keymap_value_token1,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    STATE(53), 1,
      aux_sym__statement_repeat1,
    STATE(132), 1,
      sym_keymap_value,
  [2440] = 4,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(239), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(241), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2454] = 4,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(243), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(245), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2468] = 4,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(247), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(249), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2482] = 4,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(253), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2496] = 4,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(255), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    ACTIONS(257), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2510] = 3,
    ACTIONS(259), 1,
      aux_sym__quoted_string_token1,
    STATE(64), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(261), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [2521] = 3,
    ACTIONS(264), 1,
      aux_sym__quoted_string_token1,
    STATE(64), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(266), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [2532] = 3,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(270), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [2543] = 3,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(275), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [2554] = 4,
    ACTIONS(226), 1,
      aux_sym__statement_token1,
    ACTIONS(230), 1,
      aux_sym_include_directive_token2,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    STATE(133), 1,
      sym_string_value,
  [2567] = 4,
    ACTIONS(226), 1,
      aux_sym__statement_token1,
    ACTIONS(277), 1,
      aux_sym__statement_token2,
    ACTIONS(279), 1,
      aux_sym_include_directive_token2,
    STATE(72), 1,
      aux_sym__statement_repeat1,
  [2580] = 3,
    ACTIONS(176), 1,
      aux_sym_bool_value_token3,
    STATE(135), 1,
      sym_edit_mode_value,
    ACTIONS(178), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [2591] = 4,
    ACTIONS(230), 1,
      aux_sym_include_directive_token2,
    ACTIONS(281), 1,
      aux_sym__statement_token1,
    STATE(68), 1,
      aux_sym__statement_repeat1,
    STATE(132), 1,
      sym_string_value,
  [2604] = 3,
    ACTIONS(283), 1,
      aux_sym__statement_token1,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 2,
      aux_sym__statement_token2,
      aux_sym_include_directive_token2,
  [2615] = 3,
    ACTIONS(286), 1,
      aux_sym__statement_token1,
    ACTIONS(288), 1,
      aux_sym__statement_token2,
    STATE(94), 1,
      aux_sym__statement_repeat1,
  [2625] = 3,
    ACTIONS(290), 1,
      aux_sym__statement_token1,
    ACTIONS(292), 1,
      aux_sym__statement_token2,
    STATE(84), 1,
      aux_sym__statement_repeat1,
  [2635] = 3,
    ACTIONS(294), 1,
      aux_sym__statement_token1,
    ACTIONS(296), 1,
      aux_sym__statement_token2,
    STATE(49), 1,
      aux_sym__statement_repeat1,
  [2645] = 3,
    ACTIONS(298), 1,
      aux_sym__statement_token1,
    STATE(2), 1,
      aux_sym__statement_repeat1,
    STATE(162), 1,
      sym_test,
  [2655] = 3,
    ACTIONS(300), 1,
      aux_sym__statement_token1,
    ACTIONS(302), 1,
      aux_sym__statement_token2,
    STATE(35), 1,
      aux_sym__statement_repeat1,
  [2665] = 3,
    ACTIONS(304), 1,
      aux_sym__statement_token1,
    ACTIONS(306), 1,
      aux_sym__statement_token2,
    STATE(55), 1,
      aux_sym__statement_repeat1,
  [2675] = 3,
    ACTIONS(308), 1,
      aux_sym__statement_token1,
    ACTIONS(310), 1,
      aux_sym__statement_token2,
    STATE(44), 1,
      aux_sym__statement_repeat1,
  [2685] = 3,
    ACTIONS(312), 1,
      aux_sym__statement_token1,
    ACTIONS(314), 1,
      aux_sym__statement_token2,
    STATE(69), 1,
      aux_sym__statement_repeat1,
  [2695] = 2,
    STATE(67), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(316), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [2703] = 2,
    STATE(65), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(318), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [2711] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(320), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2721] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(322), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2731] = 3,
    ACTIONS(108), 1,
      aux_sym__statement_token2,
    ACTIONS(324), 1,
      aux_sym__statement_token1,
    STATE(93), 1,
      aux_sym__statement_repeat1,
  [2741] = 3,
    ACTIONS(326), 1,
      aux_sym__statement_token1,
    ACTIONS(328), 1,
      aux_sym__statement_token2,
    STATE(90), 1,
      aux_sym__statement_repeat1,
  [2751] = 3,
    ACTIONS(330), 1,
      aux_sym__statement_token1,
    ACTIONS(332), 1,
      aux_sym__statement_token2,
    STATE(95), 1,
      aux_sym__statement_repeat1,
  [2761] = 3,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(334), 1,
      aux_sym__version_test_token2,
    STATE(33), 1,
      aux_sym__statement_repeat1,
  [2771] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(336), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2781] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(338), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2791] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(340), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2801] = 3,
    ACTIONS(342), 1,
      aux_sym__statement_token1,
    ACTIONS(344), 1,
      aux_sym__statement_token2,
    STATE(83), 1,
      aux_sym__statement_repeat1,
  [2811] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(292), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2821] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(346), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2831] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(348), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2841] = 3,
    ACTIONS(350), 1,
      aux_sym__statement_token1,
    ACTIONS(352), 1,
      aux_sym__statement_token2,
    STATE(97), 1,
      aux_sym__statement_repeat1,
  [2851] = 3,
    ACTIONS(106), 1,
      aux_sym__statement_token1,
    ACTIONS(344), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym__statement_repeat1,
  [2861] = 3,
    ACTIONS(346), 1,
      aux_sym__statement_token2,
    ACTIONS(354), 1,
      aux_sym__statement_token1,
    STATE(91), 1,
      aux_sym__statement_repeat1,
  [2871] = 3,
    ACTIONS(348), 1,
      aux_sym__statement_token2,
    ACTIONS(356), 1,
      aux_sym__statement_token1,
    STATE(89), 1,
      aux_sym__statement_repeat1,
  [2881] = 3,
    ACTIONS(358), 1,
      aux_sym__statement_token1,
    ACTIONS(360), 1,
      aux_sym__statement_token2,
    STATE(37), 1,
      aux_sym__statement_repeat1,
  [2891] = 3,
    ACTIONS(362), 1,
      aux_sym__statement_token1,
    ACTIONS(364), 1,
      aux_sym__statement_token2,
    STATE(36), 1,
      aux_sym__statement_repeat1,
  [2901] = 1,
    ACTIONS(366), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2906] = 2,
    ACTIONS(368), 1,
      aux_sym__statement_token1,
    STATE(60), 1,
      aux_sym__statement_repeat1,
  [2913] = 1,
    ACTIONS(370), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2918] = 2,
    ACTIONS(372), 1,
      aux_sym__statement_token1,
    STATE(88), 1,
      aux_sym__statement_repeat1,
  [2925] = 2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_DASH,
  [2932] = 2,
    ACTIONS(378), 1,
      aux_sym__statement_token1,
    STATE(51), 1,
      aux_sym__statement_repeat1,
  [2939] = 2,
    ACTIONS(380), 1,
      aux_sym__statement_token1,
    STATE(63), 1,
      aux_sym__statement_repeat1,
  [2946] = 1,
    ACTIONS(382), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2951] = 1,
    ACTIONS(384), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2956] = 1,
    ACTIONS(386), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2961] = 1,
    ACTIONS(388), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2966] = 1,
    ACTIONS(390), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2971] = 1,
    ACTIONS(392), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2976] = 1,
    ACTIONS(394), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2981] = 1,
    ACTIONS(396), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2986] = 1,
    ACTIONS(398), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2991] = 1,
    ACTIONS(400), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [2996] = 1,
    ACTIONS(402), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3001] = 1,
    ACTIONS(404), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3006] = 2,
    ACTIONS(406), 1,
      aux_sym__statement_token1,
    STATE(62), 1,
      aux_sym__statement_repeat1,
  [3013] = 2,
    ACTIONS(408), 1,
      aux_sym__statement_token1,
    STATE(34), 1,
      aux_sym__statement_repeat1,
  [3020] = 1,
    ACTIONS(410), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3025] = 1,
    ACTIONS(412), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3030] = 2,
    ACTIONS(376), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_COLON,
  [3037] = 2,
    ACTIONS(416), 1,
      aux_sym__statement_token1,
    STATE(3), 1,
      aux_sym__statement_repeat1,
  [3044] = 1,
    ACTIONS(418), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3049] = 1,
    ACTIONS(420), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3054] = 1,
    ACTIONS(422), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3059] = 2,
    ACTIONS(424), 1,
      aux_sym__statement_token2,
    ACTIONS(426), 1,
      aux_sym_comment_token2,
  [3066] = 1,
    ACTIONS(428), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [3071] = 1,
    ACTIONS(430), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3076] = 1,
    ACTIONS(432), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3081] = 2,
    ACTIONS(434), 1,
      aux_sym__statement_token1,
    STATE(61), 1,
      aux_sym__statement_repeat1,
  [3088] = 1,
    ACTIONS(436), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3093] = 1,
    ACTIONS(438), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3098] = 1,
    ACTIONS(440), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3103] = 2,
    ACTIONS(442), 1,
      aux_sym__statement_token1,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [3110] = 1,
    ACTIONS(444), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [3115] = 1,
    ACTIONS(446), 1,
      aux_sym__statement_token2,
  [3119] = 1,
    ACTIONS(448), 1,
      aux_sym__statement_token2,
  [3123] = 1,
    ACTIONS(450), 1,
      aux_sym__statement_token2,
  [3127] = 1,
    ACTIONS(292), 1,
      aux_sym__statement_token2,
  [3131] = 1,
    ACTIONS(108), 1,
      aux_sym__statement_token2,
  [3135] = 1,
    ACTIONS(376), 1,
      anon_sym_DASH,
  [3139] = 1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [3143] = 1,
    ACTIONS(454), 1,
      aux_sym__statement_token2,
  [3147] = 1,
    ACTIONS(456), 1,
      aux_sym__statement_token2,
  [3151] = 1,
    ACTIONS(458), 1,
      aux_sym__statement_token2,
  [3155] = 1,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
  [3159] = 1,
    ACTIONS(462), 1,
      aux_sym__statement_token2,
  [3163] = 1,
    ACTIONS(414), 1,
      anon_sym_COLON,
  [3167] = 1,
    ACTIONS(464), 1,
      aux_sym__term_test_token2,
  [3171] = 1,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [3175] = 1,
    ACTIONS(468), 1,
      aux_sym__statement_token2,
  [3179] = 1,
    ACTIONS(470), 1,
      aux_sym__statement_token2,
  [3183] = 1,
    ACTIONS(472), 1,
      aux_sym__statement_token2,
  [3187] = 1,
    ACTIONS(474), 1,
      anon_sym_COLON,
  [3191] = 1,
    ACTIONS(476), 1,
      aux_sym__statement_token2,
  [3195] = 1,
    ACTIONS(478), 1,
      aux_sym__statement_token2,
  [3199] = 1,
    ACTIONS(480), 1,
      aux_sym__statement_token2,
  [3203] = 1,
    ACTIONS(482), 1,
      aux_sym__statement_token2,
  [3207] = 1,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [3211] = 1,
    ACTIONS(486), 1,
      aux_sym__statement_token2,
  [3215] = 1,
    ACTIONS(488), 1,
      anon_sym_EQ,
  [3219] = 1,
    ACTIONS(490), 1,
      anon_sym_EQ,
  [3223] = 1,
    ACTIONS(492), 1,
      aux_sym__statement_token2,
  [3227] = 1,
    ACTIONS(374), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 181,
  [SMALL_STATE(5)] = 245,
  [SMALL_STATE(6)] = 326,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 562,
  [SMALL_STATE(10)] = 640,
  [SMALL_STATE(11)] = 718,
  [SMALL_STATE(12)] = 796,
  [SMALL_STATE(13)] = 874,
  [SMALL_STATE(14)] = 952,
  [SMALL_STATE(15)] = 1030,
  [SMALL_STATE(16)] = 1108,
  [SMALL_STATE(17)] = 1186,
  [SMALL_STATE(18)] = 1264,
  [SMALL_STATE(19)] = 1342,
  [SMALL_STATE(20)] = 1420,
  [SMALL_STATE(21)] = 1495,
  [SMALL_STATE(22)] = 1567,
  [SMALL_STATE(23)] = 1639,
  [SMALL_STATE(24)] = 1708,
  [SMALL_STATE(25)] = 1774,
  [SMALL_STATE(26)] = 1802,
  [SMALL_STATE(27)] = 1830,
  [SMALL_STATE(28)] = 1858,
  [SMALL_STATE(29)] = 1890,
  [SMALL_STATE(30)] = 1918,
  [SMALL_STATE(31)] = 1944,
  [SMALL_STATE(32)] = 1970,
  [SMALL_STATE(33)] = 1988,
  [SMALL_STATE(34)] = 2009,
  [SMALL_STATE(35)] = 2027,
  [SMALL_STATE(36)] = 2048,
  [SMALL_STATE(37)] = 2069,
  [SMALL_STATE(38)] = 2089,
  [SMALL_STATE(39)] = 2107,
  [SMALL_STATE(40)] = 2125,
  [SMALL_STATE(41)] = 2141,
  [SMALL_STATE(42)] = 2159,
  [SMALL_STATE(43)] = 2177,
  [SMALL_STATE(44)] = 2193,
  [SMALL_STATE(45)] = 2212,
  [SMALL_STATE(46)] = 2227,
  [SMALL_STATE(47)] = 2244,
  [SMALL_STATE(48)] = 2263,
  [SMALL_STATE(49)] = 2280,
  [SMALL_STATE(50)] = 2299,
  [SMALL_STATE(51)] = 2318,
  [SMALL_STATE(52)] = 2332,
  [SMALL_STATE(53)] = 2348,
  [SMALL_STATE(54)] = 2364,
  [SMALL_STATE(55)] = 2378,
  [SMALL_STATE(56)] = 2394,
  [SMALL_STATE(57)] = 2410,
  [SMALL_STATE(58)] = 2424,
  [SMALL_STATE(59)] = 2440,
  [SMALL_STATE(60)] = 2454,
  [SMALL_STATE(61)] = 2468,
  [SMALL_STATE(62)] = 2482,
  [SMALL_STATE(63)] = 2496,
  [SMALL_STATE(64)] = 2510,
  [SMALL_STATE(65)] = 2521,
  [SMALL_STATE(66)] = 2532,
  [SMALL_STATE(67)] = 2543,
  [SMALL_STATE(68)] = 2554,
  [SMALL_STATE(69)] = 2567,
  [SMALL_STATE(70)] = 2580,
  [SMALL_STATE(71)] = 2591,
  [SMALL_STATE(72)] = 2604,
  [SMALL_STATE(73)] = 2615,
  [SMALL_STATE(74)] = 2625,
  [SMALL_STATE(75)] = 2635,
  [SMALL_STATE(76)] = 2645,
  [SMALL_STATE(77)] = 2655,
  [SMALL_STATE(78)] = 2665,
  [SMALL_STATE(79)] = 2675,
  [SMALL_STATE(80)] = 2685,
  [SMALL_STATE(81)] = 2695,
  [SMALL_STATE(82)] = 2703,
  [SMALL_STATE(83)] = 2711,
  [SMALL_STATE(84)] = 2721,
  [SMALL_STATE(85)] = 2731,
  [SMALL_STATE(86)] = 2741,
  [SMALL_STATE(87)] = 2751,
  [SMALL_STATE(88)] = 2761,
  [SMALL_STATE(89)] = 2771,
  [SMALL_STATE(90)] = 2781,
  [SMALL_STATE(91)] = 2791,
  [SMALL_STATE(92)] = 2801,
  [SMALL_STATE(93)] = 2811,
  [SMALL_STATE(94)] = 2821,
  [SMALL_STATE(95)] = 2831,
  [SMALL_STATE(96)] = 2841,
  [SMALL_STATE(97)] = 2851,
  [SMALL_STATE(98)] = 2861,
  [SMALL_STATE(99)] = 2871,
  [SMALL_STATE(100)] = 2881,
  [SMALL_STATE(101)] = 2891,
  [SMALL_STATE(102)] = 2901,
  [SMALL_STATE(103)] = 2906,
  [SMALL_STATE(104)] = 2913,
  [SMALL_STATE(105)] = 2918,
  [SMALL_STATE(106)] = 2925,
  [SMALL_STATE(107)] = 2932,
  [SMALL_STATE(108)] = 2939,
  [SMALL_STATE(109)] = 2946,
  [SMALL_STATE(110)] = 2951,
  [SMALL_STATE(111)] = 2956,
  [SMALL_STATE(112)] = 2961,
  [SMALL_STATE(113)] = 2966,
  [SMALL_STATE(114)] = 2971,
  [SMALL_STATE(115)] = 2976,
  [SMALL_STATE(116)] = 2981,
  [SMALL_STATE(117)] = 2986,
  [SMALL_STATE(118)] = 2991,
  [SMALL_STATE(119)] = 2996,
  [SMALL_STATE(120)] = 3001,
  [SMALL_STATE(121)] = 3006,
  [SMALL_STATE(122)] = 3013,
  [SMALL_STATE(123)] = 3020,
  [SMALL_STATE(124)] = 3025,
  [SMALL_STATE(125)] = 3030,
  [SMALL_STATE(126)] = 3037,
  [SMALL_STATE(127)] = 3044,
  [SMALL_STATE(128)] = 3049,
  [SMALL_STATE(129)] = 3054,
  [SMALL_STATE(130)] = 3059,
  [SMALL_STATE(131)] = 3066,
  [SMALL_STATE(132)] = 3071,
  [SMALL_STATE(133)] = 3076,
  [SMALL_STATE(134)] = 3081,
  [SMALL_STATE(135)] = 3088,
  [SMALL_STATE(136)] = 3093,
  [SMALL_STATE(137)] = 3098,
  [SMALL_STATE(138)] = 3103,
  [SMALL_STATE(139)] = 3110,
  [SMALL_STATE(140)] = 3115,
  [SMALL_STATE(141)] = 3119,
  [SMALL_STATE(142)] = 3123,
  [SMALL_STATE(143)] = 3127,
  [SMALL_STATE(144)] = 3131,
  [SMALL_STATE(145)] = 3135,
  [SMALL_STATE(146)] = 3139,
  [SMALL_STATE(147)] = 3143,
  [SMALL_STATE(148)] = 3147,
  [SMALL_STATE(149)] = 3151,
  [SMALL_STATE(150)] = 3155,
  [SMALL_STATE(151)] = 3159,
  [SMALL_STATE(152)] = 3163,
  [SMALL_STATE(153)] = 3167,
  [SMALL_STATE(154)] = 3171,
  [SMALL_STATE(155)] = 3175,
  [SMALL_STATE(156)] = 3179,
  [SMALL_STATE(157)] = 3183,
  [SMALL_STATE(158)] = 3187,
  [SMALL_STATE(159)] = 3191,
  [SMALL_STATE(160)] = 3195,
  [SMALL_STATE(161)] = 3199,
  [SMALL_STATE(162)] = 3203,
  [SMALL_STATE(163)] = 3207,
  [SMALL_STATE(164)] = 3211,
  [SMALL_STATE(165)] = 3215,
  [SMALL_STATE(166)] = 3219,
  [SMALL_STATE(167)] = 3223,
  [SMALL_STATE(168)] = 3227,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(130),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(76),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(80),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(126),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(131),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(131),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(152),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(131),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(131),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(40),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(43),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(54),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(57),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(64),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(66),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endif, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endif, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endif, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_test, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_value, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_value, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 5),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mode_test, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_variable, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_test, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 2),
  [452] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 5, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 8),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 1),
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
