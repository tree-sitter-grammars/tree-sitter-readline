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
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_set = 4,
  anon_sym_1 = 5,
  aux_sym_bool_value_token1 = 6,
  aux_sym_bool_value_token2 = 7,
  aux_sym_bell_value_token1 = 8,
  aux_sym_bell_value_token2 = 9,
  aux_sym_bell_value_token3 = 10,
  sym_number_value = 11,
  aux_sym_edit_mode_value_token1 = 12,
  aux_sym_edit_mode_value_token2 = 13,
  sym_keymap_value = 14,
  aux_sym_bool_variable_token1 = 15,
  aux_sym_bool_variable_token2 = 16,
  aux_sym_bool_variable_token3 = 17,
  aux_sym_bool_variable_token4 = 18,
  aux_sym_bool_variable_token5 = 19,
  aux_sym_bool_variable_token6 = 20,
  aux_sym_bool_variable_token7 = 21,
  aux_sym_bool_variable_token8 = 22,
  aux_sym_bool_variable_token9 = 23,
  aux_sym_bool_variable_token10 = 24,
  aux_sym_bool_variable_token11 = 25,
  aux_sym_bool_variable_token12 = 26,
  aux_sym_bool_variable_token13 = 27,
  aux_sym_bool_variable_token14 = 28,
  aux_sym_bool_variable_token15 = 29,
  aux_sym_bool_variable_token16 = 30,
  aux_sym_bool_variable_token17 = 31,
  aux_sym_bool_variable_token18 = 32,
  aux_sym_bool_variable_token19 = 33,
  aux_sym_bool_variable_token20 = 34,
  aux_sym_bool_variable_token21 = 35,
  aux_sym_bool_variable_token22 = 36,
  aux_sym_bool_variable_token23 = 37,
  aux_sym_bool_variable_token24 = 38,
  aux_sym_bool_variable_token25 = 39,
  aux_sym_bool_variable_token26 = 40,
  aux_sym_bool_variable_token27 = 41,
  aux_sym_bool_variable_token28 = 42,
  aux_sym_bool_variable_token29 = 43,
  aux_sym_bool_variable_token30 = 44,
  aux_sym_bool_variable_token31 = 45,
  aux_sym_bool_variable_token32 = 46,
  aux_sym_bell_variable_token1 = 47,
  aux_sym_string_variable_token1 = 48,
  aux_sym_string_variable_token2 = 49,
  aux_sym_string_variable_token3 = 50,
  aux_sym_string_variable_token4 = 51,
  aux_sym_string_variable_token5 = 52,
  aux_sym_string_variable_token6 = 53,
  aux_sym_string_variable_token7 = 54,
  aux_sym_number_variable_token1 = 55,
  aux_sym_number_variable_token2 = 56,
  aux_sym_number_variable_token3 = 57,
  aux_sym_number_variable_token4 = 58,
  aux_sym_number_variable_token5 = 59,
  aux_sym_edit_mode_variable_token1 = 60,
  aux_sym_keymap_variable_token1 = 61,
  anon_sym_COLON = 62,
  sym_function_name = 63,
  anon_sym_DQUOTE = 64,
  aux_sym__double_quoted_string_token1 = 65,
  aux_sym__quoted_string_token1 = 66,
  aux_sym__quoted_string_token2 = 67,
  sym_escape_sequence = 68,
  anon_sym_DASH = 69,
  aux_sym_symbolic_character_name_token1 = 70,
  aux_sym_symbolic_character_name_token2 = 71,
  aux_sym_symbolic_character_name_token3 = 72,
  aux_sym_symbolic_character_name_token4 = 73,
  aux_sym_symbolic_character_name_token5 = 74,
  aux_sym_symbolic_character_name_token6 = 75,
  aux_sym_symbolic_character_name_token7 = 76,
  aux_sym_symbolic_character_name_token8 = 77,
  aux_sym_symbolic_character_name_token9 = 78,
  aux_sym_symbolic_character_name_token10 = 79,
  aux_sym_symbolic_character_name_token11 = 80,
  aux_sym_symbolic_character_name_token12 = 81,
  sym_key_literal = 82,
  sym_source = 83,
  sym_comment = 84,
  sym_variable_setting = 85,
  sym__bool_assignment = 86,
  sym__bell_assignment = 87,
  sym__string_assignment = 88,
  sym__number_assignment = 89,
  sym__edit_mode_assignment = 90,
  sym__keymap_assignment = 91,
  sym_bool_value = 92,
  sym_bell_value = 93,
  sym_string_value = 94,
  sym_edit_mode_value = 95,
  sym_bool_variable = 96,
  sym_bell_variable = 97,
  sym_string_variable = 98,
  sym_number_variable = 99,
  sym_edit_mode_variable = 100,
  sym_keymap_variable = 101,
  sym_key_binding = 102,
  sym_keyseq = 103,
  sym_macro = 104,
  sym__double_quoted_string = 105,
  sym__quoted_string = 106,
  sym_keyname = 107,
  sym_symbolic_character_name = 108,
  aux_sym_source_repeat1 = 109,
  aux_sym__double_quoted_string_repeat1 = 110,
  aux_sym__quoted_string_repeat1 = 111,
  aux_sym_keyname_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
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
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym_keyname_repeat1] = "keyname_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
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
      if (eof) ADVANCE(783);
      if (lookahead == '"') ADVANCE(875);
      if (lookahead == '#') ADVANCE(786);
      if (lookahead == '\'') ADVANCE(878);
      if (lookahead == '-') ADVANCE(885);
      if (lookahead == '1') ADVANCE(790);
      if (lookahead == ':') ADVANCE(854);
      if (lookahead == 'E') ADVANCE(861);
      if (lookahead == 'S') ADVANCE(870);
      if (lookahead == 'V') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(900);
      if (lookahead == 'e') ADVANCE(857);
      if (lookahead == 's') ADVANCE(858);
      if (lookahead == 'v') ADVANCE(856);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(863);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(874);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(867);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(872);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(873);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(864);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(869);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(859);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(865);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(860);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(855);
      if (lookahead != 0) ADVANCE(898);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(784);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(787);
      if (lookahead != 0) ADVANCE(788);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(785);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(877);
      if (lookahead != 0) ADVANCE(876);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(885);
      if (lookahead == '1') ADVANCE(790);
      if (lookahead == ':') ADVANCE(854);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(356);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(239);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(759);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(470);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(473);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(670);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(701);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(664);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(188);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(717);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(713);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(397);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(663);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(475);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(522);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(419);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(476);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(704);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(666);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(706);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(451);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(480);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(196);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(484);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(454);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(675);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(491);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(491);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(479);
      if (lookahead == 'I') ADVANCE(503);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(647);
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'M') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(680);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(800);
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(880);
      if (lookahead != 0) ADVANCE(879);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(804);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(804);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(804);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'x') ADVANCE(781);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(883);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(881);
      END_STATE();
    case 120:
      if (lookahead == 'x') ADVANCE(804);
      END_STATE();
    case 121:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(855);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(780);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(897);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(626);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(261);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(712);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 167:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(555);
      END_STATE();
    case 168:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(430);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(373);
      END_STATE();
    case 171:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      END_STATE();
    case 172:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(432);
      END_STATE();
    case 173:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(434);
      END_STATE();
    case 174:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 175:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(444);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(583);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(692);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(889);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(479);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(906);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(902);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(905);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(903);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (lookahead != 0) ADVANCE(898);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(617);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(546);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(561);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(573);
      END_STATE();
    case 202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 203:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 204:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(576);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(727);
      END_STATE();
    case 205:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 206:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      END_STATE();
    case 207:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(891);
      END_STATE();
    case 209:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(818);
      END_STATE();
    case 210:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(835);
      END_STATE();
    case 211:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(398);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(768);
      END_STATE();
    case 213:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 215:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 216:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 217:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(377);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(625);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(749);
      END_STATE();
    case 218:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 220:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 221:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(691);
      END_STATE();
    case 222:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 224:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 225:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 226:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      END_STATE();
    case 233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(726);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 309:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 310:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 322:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(323);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(739);
      END_STATE();
    case 323:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(792);
      END_STATE();
    case 324:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(407);
      END_STATE();
    case 325:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      END_STATE();
    case 326:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(359);
      END_STATE();
    case 327:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 328:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(370);
      END_STATE();
    case 329:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 330:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(439);
      END_STATE();
    case 331:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(389);
      END_STATE();
    case 332:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(843);
      END_STATE();
    case 333:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(845);
      END_STATE();
    case 334:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(846);
      END_STATE();
    case 335:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(829);
      END_STATE();
    case 336:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 337:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(746);
      END_STATE();
    case 338:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      END_STATE();
    case 339:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 340:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(695);
      END_STATE();
    case 341:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(399);
      END_STATE();
    case 342:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      END_STATE();
    case 343:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(395);
      END_STATE();
    case 344:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(365);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(847);
      END_STATE();
    case 347:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(848);
      END_STATE();
    case 348:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(534);
      END_STATE();
    case 349:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 350:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 351:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 352:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 353:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(578);
      END_STATE();
    case 354:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 355:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(753);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 394:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 395:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 397:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(714);
      END_STATE();
    case 398:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 403:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 404:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 405:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 406:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 407:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 408:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 409:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 410:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 411:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 412:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 413:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 414:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 416:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 417:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(8);
      END_STATE();
    case 418:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(19);
      END_STATE();
    case 419:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(264);
      END_STATE();
    case 420:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 421:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(304);
      END_STATE();
    case 422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(888);
      END_STATE();
    case 423:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(886);
      END_STATE();
    case 424:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 425:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 426:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 466:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 467:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 468:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      END_STATE();
    case 469:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      END_STATE();
    case 470:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 471:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 472:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(590);
      END_STATE();
    case 473:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(276);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(657);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      END_STATE();
    case 482:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 483:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 484:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
      END_STATE();
    case 485:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 486:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(598);
      END_STATE();
    case 487:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(600);
      END_STATE();
    case 488:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(605);
      END_STATE();
    case 489:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(602);
      END_STATE();
    case 490:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      END_STATE();
    case 491:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 577:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 581:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(744);
      END_STATE();
    case 582:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(853);
      END_STATE();
    case 583:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 584:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 585:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(436);
      END_STATE();
    case 586:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 587:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 588:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 589:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 590:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(685);
      END_STATE();
    case 591:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 592:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 593:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 594:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(624);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      END_STATE();
    case 595:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 596:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(442);
      END_STATE();
    case 597:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 598:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 599:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(641);
      END_STATE();
    case 600:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 601:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(643);
      END_STATE();
    case 602:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(462);
      END_STATE();
    case 603:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(750);
      END_STATE();
    case 604:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 605:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 606:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 607:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(54);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(840);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(841);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(800);
      END_STATE();
    case 648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(838);
      END_STATE();
    case 649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(810);
      END_STATE();
    case 650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(824);
      END_STATE();
    case 651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(831);
      END_STATE();
    case 652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(827);
      END_STATE();
    case 653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      END_STATE();
    case 654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(825);
      END_STATE();
    case 655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(834);
      END_STATE();
    case 656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(807);
      END_STATE();
    case 657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(849);
      END_STATE();
    case 658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(815);
      END_STATE();
    case 659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(826);
      END_STATE();
    case 660:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(798);
      END_STATE();
    case 661:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(694);
      END_STATE();
    case 662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
      END_STATE();
    case 663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(690);
      END_STATE();
    case 664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      END_STATE();
    case 666:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      END_STATE();
    case 667:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      END_STATE();
    case 668:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 669:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 670:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      END_STATE();
    case 671:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 672:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      END_STATE();
    case 673:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 674:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      END_STATE();
    case 675:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      END_STATE();
    case 676:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      END_STATE();
    case 677:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(604);
      END_STATE();
    case 678:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      END_STATE();
    case 679:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 680:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(893);
      END_STATE();
    case 682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(893);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(895);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      END_STATE();
    case 685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(836);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(837);
      END_STATE();
    case 687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      END_STATE();
    case 688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(292);
      END_STATE();
    case 690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      END_STATE();
    case 691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      END_STATE();
    case 695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      END_STATE();
    case 699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      END_STATE();
    case 703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      END_STATE();
    case 709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(636);
      END_STATE();
    case 725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(382);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      END_STATE();
    case 734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      END_STATE();
    case 736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      END_STATE();
    case 738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(603);
      END_STATE();
    case 740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      END_STATE();
    case 743:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 744:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(697);
      END_STATE();
    case 745:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 746:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 747:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 748:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      END_STATE();
    case 749:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 750:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(721);
      END_STATE();
    case 751:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 752:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 753:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 754:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(289);
      END_STATE();
    case 755:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(292);
      END_STATE();
    case 756:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(316);
      END_STATE();
    case 757:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 758:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(428);
      END_STATE();
    case 759:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(374);
      END_STATE();
    case 760:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 761:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(809);
      END_STATE();
    case 762:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(828);
      END_STATE();
    case 763:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(686);
      END_STATE();
    case 764:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 765:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(467);
      END_STATE();
    case 766:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(819);
      END_STATE();
    case 767:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(832);
      END_STATE();
    case 768:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(471);
      END_STATE();
    case 769:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 770:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 771:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 772:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 774:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(586);
      END_STATE();
    case 775:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(438);
      END_STATE();
    case 776:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 777:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(557);
      END_STATE();
    case 778:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(250);
      END_STATE();
    case 779:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(566);
      END_STATE();
    case 780:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      END_STATE();
    case 781:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(884);
      END_STATE();
    case 782:
      if (eof) ADVANCE(783);
      if (lookahead == '"') ADVANCE(875);
      if (lookahead == '#') ADVANCE(786);
      if (lookahead == 'S') ADVANCE(907);
      if (lookahead == 's') ADVANCE(899);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(906);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(902);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(905);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(903);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(782)
      if (lookahead != 0) ADVANCE(898);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(784);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(787);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(785);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(784);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(787);
      if (lookahead != 0) ADVANCE(788);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_keymap_value);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_keymap_value);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_bell_variable_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_edit_mode_variable_token1);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_keymap_variable_token1);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_function_name);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'M') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(583);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(365);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(583);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(692);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(323);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(739);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(365);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(876);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(879);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(881);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(882);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(881);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(615);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(781);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(883);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(881);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 782},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 782},
  [4] = {.lex_state = 782},
  [5] = {.lex_state = 782},
  [6] = {.lex_state = 180},
  [7] = {.lex_state = 180},
  [8] = {.lex_state = 180},
  [9] = {.lex_state = 121},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 122},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 122},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 273},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 273},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 122},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 122},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
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
    [sym_source] = STATE(54),
    [sym_comment] = STATE(52),
    [sym_variable_setting] = STATE(52),
    [sym_key_binding] = STATE(52),
    [sym_keyseq] = STATE(49),
    [sym__double_quoted_string] = STATE(47),
    [sym_keyname] = STATE(49),
    [sym_symbolic_character_name] = STATE(22),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_keyname_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(13),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(13),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(11),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(11),
    [sym_key_literal] = ACTIONS(15),
  },
  [2] = {
    [sym__bool_assignment] = STATE(31),
    [sym__bell_assignment] = STATE(31),
    [sym__string_assignment] = STATE(31),
    [sym__number_assignment] = STATE(31),
    [sym__edit_mode_assignment] = STATE(31),
    [sym__keymap_assignment] = STATE(31),
    [sym_bool_variable] = STATE(14),
    [sym_bell_variable] = STATE(15),
    [sym_string_variable] = STATE(19),
    [sym_number_variable] = STATE(28),
    [sym_edit_mode_variable] = STATE(20),
    [sym_keymap_variable] = STATE(29),
    [aux_sym_bool_variable_token1] = ACTIONS(17),
    [aux_sym_bool_variable_token2] = ACTIONS(17),
    [aux_sym_bool_variable_token3] = ACTIONS(17),
    [aux_sym_bool_variable_token4] = ACTIONS(17),
    [aux_sym_bool_variable_token5] = ACTIONS(17),
    [aux_sym_bool_variable_token6] = ACTIONS(17),
    [aux_sym_bool_variable_token7] = ACTIONS(17),
    [aux_sym_bool_variable_token8] = ACTIONS(17),
    [aux_sym_bool_variable_token9] = ACTIONS(17),
    [aux_sym_bool_variable_token10] = ACTIONS(17),
    [aux_sym_bool_variable_token11] = ACTIONS(17),
    [aux_sym_bool_variable_token12] = ACTIONS(17),
    [aux_sym_bool_variable_token13] = ACTIONS(17),
    [aux_sym_bool_variable_token14] = ACTIONS(17),
    [aux_sym_bool_variable_token15] = ACTIONS(17),
    [aux_sym_bool_variable_token16] = ACTIONS(17),
    [aux_sym_bool_variable_token17] = ACTIONS(17),
    [aux_sym_bool_variable_token18] = ACTIONS(17),
    [aux_sym_bool_variable_token19] = ACTIONS(17),
    [aux_sym_bool_variable_token20] = ACTIONS(17),
    [aux_sym_bool_variable_token21] = ACTIONS(17),
    [aux_sym_bool_variable_token22] = ACTIONS(17),
    [aux_sym_bool_variable_token23] = ACTIONS(17),
    [aux_sym_bool_variable_token24] = ACTIONS(17),
    [aux_sym_bool_variable_token25] = ACTIONS(17),
    [aux_sym_bool_variable_token26] = ACTIONS(17),
    [aux_sym_bool_variable_token27] = ACTIONS(17),
    [aux_sym_bool_variable_token28] = ACTIONS(17),
    [aux_sym_bool_variable_token29] = ACTIONS(17),
    [aux_sym_bool_variable_token30] = ACTIONS(17),
    [aux_sym_bool_variable_token31] = ACTIONS(17),
    [aux_sym_bool_variable_token32] = ACTIONS(17),
    [aux_sym_bell_variable_token1] = ACTIONS(19),
    [aux_sym_string_variable_token1] = ACTIONS(21),
    [aux_sym_string_variable_token2] = ACTIONS(21),
    [aux_sym_string_variable_token3] = ACTIONS(21),
    [aux_sym_string_variable_token4] = ACTIONS(21),
    [aux_sym_string_variable_token5] = ACTIONS(21),
    [aux_sym_string_variable_token6] = ACTIONS(21),
    [aux_sym_string_variable_token7] = ACTIONS(21),
    [aux_sym_number_variable_token1] = ACTIONS(23),
    [aux_sym_number_variable_token2] = ACTIONS(23),
    [aux_sym_number_variable_token3] = ACTIONS(23),
    [aux_sym_number_variable_token4] = ACTIONS(23),
    [aux_sym_number_variable_token5] = ACTIONS(23),
    [aux_sym_edit_mode_variable_token1] = ACTIONS(25),
    [aux_sym_keymap_variable_token1] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_key_literal,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_repeat1,
    STATE(7), 1,
      aux_sym_keyname_repeat1,
    STATE(22), 1,
      sym_symbolic_character_name,
    STATE(47), 1,
      sym__double_quoted_string,
    ACTIONS(13), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(49), 2,
      sym_keyseq,
      sym_keyname,
    STATE(52), 3,
      sym_comment,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(11), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [53] = 13,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_comment_token1,
    ACTIONS(36), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      sym_key_literal,
    STATE(4), 1,
      aux_sym_source_repeat1,
    STATE(7), 1,
      aux_sym_keyname_repeat1,
    STATE(22), 1,
      sym_symbolic_character_name,
    STATE(47), 1,
      sym__double_quoted_string,
    ACTIONS(45), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(49), 2,
      sym_keyseq,
      sym_keyname,
    STATE(52), 3,
      sym_comment,
      sym_variable_setting,
      sym_key_binding,
    ACTIONS(42), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [106] = 2,
    ACTIONS(51), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(31), 14,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
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
  [128] = 5,
    ACTIONS(59), 1,
      sym_key_literal,
    STATE(6), 1,
      aux_sym_keyname_repeat1,
    STATE(51), 1,
      sym_symbolic_character_name,
    ACTIONS(56), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(53), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [154] = 5,
    ACTIONS(61), 1,
      sym_key_literal,
    STATE(6), 1,
      aux_sym_keyname_repeat1,
    STATE(23), 1,
      sym_symbolic_character_name,
    ACTIONS(13), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(11), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [180] = 2,
    ACTIONS(59), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(63), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [198] = 4,
    ACTIONS(65), 1,
      sym_function_name,
    ACTIONS(67), 1,
      aux_sym__quoted_string_token1,
    STATE(48), 1,
      sym_macro,
    STATE(50), 1,
      sym__quoted_string,
  [211] = 4,
    ACTIONS(69), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(71), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(73), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym__quoted_string_repeat1,
  [224] = 4,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(80), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym__double_quoted_string_repeat1,
  [237] = 4,
    ACTIONS(83), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(85), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(88), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym__quoted_string_repeat1,
  [250] = 4,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(95), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym__double_quoted_string_repeat1,
  [263] = 2,
    STATE(37), 1,
      sym_bool_value,
    ACTIONS(97), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [272] = 2,
    STATE(39), 1,
      sym_bell_value,
    ACTIONS(99), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [281] = 3,
    ACTIONS(101), 1,
      aux_sym__quoted_string_token2,
    ACTIONS(103), 1,
      sym_escape_sequence,
    STATE(10), 1,
      aux_sym__quoted_string_repeat1,
  [291] = 1,
    ACTIONS(105), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [297] = 1,
    ACTIONS(107), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [303] = 3,
    ACTIONS(109), 1,
      aux_sym_source_token1,
    ACTIONS(111), 1,
      aux_sym_comment_token2,
    STATE(41), 1,
      sym_string_value,
  [313] = 2,
    STATE(44), 1,
      sym_edit_mode_value,
    ACTIONS(113), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [321] = 3,
    ACTIONS(115), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    STATE(13), 1,
      aux_sym__double_quoted_string_repeat1,
  [331] = 2,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      anon_sym_DASH,
  [338] = 2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_COLON,
  [345] = 1,
    ACTIONS(125), 2,
      aux_sym_source_token1,
      aux_sym_comment_token2,
  [350] = 2,
    ACTIONS(127), 1,
      aux_sym_source_token1,
    ACTIONS(129), 1,
      aux_sym_comment_token2,
  [357] = 1,
    ACTIONS(131), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [362] = 1,
    ACTIONS(133), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [367] = 1,
    ACTIONS(135), 1,
      sym_number_value,
  [371] = 1,
    ACTIONS(137), 1,
      sym_keymap_value,
  [375] = 1,
    ACTIONS(119), 1,
      anon_sym_COLON,
  [379] = 1,
    ACTIONS(139), 1,
      aux_sym_source_token1,
  [383] = 1,
    ACTIONS(141), 1,
      sym_keymap_value,
  [387] = 1,
    ACTIONS(123), 1,
      anon_sym_COLON,
  [391] = 1,
    ACTIONS(143), 1,
      sym_number_value,
  [395] = 1,
    ACTIONS(145), 1,
      aux_sym_source_token1,
  [399] = 1,
    ACTIONS(147), 1,
      aux_sym_source_token1,
  [403] = 1,
    ACTIONS(149), 1,
      aux_sym_source_token1,
  [407] = 1,
    ACTIONS(151), 1,
      aux_sym_source_token1,
  [411] = 1,
    ACTIONS(153), 1,
      aux_sym_source_token1,
  [415] = 1,
    ACTIONS(155), 1,
      aux_sym_source_token1,
  [419] = 1,
    ACTIONS(157), 1,
      aux_sym_source_token1,
  [423] = 1,
    ACTIONS(159), 1,
      aux_sym_source_token1,
  [427] = 1,
    ACTIONS(161), 1,
      aux_sym_source_token1,
  [431] = 1,
    ACTIONS(163), 1,
      aux_sym_source_token1,
  [435] = 1,
    ACTIONS(165), 1,
      aux_sym_source_token1,
  [439] = 1,
    ACTIONS(167), 1,
      anon_sym_COLON,
  [443] = 1,
    ACTIONS(169), 1,
      anon_sym_COLON,
  [447] = 1,
    ACTIONS(171), 1,
      aux_sym_source_token1,
  [451] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON,
  [455] = 1,
    ACTIONS(175), 1,
      aux_sym_source_token1,
  [459] = 1,
    ACTIONS(121), 1,
      anon_sym_DASH,
  [463] = 1,
    ACTIONS(177), 1,
      aux_sym_source_token1,
  [467] = 1,
    ACTIONS(179), 1,
      aux_sym_source_token1,
  [471] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 211,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 237,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 291,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 357,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 367,
  [SMALL_STATE(29)] = 371,
  [SMALL_STATE(30)] = 375,
  [SMALL_STATE(31)] = 379,
  [SMALL_STATE(32)] = 383,
  [SMALL_STATE(33)] = 387,
  [SMALL_STATE(34)] = 391,
  [SMALL_STATE(35)] = 395,
  [SMALL_STATE(36)] = 399,
  [SMALL_STATE(37)] = 403,
  [SMALL_STATE(38)] = 407,
  [SMALL_STATE(39)] = 411,
  [SMALL_STATE(40)] = 415,
  [SMALL_STATE(41)] = 419,
  [SMALL_STATE(42)] = 423,
  [SMALL_STATE(43)] = 427,
  [SMALL_STATE(44)] = 431,
  [SMALL_STATE(45)] = 435,
  [SMALL_STATE(46)] = 439,
  [SMALL_STATE(47)] = 443,
  [SMALL_STATE(48)] = 447,
  [SMALL_STATE(49)] = 451,
  [SMALL_STATE(50)] = 455,
  [SMALL_STATE(51)] = 459,
  [SMALL_STATE(52)] = 463,
  [SMALL_STATE(53)] = 467,
  [SMALL_STATE(54)] = 471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(30),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(27),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(27),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(11),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(12),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(12),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_variable, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_assignment, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_variable, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_variable, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_variable, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
