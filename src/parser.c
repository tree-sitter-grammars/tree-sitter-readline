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
#define SYMBOL_COUNT 142
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
  aux_sym_include_directive_token2 = 22,
  aux_sym_variable_setting_token1 = 23,
  anon_sym_1 = 24,
  aux_sym_bool_value_token1 = 25,
  aux_sym_bool_value_token2 = 26,
  aux_sym_bell_value_token1 = 27,
  aux_sym_bell_value_token2 = 28,
  aux_sym_bell_value_token3 = 29,
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
  sym_string_value = 122,
  sym_edit_mode_value = 123,
  sym_bool_variable = 124,
  sym_bell_variable = 125,
  sym_string_variable = 126,
  sym_number_variable = 127,
  sym_edit_mode_variable = 128,
  sym_keymap_variable = 129,
  sym_key_binding = 130,
  sym_keyseq = 131,
  sym_macro = 132,
  sym__double_quoted_string = 133,
  sym__quoted_string = 134,
  sym_keyname = 135,
  sym_symbolic_character_name = 136,
  aux_sym_source_repeat1 = 137,
  aux_sym__statement_repeat1 = 138,
  aux_sym__double_quoted_string_repeat1 = 139,
  aux_sym__quoted_string_repeat1 = 140,
  aux_sym_keyname_repeat1 = 141,
  alias_sym_alternative = 142,
  alias_sym_consequence = 143,
  alias_sym_file_path = 144,
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
  [aux_sym_include_directive_token2] = "include_directive_token2",
  [aux_sym_variable_setting_token1] = "set",
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
  [aux_sym_include_directive_token2] = aux_sym_include_directive_token2,
  [aux_sym_variable_setting_token1] = aux_sym_variable_setting_token1,
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
  [99] = 4,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 4,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 106,
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
  [138] = 103,
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
  [186] = 105,
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
  [212] = 104,
  [213] = 213,
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
  [269] = 261,
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
      if (eof) ADVANCE(116);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '1') ADVANCE(821);
      if (lookahead == ':') ADVANCE(881);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(885);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(882);
      if (lookahead == ':') ADVANCE(881);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(886);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(907);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(920);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(909);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(913);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(915);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead != 0) ADVANCE(905);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '1') ADVANCE(820);
      if (lookahead == ':') ADVANCE(881);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(118);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(888);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(886);
      if (lookahead != 0) ADVANCE(887);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(831);
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
      if (lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(832);
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
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(831);
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
      if (lookahead == 'x') ADVANCE(831);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(890);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(888);
      END_STATE();
    case 47:
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
    case 48:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(904);
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
          lookahead == 'c') ADVANCE(917);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(909);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(905);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(896);
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
          lookahead == 'd') ADVANCE(898);
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
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 72:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 74:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(823);
      END_STATE();
    case 75:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(829);
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
          lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(893);
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
          lookahead == 'n') ADVANCE(901);
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
          lookahead == 's') ADVANCE(828);
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
          lookahead == 't') ADVANCE(900);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(819);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(891);
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
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(907);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(909);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(913);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead != 0) ADVANCE(905);
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
          lookahead != '\r') ADVANCE(818);
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
      ACCEPT_TOKEN(aux_sym_conditional_construct_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token3);
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
      if (lookahead == '-') ADVANCE(888);
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
          lookahead == 'a') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
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
          lookahead == 'd') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(862);
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
          lookahead == 'e') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
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
          lookahead == 'g') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(873);
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
          lookahead == 'h') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(875);
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
          lookahead == 'n') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(843);
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
          lookahead == 'p') ADVANCE(880);
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
          lookahead == 'r') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
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
          lookahead == 's') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
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
          lookahead == 't') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(848);
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
          lookahead == 'x') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(855);
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
          lookahead == 'y') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(859);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(891);
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
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_include_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_variable_setting_token1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keymap_value);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_bell_variable_token1);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_edit_mode_variable_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_keymap_variable_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(888);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(889);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(888);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(815);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(890);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(888);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 920:
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
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 115},
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
  [35] = {.lex_state = 115},
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
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 115},
  [60] = {.lex_state = 115},
  [61] = {.lex_state = 115},
  [62] = {.lex_state = 115},
  [63] = {.lex_state = 115},
  [64] = {.lex_state = 115},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 115},
  [67] = {.lex_state = 55},
  [68] = {.lex_state = 55},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 48},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 115},
  [102] = {.lex_state = 115},
  [103] = {.lex_state = 115},
  [104] = {.lex_state = 115},
  [105] = {.lex_state = 115},
  [106] = {.lex_state = 115},
  [107] = {.lex_state = 48},
  [108] = {.lex_state = 115},
  [109] = {.lex_state = 115},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 115},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 115},
  [115] = {.lex_state = 115},
  [116] = {.lex_state = 115},
  [117] = {.lex_state = 115},
  [118] = {.lex_state = 115},
  [119] = {.lex_state = 115},
  [120] = {.lex_state = 115},
  [121] = {.lex_state = 115},
  [122] = {.lex_state = 48},
  [123] = {.lex_state = 115},
  [124] = {.lex_state = 115},
  [125] = {.lex_state = 115},
  [126] = {.lex_state = 115},
  [127] = {.lex_state = 115},
  [128] = {.lex_state = 115},
  [129] = {.lex_state = 115},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 115},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 115},
  [134] = {.lex_state = 115},
  [135] = {.lex_state = 115},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 115},
  [138] = {.lex_state = 115},
  [139] = {.lex_state = 115},
  [140] = {.lex_state = 115},
  [141] = {.lex_state = 115},
  [142] = {.lex_state = 115},
  [143] = {.lex_state = 115},
  [144] = {.lex_state = 115},
  [145] = {.lex_state = 115},
  [146] = {.lex_state = 115},
  [147] = {.lex_state = 115},
  [148] = {.lex_state = 115},
  [149] = {.lex_state = 115},
  [150] = {.lex_state = 115},
  [151] = {.lex_state = 115},
  [152] = {.lex_state = 12},
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
  [166] = {.lex_state = 115},
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
  [189] = {.lex_state = 115},
  [190] = {.lex_state = 115},
  [191] = {.lex_state = 115},
  [192] = {.lex_state = 115},
  [193] = {.lex_state = 115},
  [194] = {.lex_state = 115},
  [195] = {.lex_state = 115},
  [196] = {.lex_state = 115},
  [197] = {.lex_state = 115},
  [198] = {.lex_state = 115},
  [199] = {.lex_state = 115},
  [200] = {.lex_state = 115},
  [201] = {.lex_state = 115},
  [202] = {.lex_state = 115},
  [203] = {.lex_state = 115},
  [204] = {.lex_state = 115},
  [205] = {.lex_state = 115},
  [206] = {.lex_state = 115},
  [207] = {.lex_state = 115},
  [208] = {.lex_state = 115},
  [209] = {.lex_state = 115},
  [210] = {.lex_state = 115},
  [211] = {.lex_state = 115},
  [212] = {.lex_state = 115},
  [213] = {.lex_state = 115},
  [214] = {.lex_state = 115},
  [215] = {.lex_state = 115},
  [216] = {.lex_state = 115},
  [217] = {.lex_state = 115},
  [218] = {.lex_state = 115},
  [219] = {.lex_state = 115},
  [220] = {.lex_state = 115},
  [221] = {.lex_state = 115},
  [222] = {.lex_state = 115},
  [223] = {.lex_state = 115},
  [224] = {.lex_state = 115},
  [225] = {.lex_state = 115},
  [226] = {.lex_state = 115},
  [227] = {.lex_state = 115},
  [228] = {.lex_state = 115},
  [229] = {.lex_state = 115},
  [230] = {.lex_state = 115},
  [231] = {.lex_state = 115},
  [232] = {.lex_state = 115},
  [233] = {.lex_state = 115},
  [234] = {.lex_state = 115},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 115},
  [237] = {.lex_state = 115},
  [238] = {.lex_state = 115},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 115},
  [241] = {.lex_state = 115},
  [242] = {.lex_state = 115},
  [243] = {.lex_state = 115},
  [244] = {.lex_state = 115},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 115},
  [247] = {.lex_state = 115},
  [248] = {.lex_state = 115},
  [249] = {.lex_state = 115},
  [250] = {.lex_state = 115},
  [251] = {.lex_state = 115},
  [252] = {.lex_state = 115},
  [253] = {.lex_state = 115},
  [254] = {.lex_state = 115},
  [255] = {.lex_state = 115},
  [256] = {.lex_state = 115},
  [257] = {.lex_state = 115},
  [258] = {.lex_state = 115},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 115},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 114},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 115},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 115},
  [272] = {.lex_state = 115},
  [273] = {.lex_state = 115},
  [274] = {.lex_state = 115},
  [275] = {.lex_state = 4},
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
    [sym_source] = STATE(262),
    [sym__statement] = STATE(65),
    [sym_comment] = STATE(261),
    [sym_conditional_construct] = STATE(261),
    [sym_include_directive] = STATE(261),
    [sym_variable_setting] = STATE(114),
    [sym_key_binding] = STATE(114),
    [sym_keyseq] = STATE(264),
    [sym__double_quoted_string] = STATE(260),
    [sym_keyname] = STATE(264),
    [sym_symbolic_character_name] = STATE(235),
    [aux_sym_source_repeat1] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(56),
    [aux_sym_keyname_repeat1] = STATE(68),
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
    [sym_test] = STATE(190),
    [sym__mode_test] = STATE(231),
    [sym__term_test] = STATE(231),
    [sym__version_test] = STATE(231),
    [sym__application_test] = STATE(231),
    [sym__variable_test] = STATE(231),
    [sym_bool_variable] = STATE(232),
    [sym_bell_variable] = STATE(234),
    [sym_string_variable] = STATE(236),
    [sym_number_variable] = STATE(237),
    [sym_edit_mode_variable] = STATE(238),
    [sym_keymap_variable] = STATE(219),
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
      sym_keymap_variable,
    STATE(158), 1,
      sym_edit_mode_variable,
    STATE(159), 1,
      sym_number_variable,
    STATE(162), 1,
      sym_string_variable,
    STATE(163), 1,
      sym_bell_variable,
    STATE(173), 1,
      sym_bool_variable,
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
    STATE(6), 1,
      aux_sym_source_repeat1,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(32), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(92), 2,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
    ACTIONS(106), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(55), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(52), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(25), 1,
      aux_sym_source_repeat1,
    STATE(47), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(10), 1,
      aux_sym_source_repeat1,
    STATE(45), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(11), 1,
      aux_sym_source_repeat1,
    STATE(51), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(42), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(114), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
      sym_keyseq,
      sym_keyname,
    STATE(261), 3,
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
    STATE(31), 1,
      aux_sym_source_repeat1,
    STATE(40), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(49), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(24), 1,
      aux_sym_source_repeat1,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(19), 1,
      aux_sym_source_repeat1,
    STATE(54), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(26), 1,
      aux_sym_source_repeat1,
    STATE(48), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(15), 1,
      aux_sym_source_repeat1,
    STATE(50), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(53), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(39), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(41), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(106), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(114), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
      sym_keyseq,
      sym_keyname,
    STATE(261), 3,
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
    STATE(18), 1,
      aux_sym_source_repeat1,
    STATE(38), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(27), 1,
      aux_sym_source_repeat1,
    STATE(44), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(46), 1,
      aux_sym__statement_repeat1,
    STATE(59), 1,
      sym__statement,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(106), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(58), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(60), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(160), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(204), 1,
      aux_sym_conditional_construct_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(156), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(218), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(220), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(122), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(226), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(190), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(228), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(194), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(152), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(230), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(140), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(164), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(232), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(234), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(236), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(238), 1,
      aux_sym_conditional_construct_token3,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(212), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    STATE(68), 1,
      aux_sym_keyname_repeat1,
    STATE(235), 1,
      sym_symbolic_character_name,
    STATE(260), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(104), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(264), 2,
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
    ACTIONS(267), 1,
      sym_key_literal,
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(268), 1,
      sym_symbolic_character_name,
    ACTIONS(264), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(261), 10,
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
    STATE(67), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
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
  [4293] = 2,
    ACTIONS(267), 3,
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
    ACTIONS(50), 7,
      aux_sym__statement_token2,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      sym_number_value,
      aux_sym__quoted_string_token1,
  [4333] = 4,
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
  [4351] = 3,
    ACTIONS(282), 1,
      aux_sym__statement_token1,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    ACTIONS(50), 5,
      aux_sym__statement_token2,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
      sym_keymap_value,
  [4365] = 5,
    ACTIONS(285), 1,
      aux_sym__statement_token1,
    ACTIONS(287), 1,
      aux_sym__statement_token2,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    STATE(241), 1,
      sym_bool_value,
    ACTIONS(289), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4383] = 5,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(291), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(257), 1,
      sym_bell_value,
    ACTIONS(293), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4401] = 4,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
    STATE(79), 1,
      aux_sym__statement_repeat1,
    STATE(250), 1,
      sym_bell_value,
    ACTIONS(293), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4416] = 6,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(297), 1,
      sym_function_name,
    ACTIONS(299), 1,
      aux_sym__quoted_string_token1,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    STATE(221), 1,
      sym_macro,
    STATE(249), 1,
      sym__quoted_string,
  [4435] = 4,
    ACTIONS(301), 1,
      aux_sym__statement_token1,
    STATE(80), 1,
      aux_sym__statement_repeat1,
    STATE(250), 1,
      sym_bool_value,
    ACTIONS(289), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4450] = 6,
    ACTIONS(299), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(303), 1,
      aux_sym__statement_token1,
    ACTIONS(305), 1,
      sym_function_name,
    STATE(76), 1,
      aux_sym__statement_repeat1,
    STATE(243), 1,
      sym_macro,
    STATE(249), 1,
      sym__quoted_string,
  [4469] = 4,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(244), 1,
      sym_bell_value,
    ACTIONS(293), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4484] = 4,
    ACTIONS(285), 1,
      aux_sym__statement_token1,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    STATE(244), 1,
      sym_bool_value,
    ACTIONS(289), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4499] = 5,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(307), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(253), 1,
      sym_edit_mode_value,
    ACTIONS(309), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4516] = 5,
    ACTIONS(311), 1,
      aux_sym__statement_token1,
    ACTIONS(313), 1,
      aux_sym__statement_token2,
    ACTIONS(315), 1,
      aux_sym_include_directive_token2,
    STATE(99), 1,
      aux_sym__statement_repeat1,
    STATE(255), 1,
      sym_string_value,
  [4532] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(317), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4546] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(321), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(323), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4560] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(325), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(327), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4574] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(329), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(331), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4588] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(333), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(335), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4602] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(337), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    ACTIONS(339), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4616] = 4,
    ACTIONS(341), 1,
      aux_sym__statement_token1,
    STATE(90), 1,
      aux_sym__statement_repeat1,
    STATE(250), 1,
      sym_edit_mode_value,
    ACTIONS(309), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4630] = 4,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    STATE(58), 1,
      aux_sym__statement_repeat1,
    STATE(244), 1,
      sym_edit_mode_value,
    ACTIONS(309), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4644] = 4,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(343), 1,
      aux_sym__statement_token2,
    ACTIONS(345), 1,
      sym_number_value,
    STATE(70), 1,
      aux_sym__statement_repeat1,
  [4657] = 3,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(349), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4668] = 4,
    ACTIONS(285), 1,
      aux_sym__statement_token1,
    ACTIONS(352), 1,
      aux_sym__statement_token2,
    ACTIONS(354), 1,
      sym_keymap_value,
    STATE(72), 1,
      aux_sym__statement_repeat1,
  [4681] = 3,
    ACTIONS(356), 1,
      aux_sym__quoted_string_token1,
    STATE(98), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(358), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [4692] = 3,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(362), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4703] = 4,
    ACTIONS(311), 1,
      aux_sym__statement_token1,
    ACTIONS(315), 1,
      aux_sym_include_directive_token2,
    STATE(99), 1,
      aux_sym__statement_repeat1,
    STATE(244), 1,
      sym_string_value,
  [4716] = 4,
    ACTIONS(311), 1,
      aux_sym__statement_token1,
    ACTIONS(364), 1,
      aux_sym__statement_token2,
    ACTIONS(366), 1,
      aux_sym_include_directive_token2,
    STATE(99), 1,
      aux_sym__statement_repeat1,
  [4729] = 3,
    ACTIONS(368), 1,
      aux_sym__quoted_string_token1,
    STATE(98), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(370), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [4740] = 4,
    ACTIONS(50), 1,
      aux_sym__statement_token2,
    ACTIONS(52), 1,
      aux_sym_include_directive_token2,
    ACTIONS(373), 1,
      aux_sym__statement_token1,
    STATE(99), 1,
      aux_sym__statement_repeat1,
  [4753] = 4,
    ACTIONS(315), 1,
      aux_sym_include_directive_token2,
    ACTIONS(376), 1,
      aux_sym__statement_token1,
    STATE(96), 1,
      aux_sym__statement_repeat1,
    STATE(250), 1,
      sym_string_value,
  [4766] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(378), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4776] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(380), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4786] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(382), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4796] = 3,
    ACTIONS(384), 1,
      aux_sym__statement_token1,
    ACTIONS(386), 1,
      aux_sym__statement_token2,
    STATE(103), 1,
      aux_sym__statement_repeat1,
  [4806] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(386), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4816] = 3,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
    ACTIONS(388), 1,
      aux_sym__statement_token1,
    STATE(105), 1,
      aux_sym__statement_repeat1,
  [4826] = 3,
    ACTIONS(50), 1,
      aux_sym__version_test_token2,
    ACTIONS(390), 1,
      aux_sym__statement_token1,
    STATE(107), 1,
      aux_sym__statement_repeat1,
  [4836] = 3,
    ACTIONS(393), 1,
      aux_sym__statement_token1,
    ACTIONS(395), 1,
      aux_sym__statement_token2,
    STATE(123), 1,
      aux_sym__statement_repeat1,
  [4846] = 3,
    ACTIONS(397), 1,
      aux_sym__statement_token1,
    ACTIONS(399), 1,
      aux_sym__statement_token2,
    STATE(124), 1,
      aux_sym__statement_repeat1,
  [4856] = 3,
    ACTIONS(401), 1,
      aux_sym__statement_token1,
    ACTIONS(403), 1,
      sym_number_value,
    STATE(130), 1,
      aux_sym__statement_repeat1,
  [4866] = 3,
    ACTIONS(403), 1,
      sym_keymap_value,
    ACTIONS(405), 1,
      aux_sym__statement_token1,
    STATE(132), 1,
      aux_sym__statement_repeat1,
  [4876] = 3,
    ACTIONS(407), 1,
      aux_sym__statement_token1,
    ACTIONS(409), 1,
      aux_sym__statement_token2,
    STATE(97), 1,
      aux_sym__statement_repeat1,
  [4886] = 2,
    STATE(95), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(411), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4894] = 3,
    ACTIONS(240), 1,
      aux_sym__statement_token2,
    ACTIONS(413), 1,
      aux_sym__statement_token1,
    STATE(186), 1,
      aux_sym__statement_repeat1,
  [4904] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(415), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4914] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(417), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4924] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(419), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4934] = 3,
    ACTIONS(421), 1,
      aux_sym__statement_token1,
    ACTIONS(423), 1,
      aux_sym__statement_token2,
    STATE(115), 1,
      aux_sym__statement_repeat1,
  [4944] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(423), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4954] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(425), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4964] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(427), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4974] = 3,
    ACTIONS(429), 1,
      aux_sym__statement_token1,
    ACTIONS(431), 1,
      aux_sym__version_test_token2,
    STATE(107), 1,
      aux_sym__statement_repeat1,
  [4984] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(433), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [4994] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(435), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5004] = 3,
    ACTIONS(437), 1,
      aux_sym__statement_token1,
    ACTIONS(439), 1,
      aux_sym__statement_token2,
    STATE(139), 1,
      aux_sym__statement_repeat1,
  [5014] = 3,
    ACTIONS(441), 1,
      aux_sym__statement_token1,
    ACTIONS(443), 1,
      aux_sym__statement_token2,
    STATE(140), 1,
      aux_sym__statement_repeat1,
  [5024] = 3,
    ACTIONS(433), 1,
      aux_sym__statement_token2,
    ACTIONS(445), 1,
      aux_sym__statement_token1,
    STATE(143), 1,
      aux_sym__statement_repeat1,
  [5034] = 3,
    ACTIONS(435), 1,
      aux_sym__statement_token2,
    ACTIONS(447), 1,
      aux_sym__statement_token1,
    STATE(144), 1,
      aux_sym__statement_repeat1,
  [5044] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(449), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5054] = 3,
    ACTIONS(276), 1,
      aux_sym__statement_token1,
    ACTIONS(451), 1,
      sym_number_value,
    STATE(70), 1,
      aux_sym__statement_repeat1,
  [5064] = 3,
    ACTIONS(453), 1,
      aux_sym__statement_token1,
    ACTIONS(455), 1,
      aux_sym__statement_token2,
    STATE(116), 1,
      aux_sym__statement_repeat1,
  [5074] = 3,
    ACTIONS(285), 1,
      aux_sym__statement_token1,
    ACTIONS(451), 1,
      sym_keymap_value,
    STATE(72), 1,
      aux_sym__statement_repeat1,
  [5084] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(455), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5094] = 3,
    ACTIONS(457), 1,
      aux_sym__statement_token1,
    ACTIONS(459), 1,
      aux_sym__statement_token2,
    STATE(150), 1,
      aux_sym__statement_repeat1,
  [5104] = 3,
    ACTIONS(461), 1,
      aux_sym__statement_token1,
    ACTIONS(463), 1,
      aux_sym__statement_token2,
    STATE(117), 1,
      aux_sym__statement_repeat1,
  [5114] = 2,
    STATE(230), 1,
      sym_edit_mode_value,
    ACTIONS(309), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [5122] = 3,
    ACTIONS(465), 1,
      aux_sym__statement_token1,
    ACTIONS(467), 1,
      aux_sym__statement_token2,
    STATE(119), 1,
      aux_sym__statement_repeat1,
  [5132] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(469), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5142] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(471), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5152] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(473), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5162] = 3,
    ACTIONS(471), 1,
      aux_sym__statement_token2,
    ACTIONS(475), 1,
      aux_sym__statement_token1,
    STATE(160), 1,
      aux_sym__statement_repeat1,
  [5172] = 3,
    ACTIONS(473), 1,
      aux_sym__statement_token2,
    ACTIONS(477), 1,
      aux_sym__statement_token1,
    STATE(161), 1,
      aux_sym__statement_repeat1,
  [5182] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(479), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5192] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(459), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5202] = 3,
    ACTIONS(481), 1,
      aux_sym__statement_token1,
    ACTIONS(483), 1,
      aux_sym__statement_token2,
    STATE(164), 1,
      aux_sym__statement_repeat1,
  [5212] = 3,
    ACTIONS(485), 1,
      aux_sym__statement_token1,
    ACTIONS(487), 1,
      aux_sym__statement_token2,
    STATE(165), 1,
      aux_sym__statement_repeat1,
  [5222] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(463), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5232] = 3,
    ACTIONS(479), 1,
      aux_sym__statement_token2,
    ACTIONS(489), 1,
      aux_sym__statement_token1,
    STATE(168), 1,
      aux_sym__statement_repeat1,
  [5242] = 3,
    ACTIONS(491), 1,
      aux_sym__statement_token1,
    ACTIONS(493), 1,
      aux_sym__statement_token2,
    STATE(120), 1,
      aux_sym__statement_repeat1,
  [5252] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(495), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5262] = 3,
    ACTIONS(497), 1,
      aux_sym__statement_token1,
    ACTIONS(499), 1,
      aux_sym__statement_token2,
    STATE(169), 1,
      aux_sym__statement_repeat1,
  [5272] = 2,
    STATE(94), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(501), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [5280] = 3,
    ACTIONS(495), 1,
      aux_sym__statement_token2,
    ACTIONS(503), 1,
      aux_sym__statement_token1,
    STATE(171), 1,
      aux_sym__statement_repeat1,
  [5290] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(493), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5300] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(505), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5310] = 3,
    ACTIONS(507), 1,
      aux_sym__statement_token1,
    ACTIONS(509), 1,
      aux_sym__statement_token2,
    STATE(175), 1,
      aux_sym__statement_repeat1,
  [5320] = 3,
    ACTIONS(511), 1,
      aux_sym__statement_token1,
    ACTIONS(513), 1,
      aux_sym__statement_token2,
    STATE(93), 1,
      aux_sym__statement_repeat1,
  [5330] = 3,
    ACTIONS(515), 1,
      aux_sym__statement_token1,
    ACTIONS(517), 1,
      aux_sym__statement_token2,
    STATE(81), 1,
      aux_sym__statement_repeat1,
  [5340] = 3,
    ACTIONS(519), 1,
      aux_sym__statement_token1,
    ACTIONS(521), 1,
      aux_sym__statement_token2,
    STATE(91), 1,
      aux_sym__statement_repeat1,
  [5350] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(523), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5360] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(509), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5370] = 3,
    ACTIONS(525), 1,
      aux_sym__statement_token1,
    ACTIONS(527), 1,
      aux_sym__statement_token2,
    STATE(82), 1,
      aux_sym__statement_repeat1,
  [5380] = 3,
    ACTIONS(529), 1,
      aux_sym__statement_token1,
    ACTIONS(531), 1,
      aux_sym__statement_token2,
    STATE(74), 1,
      aux_sym__statement_repeat1,
  [5390] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(533), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5400] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(535), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5410] = 3,
    ACTIONS(533), 1,
      aux_sym__statement_token2,
    ACTIONS(537), 1,
      aux_sym__statement_token1,
    STATE(188), 1,
      aux_sym__statement_repeat1,
  [5420] = 3,
    ACTIONS(535), 1,
      aux_sym__statement_token2,
    ACTIONS(539), 1,
      aux_sym__statement_token1,
    STATE(102), 1,
      aux_sym__statement_repeat1,
  [5430] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(541), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5440] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(543), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5450] = 3,
    ACTIONS(543), 1,
      aux_sym__statement_token2,
    ACTIONS(545), 1,
      aux_sym__statement_token1,
    STATE(191), 1,
      aux_sym__statement_repeat1,
  [5460] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(547), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5470] = 3,
    ACTIONS(549), 1,
      aux_sym__statement_token1,
    ACTIONS(551), 1,
      aux_sym__statement_token2,
    STATE(192), 1,
      aux_sym__statement_repeat1,
  [5480] = 3,
    ACTIONS(553), 1,
      aux_sym__statement_token1,
    ACTIONS(555), 1,
      aux_sym__statement_token2,
    STATE(73), 1,
      aux_sym__statement_repeat1,
  [5490] = 3,
    ACTIONS(547), 1,
      aux_sym__statement_token2,
    ACTIONS(557), 1,
      aux_sym__statement_token1,
    STATE(194), 1,
      aux_sym__statement_repeat1,
  [5500] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(559), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5510] = 3,
    ACTIONS(561), 1,
      aux_sym__statement_token1,
    ACTIONS(563), 1,
      aux_sym__statement_token2,
    STATE(195), 1,
      aux_sym__statement_repeat1,
  [5520] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(565), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5530] = 3,
    ACTIONS(559), 1,
      aux_sym__statement_token2,
    ACTIONS(567), 1,
      aux_sym__statement_token1,
    STATE(197), 1,
      aux_sym__statement_repeat1,
  [5540] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(569), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5550] = 3,
    ACTIONS(571), 1,
      aux_sym__statement_token1,
    ACTIONS(573), 1,
      aux_sym__statement_token2,
    STATE(121), 1,
      aux_sym__statement_repeat1,
  [5560] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(573), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5570] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(575), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5580] = 3,
    ACTIONS(577), 1,
      aux_sym__statement_token1,
    ACTIONS(579), 1,
      aux_sym__statement_token2,
    STATE(129), 1,
      aux_sym__statement_repeat1,
  [5590] = 3,
    ACTIONS(380), 1,
      aux_sym__statement_token2,
    ACTIONS(581), 1,
      aux_sym__statement_token1,
    STATE(101), 1,
      aux_sym__statement_repeat1,
  [5600] = 3,
    ACTIONS(583), 1,
      aux_sym__statement_token1,
    ACTIONS(585), 1,
      aux_sym__statement_token2,
    STATE(133), 1,
      aux_sym__statement_repeat1,
  [5610] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(587), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5620] = 3,
    ACTIONS(589), 1,
      aux_sym__statement_token1,
    ACTIONS(591), 1,
      aux_sym__statement_token2,
    STATE(147), 1,
      aux_sym__statement_repeat1,
  [5630] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(593), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5640] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(595), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5650] = 3,
    ACTIONS(597), 1,
      aux_sym__statement_token1,
    ACTIONS(599), 1,
      aux_sym__statement_token2,
    STATE(189), 1,
      aux_sym__statement_repeat1,
  [5660] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(601), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5670] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(603), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5680] = 3,
    ACTIONS(603), 1,
      aux_sym__statement_token2,
    ACTIONS(605), 1,
      aux_sym__statement_token1,
    STATE(215), 1,
      aux_sym__statement_repeat1,
  [5690] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(607), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5700] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(609), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5710] = 3,
    ACTIONS(609), 1,
      aux_sym__statement_token2,
    ACTIONS(611), 1,
      aux_sym__statement_token1,
    STATE(216), 1,
      aux_sym__statement_repeat1,
  [5720] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(613), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5730] = 3,
    ACTIONS(615), 1,
      aux_sym__statement_token1,
    ACTIONS(617), 1,
      aux_sym__statement_token2,
    STATE(217), 1,
      aux_sym__statement_repeat1,
  [5740] = 3,
    ACTIONS(619), 1,
      aux_sym__statement_token1,
    ACTIONS(621), 1,
      aux_sym__statement_token2,
    STATE(154), 1,
      aux_sym__statement_repeat1,
  [5750] = 3,
    ACTIONS(613), 1,
      aux_sym__statement_token2,
    ACTIONS(623), 1,
      aux_sym__statement_token1,
    STATE(214), 1,
      aux_sym__statement_repeat1,
  [5760] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(591), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5770] = 3,
    ACTIONS(625), 1,
      aux_sym__statement_token1,
    ACTIONS(627), 1,
      aux_sym__statement_token2,
    STATE(155), 1,
      aux_sym__statement_repeat1,
  [5780] = 3,
    ACTIONS(629), 1,
      aux_sym__statement_token1,
    ACTIONS(631), 1,
      aux_sym__statement_token2,
    STATE(210), 1,
      aux_sym__statement_repeat1,
  [5790] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(627), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5800] = 3,
    ACTIONS(607), 1,
      aux_sym__statement_token2,
    ACTIONS(633), 1,
      aux_sym__statement_token1,
    STATE(206), 1,
      aux_sym__statement_repeat1,
  [5810] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(579), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5820] = 3,
    ACTIONS(635), 1,
      aux_sym__statement_token1,
    ACTIONS(637), 1,
      aux_sym__statement_token2,
    STATE(204), 1,
      aux_sym__statement_repeat1,
  [5830] = 3,
    ACTIONS(639), 1,
      aux_sym__statement_token1,
    ACTIONS(641), 1,
      aux_sym__statement_token2,
    STATE(177), 1,
      aux_sym__statement_repeat1,
  [5840] = 3,
    ACTIONS(378), 1,
      aux_sym__statement_token2,
    ACTIONS(643), 1,
      aux_sym__statement_token1,
    STATE(201), 1,
      aux_sym__statement_repeat1,
  [5850] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(641), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5860] = 3,
    ACTIONS(645), 1,
      aux_sym__statement_token1,
    ACTIONS(647), 1,
      aux_sym__statement_token2,
    STATE(179), 1,
      aux_sym__statement_repeat1,
  [5870] = 3,
    ACTIONS(587), 1,
      aux_sym__statement_token2,
    ACTIONS(649), 1,
      aux_sym__statement_token1,
    STATE(138), 1,
      aux_sym__statement_repeat1,
  [5880] = 3,
    ACTIONS(651), 1,
      aux_sym__statement_token1,
    ACTIONS(653), 1,
      aux_sym__statement_token2,
    STATE(181), 1,
      aux_sym__statement_repeat1,
  [5890] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(647), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5900] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(655), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5910] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(657), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5920] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token1,
    ACTIONS(659), 1,
      aux_sym__statement_token2,
    STATE(58), 1,
      aux_sym__statement_repeat1,
  [5930] = 3,
    ACTIONS(659), 1,
      aux_sym__statement_token2,
    ACTIONS(661), 1,
      aux_sym__statement_token1,
    STATE(182), 1,
      aux_sym__statement_repeat1,
  [5940] = 2,
    ACTIONS(663), 1,
      aux_sym__statement_token1,
    STATE(83), 1,
      aux_sym__statement_repeat1,
  [5947] = 1,
    ACTIONS(665), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5952] = 1,
    ACTIONS(667), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5957] = 1,
    ACTIONS(669), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5962] = 2,
    ACTIONS(671), 1,
      aux_sym__statement_token1,
    STATE(71), 1,
      aux_sym__statement_repeat1,
  [5969] = 1,
    ACTIONS(673), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5974] = 1,
    ACTIONS(675), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5979] = 1,
    ACTIONS(677), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5984] = 1,
    ACTIONS(679), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5989] = 1,
    ACTIONS(681), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5994] = 1,
    ACTIONS(683), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5999] = 1,
    ACTIONS(685), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6004] = 1,
    ACTIONS(687), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6009] = 2,
    ACTIONS(689), 1,
      aux_sym__statement_token1,
    STATE(88), 1,
      aux_sym__statement_repeat1,
  [6016] = 2,
    ACTIONS(691), 1,
      aux_sym__statement_token1,
    STATE(2), 1,
      aux_sym__statement_repeat1,
  [6023] = 2,
    ACTIONS(693), 1,
      aux_sym__statement_token1,
    STATE(87), 1,
      aux_sym__statement_repeat1,
  [6030] = 2,
    ACTIONS(695), 1,
      anon_sym_COLON,
    ACTIONS(697), 1,
      anon_sym_DASH,
  [6037] = 2,
    ACTIONS(699), 1,
      aux_sym__statement_token1,
    STATE(86), 1,
      aux_sym__statement_repeat1,
  [6044] = 2,
    ACTIONS(701), 1,
      aux_sym__statement_token1,
    STATE(85), 1,
      aux_sym__statement_repeat1,
  [6051] = 2,
    ACTIONS(703), 1,
      aux_sym__statement_token1,
    STATE(84), 1,
      aux_sym__statement_repeat1,
  [6058] = 2,
    ACTIONS(697), 1,
      anon_sym_DASH,
    ACTIONS(705), 1,
      anon_sym_COLON,
  [6065] = 1,
    ACTIONS(707), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6070] = 1,
    ACTIONS(709), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6075] = 2,
    ACTIONS(711), 1,
      aux_sym__statement_token1,
    STATE(122), 1,
      aux_sym__statement_repeat1,
  [6082] = 1,
    ACTIONS(713), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6087] = 1,
    ACTIONS(715), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6092] = 2,
    ACTIONS(717), 1,
      aux_sym__statement_token2,
    ACTIONS(719), 1,
      aux_sym_comment_token2,
  [6099] = 1,
    ACTIONS(721), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6104] = 2,
    ACTIONS(723), 1,
      aux_sym__statement_token1,
    STATE(3), 1,
      aux_sym__statement_repeat1,
  [6111] = 1,
    ACTIONS(725), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6116] = 1,
    ACTIONS(727), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6121] = 1,
    ACTIONS(729), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6126] = 1,
    ACTIONS(731), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6131] = 1,
    ACTIONS(733), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6136] = 1,
    ACTIONS(735), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6141] = 1,
    ACTIONS(737), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6146] = 1,
    ACTIONS(739), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6151] = 1,
    ACTIONS(741), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6156] = 1,
    ACTIONS(743), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6161] = 1,
    ACTIONS(745), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6166] = 1,
    ACTIONS(747), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [6171] = 1,
    ACTIONS(749), 1,
      anon_sym_COLON,
  [6175] = 1,
    ACTIONS(240), 1,
      aux_sym__statement_token2,
  [6179] = 1,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
  [6183] = 1,
    ACTIONS(695), 1,
      anon_sym_COLON,
  [6187] = 1,
    ACTIONS(753), 1,
      anon_sym_COLON,
  [6191] = 1,
    ACTIONS(755), 1,
      aux_sym__term_test_token2,
  [6195] = 1,
    ACTIONS(757), 1,
      anon_sym_EQ,
  [6199] = 1,
    ACTIONS(705), 1,
      anon_sym_COLON,
  [6203] = 1,
    ACTIONS(697), 1,
      anon_sym_DASH,
  [6207] = 1,
    ACTIONS(202), 1,
      aux_sym__statement_token2,
  [6211] = 1,
    ACTIONS(759), 1,
      anon_sym_COLON,
  [6215] = 1,
    ACTIONS(761), 1,
      aux_sym__statement_token2,
  [6219] = 1,
    ACTIONS(763), 1,
      aux_sym__statement_token2,
  [6223] = 1,
    ACTIONS(386), 1,
      aux_sym__statement_token2,
  [6227] = 1,
    ACTIONS(587), 1,
      aux_sym__statement_token2,
  [6231] = 1,
    ACTIONS(765), 1,
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
  [SMALL_STATE(71)] = 4333,
  [SMALL_STATE(72)] = 4351,
  [SMALL_STATE(73)] = 4365,
  [SMALL_STATE(74)] = 4383,
  [SMALL_STATE(75)] = 4401,
  [SMALL_STATE(76)] = 4416,
  [SMALL_STATE(77)] = 4435,
  [SMALL_STATE(78)] = 4450,
  [SMALL_STATE(79)] = 4469,
  [SMALL_STATE(80)] = 4484,
  [SMALL_STATE(81)] = 4499,
  [SMALL_STATE(82)] = 4516,
  [SMALL_STATE(83)] = 4532,
  [SMALL_STATE(84)] = 4546,
  [SMALL_STATE(85)] = 4560,
  [SMALL_STATE(86)] = 4574,
  [SMALL_STATE(87)] = 4588,
  [SMALL_STATE(88)] = 4602,
  [SMALL_STATE(89)] = 4616,
  [SMALL_STATE(90)] = 4630,
  [SMALL_STATE(91)] = 4644,
  [SMALL_STATE(92)] = 4657,
  [SMALL_STATE(93)] = 4668,
  [SMALL_STATE(94)] = 4681,
  [SMALL_STATE(95)] = 4692,
  [SMALL_STATE(96)] = 4703,
  [SMALL_STATE(97)] = 4716,
  [SMALL_STATE(98)] = 4729,
  [SMALL_STATE(99)] = 4740,
  [SMALL_STATE(100)] = 4753,
  [SMALL_STATE(101)] = 4766,
  [SMALL_STATE(102)] = 4776,
  [SMALL_STATE(103)] = 4786,
  [SMALL_STATE(104)] = 4796,
  [SMALL_STATE(105)] = 4806,
  [SMALL_STATE(106)] = 4816,
  [SMALL_STATE(107)] = 4826,
  [SMALL_STATE(108)] = 4836,
  [SMALL_STATE(109)] = 4846,
  [SMALL_STATE(110)] = 4856,
  [SMALL_STATE(111)] = 4866,
  [SMALL_STATE(112)] = 4876,
  [SMALL_STATE(113)] = 4886,
  [SMALL_STATE(114)] = 4894,
  [SMALL_STATE(115)] = 4904,
  [SMALL_STATE(116)] = 4914,
  [SMALL_STATE(117)] = 4924,
  [SMALL_STATE(118)] = 4934,
  [SMALL_STATE(119)] = 4944,
  [SMALL_STATE(120)] = 4954,
  [SMALL_STATE(121)] = 4964,
  [SMALL_STATE(122)] = 4974,
  [SMALL_STATE(123)] = 4984,
  [SMALL_STATE(124)] = 4994,
  [SMALL_STATE(125)] = 5004,
  [SMALL_STATE(126)] = 5014,
  [SMALL_STATE(127)] = 5024,
  [SMALL_STATE(128)] = 5034,
  [SMALL_STATE(129)] = 5044,
  [SMALL_STATE(130)] = 5054,
  [SMALL_STATE(131)] = 5064,
  [SMALL_STATE(132)] = 5074,
  [SMALL_STATE(133)] = 5084,
  [SMALL_STATE(134)] = 5094,
  [SMALL_STATE(135)] = 5104,
  [SMALL_STATE(136)] = 5114,
  [SMALL_STATE(137)] = 5122,
  [SMALL_STATE(138)] = 5132,
  [SMALL_STATE(139)] = 5142,
  [SMALL_STATE(140)] = 5152,
  [SMALL_STATE(141)] = 5162,
  [SMALL_STATE(142)] = 5172,
  [SMALL_STATE(143)] = 5182,
  [SMALL_STATE(144)] = 5192,
  [SMALL_STATE(145)] = 5202,
  [SMALL_STATE(146)] = 5212,
  [SMALL_STATE(147)] = 5222,
  [SMALL_STATE(148)] = 5232,
  [SMALL_STATE(149)] = 5242,
  [SMALL_STATE(150)] = 5252,
  [SMALL_STATE(151)] = 5262,
  [SMALL_STATE(152)] = 5272,
  [SMALL_STATE(153)] = 5280,
  [SMALL_STATE(154)] = 5290,
  [SMALL_STATE(155)] = 5300,
  [SMALL_STATE(156)] = 5310,
  [SMALL_STATE(157)] = 5320,
  [SMALL_STATE(158)] = 5330,
  [SMALL_STATE(159)] = 5340,
  [SMALL_STATE(160)] = 5350,
  [SMALL_STATE(161)] = 5360,
  [SMALL_STATE(162)] = 5370,
  [SMALL_STATE(163)] = 5380,
  [SMALL_STATE(164)] = 5390,
  [SMALL_STATE(165)] = 5400,
  [SMALL_STATE(166)] = 5410,
  [SMALL_STATE(167)] = 5420,
  [SMALL_STATE(168)] = 5430,
  [SMALL_STATE(169)] = 5440,
  [SMALL_STATE(170)] = 5450,
  [SMALL_STATE(171)] = 5460,
  [SMALL_STATE(172)] = 5470,
  [SMALL_STATE(173)] = 5480,
  [SMALL_STATE(174)] = 5490,
  [SMALL_STATE(175)] = 5500,
  [SMALL_STATE(176)] = 5510,
  [SMALL_STATE(177)] = 5520,
  [SMALL_STATE(178)] = 5530,
  [SMALL_STATE(179)] = 5540,
  [SMALL_STATE(180)] = 5550,
  [SMALL_STATE(181)] = 5560,
  [SMALL_STATE(182)] = 5570,
  [SMALL_STATE(183)] = 5580,
  [SMALL_STATE(184)] = 5590,
  [SMALL_STATE(185)] = 5600,
  [SMALL_STATE(186)] = 5610,
  [SMALL_STATE(187)] = 5620,
  [SMALL_STATE(188)] = 5630,
  [SMALL_STATE(189)] = 5640,
  [SMALL_STATE(190)] = 5650,
  [SMALL_STATE(191)] = 5660,
  [SMALL_STATE(192)] = 5670,
  [SMALL_STATE(193)] = 5680,
  [SMALL_STATE(194)] = 5690,
  [SMALL_STATE(195)] = 5700,
  [SMALL_STATE(196)] = 5710,
  [SMALL_STATE(197)] = 5720,
  [SMALL_STATE(198)] = 5730,
  [SMALL_STATE(199)] = 5740,
  [SMALL_STATE(200)] = 5750,
  [SMALL_STATE(201)] = 5760,
  [SMALL_STATE(202)] = 5770,
  [SMALL_STATE(203)] = 5780,
  [SMALL_STATE(204)] = 5790,
  [SMALL_STATE(205)] = 5800,
  [SMALL_STATE(206)] = 5810,
  [SMALL_STATE(207)] = 5820,
  [SMALL_STATE(208)] = 5830,
  [SMALL_STATE(209)] = 5840,
  [SMALL_STATE(210)] = 5850,
  [SMALL_STATE(211)] = 5860,
  [SMALL_STATE(212)] = 5870,
  [SMALL_STATE(213)] = 5880,
  [SMALL_STATE(214)] = 5890,
  [SMALL_STATE(215)] = 5900,
  [SMALL_STATE(216)] = 5910,
  [SMALL_STATE(217)] = 5920,
  [SMALL_STATE(218)] = 5930,
  [SMALL_STATE(219)] = 5940,
  [SMALL_STATE(220)] = 5947,
  [SMALL_STATE(221)] = 5952,
  [SMALL_STATE(222)] = 5957,
  [SMALL_STATE(223)] = 5962,
  [SMALL_STATE(224)] = 5969,
  [SMALL_STATE(225)] = 5974,
  [SMALL_STATE(226)] = 5979,
  [SMALL_STATE(227)] = 5984,
  [SMALL_STATE(228)] = 5989,
  [SMALL_STATE(229)] = 5994,
  [SMALL_STATE(230)] = 5999,
  [SMALL_STATE(231)] = 6004,
  [SMALL_STATE(232)] = 6009,
  [SMALL_STATE(233)] = 6016,
  [SMALL_STATE(234)] = 6023,
  [SMALL_STATE(235)] = 6030,
  [SMALL_STATE(236)] = 6037,
  [SMALL_STATE(237)] = 6044,
  [SMALL_STATE(238)] = 6051,
  [SMALL_STATE(239)] = 6058,
  [SMALL_STATE(240)] = 6065,
  [SMALL_STATE(241)] = 6070,
  [SMALL_STATE(242)] = 6075,
  [SMALL_STATE(243)] = 6082,
  [SMALL_STATE(244)] = 6087,
  [SMALL_STATE(245)] = 6092,
  [SMALL_STATE(246)] = 6099,
  [SMALL_STATE(247)] = 6104,
  [SMALL_STATE(248)] = 6111,
  [SMALL_STATE(249)] = 6116,
  [SMALL_STATE(250)] = 6121,
  [SMALL_STATE(251)] = 6126,
  [SMALL_STATE(252)] = 6131,
  [SMALL_STATE(253)] = 6136,
  [SMALL_STATE(254)] = 6141,
  [SMALL_STATE(255)] = 6146,
  [SMALL_STATE(256)] = 6151,
  [SMALL_STATE(257)] = 6156,
  [SMALL_STATE(258)] = 6161,
  [SMALL_STATE(259)] = 6166,
  [SMALL_STATE(260)] = 6171,
  [SMALL_STATE(261)] = 6175,
  [SMALL_STATE(262)] = 6179,
  [SMALL_STATE(263)] = 6183,
  [SMALL_STATE(264)] = 6187,
  [SMALL_STATE(265)] = 6191,
  [SMALL_STATE(266)] = 6195,
  [SMALL_STATE(267)] = 6199,
  [SMALL_STATE(268)] = 6203,
  [SMALL_STATE(269)] = 6207,
  [SMALL_STATE(270)] = 6211,
  [SMALL_STATE(271)] = 6215,
  [SMALL_STATE(272)] = 6219,
  [SMALL_STATE(273)] = 6223,
  [SMALL_STATE(274)] = 6227,
  [SMALL_STATE(275)] = 6231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(59),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(245),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(233),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(112),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(247),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(113),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(259),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(259),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(263),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(56),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
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
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(259),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(259),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(70),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(72),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(92),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(98),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(99),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(107),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 14, .production_id = 13),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 13),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 11),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 10),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6, .production_id = 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 12),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 13),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 11),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 9),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 6),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 8),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 10),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 7),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 12),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 7),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 11),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 9),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 8),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 9),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 8),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 10),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 6),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 7),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_test, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_variable, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_variable, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_variable, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_variable, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mode_test, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 5),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_test, 5),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [751] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
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
