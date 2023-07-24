#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  sym_package = 1,
  aux_sym_file_token1 = 2,
  aux_sym_file_token2 = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_AT = 7,
  aux_sym_url_token1 = 8,
  aux_sym_url_token2 = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_version = 12,
  anon_sym_LT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_EQ_EQ_EQ = 19,
  anon_sym_TILDE_EQ = 20,
  anon_sym_SEMI = 21,
  anon_sym_in = 22,
  anon_sym_not = 23,
  anon_sym_python_version = 24,
  anon_sym_python_full_version = 25,
  anon_sym_os_name = 26,
  anon_sym_sys_platform = 27,
  anon_sym_platform_release = 28,
  anon_sym_platform_system = 29,
  anon_sym_platform_version = 30,
  anon_sym_platform_machine = 31,
  anon_sym_platform_python_implementation = 32,
  anon_sym_implementation_name = 33,
  anon_sym_implementation_version = 34,
  anon_sym_extra = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_DASHc = 38,
  anon_sym_DASHe = 39,
  anon_sym_DASHi = 40,
  anon_sym_DASHf = 41,
  anon_sym_DASHr = 42,
  anon_sym_DASH_DASHindex_DASHurl = 43,
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 44,
  anon_sym_DASH_DASHconstraint = 45,
  anon_sym_DASH_DASHrequirement = 46,
  anon_sym_DASH_DASHeditable = 47,
  anon_sym_DASH_DASHfind_DASHlinks = 48,
  anon_sym_DASH_DASHno_DASHbinary = 49,
  anon_sym_DASH_DASHonly_DASHbinary = 50,
  anon_sym_DASH_DASHtrusted_DASHhost = 51,
  anon_sym_DASH_DASHuse_DASHfeature = 52,
  anon_sym_EQ = 53,
  anon_sym_DASH_DASHno_DASHindex = 54,
  anon_sym_DASH_DASHprefer_DASHbinary = 55,
  anon_sym_DASH_DASHrequire_DASHhashes = 56,
  anon_sym_DASH_DASHpre = 57,
  aux_sym_argument_token1 = 58,
  anon_sym_DQUOTE = 59,
  aux_sym_quoted_string_token1 = 60,
  anon_sym_SQUOTE = 61,
  aux_sym_quoted_string_token2 = 62,
  anon_sym_BSLASH = 63,
  sym_comment = 64,
  aux_sym__space_token1 = 65,
  sym_file = 66,
  sym_requirement = 67,
  sym_extras = 68,
  sym_url_spec = 69,
  sym_url = 70,
  sym_version_spec = 71,
  sym__version_list = 72,
  sym_version_cmp = 73,
  sym_marker_spec = 74,
  sym_marker_op = 75,
  sym_marker_var = 76,
  sym__marker_expr = 77,
  sym__marker_and = 78,
  sym__marker_or = 79,
  sym_global_opt = 80,
  sym_argument = 81,
  sym_quoted_string = 82,
  sym_linebreak = 83,
  sym__space = 84,
  aux_sym_file_repeat1 = 85,
  aux_sym__package_list_repeat1 = 86,
  aux_sym__version_list_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_package] = "package",
  [aux_sym_file_token1] = "file_token1",
  [aux_sym_file_token2] = "path",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [aux_sym_url_token1] = "url_token1",
  [aux_sym_url_token2] = "url_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_version] = "version",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_SEMI] = ";",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not",
  [anon_sym_python_version] = "python_version",
  [anon_sym_python_full_version] = "python_full_version",
  [anon_sym_os_name] = "os_name",
  [anon_sym_sys_platform] = "sys_platform",
  [anon_sym_platform_release] = "platform_release",
  [anon_sym_platform_system] = "platform_system",
  [anon_sym_platform_version] = "platform_version",
  [anon_sym_platform_machine] = "platform_machine",
  [anon_sym_platform_python_implementation] = "platform_python_implementation",
  [anon_sym_implementation_name] = "implementation_name",
  [anon_sym_implementation_version] = "implementation_version",
  [anon_sym_extra] = "extra",
  [anon_sym_and] = "marker_op",
  [anon_sym_or] = "marker_op",
  [anon_sym_DASHc] = "option",
  [anon_sym_DASHe] = "option",
  [anon_sym_DASHi] = "option",
  [anon_sym_DASHf] = "option",
  [anon_sym_DASHr] = "option",
  [anon_sym_DASH_DASHindex_DASHurl] = "option",
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = "option",
  [anon_sym_DASH_DASHconstraint] = "option",
  [anon_sym_DASH_DASHrequirement] = "option",
  [anon_sym_DASH_DASHeditable] = "option",
  [anon_sym_DASH_DASHfind_DASHlinks] = "option",
  [anon_sym_DASH_DASHno_DASHbinary] = "option",
  [anon_sym_DASH_DASHonly_DASHbinary] = "option",
  [anon_sym_DASH_DASHtrusted_DASHhost] = "option",
  [anon_sym_DASH_DASHuse_DASHfeature] = "option",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_DASHno_DASHindex] = "option",
  [anon_sym_DASH_DASHprefer_DASHbinary] = "option",
  [anon_sym_DASH_DASHrequire_DASHhashes] = "option",
  [anon_sym_DASH_DASHpre] = "option",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [anon_sym_BSLASH] = "\\",
  [sym_comment] = "comment",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym_requirement] = "requirement",
  [sym_extras] = "extras",
  [sym_url_spec] = "url_spec",
  [sym_url] = "url",
  [sym_version_spec] = "version_spec",
  [sym__version_list] = "_version_list",
  [sym_version_cmp] = "version_cmp",
  [sym_marker_spec] = "marker_spec",
  [sym_marker_op] = "marker_op",
  [sym_marker_var] = "marker_var",
  [sym__marker_expr] = "_marker_expr",
  [sym__marker_and] = "_marker_and",
  [sym__marker_or] = "marker",
  [sym_global_opt] = "global_opt",
  [sym_argument] = "argument",
  [sym_quoted_string] = "quoted_string",
  [sym_linebreak] = "linebreak",
  [sym__space] = "_space",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__package_list_repeat1] = "_package_list_repeat1",
  [aux_sym__version_list_repeat1] = "_version_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_package] = sym_package,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [aux_sym_file_token2] = aux_sym_file_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [aux_sym_url_token2] = aux_sym_url_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_version] = sym_version,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_python_version] = anon_sym_python_version,
  [anon_sym_python_full_version] = anon_sym_python_full_version,
  [anon_sym_os_name] = anon_sym_os_name,
  [anon_sym_sys_platform] = anon_sym_sys_platform,
  [anon_sym_platform_release] = anon_sym_platform_release,
  [anon_sym_platform_system] = anon_sym_platform_system,
  [anon_sym_platform_version] = anon_sym_platform_version,
  [anon_sym_platform_machine] = anon_sym_platform_machine,
  [anon_sym_platform_python_implementation] = anon_sym_platform_python_implementation,
  [anon_sym_implementation_name] = anon_sym_implementation_name,
  [anon_sym_implementation_version] = anon_sym_implementation_version,
  [anon_sym_extra] = anon_sym_extra,
  [anon_sym_and] = sym_marker_op,
  [anon_sym_or] = sym_marker_op,
  [anon_sym_DASHc] = anon_sym_DASHc,
  [anon_sym_DASHe] = anon_sym_DASHc,
  [anon_sym_DASHi] = anon_sym_DASHc,
  [anon_sym_DASHf] = anon_sym_DASHc,
  [anon_sym_DASHr] = anon_sym_DASHc,
  [anon_sym_DASH_DASHindex_DASHurl] = anon_sym_DASHc,
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = anon_sym_DASHc,
  [anon_sym_DASH_DASHconstraint] = anon_sym_DASHc,
  [anon_sym_DASH_DASHrequirement] = anon_sym_DASHc,
  [anon_sym_DASH_DASHeditable] = anon_sym_DASHc,
  [anon_sym_DASH_DASHfind_DASHlinks] = anon_sym_DASHc,
  [anon_sym_DASH_DASHno_DASHbinary] = anon_sym_DASHc,
  [anon_sym_DASH_DASHonly_DASHbinary] = anon_sym_DASHc,
  [anon_sym_DASH_DASHtrusted_DASHhost] = anon_sym_DASHc,
  [anon_sym_DASH_DASHuse_DASHfeature] = anon_sym_DASHc,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_DASHno_DASHindex] = anon_sym_DASHc,
  [anon_sym_DASH_DASHprefer_DASHbinary] = anon_sym_DASHc,
  [anon_sym_DASH_DASHrequire_DASHhashes] = anon_sym_DASHc,
  [anon_sym_DASH_DASHpre] = anon_sym_DASHc,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_comment] = sym_comment,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym_requirement] = sym_requirement,
  [sym_extras] = sym_extras,
  [sym_url_spec] = sym_url_spec,
  [sym_url] = sym_url,
  [sym_version_spec] = sym_version_spec,
  [sym__version_list] = sym__version_list,
  [sym_version_cmp] = sym_version_cmp,
  [sym_marker_spec] = sym_marker_spec,
  [sym_marker_op] = sym_marker_op,
  [sym_marker_var] = sym_marker_var,
  [sym__marker_expr] = sym__marker_expr,
  [sym__marker_and] = sym__marker_and,
  [sym__marker_or] = sym__marker_or,
  [sym_global_opt] = sym_global_opt,
  [sym_argument] = sym_argument,
  [sym_quoted_string] = sym_quoted_string,
  [sym_linebreak] = sym_linebreak,
  [sym__space] = sym__space,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__package_list_repeat1] = aux_sym__package_list_repeat1,
  [aux_sym__version_list_repeat1] = aux_sym__version_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_full_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_platform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_machine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_python_implementation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHi] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHf] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHindex_DASHurl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHconstraint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHrequirement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHeditable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHfind_DASHlinks] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHno_DASHbinary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHonly_DASHbinary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHtrusted_DASHhost] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHuse_DASHfeature] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHno_DASHindex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHprefer_DASHbinary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHrequire_DASHhashes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHpre] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_requirement] = {
    .visible = true,
    .named = true,
  },
  [sym_extras] = {
    .visible = true,
    .named = true,
  },
  [sym_url_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_version_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__version_list] = {
    .visible = false,
    .named = true,
  },
  [sym_version_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_op] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_var] = {
    .visible = true,
    .named = true,
  },
  [sym__marker_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_and] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_or] = {
    .visible = true,
    .named = true,
  },
  [sym_global_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_linebreak] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__package_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__version_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
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
  [26] = 2,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
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
  [98] = 2,
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
  [165] = 2,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(141);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(142);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(138);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 26:
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(200);
      END_STATE();
    case 27:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(196);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 97:
      if (lookahead == 'q') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 130:
      if (lookahead == 'x') ADVANCE(188);
      END_STATE();
    case 131:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 132:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 138:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 140:
      if (eof) ADVANCE(141);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_file_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'z') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == 'z') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASHi);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH_DASHfind_DASHlinks);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHbinary);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH_DASHonly_DASHbinary);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtrusted_DASHhost);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH_DASHuse_DASHfeature);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHindex);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH_DASHprefer_DASHbinary);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequire_DASHhashes);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpre);
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(192);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(192);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(193);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(201);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(197);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_extra);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_os_name);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sys_platform);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_python_version);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_platform_system);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_platform_machine);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_platform_release);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_platform_version);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_implementation_name);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_python_full_version);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_implementation_version);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_platform_python_implementation);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 140},
  [2] = {.lex_state = 140},
  [3] = {.lex_state = 140},
  [4] = {.lex_state = 140},
  [5] = {.lex_state = 140},
  [6] = {.lex_state = 140},
  [7] = {.lex_state = 140},
  [8] = {.lex_state = 140},
  [9] = {.lex_state = 140},
  [10] = {.lex_state = 140},
  [11] = {.lex_state = 140},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 140},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 140},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 140},
  [30] = {.lex_state = 140},
  [31] = {.lex_state = 140},
  [32] = {.lex_state = 140},
  [33] = {.lex_state = 140},
  [34] = {.lex_state = 140},
  [35] = {.lex_state = 140},
  [36] = {.lex_state = 140},
  [37] = {.lex_state = 140},
  [38] = {.lex_state = 140},
  [39] = {.lex_state = 140},
  [40] = {.lex_state = 140},
  [41] = {.lex_state = 140},
  [42] = {.lex_state = 140},
  [43] = {.lex_state = 140},
  [44] = {.lex_state = 140},
  [45] = {.lex_state = 140},
  [46] = {.lex_state = 140},
  [47] = {.lex_state = 140},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 140},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 140},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 140},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 140},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 26},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 27},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {(TSStateId)(-1)},
  [186] = {(TSStateId)(-1)},
  [187] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_linebreak] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_package] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [aux_sym_file_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_url_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_python_version] = ACTIONS(1),
    [anon_sym_python_full_version] = ACTIONS(1),
    [anon_sym_os_name] = ACTIONS(1),
    [anon_sym_sys_platform] = ACTIONS(1),
    [anon_sym_platform_release] = ACTIONS(1),
    [anon_sym_platform_system] = ACTIONS(1),
    [anon_sym_platform_version] = ACTIONS(1),
    [anon_sym_platform_machine] = ACTIONS(1),
    [anon_sym_platform_python_implementation] = ACTIONS(1),
    [anon_sym_implementation_name] = ACTIONS(1),
    [anon_sym_implementation_version] = ACTIONS(1),
    [anon_sym_extra] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_DASHc] = ACTIONS(1),
    [anon_sym_DASHe] = ACTIONS(1),
    [anon_sym_DASHi] = ACTIONS(1),
    [anon_sym_DASHf] = ACTIONS(1),
    [anon_sym_DASHr] = ACTIONS(1),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(1),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(1),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(1),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(1),
    [anon_sym_DASH_DASHeditable] = ACTIONS(1),
    [anon_sym_DASH_DASHfind_DASHlinks] = ACTIONS(1),
    [anon_sym_DASH_DASHno_DASHbinary] = ACTIONS(1),
    [anon_sym_DASH_DASHonly_DASHbinary] = ACTIONS(1),
    [anon_sym_DASH_DASHtrusted_DASHhost] = ACTIONS(1),
    [anon_sym_DASH_DASHuse_DASHfeature] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASHno_DASHindex] = ACTIONS(1),
    [anon_sym_DASH_DASHprefer_DASHbinary] = ACTIONS(1),
    [anon_sym_DASH_DASHrequire_DASHhashes] = ACTIONS(1),
    [anon_sym_DASH_DASHpre] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
    [aux_sym__space_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(157),
    [sym_requirement] = STATE(94),
    [sym_url] = STATE(94),
    [sym_global_opt] = STATE(94),
    [sym_linebreak] = STATE(1),
    [sym__space] = STATE(5),
    [aux_sym_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_package] = ACTIONS(7),
    [aux_sym_file_token1] = ACTIONS(9),
    [aux_sym_file_token2] = ACTIONS(11),
    [aux_sym_url_token1] = ACTIONS(13),
    [aux_sym_url_token2] = ACTIONS(15),
    [anon_sym_DASHc] = ACTIONS(17),
    [anon_sym_DASHe] = ACTIONS(17),
    [anon_sym_DASHi] = ACTIONS(17),
    [anon_sym_DASHf] = ACTIONS(17),
    [anon_sym_DASHr] = ACTIONS(17),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(19),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(19),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(19),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(19),
    [anon_sym_DASH_DASHeditable] = ACTIONS(19),
    [anon_sym_DASH_DASHfind_DASHlinks] = ACTIONS(19),
    [anon_sym_DASH_DASHno_DASHbinary] = ACTIONS(19),
    [anon_sym_DASH_DASHonly_DASHbinary] = ACTIONS(19),
    [anon_sym_DASH_DASHtrusted_DASHhost] = ACTIONS(19),
    [anon_sym_DASH_DASHuse_DASHfeature] = ACTIONS(19),
    [anon_sym_DASH_DASHno_DASHindex] = ACTIONS(21),
    [anon_sym_DASH_DASHprefer_DASHbinary] = ACTIONS(21),
    [anon_sym_DASH_DASHrequire_DASHhashes] = ACTIONS(21),
    [anon_sym_DASH_DASHpre] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(3),
    [sym_comment] = ACTIONS(25),
    [aux_sym__space_token1] = ACTIONS(27),
  },
  [2] = {
    [sym_linebreak] = STATE(2),
    [sym_package] = ACTIONS(29),
    [aux_sym_file_token1] = ACTIONS(31),
    [aux_sym_file_token2] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(31),
    [aux_sym_url_token1] = ACTIONS(31),
    [aux_sym_url_token2] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(31),
    [anon_sym_TILDE_EQ] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_DASHc] = ACTIONS(31),
    [anon_sym_DASHe] = ACTIONS(31),
    [anon_sym_DASHi] = ACTIONS(31),
    [anon_sym_DASHf] = ACTIONS(31),
    [anon_sym_DASHr] = ACTIONS(31),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(31),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(31),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(31),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(31),
    [anon_sym_DASH_DASHeditable] = ACTIONS(31),
    [anon_sym_DASH_DASHfind_DASHlinks] = ACTIONS(31),
    [anon_sym_DASH_DASHno_DASHbinary] = ACTIONS(31),
    [anon_sym_DASH_DASHonly_DASHbinary] = ACTIONS(31),
    [anon_sym_DASH_DASHtrusted_DASHhost] = ACTIONS(31),
    [anon_sym_DASH_DASHuse_DASHfeature] = ACTIONS(31),
    [anon_sym_DASH_DASHno_DASHindex] = ACTIONS(31),
    [anon_sym_DASH_DASHprefer_DASHbinary] = ACTIONS(31),
    [anon_sym_DASH_DASHrequire_DASHhashes] = ACTIONS(31),
    [anon_sym_DASH_DASHpre] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(3),
    [sym_comment] = ACTIONS(31),
    [aux_sym__space_token1] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_package,
    ACTIONS(38), 1,
      aux_sym_file_token1,
    ACTIONS(41), 1,
      aux_sym_file_token2,
    ACTIONS(44), 1,
      aux_sym_url_token1,
    ACTIONS(47), 1,
      aux_sym_url_token2,
    ACTIONS(59), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym__space_token1,
    STATE(5), 1,
      sym__space,
    STATE(3), 2,
      sym_linebreak,
      aux_sym_file_repeat1,
    ACTIONS(56), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(94), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(50), 5,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
    ACTIONS(53), 10,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [67] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      sym_package,
    ACTIONS(9), 1,
      aux_sym_file_token1,
    ACTIONS(11), 1,
      aux_sym_file_token2,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(23), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_file_repeat1,
    STATE(4), 1,
      sym_linebreak,
    STATE(5), 1,
      sym__space,
    ACTIONS(21), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(94), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 5,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
    ACTIONS(19), 10,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [136] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      sym_package,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(23), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(70), 1,
      aux_sym_file_token1,
    ACTIONS(72), 1,
      aux_sym_file_token2,
    ACTIONS(74), 1,
      sym_comment,
    STATE(5), 1,
      sym_linebreak,
    ACTIONS(21), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(100), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 5,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
    ACTIONS(19), 10,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [193] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      sym_linebreak,
    ACTIONS(76), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(33), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      sym_comment,
      aux_sym__space_token1,
  [231] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      sym_linebreak,
    ACTIONS(80), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(78), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      sym_comment,
      aux_sym__space_token1,
  [269] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_linebreak,
    ACTIONS(84), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(82), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      sym_comment,
      aux_sym__space_token1,
  [307] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      sym_linebreak,
    ACTIONS(88), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(86), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      sym_comment,
      aux_sym__space_token1,
  [345] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_linebreak,
    ACTIONS(92), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(90), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      sym_comment,
      aux_sym__space_token1,
  [383] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(94), 1,
      aux_sym_file_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_AT,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      sym_linebreak,
    STATE(15), 1,
      sym_extras,
    STATE(24), 1,
      sym__space,
    STATE(126), 1,
      sym_version_cmp,
    STATE(127), 1,
      sym__version_list,
    STATE(134), 1,
      sym_marker_spec,
    STATE(76), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [439] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(12), 1,
      sym_linebreak,
    STATE(18), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(65), 1,
      sym__marker_and,
    STATE(137), 1,
      sym__marker_or,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [481] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      sym_linebreak,
    STATE(21), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(65), 1,
      sym__marker_and,
    STATE(96), 1,
      sym__marker_or,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [523] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      sym_linebreak,
    STATE(20), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(65), 1,
      sym__marker_and,
    STATE(147), 1,
      sym__marker_or,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [565] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(98), 1,
      anon_sym_AT,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      aux_sym_file_token1,
    STATE(15), 1,
      sym_linebreak,
    STATE(29), 1,
      sym__space,
    STATE(126), 1,
      sym_version_cmp,
    STATE(127), 1,
      sym__version_list,
    STATE(149), 1,
      sym_marker_spec,
    STATE(67), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [615] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(16), 1,
      sym_linebreak,
    STATE(25), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(128), 1,
      sym__marker_and,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [654] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      sym_linebreak,
    STATE(23), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(117), 1,
      sym__marker_and,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [693] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(65), 1,
      sym__marker_and,
    STATE(139), 1,
      sym__marker_or,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [729] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(19), 1,
      sym_linebreak,
    STATE(27), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(88), 1,
      sym__marker_expr,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [765] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(65), 1,
      sym__marker_and,
    STATE(137), 1,
      sym__marker_or,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [801] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(65), 1,
      sym__marker_and,
    STATE(121), 1,
      sym__marker_or,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [837] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(22), 1,
      sym_linebreak,
    STATE(28), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(86), 1,
      sym__marker_expr,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [873] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(107), 1,
      sym__marker_and,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [906] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_linebreak,
    STATE(47), 1,
      sym__space,
    STATE(124), 1,
      sym__version_list,
    STATE(130), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [949] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker_expr,
    STATE(117), 1,
      sym__marker_and,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [982] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(26), 1,
      sym_linebreak,
    ACTIONS(31), 15,
      anon_sym_LPAREN,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      anon_sym_and,
      anon_sym_or,
  [1006] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(86), 1,
      sym__marker_expr,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1036] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(89), 1,
      sym__marker_expr,
    ACTIONS(110), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1066] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(118), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_linebreak,
    STATE(47), 1,
      sym__space,
    STATE(124), 1,
      sym__version_list,
    STATE(130), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1106] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(124), 1,
      anon_sym_in,
    ACTIONS(126), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_linebreak,
    STATE(39), 1,
      sym__space,
    STATE(81), 2,
      sym_version_cmp,
      sym_marker_op,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1141] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym_linebreak,
    ACTIONS(130), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(128), 10,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1165] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      sym_linebreak,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(132), 10,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1189] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(33), 1,
      sym_linebreak,
    ACTIONS(138), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(136), 10,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1213] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      sym_linebreak,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(140), 10,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1237] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      sym_linebreak,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(144), 10,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1261] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(36), 1,
      sym_linebreak,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(148), 10,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1285] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(37), 1,
      sym_linebreak,
    STATE(40), 1,
      sym__space,
    STATE(95), 1,
      sym__version_list,
    STATE(126), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1316] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(38), 1,
      sym_linebreak,
    STATE(41), 1,
      sym__space,
    STATE(114), 1,
      sym__version_list,
    STATE(126), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1347] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(124), 1,
      anon_sym_in,
    ACTIONS(126), 1,
      anon_sym_not,
    STATE(39), 1,
      sym_linebreak,
    STATE(77), 2,
      sym_version_cmp,
      sym_marker_op,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1376] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(40), 1,
      sym_linebreak,
    STATE(47), 1,
      sym__space,
    STATE(91), 1,
      sym__version_list,
    STATE(130), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1407] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(41), 1,
      sym_linebreak,
    STATE(47), 1,
      sym__space,
    STATE(95), 1,
      sym__version_list,
    STATE(130), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1438] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(42), 1,
      sym_linebreak,
    STATE(46), 1,
      sym__space,
    STATE(131), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1466] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(43), 1,
      sym_linebreak,
    ACTIONS(152), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(154), 8,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_in,
      anon_sym_not,
      aux_sym__space_token1,
  [1488] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(44), 1,
      sym_linebreak,
    STATE(45), 1,
      sym__space,
    STATE(116), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1516] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(45), 1,
      sym_linebreak,
    STATE(102), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1538] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(46), 1,
      sym_linebreak,
    STATE(116), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1560] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(47), 1,
      sym_linebreak,
    STATE(110), 1,
      sym_version_cmp,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(104), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1582] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      sym_linebreak,
    STATE(49), 1,
      aux_sym__version_list_repeat1,
    STATE(175), 1,
      sym__space,
    ACTIONS(156), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1604] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_linebreak,
    STATE(52), 1,
      aux_sym__version_list_repeat1,
    STATE(175), 1,
      sym__space,
    ACTIONS(161), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1626] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_linebreak,
    STATE(56), 1,
      aux_sym__version_list_repeat1,
    STATE(175), 1,
      sym__space,
    ACTIONS(164), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1648] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_linebreak,
    STATE(55), 1,
      aux_sym__version_list_repeat1,
    STATE(175), 1,
      sym__space,
    ACTIONS(167), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1670] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      aux_sym__space_token1,
    STATE(175), 1,
      sym__space,
    STATE(52), 2,
      sym_linebreak,
      aux_sym__version_list_repeat1,
    ACTIONS(169), 3,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1692] = 9,
    ACTIONS(177), 1,
      aux_sym_argument_token1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      aux_sym__space_token1,
    STATE(53), 1,
      sym_linebreak,
    STATE(63), 1,
      sym__space,
    STATE(142), 1,
      sym_quoted_string,
    STATE(152), 1,
      sym_argument,
  [1720] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym__version_list_repeat1,
    STATE(54), 1,
      sym_linebreak,
    STATE(175), 1,
      sym__space,
    ACTIONS(187), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1742] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym__version_list_repeat1,
    STATE(55), 1,
      sym_linebreak,
    STATE(175), 1,
      sym__space,
    ACTIONS(189), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1764] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym__version_list_repeat1,
    STATE(56), 1,
      sym_linebreak,
    STATE(175), 1,
      sym__space,
    ACTIONS(156), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1786] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym__version_list_repeat1,
    STATE(57), 1,
      sym_linebreak,
    STATE(175), 1,
      sym__space,
    ACTIONS(167), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1808] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__version_list_repeat1,
    STATE(58), 1,
      sym_linebreak,
    STATE(175), 1,
      sym__space,
    ACTIONS(191), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1830] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym__version_list_repeat1,
    STATE(59), 1,
      sym_linebreak,
    STATE(175), 1,
      sym__space,
    ACTIONS(189), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1852] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 1,
      anon_sym_and,
    STATE(60), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
    ACTIONS(193), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym__space_token1,
  [1871] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym_linebreak,
    ACTIONS(197), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1885] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      sym_linebreak,
    STATE(74), 1,
      aux_sym__package_list_repeat1,
    STATE(138), 1,
      sym__space,
  [1907] = 7,
    ACTIONS(177), 1,
      aux_sym_argument_token1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      sym_linebreak,
    STATE(135), 1,
      sym_argument,
    STATE(142), 1,
      sym_quoted_string,
  [1929] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(64), 1,
      sym_linebreak,
    ACTIONS(203), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1943] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(207), 1,
      anon_sym_or,
    STATE(65), 1,
      sym_linebreak,
    STATE(184), 1,
      sym__space,
    ACTIONS(205), 3,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      aux_sym__space_token1,
  [1961] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym__package_list_repeat1,
    STATE(66), 1,
      sym_linebreak,
    STATE(145), 1,
      sym__space,
  [1983] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      aux_sym_file_token1,
    STATE(67), 1,
      sym_linebreak,
    STATE(140), 1,
      sym_marker_spec,
    STATE(160), 1,
      sym__space,
  [2005] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(68), 1,
      sym_linebreak,
    ACTIONS(213), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2019] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym_linebreak,
    STATE(79), 1,
      aux_sym__package_list_repeat1,
    STATE(150), 1,
      sym__space,
  [2041] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym_linebreak,
    STATE(74), 1,
      aux_sym__package_list_repeat1,
    STATE(145), 1,
      sym__space,
  [2063] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(71), 1,
      sym_linebreak,
    STATE(92), 1,
      sym_url,
    STATE(106), 1,
      sym__space,
  [2085] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      sym_linebreak,
    ACTIONS(217), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2099] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_linebreak,
    ACTIONS(219), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2113] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      aux_sym__space_token1,
    STATE(166), 1,
      sym__space,
    STATE(74), 2,
      sym_linebreak,
      aux_sym__package_list_repeat1,
  [2133] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(75), 1,
      sym_linebreak,
    STATE(108), 1,
      sym_url,
    STATE(109), 1,
      sym__space,
  [2155] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      aux_sym_file_token1,
    STATE(76), 1,
      sym_linebreak,
    STATE(149), 1,
      sym_marker_spec,
    STATE(160), 1,
      sym__space,
  [2177] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_quoted_string,
    STATE(77), 1,
      sym_linebreak,
    STATE(118), 1,
      sym__space,
  [2199] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(78), 1,
      sym_linebreak,
    ACTIONS(233), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2213] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym__package_list_repeat1,
    STATE(79), 1,
      sym_linebreak,
    STATE(146), 1,
      sym__space,
  [2235] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_linebreak,
    STATE(83), 1,
      aux_sym__package_list_repeat1,
    STATE(146), 1,
      sym__space,
  [2257] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_quoted_string,
    STATE(81), 1,
      sym_linebreak,
    STATE(123), 1,
      sym__space,
  [2279] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      sym_linebreak,
    ACTIONS(237), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2293] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym__package_list_repeat1,
    STATE(83), 1,
      sym_linebreak,
    STATE(148), 1,
      sym__space,
  [2315] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym__package_list_repeat1,
    STATE(84), 1,
      sym_linebreak,
    STATE(148), 1,
      sym__space,
  [2337] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(85), 1,
      sym_linebreak,
    ACTIONS(241), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2351] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(86), 1,
      sym_linebreak,
    ACTIONS(243), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym__space_token1,
  [2364] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      sym_linebreak,
    ACTIONS(245), 4,
      sym_version,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [2377] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(88), 1,
      sym_linebreak,
    ACTIONS(247), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym__space_token1,
  [2390] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(89), 1,
      sym_linebreak,
    ACTIONS(249), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym__space_token1,
  [2403] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(90), 1,
      sym_linebreak,
    ACTIONS(251), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2415] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_linebreak,
    STATE(164), 1,
      sym__space,
  [2431] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(92), 1,
      sym_linebreak,
    ACTIONS(255), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2443] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(93), 1,
      sym_linebreak,
    ACTIONS(257), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2455] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(70), 1,
      aux_sym_file_token1,
    STATE(94), 1,
      sym_linebreak,
    STATE(141), 1,
      sym__space,
  [2471] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_linebreak,
    STATE(158), 1,
      sym__space,
  [2487] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_linebreak,
    STATE(155), 1,
      sym__space,
  [2503] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(97), 1,
      sym_linebreak,
    ACTIONS(263), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [2515] = 3,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    STATE(98), 1,
      sym_linebreak,
    ACTIONS(29), 3,
      aux_sym_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2527] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(99), 1,
      sym_linebreak,
    ACTIONS(265), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2539] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(267), 1,
      aux_sym_file_token1,
    STATE(100), 1,
      sym_linebreak,
    STATE(144), 1,
      sym__space,
  [2555] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      sym_linebreak,
    ACTIONS(269), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2567] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(271), 1,
      sym_version,
    ACTIONS(273), 1,
      aux_sym__space_token1,
    STATE(102), 1,
      sym_linebreak,
    STATE(181), 1,
      sym__space,
  [2583] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(275), 1,
      aux_sym_file_token1,
    STATE(103), 1,
      sym_linebreak,
    STATE(143), 1,
      sym__space,
  [2599] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(277), 1,
      sym_package,
    STATE(104), 1,
      sym_linebreak,
    STATE(167), 1,
      sym__space,
  [2615] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(279), 1,
      sym_package,
    STATE(105), 1,
      sym_linebreak,
    STATE(183), 1,
      sym__space,
  [2631] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    STATE(106), 1,
      sym_linebreak,
    STATE(132), 1,
      sym_url,
  [2647] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym_linebreak,
    ACTIONS(281), 3,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      aux_sym__space_token1,
  [2659] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      sym_linebreak,
    ACTIONS(283), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2671] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    STATE(92), 1,
      sym_url,
    STATE(109), 1,
      sym_linebreak,
  [2687] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      aux_sym__space_token1,
    ACTIONS(285), 1,
      sym_version,
    STATE(110), 1,
      sym_linebreak,
    STATE(177), 1,
      sym__space,
  [2703] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      aux_sym__space_token1,
    ACTIONS(287), 1,
      anon_sym_EQ,
    STATE(63), 1,
      sym__space,
    STATE(111), 1,
      sym_linebreak,
  [2719] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(112), 1,
      sym_linebreak,
    ACTIONS(221), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [2731] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      sym_linebreak,
    ACTIONS(289), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [2743] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_linebreak,
    STATE(182), 1,
      sym__space,
  [2759] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(293), 1,
      sym_package,
    STATE(115), 1,
      sym_linebreak,
    STATE(172), 1,
      sym__space,
  [2775] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      aux_sym__space_token1,
    ACTIONS(295), 1,
      sym_version,
    STATE(116), 1,
      sym_linebreak,
    STATE(174), 1,
      sym__space,
  [2791] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(117), 1,
      sym_linebreak,
    ACTIONS(297), 3,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      aux_sym__space_token1,
  [2803] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_quoted_string,
    STATE(118), 1,
      sym_linebreak,
  [2819] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(119), 1,
      sym_linebreak,
    ACTIONS(299), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [2831] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(277), 1,
      sym_package,
    STATE(105), 1,
      sym__space,
    STATE(120), 1,
      sym_linebreak,
  [2847] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_linebreak,
    STATE(170), 1,
      sym__space,
  [2863] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(122), 1,
      sym_linebreak,
    ACTIONS(303), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2875] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_quoted_string,
    STATE(123), 1,
      sym_linebreak,
  [2891] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      sym_linebreak,
    ACTIONS(305), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2903] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(307), 1,
      sym_package,
    STATE(125), 1,
      sym_linebreak,
    STATE(168), 1,
      sym__space,
  [2919] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      aux_sym__space_token1,
    ACTIONS(309), 1,
      sym_version,
    STATE(126), 1,
      sym_linebreak,
    STATE(156), 1,
      sym__space,
  [2935] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(127), 1,
      sym_linebreak,
    ACTIONS(311), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2947] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      sym_linebreak,
    ACTIONS(313), 3,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      aux_sym__space_token1,
  [2959] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(129), 1,
      sym_linebreak,
    ACTIONS(315), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [2971] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      aux_sym__space_token1,
    ACTIONS(317), 1,
      sym_version,
    STATE(130), 1,
      sym_linebreak,
    STATE(171), 1,
      sym__space,
  [2987] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      aux_sym__space_token1,
    ACTIONS(319), 1,
      sym_version,
    STATE(131), 1,
      sym_linebreak,
    STATE(153), 1,
      sym__space,
  [3003] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(132), 1,
      sym_linebreak,
    ACTIONS(321), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3015] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(323), 1,
      sym_package,
    STATE(104), 1,
      sym__space,
    STATE(133), 1,
      sym_linebreak,
  [3031] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(134), 1,
      sym_linebreak,
    ACTIONS(114), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3042] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(135), 1,
      sym_linebreak,
    ACTIONS(325), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3053] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(136), 1,
      sym_linebreak,
    STATE(163), 1,
      sym__space,
  [3066] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(137), 1,
      sym_linebreak,
    ACTIONS(327), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3077] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_linebreak,
  [3090] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(139), 1,
      sym_linebreak,
    ACTIONS(333), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3101] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      sym_linebreak,
    ACTIONS(335), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3112] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(267), 1,
      aux_sym_file_token1,
    ACTIONS(337), 1,
      sym_comment,
    STATE(141), 1,
      sym_linebreak,
  [3125] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(142), 1,
      sym_linebreak,
    ACTIONS(339), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3136] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(341), 1,
      aux_sym_file_token1,
    ACTIONS(343), 1,
      sym_comment,
    STATE(143), 1,
      sym_linebreak,
  [3149] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(345), 1,
      aux_sym_file_token1,
    ACTIONS(347), 1,
      sym_comment,
    STATE(144), 1,
      sym_linebreak,
  [3162] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_linebreak,
  [3175] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_linebreak,
  [3188] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(147), 1,
      sym_linebreak,
    ACTIONS(349), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3199] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      sym_linebreak,
  [3212] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(149), 1,
      sym_linebreak,
    ACTIONS(211), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3223] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_linebreak,
  [3236] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(151), 1,
      sym_linebreak,
    ACTIONS(351), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3247] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(152), 1,
      sym_linebreak,
    ACTIONS(353), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3258] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      sym_version,
    STATE(153), 1,
      sym_linebreak,
  [3268] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(355), 1,
      aux_sym_file_token1,
    STATE(154), 1,
      sym_linebreak,
  [3278] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_linebreak,
  [3288] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(285), 1,
      sym_version,
    STATE(156), 1,
      sym_linebreak,
  [3298] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_linebreak,
  [3308] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_linebreak,
  [3318] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(70), 1,
      aux_sym_file_token1,
    STATE(159), 1,
      sym_linebreak,
  [3328] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym_linebreak,
  [3338] = 3,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      aux_sym_quoted_string_token2,
    STATE(161), 1,
      sym_linebreak,
  [3348] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_linebreak,
  [3358] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      anon_sym_in,
    STATE(163), 1,
      sym_linebreak,
  [3368] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_linebreak,
  [3378] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      sym_version,
    STATE(165), 1,
      sym_linebreak,
  [3388] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_linebreak,
  [3398] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      sym_package,
    STATE(167), 1,
      sym_linebreak,
  [3408] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(293), 1,
      sym_package,
    STATE(168), 1,
      sym_linebreak,
  [3418] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_linebreak,
  [3428] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      sym_linebreak,
  [3438] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(369), 1,
      sym_version,
    STATE(171), 1,
      sym_linebreak,
  [3448] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      sym_package,
    STATE(172), 1,
      sym_linebreak,
  [3458] = 3,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      aux_sym_quoted_string_token1,
    STATE(173), 1,
      sym_linebreak,
  [3468] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(271), 1,
      sym_version,
    STATE(174), 1,
      sym_linebreak,
  [3478] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_linebreak,
  [3488] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(345), 1,
      aux_sym_file_token1,
    STATE(176), 1,
      sym_linebreak,
  [3498] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      sym_version,
    STATE(177), 1,
      sym_linebreak,
  [3508] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      aux_sym_file_token1,
    STATE(178), 1,
      sym_linebreak,
  [3518] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(381), 1,
      anon_sym_and,
    STATE(179), 1,
      sym_linebreak,
  [3528] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(267), 1,
      aux_sym_file_token1,
    STATE(180), 1,
      sym_linebreak,
  [3538] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(383), 1,
      sym_version,
    STATE(181), 1,
      sym_linebreak,
  [3548] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_linebreak,
  [3558] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      sym_package,
    STATE(183), 1,
      sym_linebreak,
  [3568] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      anon_sym_or,
    STATE(184), 1,
      sym_linebreak,
  [3578] = 1,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
  [3582] = 1,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
  [3586] = 1,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 193,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 269,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 383,
  [SMALL_STATE(12)] = 439,
  [SMALL_STATE(13)] = 481,
  [SMALL_STATE(14)] = 523,
  [SMALL_STATE(15)] = 565,
  [SMALL_STATE(16)] = 615,
  [SMALL_STATE(17)] = 654,
  [SMALL_STATE(18)] = 693,
  [SMALL_STATE(19)] = 729,
  [SMALL_STATE(20)] = 765,
  [SMALL_STATE(21)] = 801,
  [SMALL_STATE(22)] = 837,
  [SMALL_STATE(23)] = 873,
  [SMALL_STATE(24)] = 906,
  [SMALL_STATE(25)] = 949,
  [SMALL_STATE(26)] = 982,
  [SMALL_STATE(27)] = 1006,
  [SMALL_STATE(28)] = 1036,
  [SMALL_STATE(29)] = 1066,
  [SMALL_STATE(30)] = 1106,
  [SMALL_STATE(31)] = 1141,
  [SMALL_STATE(32)] = 1165,
  [SMALL_STATE(33)] = 1189,
  [SMALL_STATE(34)] = 1213,
  [SMALL_STATE(35)] = 1237,
  [SMALL_STATE(36)] = 1261,
  [SMALL_STATE(37)] = 1285,
  [SMALL_STATE(38)] = 1316,
  [SMALL_STATE(39)] = 1347,
  [SMALL_STATE(40)] = 1376,
  [SMALL_STATE(41)] = 1407,
  [SMALL_STATE(42)] = 1438,
  [SMALL_STATE(43)] = 1466,
  [SMALL_STATE(44)] = 1488,
  [SMALL_STATE(45)] = 1516,
  [SMALL_STATE(46)] = 1538,
  [SMALL_STATE(47)] = 1560,
  [SMALL_STATE(48)] = 1582,
  [SMALL_STATE(49)] = 1604,
  [SMALL_STATE(50)] = 1626,
  [SMALL_STATE(51)] = 1648,
  [SMALL_STATE(52)] = 1670,
  [SMALL_STATE(53)] = 1692,
  [SMALL_STATE(54)] = 1720,
  [SMALL_STATE(55)] = 1742,
  [SMALL_STATE(56)] = 1764,
  [SMALL_STATE(57)] = 1786,
  [SMALL_STATE(58)] = 1808,
  [SMALL_STATE(59)] = 1830,
  [SMALL_STATE(60)] = 1852,
  [SMALL_STATE(61)] = 1871,
  [SMALL_STATE(62)] = 1885,
  [SMALL_STATE(63)] = 1907,
  [SMALL_STATE(64)] = 1929,
  [SMALL_STATE(65)] = 1943,
  [SMALL_STATE(66)] = 1961,
  [SMALL_STATE(67)] = 1983,
  [SMALL_STATE(68)] = 2005,
  [SMALL_STATE(69)] = 2019,
  [SMALL_STATE(70)] = 2041,
  [SMALL_STATE(71)] = 2063,
  [SMALL_STATE(72)] = 2085,
  [SMALL_STATE(73)] = 2099,
  [SMALL_STATE(74)] = 2113,
  [SMALL_STATE(75)] = 2133,
  [SMALL_STATE(76)] = 2155,
  [SMALL_STATE(77)] = 2177,
  [SMALL_STATE(78)] = 2199,
  [SMALL_STATE(79)] = 2213,
  [SMALL_STATE(80)] = 2235,
  [SMALL_STATE(81)] = 2257,
  [SMALL_STATE(82)] = 2279,
  [SMALL_STATE(83)] = 2293,
  [SMALL_STATE(84)] = 2315,
  [SMALL_STATE(85)] = 2337,
  [SMALL_STATE(86)] = 2351,
  [SMALL_STATE(87)] = 2364,
  [SMALL_STATE(88)] = 2377,
  [SMALL_STATE(89)] = 2390,
  [SMALL_STATE(90)] = 2403,
  [SMALL_STATE(91)] = 2415,
  [SMALL_STATE(92)] = 2431,
  [SMALL_STATE(93)] = 2443,
  [SMALL_STATE(94)] = 2455,
  [SMALL_STATE(95)] = 2471,
  [SMALL_STATE(96)] = 2487,
  [SMALL_STATE(97)] = 2503,
  [SMALL_STATE(98)] = 2515,
  [SMALL_STATE(99)] = 2527,
  [SMALL_STATE(100)] = 2539,
  [SMALL_STATE(101)] = 2555,
  [SMALL_STATE(102)] = 2567,
  [SMALL_STATE(103)] = 2583,
  [SMALL_STATE(104)] = 2599,
  [SMALL_STATE(105)] = 2615,
  [SMALL_STATE(106)] = 2631,
  [SMALL_STATE(107)] = 2647,
  [SMALL_STATE(108)] = 2659,
  [SMALL_STATE(109)] = 2671,
  [SMALL_STATE(110)] = 2687,
  [SMALL_STATE(111)] = 2703,
  [SMALL_STATE(112)] = 2719,
  [SMALL_STATE(113)] = 2731,
  [SMALL_STATE(114)] = 2743,
  [SMALL_STATE(115)] = 2759,
  [SMALL_STATE(116)] = 2775,
  [SMALL_STATE(117)] = 2791,
  [SMALL_STATE(118)] = 2803,
  [SMALL_STATE(119)] = 2819,
  [SMALL_STATE(120)] = 2831,
  [SMALL_STATE(121)] = 2847,
  [SMALL_STATE(122)] = 2863,
  [SMALL_STATE(123)] = 2875,
  [SMALL_STATE(124)] = 2891,
  [SMALL_STATE(125)] = 2903,
  [SMALL_STATE(126)] = 2919,
  [SMALL_STATE(127)] = 2935,
  [SMALL_STATE(128)] = 2947,
  [SMALL_STATE(129)] = 2959,
  [SMALL_STATE(130)] = 2971,
  [SMALL_STATE(131)] = 2987,
  [SMALL_STATE(132)] = 3003,
  [SMALL_STATE(133)] = 3015,
  [SMALL_STATE(134)] = 3031,
  [SMALL_STATE(135)] = 3042,
  [SMALL_STATE(136)] = 3053,
  [SMALL_STATE(137)] = 3066,
  [SMALL_STATE(138)] = 3077,
  [SMALL_STATE(139)] = 3090,
  [SMALL_STATE(140)] = 3101,
  [SMALL_STATE(141)] = 3112,
  [SMALL_STATE(142)] = 3125,
  [SMALL_STATE(143)] = 3136,
  [SMALL_STATE(144)] = 3149,
  [SMALL_STATE(145)] = 3162,
  [SMALL_STATE(146)] = 3175,
  [SMALL_STATE(147)] = 3188,
  [SMALL_STATE(148)] = 3199,
  [SMALL_STATE(149)] = 3212,
  [SMALL_STATE(150)] = 3223,
  [SMALL_STATE(151)] = 3236,
  [SMALL_STATE(152)] = 3247,
  [SMALL_STATE(153)] = 3258,
  [SMALL_STATE(154)] = 3268,
  [SMALL_STATE(155)] = 3278,
  [SMALL_STATE(156)] = 3288,
  [SMALL_STATE(157)] = 3298,
  [SMALL_STATE(158)] = 3308,
  [SMALL_STATE(159)] = 3318,
  [SMALL_STATE(160)] = 3328,
  [SMALL_STATE(161)] = 3338,
  [SMALL_STATE(162)] = 3348,
  [SMALL_STATE(163)] = 3358,
  [SMALL_STATE(164)] = 3368,
  [SMALL_STATE(165)] = 3378,
  [SMALL_STATE(166)] = 3388,
  [SMALL_STATE(167)] = 3398,
  [SMALL_STATE(168)] = 3408,
  [SMALL_STATE(169)] = 3418,
  [SMALL_STATE(170)] = 3428,
  [SMALL_STATE(171)] = 3438,
  [SMALL_STATE(172)] = 3448,
  [SMALL_STATE(173)] = 3458,
  [SMALL_STATE(174)] = 3468,
  [SMALL_STATE(175)] = 3478,
  [SMALL_STATE(176)] = 3488,
  [SMALL_STATE(177)] = 3498,
  [SMALL_STATE(178)] = 3508,
  [SMALL_STATE(179)] = 3518,
  [SMALL_STATE(180)] = 3528,
  [SMALL_STATE(181)] = 3538,
  [SMALL_STATE(182)] = 3548,
  [SMALL_STATE(183)] = 3558,
  [SMALL_STATE(184)] = 3568,
  [SMALL_STATE(185)] = 3578,
  [SMALL_STATE(186)] = 3582,
  [SMALL_STATE(187)] = 3586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__space, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(11),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(94),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(99),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(99),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(53),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(111),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(151),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(151),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(159),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 7),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 8),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 5),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_var, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 3), REDUCE(sym__version_list, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 4), REDUCE(sym__version_list, 5),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 2), REDUCE(sym__version_list, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(42),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(125),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_cmp, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [357] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_requirements(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_package,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
