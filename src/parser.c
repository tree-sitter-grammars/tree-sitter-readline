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
#define STATE_COUNT 276
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 3
#define TOKEN_COUNT 102
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym__statement_token1 = 1,
  aux_sym__statement_token2 = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  aux_sym_conditional_construct_token1 = 5,
  aux_sym_conditional_construct_token2 = 6,
  aux_sym_conditional_construct_token3 = 7,
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
  aux_sym_variable_setting_token1 = 22,
  anon_sym_1 = 23,
  aux_sym_bool_value_token1 = 24,
  aux_sym_bool_value_token2 = 25,
  aux_sym_bell_value_token1 = 26,
  aux_sym_bell_value_token2 = 27,
  aux_sym_bell_value_token3 = 28,
  sym_string_value = 29,
  sym_number_value = 30,
  aux_sym_edit_mode_value_token1 = 31,
  aux_sym_edit_mode_value_token2 = 32,
  sym_keymap_value = 33,
  aux_sym_bool_variable_token1 = 34,
  aux_sym_bool_variable_token2 = 35,
  aux_sym_bool_variable_token3 = 36,
  aux_sym_bool_variable_token4 = 37,
  aux_sym_bool_variable_token5 = 38,
  aux_sym_bool_variable_token6 = 39,
  aux_sym_bool_variable_token7 = 40,
  aux_sym_bool_variable_token8 = 41,
  aux_sym_bool_variable_token9 = 42,
  aux_sym_bool_variable_token10 = 43,
  aux_sym_bool_variable_token11 = 44,
  aux_sym_bool_variable_token12 = 45,
  aux_sym_bool_variable_token13 = 46,
  aux_sym_bool_variable_token14 = 47,
  aux_sym_bool_variable_token15 = 48,
  aux_sym_bool_variable_token16 = 49,
  aux_sym_bool_variable_token17 = 50,
  aux_sym_bool_variable_token18 = 51,
  aux_sym_bool_variable_token19 = 52,
  aux_sym_bool_variable_token20 = 53,
  aux_sym_bool_variable_token21 = 54,
  aux_sym_bool_variable_token22 = 55,
  aux_sym_bool_variable_token23 = 56,
  aux_sym_bool_variable_token24 = 57,
  aux_sym_bool_variable_token25 = 58,
  aux_sym_bool_variable_token26 = 59,
  aux_sym_bool_variable_token27 = 60,
  aux_sym_bool_variable_token28 = 61,
  aux_sym_bool_variable_token29 = 62,
  aux_sym_bool_variable_token30 = 63,
  aux_sym_bool_variable_token31 = 64,
  aux_sym_bool_variable_token32 = 65,
  aux_sym_bell_variable_token1 = 66,
  aux_sym_string_variable_token1 = 67,
  aux_sym_string_variable_token2 = 68,
  aux_sym_string_variable_token3 = 69,
  aux_sym_string_variable_token4 = 70,
  aux_sym_string_variable_token5 = 71,
  aux_sym_string_variable_token6 = 72,
  aux_sym_string_variable_token7 = 73,
  aux_sym_number_variable_token1 = 74,
  aux_sym_number_variable_token2 = 75,
  aux_sym_number_variable_token3 = 76,
  aux_sym_number_variable_token4 = 77,
  aux_sym_number_variable_token5 = 78,
  aux_sym_edit_mode_variable_token1 = 79,
  aux_sym_keymap_variable_token1 = 80,
  anon_sym_COLON = 81,
  sym_function_name = 82,
  anon_sym_DQUOTE = 83,
  aux_sym__double_quoted_string_token1 = 84,
  aux_sym__quoted_string_token1 = 85,
  aux_sym__quoted_string_token2 = 86,
  sym_escape_sequence = 87,
  anon_sym_DASH = 88,
  aux_sym_symbolic_character_name_token1 = 89,
  aux_sym_symbolic_character_name_token2 = 90,
  aux_sym_symbolic_character_name_token3 = 91,
  aux_sym_symbolic_character_name_token4 = 92,
  aux_sym_symbolic_character_name_token5 = 93,
  aux_sym_symbolic_character_name_token6 = 94,
  aux_sym_symbolic_character_name_token7 = 95,
  aux_sym_symbolic_character_name_token8 = 96,
  aux_sym_symbolic_character_name_token9 = 97,
  aux_sym_symbolic_character_name_token10 = 98,
  aux_sym_symbolic_character_name_token11 = 99,
  aux_sym_symbolic_character_name_token12 = 100,
  sym_key_literal = 101,
  sym_source = 102,
  sym__statement = 103,
  sym_comment = 104,
  sym_conditional_construct = 105,
  sym_test = 106,
  sym__mode_test = 107,
  sym__term_test = 108,
  sym__version_test = 109,
  sym__application_test = 110,
  sym__variable_test = 111,
  sym_include_directive = 112,
  sym_variable_setting = 113,
  sym__bool_assignment = 114,
  sym__bell_assignment = 115,
  sym__string_assignment = 116,
  sym__number_assignment = 117,
  sym__edit_mode_assignment = 118,
  sym__keymap_assignment = 119,
  sym_bool_value = 120,
  sym_bell_value = 121,
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
  alias_sym_alternative = 141,
  alias_sym_consequence = 142,
  alias_sym_file_path = 143,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__statement_token2] = "_statement_token2",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_conditional_construct_token1] = "$if",
  [aux_sym_conditional_construct_token2] = "$else",
  [aux_sym_conditional_construct_token3] = "$endif",
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
  [aux_sym_variable_setting_token1] = "set",
  [anon_sym_1] = "1",
  [aux_sym_bool_value_token1] = "bool_value_token1",
  [aux_sym_bool_value_token2] = "bool_value_token2",
  [aux_sym_bell_value_token1] = "bell_value_token1",
  [aux_sym_bell_value_token2] = "bell_value_token2",
  [aux_sym_bell_value_token3] = "bell_value_token3",
  [sym_string_value] = "string_value",
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
  [aux_sym_conditional_construct_token3] = aux_sym_conditional_construct_token3,
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
  [aux_sym_variable_setting_token1] = aux_sym_variable_setting_token1,
  [anon_sym_1] = anon_sym_1,
  [aux_sym_bool_value_token1] = aux_sym_bool_value_token1,
  [aux_sym_bool_value_token2] = aux_sym_bool_value_token2,
  [aux_sym_bell_value_token1] = aux_sym_bell_value_token1,
  [aux_sym_bell_value_token2] = aux_sym_bell_value_token2,
  [aux_sym_bell_value_token3] = aux_sym_bell_value_token3,
  [sym_string_value] = sym_string_value,
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
  [aux_sym_conditional_construct_token3] = {
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
  [sym_string_value] = {
    .visible = true,
    .named = true,
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
    [4] = alias_sym_consequence,
  },
  [3] = {
    [5] = alias_sym_consequence,
  },
  [4] = {
    [6] = alias_sym_alternative,
  },
  [5] = {
    [7] = alias_sym_alternative,
  },
  [6] = {
    [4] = alias_sym_consequence,
    [7] = alias_sym_alternative,
  },
  [7] = {
    [4] = alias_sym_consequence,
    [8] = alias_sym_alternative,
  },
  [8] = {
    [8] = alias_sym_alternative,
  },
  [9] = {
    [5] = alias_sym_consequence,
    [8] = alias_sym_alternative,
  },
  [10] = {
    [4] = alias_sym_consequence,
    [9] = alias_sym_alternative,
  },
  [11] = {
    [5] = alias_sym_consequence,
    [9] = alias_sym_alternative,
  },
  [12] = {
    [9] = alias_sym_alternative,
  },
  [13] = {
    [5] = alias_sym_consequence,
    [10] = alias_sym_alternative,
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
  [28] = 9,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 4,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 60,
  [64] = 61,
  [65] = 59,
  [66] = 62,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 4,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 4,
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
  [94] = 4,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 97,
  [104] = 104,
  [105] = 4,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 4,
  [113] = 104,
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
  [136] = 101,
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
  [211] = 211,
  [212] = 212,
  [213] = 102,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 263,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 273,
  [275] = 275,
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
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(886);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(887);
      if (lookahead == '-') ADVANCE(894);
      if (lookahead == '1') ADVANCE(822);
      if (lookahead == ':') ADVANCE(883);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(908);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(887);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(887);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(886);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(909);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(922);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(910);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(911);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(917);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(118);
      if (lookahead != 0) ADVANCE(907);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(119);
      if (lookahead != 0) ADVANCE(828);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(884);
      if (lookahead == ':') ADVANCE(883);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(887);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(894);
      if (lookahead == '1') ADVANCE(821);
      if (lookahead == ':') ADVANCE(883);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(821);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(888);
      if (lookahead != 0) ADVANCE(889);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(833);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'x') ADVANCE(833);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(114);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(892);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(890);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(312);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(584);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(427);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(313);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(329);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(818);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(896);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(910);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(911);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(907);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(898);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(900);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 72:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 74:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(824);
      END_STATE();
    case 75:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(831);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(830);
      END_STATE();
    case 102:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(820);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(904);
      END_STATE();
    case 108:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 109:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 110:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(123);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(893);
      END_STATE();
    case 115:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(886);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(909);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(910);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(911);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(118);
      if (lookahead != 0) ADVANCE(907);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(828);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__mode_test_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__term_test_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__version_test_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(677);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(335);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(532);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(626);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(675);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(585);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(526);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(788);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(673);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_variable_setting_token1);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(828);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keymap_value);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_bell_variable_token1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_edit_mode_variable_token1);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_keymap_variable_token1);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(890);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(891);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(890);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(817);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(892);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(890);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 116},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 116},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 116},
  [8] = {.lex_state = 116},
  [9] = {.lex_state = 116},
  [10] = {.lex_state = 116},
  [11] = {.lex_state = 116},
  [12] = {.lex_state = 116},
  [13] = {.lex_state = 116},
  [14] = {.lex_state = 116},
  [15] = {.lex_state = 116},
  [16] = {.lex_state = 116},
  [17] = {.lex_state = 116},
  [18] = {.lex_state = 116},
  [19] = {.lex_state = 116},
  [20] = {.lex_state = 116},
  [21] = {.lex_state = 116},
  [22] = {.lex_state = 116},
  [23] = {.lex_state = 116},
  [24] = {.lex_state = 116},
  [25] = {.lex_state = 116},
  [26] = {.lex_state = 116},
  [27] = {.lex_state = 116},
  [28] = {.lex_state = 116},
  [29] = {.lex_state = 116},
  [30] = {.lex_state = 116},
  [31] = {.lex_state = 116},
  [32] = {.lex_state = 116},
  [33] = {.lex_state = 116},
  [34] = {.lex_state = 116},
  [35] = {.lex_state = 116},
  [36] = {.lex_state = 116},
  [37] = {.lex_state = 116},
  [38] = {.lex_state = 116},
  [39] = {.lex_state = 116},
  [40] = {.lex_state = 116},
  [41] = {.lex_state = 116},
  [42] = {.lex_state = 116},
  [43] = {.lex_state = 116},
  [44] = {.lex_state = 116},
  [45] = {.lex_state = 116},
  [46] = {.lex_state = 116},
  [47] = {.lex_state = 116},
  [48] = {.lex_state = 116},
  [49] = {.lex_state = 116},
  [50] = {.lex_state = 116},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 116},
  [53] = {.lex_state = 116},
  [54] = {.lex_state = 116},
  [55] = {.lex_state = 116},
  [56] = {.lex_state = 116},
  [57] = {.lex_state = 116},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 116},
  [60] = {.lex_state = 116},
  [61] = {.lex_state = 116},
  [62] = {.lex_state = 116},
  [63] = {.lex_state = 116},
  [64] = {.lex_state = 116},
  [65] = {.lex_state = 116},
  [66] = {.lex_state = 116},
  [67] = {.lex_state = 55},
  [68] = {.lex_state = 55},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 48},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 48},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 116},
  [97] = {.lex_state = 116},
  [98] = {.lex_state = 116},
  [99] = {.lex_state = 48},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 116},
  [102] = {.lex_state = 116},
  [103] = {.lex_state = 116},
  [104] = {.lex_state = 116},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 116},
  [107] = {.lex_state = 116},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 48},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 112},
  [113] = {.lex_state = 116},
  [114] = {.lex_state = 116},
  [115] = {.lex_state = 116},
  [116] = {.lex_state = 116},
  [117] = {.lex_state = 116},
  [118] = {.lex_state = 116},
  [119] = {.lex_state = 116},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 116},
  [122] = {.lex_state = 116},
  [123] = {.lex_state = 116},
  [124] = {.lex_state = 116},
  [125] = {.lex_state = 116},
  [126] = {.lex_state = 116},
  [127] = {.lex_state = 116},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 48},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 116},
  [133] = {.lex_state = 116},
  [134] = {.lex_state = 48},
  [135] = {.lex_state = 116},
  [136] = {.lex_state = 116},
  [137] = {.lex_state = 116},
  [138] = {.lex_state = 116},
  [139] = {.lex_state = 116},
  [140] = {.lex_state = 116},
  [141] = {.lex_state = 116},
  [142] = {.lex_state = 116},
  [143] = {.lex_state = 116},
  [144] = {.lex_state = 116},
  [145] = {.lex_state = 116},
  [146] = {.lex_state = 116},
  [147] = {.lex_state = 116},
  [148] = {.lex_state = 116},
  [149] = {.lex_state = 116},
  [150] = {.lex_state = 116},
  [151] = {.lex_state = 116},
  [152] = {.lex_state = 116},
  [153] = {.lex_state = 116},
  [154] = {.lex_state = 116},
  [155] = {.lex_state = 116},
  [156] = {.lex_state = 116},
  [157] = {.lex_state = 116},
  [158] = {.lex_state = 116},
  [159] = {.lex_state = 116},
  [160] = {.lex_state = 116},
  [161] = {.lex_state = 116},
  [162] = {.lex_state = 116},
  [163] = {.lex_state = 116},
  [164] = {.lex_state = 116},
  [165] = {.lex_state = 116},
  [166] = {.lex_state = 116},
  [167] = {.lex_state = 116},
  [168] = {.lex_state = 116},
  [169] = {.lex_state = 116},
  [170] = {.lex_state = 116},
  [171] = {.lex_state = 116},
  [172] = {.lex_state = 116},
  [173] = {.lex_state = 116},
  [174] = {.lex_state = 116},
  [175] = {.lex_state = 116},
  [176] = {.lex_state = 116},
  [177] = {.lex_state = 116},
  [178] = {.lex_state = 116},
  [179] = {.lex_state = 116},
  [180] = {.lex_state = 116},
  [181] = {.lex_state = 116},
  [182] = {.lex_state = 116},
  [183] = {.lex_state = 116},
  [184] = {.lex_state = 112},
  [185] = {.lex_state = 116},
  [186] = {.lex_state = 116},
  [187] = {.lex_state = 116},
  [188] = {.lex_state = 116},
  [189] = {.lex_state = 116},
  [190] = {.lex_state = 116},
  [191] = {.lex_state = 116},
  [192] = {.lex_state = 116},
  [193] = {.lex_state = 116},
  [194] = {.lex_state = 116},
  [195] = {.lex_state = 116},
  [196] = {.lex_state = 116},
  [197] = {.lex_state = 116},
  [198] = {.lex_state = 116},
  [199] = {.lex_state = 116},
  [200] = {.lex_state = 116},
  [201] = {.lex_state = 116},
  [202] = {.lex_state = 116},
  [203] = {.lex_state = 116},
  [204] = {.lex_state = 116},
  [205] = {.lex_state = 116},
  [206] = {.lex_state = 116},
  [207] = {.lex_state = 116},
  [208] = {.lex_state = 116},
  [209] = {.lex_state = 116},
  [210] = {.lex_state = 116},
  [211] = {.lex_state = 116},
  [212] = {.lex_state = 116},
  [213] = {.lex_state = 116},
  [214] = {.lex_state = 116},
  [215] = {.lex_state = 116},
  [216] = {.lex_state = 116},
  [217] = {.lex_state = 116},
  [218] = {.lex_state = 116},
  [219] = {.lex_state = 116},
  [220] = {.lex_state = 116},
  [221] = {.lex_state = 116},
  [222] = {.lex_state = 116},
  [223] = {.lex_state = 116},
  [224] = {.lex_state = 116},
  [225] = {.lex_state = 116},
  [226] = {.lex_state = 116},
  [227] = {.lex_state = 116},
  [228] = {.lex_state = 116},
  [229] = {.lex_state = 116},
  [230] = {.lex_state = 116},
  [231] = {.lex_state = 116},
  [232] = {.lex_state = 116},
  [233] = {.lex_state = 116},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 116},
  [236] = {.lex_state = 116},
  [237] = {.lex_state = 116},
  [238] = {.lex_state = 116},
  [239] = {.lex_state = 116},
  [240] = {.lex_state = 116},
  [241] = {.lex_state = 116},
  [242] = {.lex_state = 116},
  [243] = {.lex_state = 116},
  [244] = {.lex_state = 116},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 116},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 116},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 116},
  [251] = {.lex_state = 116},
  [252] = {.lex_state = 116},
  [253] = {.lex_state = 116},
  [254] = {.lex_state = 116},
  [255] = {.lex_state = 116},
  [256] = {.lex_state = 116},
  [257] = {.lex_state = 116},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 116},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 116},
  [267] = {.lex_state = 116},
  [268] = {.lex_state = 115},
  [269] = {.lex_state = 116},
  [270] = {.lex_state = 116},
  [271] = {.lex_state = 116},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 116},
  [274] = {.lex_state = 116},
  [275] = {.lex_state = 10},
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
    [sym_source] = STATE(261),
    [sym__statement] = STATE(65),
    [sym_comment] = STATE(263),
    [sym_conditional_construct] = STATE(263),
    [sym_include_directive] = STATE(263),
    [sym_variable_setting] = STATE(113),
    [sym_key_binding] = STATE(113),
    [sym_keyseq] = STATE(258),
    [sym__double_quoted_string] = STATE(259),
    [sym_keyname] = STATE(258),
    [sym_symbolic_character_name] = STATE(234),
    [aux_sym_source_repeat1] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(56),
    [aux_sym_keyname_repeat1] = STATE(67),
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
  [2] = {
    [sym_test] = STATE(186),
    [sym__mode_test] = STATE(230),
    [sym__term_test] = STATE(230),
    [sym__version_test] = STATE(230),
    [sym__application_test] = STATE(230),
    [sym__variable_test] = STATE(230),
    [sym_bool_variable] = STATE(231),
    [sym_bell_variable] = STATE(233),
    [sym_string_variable] = STATE(235),
    [sym_number_variable] = STATE(236),
    [sym_edit_mode_variable] = STATE(237),
    [sym_keymap_variable] = STATE(238),
    [aux_sym__statement_repeat1] = STATE(4),
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
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(157), 1,
      sym_number_variable,
    STATE(158), 1,
      sym_string_variable,
    STATE(161), 1,
      sym_bell_variable,
    STATE(162), 1,
      sym_bool_variable,
    STATE(241), 1,
      sym_edit_mode_variable,
    STATE(242), 1,
      sym_keymap_variable,
    ACTIONS(41), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(240), 6,
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
    STATE(4), 1,
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
  [154] = 21,
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
    ACTIONS(54), 1,
      aux_sym__statement_token1,
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(58), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(60), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [232] = 21,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(62), 1,
      aux_sym__statement_token1,
    ACTIONS(64), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(66), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [310] = 21,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(68), 1,
      aux_sym__statement_token1,
    ACTIONS(70), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(72), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(32), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [388] = 21,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(74), 1,
      aux_sym__statement_token1,
    ACTIONS(76), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(78), 1,
      aux_sym_conditional_construct_token3,
    STATE(6), 1,
      aux_sym_source_repeat1,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [466] = 20,
    ACTIONS(80), 1,
      aux_sym__statement_token1,
    ACTIONS(83), 1,
      aux_sym__statement_token2,
    ACTIONS(86), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(94), 1,
      aux_sym_include_directive_token1,
    ACTIONS(97), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_key_literal,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(57), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(92), 2,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
    ACTIONS(106), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(103), 10,
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
  [542] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(112), 1,
      aux_sym__statement_token1,
    ACTIONS(114), 1,
      aux_sym_conditional_construct_token3,
    STATE(27), 1,
      aux_sym_source_repeat1,
    STATE(55), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [617] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(116), 1,
      aux_sym__statement_token1,
    ACTIONS(118), 1,
      aux_sym_conditional_construct_token3,
    STATE(22), 1,
      aux_sym_source_repeat1,
    STATE(45), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [692] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(120), 1,
      aux_sym__statement_token1,
    ACTIONS(122), 1,
      aux_sym_conditional_construct_token3,
    STATE(15), 1,
      aux_sym_source_repeat1,
    STATE(49), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [767] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(124), 1,
      aux_sym__statement_token1,
    ACTIONS(126), 1,
      aux_sym_conditional_construct_token3,
    STATE(21), 1,
      aux_sym_source_repeat1,
    STATE(46), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [842] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(128), 1,
      aux_sym__statement_token1,
    ACTIONS(130), 1,
      aux_sym_conditional_construct_token3,
    STATE(25), 1,
      aux_sym_source_repeat1,
    STATE(44), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [917] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(132), 1,
      aux_sym__statement_token1,
    ACTIONS(134), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(41), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [992] = 20,
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
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_repeat1,
    STATE(56), 1,
      aux_sym__statement_repeat1,
    STATE(65), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(113), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(263), 3,
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
  [1067] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(138), 1,
      aux_sym__statement_token1,
    ACTIONS(140), 1,
      aux_sym_conditional_construct_token3,
    STATE(23), 1,
      aux_sym_source_repeat1,
    STATE(39), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1142] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(142), 1,
      aux_sym__statement_token1,
    ACTIONS(144), 1,
      aux_sym_conditional_construct_token3,
    STATE(30), 1,
      aux_sym_source_repeat1,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1217] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(146), 1,
      aux_sym__statement_token1,
    ACTIONS(148), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(37), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1292] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(152), 1,
      aux_sym_conditional_construct_token3,
    STATE(29), 1,
      aux_sym_source_repeat1,
    STATE(50), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1367] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(154), 1,
      aux_sym__statement_token1,
    ACTIONS(156), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(38), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1442] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(158), 1,
      aux_sym__statement_token1,
    ACTIONS(160), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(52), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1517] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(162), 1,
      aux_sym__statement_token1,
    ACTIONS(164), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(47), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1592] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(166), 1,
      aux_sym__statement_token1,
    ACTIONS(168), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(48), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1667] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(170), 1,
      aux_sym__statement_token1,
    ACTIONS(172), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(42), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1742] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(174), 1,
      aux_sym__statement_token1,
    ACTIONS(176), 1,
      aux_sym_conditional_construct_token3,
    STATE(19), 1,
      aux_sym_source_repeat1,
    STATE(53), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1817] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(178), 1,
      aux_sym__statement_token1,
    ACTIONS(180), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [1892] = 20,
    ACTIONS(86), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      aux_sym_include_directive_token1,
    ACTIONS(97), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_key_literal,
    ACTIONS(182), 1,
      aux_sym__statement_token1,
    ACTIONS(185), 1,
      aux_sym__statement_token2,
    STATE(28), 1,
      aux_sym_source_repeat1,
    STATE(56), 1,
      aux_sym__statement_repeat1,
    STATE(65), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(106), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(113), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(263), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(103), 10,
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
  [1967] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(188), 1,
      aux_sym__statement_token1,
    ACTIONS(190), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(51), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [2042] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(192), 1,
      aux_sym__statement_token1,
    ACTIONS(194), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(54), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [2117] = 20,
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
    ACTIONS(56), 1,
      aux_sym__statement_token2,
    ACTIONS(196), 1,
      aux_sym__statement_token1,
    ACTIONS(198), 1,
      aux_sym_conditional_construct_token3,
    STATE(24), 1,
      aux_sym_source_repeat1,
    STATE(40), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(269), 3,
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
  [2192] = 19,
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
    ACTIONS(114), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(204), 1,
      aux_sym_conditional_construct_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2264] = 19,
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
    ACTIONS(70), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(72), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2336] = 19,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(206), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(208), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2408] = 19,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(210), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(212), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2480] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(214), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2549] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(216), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2618] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(218), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2687] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(220), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2756] = 18,
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
    ACTIONS(176), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2825] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(222), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2894] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(224), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [2963] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(226), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3032] = 18,
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
    ACTIONS(198), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3101] = 18,
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
    ACTIONS(126), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3170] = 18,
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
    ACTIONS(144), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3239] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(228), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3308] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(230), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3377] = 18,
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
    ACTIONS(140), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3446] = 18,
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
    ACTIONS(122), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3515] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(232), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3584] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(234), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3653] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(236), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3722] = 18,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(238), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3791] = 18,
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
    ACTIONS(118), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3860] = 17,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(240), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(213), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(274), 3,
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
  [3926] = 17,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(234), 1,
      sym_symbolic_character_name,
    STATE(259), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(102), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(258), 2,
      sym_keyseq,
      sym_keyname,
    STATE(273), 3,
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
  [3992] = 4,
    ACTIONS(242), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    ACTIONS(52), 4,
      aux_sym_edit_mode_value_token2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(50), 22,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
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
  [4029] = 2,
    ACTIONS(247), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(245), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
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
  [4056] = 2,
    ACTIONS(251), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(249), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
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
  [4083] = 2,
    ACTIONS(255), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(253), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
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
  [4110] = 2,
    ACTIONS(259), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(257), 19,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
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
  [4137] = 2,
    ACTIONS(251), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(249), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
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
  [4163] = 2,
    ACTIONS(255), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(253), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
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
  [4189] = 2,
    ACTIONS(247), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(245), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
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
  [4215] = 2,
    ACTIONS(259), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(257), 18,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
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
  [4241] = 5,
    ACTIONS(261), 1,
      sym_key_literal,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(245), 1,
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
  [4267] = 5,
    ACTIONS(269), 1,
      sym_key_literal,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(260), 1,
      sym_symbolic_character_name,
    ACTIONS(266), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(263), 10,
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
  [4293] = 2,
    ACTIONS(269), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(271), 10,
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
  [4311] = 4,
    ACTIONS(273), 1,
      aux_sym__statement_token1,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(52), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      sym_function_name,
    ACTIONS(50), 6,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      sym_number_value,
      aux_sym__quoted_string_token1,
  [4332] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(278), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 4,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
  [4350] = 6,
    ACTIONS(282), 1,
      aux_sym__statement_token1,
    ACTIONS(284), 1,
      sym_function_name,
    ACTIONS(286), 1,
      aux_sym__quoted_string_token1,
    STATE(75), 1,
      aux_sym__statement_repeat1,
    STATE(244), 1,
      sym_macro,
    STATE(248), 1,
      sym__quoted_string,
  [4369] = 4,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(218), 1,
      sym_bell_value,
    ACTIONS(288), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4384] = 3,
    ACTIONS(290), 1,
      aux_sym__statement_token1,
    STATE(74), 1,
      aux_sym__statement_repeat1,
    ACTIONS(50), 4,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
      sym_keymap_value,
  [4397] = 6,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(286), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(293), 1,
      sym_function_name,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    STATE(219), 1,
      sym_macro,
    STATE(248), 1,
      sym__quoted_string,
  [4416] = 4,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
    STATE(74), 1,
      aux_sym__statement_repeat1,
    STATE(217), 1,
      sym_bool_value,
    ACTIONS(297), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4431] = 4,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(217), 1,
      sym_bell_value,
    ACTIONS(288), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4446] = 4,
    ACTIONS(299), 1,
      aux_sym__statement_token1,
    STATE(76), 1,
      aux_sym__statement_repeat1,
    STATE(251), 1,
      sym_bool_value,
    ACTIONS(297), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4461] = 4,
    ACTIONS(301), 1,
      aux_sym__statement_token1,
    STATE(77), 1,
      aux_sym__statement_repeat1,
    STATE(251), 1,
      sym_bell_value,
    ACTIONS(288), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4476] = 4,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
    STATE(74), 1,
      aux_sym__statement_repeat1,
    STATE(246), 1,
      sym_bool_value,
    ACTIONS(297), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4491] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(303), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(305), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4505] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(307), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(309), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4519] = 4,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(254), 1,
      sym_edit_mode_value,
    ACTIONS(311), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4533] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(315), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4547] = 4,
    ACTIONS(317), 1,
      aux_sym__statement_token1,
    STATE(87), 1,
      aux_sym__statement_repeat1,
    STATE(251), 1,
      sym_edit_mode_value,
    ACTIONS(311), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4561] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(319), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(321), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4575] = 4,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(217), 1,
      sym_edit_mode_value,
    ACTIONS(311), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4589] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(323), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(325), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4603] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(327), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(329), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4617] = 4,
    ACTIONS(331), 1,
      aux_sym__statement_token1,
    ACTIONS(333), 1,
      aux_sym__statement_token2,
    ACTIONS(335), 1,
      sym_string_value,
    STATE(94), 1,
      aux_sym__statement_repeat1,
  [4630] = 3,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(339), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4641] = 3,
    ACTIONS(341), 1,
      aux_sym__quoted_string_token1,
    STATE(95), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(343), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [4652] = 3,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(347), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4663] = 4,
    ACTIONS(50), 1,
      aux_sym__statement_token2,
    ACTIONS(52), 1,
      sym_string_value,
    ACTIONS(350), 1,
      aux_sym__statement_token1,
    STATE(94), 1,
      aux_sym__statement_repeat1,
  [4676] = 3,
    ACTIONS(353), 1,
      aux_sym__quoted_string_token1,
    STATE(95), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(355), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [4687] = 3,
    ACTIONS(358), 1,
      aux_sym__statement_token1,
    ACTIONS(360), 1,
      aux_sym__statement_token2,
    STATE(201), 1,
      aux_sym__statement_repeat1,
  [4697] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(362), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4707] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(364), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4717] = 3,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(366), 1,
      sym_number_value,
    STATE(70), 1,
      aux_sym__statement_repeat1,
  [4727] = 3,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
    ACTIONS(368), 1,
      sym_keymap_value,
    STATE(74), 1,
      aux_sym__statement_repeat1,
  [4737] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(370), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4747] = 3,
    ACTIONS(372), 1,
      aux_sym__statement_token1,
    ACTIONS(374), 1,
      aux_sym__statement_token2,
    STATE(101), 1,
      aux_sym__statement_repeat1,
  [4757] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(374), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4767] = 3,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(376), 1,
      aux_sym__statement_token1,
    STATE(103), 1,
      aux_sym__statement_repeat1,
  [4777] = 3,
    ACTIONS(50), 1,
      aux_sym__version_test_token2,
    ACTIONS(378), 1,
      aux_sym__statement_token1,
    STATE(105), 1,
      aux_sym__statement_repeat1,
  [4787] = 3,
    ACTIONS(381), 1,
      aux_sym__statement_token1,
    ACTIONS(383), 1,
      aux_sym__statement_token2,
    STATE(121), 1,
      aux_sym__statement_repeat1,
  [4797] = 3,
    ACTIONS(385), 1,
      aux_sym__statement_token1,
    ACTIONS(387), 1,
      aux_sym__statement_token2,
    STATE(122), 1,
      aux_sym__statement_repeat1,
  [4807] = 3,
    ACTIONS(389), 1,
      aux_sym__statement_token1,
    ACTIONS(391), 1,
      sym_string_value,
    STATE(128), 1,
      aux_sym__statement_repeat1,
  [4817] = 3,
    ACTIONS(393), 1,
      aux_sym__statement_token1,
    ACTIONS(395), 1,
      sym_number_value,
    STATE(129), 1,
      aux_sym__statement_repeat1,
  [4827] = 3,
    ACTIONS(395), 1,
      sym_keymap_value,
    ACTIONS(397), 1,
      aux_sym__statement_token1,
    STATE(131), 1,
      aux_sym__statement_repeat1,
  [4837] = 2,
    STATE(91), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(399), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4845] = 3,
    ACTIONS(52), 1,
      aux_sym_comment_token2,
    ACTIONS(401), 1,
      aux_sym__statement_token1,
    STATE(112), 1,
      aux_sym__statement_repeat1,
  [4855] = 3,
    ACTIONS(240), 1,
      aux_sym__statement_token2,
    ACTIONS(404), 1,
      aux_sym__statement_token1,
    STATE(97), 1,
      aux_sym__statement_repeat1,
  [4865] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(406), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4875] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(408), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4885] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(410), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4895] = 3,
    ACTIONS(412), 1,
      aux_sym__statement_token1,
    ACTIONS(414), 1,
      aux_sym__statement_token2,
    STATE(114), 1,
      aux_sym__statement_repeat1,
  [4905] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(414), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4915] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(416), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4925] = 3,
    ACTIONS(418), 1,
      aux_sym__statement_token1,
    ACTIONS(420), 1,
      aux_sym__version_test_token2,
    STATE(105), 1,
      aux_sym__statement_repeat1,
  [4935] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(422), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4945] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(424), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4955] = 3,
    ACTIONS(426), 1,
      aux_sym__statement_token1,
    ACTIONS(428), 1,
      aux_sym__statement_token2,
    STATE(138), 1,
      aux_sym__statement_repeat1,
  [4965] = 3,
    ACTIONS(430), 1,
      aux_sym__statement_token1,
    ACTIONS(432), 1,
      aux_sym__statement_token2,
    STATE(139), 1,
      aux_sym__statement_repeat1,
  [4975] = 3,
    ACTIONS(422), 1,
      aux_sym__statement_token2,
    ACTIONS(434), 1,
      aux_sym__statement_token1,
    STATE(142), 1,
      aux_sym__statement_repeat1,
  [4985] = 3,
    ACTIONS(424), 1,
      aux_sym__statement_token2,
    ACTIONS(436), 1,
      aux_sym__statement_token1,
    STATE(143), 1,
      aux_sym__statement_repeat1,
  [4995] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(438), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5005] = 3,
    ACTIONS(331), 1,
      aux_sym__statement_token1,
    ACTIONS(440), 1,
      sym_string_value,
    STATE(94), 1,
      aux_sym__statement_repeat1,
  [5015] = 3,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(442), 1,
      sym_number_value,
    STATE(70), 1,
      aux_sym__statement_repeat1,
  [5025] = 2,
    STATE(92), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(444), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [5033] = 3,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
    ACTIONS(442), 1,
      sym_keymap_value,
    STATE(74), 1,
      aux_sym__statement_repeat1,
  [5043] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(446), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5053] = 3,
    ACTIONS(448), 1,
      aux_sym__statement_token1,
    ACTIONS(450), 1,
      aux_sym__statement_token2,
    STATE(149), 1,
      aux_sym__statement_repeat1,
  [5063] = 2,
    STATE(221), 1,
      sym_edit_mode_value,
    ACTIONS(311), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [5071] = 3,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
    ACTIONS(454), 1,
      aux_sym__statement_token2,
    STATE(115), 1,
      aux_sym__statement_repeat1,
  [5081] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(456), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5091] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(454), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5101] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(458), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5111] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5121] = 3,
    ACTIONS(458), 1,
      aux_sym__statement_token2,
    ACTIONS(462), 1,
      aux_sym__statement_token1,
    STATE(159), 1,
      aux_sym__statement_repeat1,
  [5131] = 3,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
    ACTIONS(464), 1,
      aux_sym__statement_token1,
    STATE(160), 1,
      aux_sym__statement_repeat1,
  [5141] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(466), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5151] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(450), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5161] = 3,
    ACTIONS(468), 1,
      aux_sym__statement_token1,
    ACTIONS(470), 1,
      aux_sym__statement_token2,
    STATE(163), 1,
      aux_sym__statement_repeat1,
  [5171] = 3,
    ACTIONS(472), 1,
      aux_sym__statement_token1,
    ACTIONS(474), 1,
      aux_sym__statement_token2,
    STATE(164), 1,
      aux_sym__statement_repeat1,
  [5181] = 3,
    ACTIONS(476), 1,
      aux_sym__statement_token1,
    ACTIONS(478), 1,
      aux_sym__statement_token2,
    STATE(116), 1,
      aux_sym__statement_repeat1,
  [5191] = 3,
    ACTIONS(466), 1,
      aux_sym__statement_token2,
    ACTIONS(480), 1,
      aux_sym__statement_token1,
    STATE(167), 1,
      aux_sym__statement_repeat1,
  [5201] = 3,
    ACTIONS(482), 1,
      aux_sym__statement_token1,
    ACTIONS(484), 1,
      aux_sym__statement_token2,
    STATE(118), 1,
      aux_sym__statement_repeat1,
  [5211] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(486), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5221] = 3,
    ACTIONS(488), 1,
      aux_sym__statement_token1,
    ACTIONS(490), 1,
      aux_sym__statement_token2,
    STATE(168), 1,
      aux_sym__statement_repeat1,
  [5231] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(478), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5241] = 3,
    ACTIONS(486), 1,
      aux_sym__statement_token2,
    ACTIONS(492), 1,
      aux_sym__statement_token1,
    STATE(170), 1,
      aux_sym__statement_repeat1,
  [5251] = 3,
    ACTIONS(494), 1,
      aux_sym__statement_token1,
    ACTIONS(496), 1,
      aux_sym__statement_token2,
    STATE(119), 1,
      aux_sym__statement_repeat1,
  [5261] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(496), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5271] = 3,
    ACTIONS(498), 1,
      aux_sym__statement_token1,
    ACTIONS(500), 1,
      aux_sym__statement_token2,
    STATE(174), 1,
      aux_sym__statement_repeat1,
  [5281] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(502), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5291] = 3,
    ACTIONS(504), 1,
      aux_sym__statement_token1,
    ACTIONS(506), 1,
      aux_sym__statement_token2,
    STATE(99), 1,
      aux_sym__statement_repeat1,
  [5301] = 3,
    ACTIONS(508), 1,
      aux_sym__statement_token1,
    ACTIONS(510), 1,
      aux_sym__statement_token2,
    STATE(90), 1,
      aux_sym__statement_repeat1,
  [5311] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(512), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5321] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(500), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5331] = 3,
    ACTIONS(514), 1,
      aux_sym__statement_token1,
    ACTIONS(516), 1,
      aux_sym__statement_token2,
    STATE(73), 1,
      aux_sym__statement_repeat1,
  [5341] = 3,
    ACTIONS(518), 1,
      aux_sym__statement_token1,
    ACTIONS(520), 1,
      aux_sym__statement_token2,
    STATE(80), 1,
      aux_sym__statement_repeat1,
  [5351] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(522), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5361] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(524), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5371] = 3,
    ACTIONS(522), 1,
      aux_sym__statement_token2,
    ACTIONS(526), 1,
      aux_sym__statement_token1,
    STATE(187), 1,
      aux_sym__statement_repeat1,
  [5381] = 3,
    ACTIONS(524), 1,
      aux_sym__statement_token2,
    ACTIONS(528), 1,
      aux_sym__statement_token1,
    STATE(188), 1,
      aux_sym__statement_repeat1,
  [5391] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(530), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5401] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(532), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5411] = 3,
    ACTIONS(532), 1,
      aux_sym__statement_token2,
    ACTIONS(534), 1,
      aux_sym__statement_token1,
    STATE(190), 1,
      aux_sym__statement_repeat1,
  [5421] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(536), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5431] = 3,
    ACTIONS(538), 1,
      aux_sym__statement_token1,
    ACTIONS(540), 1,
      aux_sym__statement_token2,
    STATE(191), 1,
      aux_sym__statement_repeat1,
  [5441] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(542), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5451] = 3,
    ACTIONS(536), 1,
      aux_sym__statement_token2,
    ACTIONS(544), 1,
      aux_sym__statement_token1,
    STATE(193), 1,
      aux_sym__statement_repeat1,
  [5461] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(546), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5471] = 3,
    ACTIONS(548), 1,
      aux_sym__statement_token1,
    ACTIONS(550), 1,
      aux_sym__statement_token2,
    STATE(194), 1,
      aux_sym__statement_repeat1,
  [5481] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(552), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5491] = 3,
    ACTIONS(546), 1,
      aux_sym__statement_token2,
    ACTIONS(554), 1,
      aux_sym__statement_token1,
    STATE(196), 1,
      aux_sym__statement_repeat1,
  [5501] = 3,
    ACTIONS(556), 1,
      aux_sym__statement_token1,
    ACTIONS(558), 1,
      aux_sym__statement_token2,
    STATE(127), 1,
      aux_sym__statement_repeat1,
  [5511] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(558), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5521] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(560), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5531] = 3,
    ACTIONS(562), 1,
      aux_sym__statement_token1,
    ACTIONS(564), 1,
      aux_sym__statement_token2,
    STATE(132), 1,
      aux_sym__statement_repeat1,
  [5541] = 3,
    ACTIONS(566), 1,
      aux_sym__statement_token1,
    ACTIONS(568), 1,
      aux_sym__statement_token2,
    STATE(137), 1,
      aux_sym__statement_repeat1,
  [5551] = 3,
    ACTIONS(570), 1,
      aux_sym__statement_token1,
    ACTIONS(572), 1,
      aux_sym__statement_token2,
    STATE(205), 1,
      aux_sym__statement_repeat1,
  [5561] = 3,
    ACTIONS(574), 1,
      aux_sym__statement_token1,
    ACTIONS(576), 1,
      aux_sym_comment_token2,
    STATE(112), 1,
      aux_sym__statement_repeat1,
  [5571] = 3,
    ACTIONS(578), 1,
      aux_sym__statement_token1,
    ACTIONS(580), 1,
      aux_sym__statement_token2,
    STATE(151), 1,
      aux_sym__statement_repeat1,
  [5581] = 3,
    ACTIONS(582), 1,
      aux_sym__statement_token1,
    ACTIONS(584), 1,
      aux_sym__statement_token2,
    STATE(98), 1,
      aux_sym__statement_repeat1,
  [5591] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(586), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5601] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(572), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5611] = 3,
    ACTIONS(588), 1,
      aux_sym__statement_token1,
    ACTIONS(590), 1,
      aux_sym__statement_token2,
    STATE(154), 1,
      aux_sym__statement_repeat1,
  [5621] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(592), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5631] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(594), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5641] = 3,
    ACTIONS(594), 1,
      aux_sym__statement_token2,
    ACTIONS(596), 1,
      aux_sym__statement_token1,
    STATE(214), 1,
      aux_sym__statement_repeat1,
  [5651] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(598), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5661] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(600), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5671] = 3,
    ACTIONS(600), 1,
      aux_sym__statement_token2,
    ACTIONS(602), 1,
      aux_sym__statement_token1,
    STATE(215), 1,
      aux_sym__statement_repeat1,
  [5681] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(604), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5691] = 3,
    ACTIONS(606), 1,
      aux_sym__statement_token1,
    ACTIONS(608), 1,
      aux_sym__statement_token2,
    STATE(216), 1,
      aux_sym__statement_repeat1,
  [5701] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(580), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5711] = 3,
    ACTIONS(604), 1,
      aux_sym__statement_token2,
    ACTIONS(610), 1,
      aux_sym__statement_token1,
    STATE(211), 1,
      aux_sym__statement_repeat1,
  [5721] = 3,
    ACTIONS(612), 1,
      aux_sym__statement_token1,
    ACTIONS(614), 1,
      aux_sym__statement_token2,
    STATE(156), 1,
      aux_sym__statement_repeat1,
  [5731] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(614), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5741] = 3,
    ACTIONS(616), 1,
      aux_sym__statement_token1,
    ACTIONS(618), 1,
      aux_sym__statement_token2,
    STATE(207), 1,
      aux_sym__statement_repeat1,
  [5751] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(564), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5761] = 3,
    ACTIONS(598), 1,
      aux_sym__statement_token2,
    ACTIONS(620), 1,
      aux_sym__statement_token1,
    STATE(203), 1,
      aux_sym__statement_repeat1,
  [5771] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(622), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5781] = 3,
    ACTIONS(624), 1,
      aux_sym__statement_token1,
    ACTIONS(626), 1,
      aux_sym__statement_token2,
    STATE(172), 1,
      aux_sym__statement_repeat1,
  [5791] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(626), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5801] = 3,
    ACTIONS(622), 1,
      aux_sym__statement_token2,
    ACTIONS(628), 1,
      aux_sym__statement_token1,
    STATE(198), 1,
      aux_sym__statement_repeat1,
  [5811] = 3,
    ACTIONS(630), 1,
      aux_sym__statement_token1,
    ACTIONS(632), 1,
      aux_sym__statement_token2,
    STATE(176), 1,
      aux_sym__statement_repeat1,
  [5821] = 3,
    ACTIONS(634), 1,
      aux_sym__statement_token1,
    ACTIONS(636), 1,
      aux_sym__statement_token2,
    STATE(179), 1,
      aux_sym__statement_repeat1,
  [5831] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(632), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5841] = 3,
    ACTIONS(638), 1,
      aux_sym__statement_token1,
    ACTIONS(640), 1,
      aux_sym__statement_token2,
    STATE(180), 1,
      aux_sym__statement_repeat1,
  [5851] = 3,
    ACTIONS(362), 1,
      aux_sym__statement_token2,
    ACTIONS(642), 1,
      aux_sym__statement_token1,
    STATE(136), 1,
      aux_sym__statement_repeat1,
  [5861] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(644), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5871] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(646), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5881] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(640), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5891] = 1,
    ACTIONS(648), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5896] = 1,
    ACTIONS(650), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5901] = 1,
    ACTIONS(652), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5906] = 1,
    ACTIONS(654), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5911] = 1,
    ACTIONS(656), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5916] = 2,
    ACTIONS(658), 1,
      aux_sym__statement_token1,
    STATE(71), 1,
      aux_sym__statement_repeat1,
  [5923] = 1,
    ACTIONS(660), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5928] = 1,
    ACTIONS(662), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5933] = 1,
    ACTIONS(664), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5938] = 1,
    ACTIONS(666), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5943] = 2,
    ACTIONS(668), 1,
      aux_sym__statement_token1,
    STATE(2), 1,
      aux_sym__statement_repeat1,
  [5950] = 1,
    ACTIONS(670), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5955] = 2,
    ACTIONS(672), 1,
      aux_sym__statement_token1,
    STATE(120), 1,
      aux_sym__statement_repeat1,
  [5962] = 1,
    ACTIONS(674), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5967] = 2,
    ACTIONS(676), 1,
      aux_sym__statement_token1,
    STATE(84), 1,
      aux_sym__statement_repeat1,
  [5974] = 2,
    ACTIONS(678), 1,
      aux_sym__statement_token1,
    STATE(184), 1,
      aux_sym__statement_repeat1,
  [5981] = 2,
    ACTIONS(680), 1,
      aux_sym__statement_token1,
    STATE(89), 1,
      aux_sym__statement_repeat1,
  [5988] = 2,
    ACTIONS(682), 1,
      anon_sym_COLON,
    ACTIONS(684), 1,
      anon_sym_DASH,
  [5995] = 2,
    ACTIONS(686), 1,
      aux_sym__statement_token1,
    STATE(88), 1,
      aux_sym__statement_repeat1,
  [6002] = 2,
    ACTIONS(688), 1,
      aux_sym__statement_token1,
    STATE(86), 1,
      aux_sym__statement_repeat1,
  [6009] = 2,
    ACTIONS(690), 1,
      aux_sym__statement_token1,
    STATE(81), 1,
      aux_sym__statement_repeat1,
  [6016] = 2,
    ACTIONS(692), 1,
      aux_sym__statement_token1,
    STATE(82), 1,
      aux_sym__statement_repeat1,
  [6023] = 2,
    ACTIONS(694), 1,
      aux_sym__statement_token1,
    STATE(3), 1,
      aux_sym__statement_repeat1,
  [6030] = 1,
    ACTIONS(696), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6035] = 2,
    ACTIONS(698), 1,
      aux_sym__statement_token1,
    STATE(83), 1,
      aux_sym__statement_repeat1,
  [6042] = 2,
    ACTIONS(700), 1,
      aux_sym__statement_token1,
    STATE(100), 1,
      aux_sym__statement_repeat1,
  [6049] = 1,
    ACTIONS(702), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6054] = 1,
    ACTIONS(704), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6059] = 2,
    ACTIONS(684), 1,
      anon_sym_DASH,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [6066] = 1,
    ACTIONS(708), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6071] = 1,
    ACTIONS(710), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [6076] = 1,
    ACTIONS(712), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6081] = 2,
    ACTIONS(714), 1,
      aux_sym__statement_token2,
    ACTIONS(716), 1,
      aux_sym_comment_token2,
  [6088] = 1,
    ACTIONS(718), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6093] = 1,
    ACTIONS(720), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6098] = 1,
    ACTIONS(722), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6103] = 1,
    ACTIONS(724), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6108] = 1,
    ACTIONS(726), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6113] = 1,
    ACTIONS(728), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6118] = 1,
    ACTIONS(730), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6123] = 1,
    ACTIONS(732), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6128] = 1,
    ACTIONS(734), 1,
      anon_sym_COLON,
  [6132] = 1,
    ACTIONS(736), 1,
      anon_sym_COLON,
  [6136] = 1,
    ACTIONS(684), 1,
      anon_sym_DASH,
  [6140] = 1,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
  [6144] = 1,
    ACTIONS(682), 1,
      anon_sym_COLON,
  [6148] = 1,
    ACTIONS(240), 1,
      aux_sym__statement_token2,
  [6152] = 1,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [6156] = 1,
    ACTIONS(740), 1,
      anon_sym_COLON,
  [6160] = 1,
    ACTIONS(742), 1,
      aux_sym__statement_token2,
  [6164] = 1,
    ACTIONS(744), 1,
      aux_sym__statement_token2,
  [6168] = 1,
    ACTIONS(746), 1,
      aux_sym__term_test_token2,
  [6172] = 1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
  [6176] = 1,
    ACTIONS(748), 1,
      aux_sym__statement_token1,
  [6180] = 1,
    ACTIONS(750), 1,
      aux_sym__statement_token1,
  [6184] = 1,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [6188] = 1,
    ACTIONS(374), 1,
      aux_sym__statement_token2,
  [6192] = 1,
    ACTIONS(362), 1,
      aux_sym__statement_token2,
  [6196] = 1,
    ACTIONS(754), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 388,
  [SMALL_STATE(9)] = 466,
  [SMALL_STATE(10)] = 542,
  [SMALL_STATE(11)] = 617,
  [SMALL_STATE(12)] = 692,
  [SMALL_STATE(13)] = 767,
  [SMALL_STATE(14)] = 842,
  [SMALL_STATE(15)] = 917,
  [SMALL_STATE(16)] = 992,
  [SMALL_STATE(17)] = 1067,
  [SMALL_STATE(18)] = 1142,
  [SMALL_STATE(19)] = 1217,
  [SMALL_STATE(20)] = 1292,
  [SMALL_STATE(21)] = 1367,
  [SMALL_STATE(22)] = 1442,
  [SMALL_STATE(23)] = 1517,
  [SMALL_STATE(24)] = 1592,
  [SMALL_STATE(25)] = 1667,
  [SMALL_STATE(26)] = 1742,
  [SMALL_STATE(27)] = 1817,
  [SMALL_STATE(28)] = 1892,
  [SMALL_STATE(29)] = 1967,
  [SMALL_STATE(30)] = 2042,
  [SMALL_STATE(31)] = 2117,
  [SMALL_STATE(32)] = 2192,
  [SMALL_STATE(33)] = 2264,
  [SMALL_STATE(34)] = 2336,
  [SMALL_STATE(35)] = 2408,
  [SMALL_STATE(36)] = 2480,
  [SMALL_STATE(37)] = 2549,
  [SMALL_STATE(38)] = 2618,
  [SMALL_STATE(39)] = 2687,
  [SMALL_STATE(40)] = 2756,
  [SMALL_STATE(41)] = 2825,
  [SMALL_STATE(42)] = 2894,
  [SMALL_STATE(43)] = 2963,
  [SMALL_STATE(44)] = 3032,
  [SMALL_STATE(45)] = 3101,
  [SMALL_STATE(46)] = 3170,
  [SMALL_STATE(47)] = 3239,
  [SMALL_STATE(48)] = 3308,
  [SMALL_STATE(49)] = 3377,
  [SMALL_STATE(50)] = 3446,
  [SMALL_STATE(51)] = 3515,
  [SMALL_STATE(52)] = 3584,
  [SMALL_STATE(53)] = 3653,
  [SMALL_STATE(54)] = 3722,
  [SMALL_STATE(55)] = 3791,
  [SMALL_STATE(56)] = 3860,
  [SMALL_STATE(57)] = 3926,
  [SMALL_STATE(58)] = 3992,
  [SMALL_STATE(59)] = 4029,
  [SMALL_STATE(60)] = 4056,
  [SMALL_STATE(61)] = 4083,
  [SMALL_STATE(62)] = 4110,
  [SMALL_STATE(63)] = 4137,
  [SMALL_STATE(64)] = 4163,
  [SMALL_STATE(65)] = 4189,
  [SMALL_STATE(66)] = 4215,
  [SMALL_STATE(67)] = 4241,
  [SMALL_STATE(68)] = 4267,
  [SMALL_STATE(69)] = 4293,
  [SMALL_STATE(70)] = 4311,
  [SMALL_STATE(71)] = 4332,
  [SMALL_STATE(72)] = 4350,
  [SMALL_STATE(73)] = 4369,
  [SMALL_STATE(74)] = 4384,
  [SMALL_STATE(75)] = 4397,
  [SMALL_STATE(76)] = 4416,
  [SMALL_STATE(77)] = 4431,
  [SMALL_STATE(78)] = 4446,
  [SMALL_STATE(79)] = 4461,
  [SMALL_STATE(80)] = 4476,
  [SMALL_STATE(81)] = 4491,
  [SMALL_STATE(82)] = 4505,
  [SMALL_STATE(83)] = 4519,
  [SMALL_STATE(84)] = 4533,
  [SMALL_STATE(85)] = 4547,
  [SMALL_STATE(86)] = 4561,
  [SMALL_STATE(87)] = 4575,
  [SMALL_STATE(88)] = 4589,
  [SMALL_STATE(89)] = 4603,
  [SMALL_STATE(90)] = 4617,
  [SMALL_STATE(91)] = 4630,
  [SMALL_STATE(92)] = 4641,
  [SMALL_STATE(93)] = 4652,
  [SMALL_STATE(94)] = 4663,
  [SMALL_STATE(95)] = 4676,
  [SMALL_STATE(96)] = 4687,
  [SMALL_STATE(97)] = 4697,
  [SMALL_STATE(98)] = 4707,
  [SMALL_STATE(99)] = 4717,
  [SMALL_STATE(100)] = 4727,
  [SMALL_STATE(101)] = 4737,
  [SMALL_STATE(102)] = 4747,
  [SMALL_STATE(103)] = 4757,
  [SMALL_STATE(104)] = 4767,
  [SMALL_STATE(105)] = 4777,
  [SMALL_STATE(106)] = 4787,
  [SMALL_STATE(107)] = 4797,
  [SMALL_STATE(108)] = 4807,
  [SMALL_STATE(109)] = 4817,
  [SMALL_STATE(110)] = 4827,
  [SMALL_STATE(111)] = 4837,
  [SMALL_STATE(112)] = 4845,
  [SMALL_STATE(113)] = 4855,
  [SMALL_STATE(114)] = 4865,
  [SMALL_STATE(115)] = 4875,
  [SMALL_STATE(116)] = 4885,
  [SMALL_STATE(117)] = 4895,
  [SMALL_STATE(118)] = 4905,
  [SMALL_STATE(119)] = 4915,
  [SMALL_STATE(120)] = 4925,
  [SMALL_STATE(121)] = 4935,
  [SMALL_STATE(122)] = 4945,
  [SMALL_STATE(123)] = 4955,
  [SMALL_STATE(124)] = 4965,
  [SMALL_STATE(125)] = 4975,
  [SMALL_STATE(126)] = 4985,
  [SMALL_STATE(127)] = 4995,
  [SMALL_STATE(128)] = 5005,
  [SMALL_STATE(129)] = 5015,
  [SMALL_STATE(130)] = 5025,
  [SMALL_STATE(131)] = 5033,
  [SMALL_STATE(132)] = 5043,
  [SMALL_STATE(133)] = 5053,
  [SMALL_STATE(134)] = 5063,
  [SMALL_STATE(135)] = 5071,
  [SMALL_STATE(136)] = 5081,
  [SMALL_STATE(137)] = 5091,
  [SMALL_STATE(138)] = 5101,
  [SMALL_STATE(139)] = 5111,
  [SMALL_STATE(140)] = 5121,
  [SMALL_STATE(141)] = 5131,
  [SMALL_STATE(142)] = 5141,
  [SMALL_STATE(143)] = 5151,
  [SMALL_STATE(144)] = 5161,
  [SMALL_STATE(145)] = 5171,
  [SMALL_STATE(146)] = 5181,
  [SMALL_STATE(147)] = 5191,
  [SMALL_STATE(148)] = 5201,
  [SMALL_STATE(149)] = 5211,
  [SMALL_STATE(150)] = 5221,
  [SMALL_STATE(151)] = 5231,
  [SMALL_STATE(152)] = 5241,
  [SMALL_STATE(153)] = 5251,
  [SMALL_STATE(154)] = 5261,
  [SMALL_STATE(155)] = 5271,
  [SMALL_STATE(156)] = 5281,
  [SMALL_STATE(157)] = 5291,
  [SMALL_STATE(158)] = 5301,
  [SMALL_STATE(159)] = 5311,
  [SMALL_STATE(160)] = 5321,
  [SMALL_STATE(161)] = 5331,
  [SMALL_STATE(162)] = 5341,
  [SMALL_STATE(163)] = 5351,
  [SMALL_STATE(164)] = 5361,
  [SMALL_STATE(165)] = 5371,
  [SMALL_STATE(166)] = 5381,
  [SMALL_STATE(167)] = 5391,
  [SMALL_STATE(168)] = 5401,
  [SMALL_STATE(169)] = 5411,
  [SMALL_STATE(170)] = 5421,
  [SMALL_STATE(171)] = 5431,
  [SMALL_STATE(172)] = 5441,
  [SMALL_STATE(173)] = 5451,
  [SMALL_STATE(174)] = 5461,
  [SMALL_STATE(175)] = 5471,
  [SMALL_STATE(176)] = 5481,
  [SMALL_STATE(177)] = 5491,
  [SMALL_STATE(178)] = 5501,
  [SMALL_STATE(179)] = 5511,
  [SMALL_STATE(180)] = 5521,
  [SMALL_STATE(181)] = 5531,
  [SMALL_STATE(182)] = 5541,
  [SMALL_STATE(183)] = 5551,
  [SMALL_STATE(184)] = 5561,
  [SMALL_STATE(185)] = 5571,
  [SMALL_STATE(186)] = 5581,
  [SMALL_STATE(187)] = 5591,
  [SMALL_STATE(188)] = 5601,
  [SMALL_STATE(189)] = 5611,
  [SMALL_STATE(190)] = 5621,
  [SMALL_STATE(191)] = 5631,
  [SMALL_STATE(192)] = 5641,
  [SMALL_STATE(193)] = 5651,
  [SMALL_STATE(194)] = 5661,
  [SMALL_STATE(195)] = 5671,
  [SMALL_STATE(196)] = 5681,
  [SMALL_STATE(197)] = 5691,
  [SMALL_STATE(198)] = 5701,
  [SMALL_STATE(199)] = 5711,
  [SMALL_STATE(200)] = 5721,
  [SMALL_STATE(201)] = 5731,
  [SMALL_STATE(202)] = 5741,
  [SMALL_STATE(203)] = 5751,
  [SMALL_STATE(204)] = 5761,
  [SMALL_STATE(205)] = 5771,
  [SMALL_STATE(206)] = 5781,
  [SMALL_STATE(207)] = 5791,
  [SMALL_STATE(208)] = 5801,
  [SMALL_STATE(209)] = 5811,
  [SMALL_STATE(210)] = 5821,
  [SMALL_STATE(211)] = 5831,
  [SMALL_STATE(212)] = 5841,
  [SMALL_STATE(213)] = 5851,
  [SMALL_STATE(214)] = 5861,
  [SMALL_STATE(215)] = 5871,
  [SMALL_STATE(216)] = 5881,
  [SMALL_STATE(217)] = 5891,
  [SMALL_STATE(218)] = 5896,
  [SMALL_STATE(219)] = 5901,
  [SMALL_STATE(220)] = 5906,
  [SMALL_STATE(221)] = 5911,
  [SMALL_STATE(222)] = 5916,
  [SMALL_STATE(223)] = 5923,
  [SMALL_STATE(224)] = 5928,
  [SMALL_STATE(225)] = 5933,
  [SMALL_STATE(226)] = 5938,
  [SMALL_STATE(227)] = 5943,
  [SMALL_STATE(228)] = 5950,
  [SMALL_STATE(229)] = 5955,
  [SMALL_STATE(230)] = 5962,
  [SMALL_STATE(231)] = 5967,
  [SMALL_STATE(232)] = 5974,
  [SMALL_STATE(233)] = 5981,
  [SMALL_STATE(234)] = 5988,
  [SMALL_STATE(235)] = 5995,
  [SMALL_STATE(236)] = 6002,
  [SMALL_STATE(237)] = 6009,
  [SMALL_STATE(238)] = 6016,
  [SMALL_STATE(239)] = 6023,
  [SMALL_STATE(240)] = 6030,
  [SMALL_STATE(241)] = 6035,
  [SMALL_STATE(242)] = 6042,
  [SMALL_STATE(243)] = 6049,
  [SMALL_STATE(244)] = 6054,
  [SMALL_STATE(245)] = 6059,
  [SMALL_STATE(246)] = 6066,
  [SMALL_STATE(247)] = 6071,
  [SMALL_STATE(248)] = 6076,
  [SMALL_STATE(249)] = 6081,
  [SMALL_STATE(250)] = 6088,
  [SMALL_STATE(251)] = 6093,
  [SMALL_STATE(252)] = 6098,
  [SMALL_STATE(253)] = 6103,
  [SMALL_STATE(254)] = 6108,
  [SMALL_STATE(255)] = 6113,
  [SMALL_STATE(256)] = 6118,
  [SMALL_STATE(257)] = 6123,
  [SMALL_STATE(258)] = 6128,
  [SMALL_STATE(259)] = 6132,
  [SMALL_STATE(260)] = 6136,
  [SMALL_STATE(261)] = 6140,
  [SMALL_STATE(262)] = 6144,
  [SMALL_STATE(263)] = 6148,
  [SMALL_STATE(264)] = 6152,
  [SMALL_STATE(265)] = 6156,
  [SMALL_STATE(266)] = 6160,
  [SMALL_STATE(267)] = 6164,
  [SMALL_STATE(268)] = 6168,
  [SMALL_STATE(269)] = 6172,
  [SMALL_STATE(270)] = 6176,
  [SMALL_STATE(271)] = 6180,
  [SMALL_STATE(272)] = 6184,
  [SMALL_STATE(273)] = 6188,
  [SMALL_STATE(274)] = 6192,
  [SMALL_STATE(275)] = 6196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(59),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(249),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(227),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(232),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(239),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(111),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(247),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(247),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(262),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(56),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(58),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(247),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(247),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(70),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(74),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(93),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(94),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 9),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(105),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 5),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(112),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 14, .production_id = 13),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 12),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 13),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 11),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6, .production_id = 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 10),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 12),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 13),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 11),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 9),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 8),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 6),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 10),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 7),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 12),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 11),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 7),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 9),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 8),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 8),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 10),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 7),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 6),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mode_test, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_variable, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_variable, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_test, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_test, 5),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [738] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_variable, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_variable, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
