#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 90
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
  sym__marker = 77,
  sym__marker_expr = 78,
  sym__marker_paren = 79,
  sym__marker_and = 80,
  sym__marker_or = 81,
  sym_global_opt = 82,
  sym_argument = 83,
  sym_quoted_string = 84,
  sym_linebreak = 85,
  sym__space = 86,
  aux_sym_file_repeat1 = 87,
  aux_sym__package_list_repeat1 = 88,
  aux_sym__version_list_repeat1 = 89,
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
  [sym__marker] = "_marker",
  [sym__marker_expr] = "_marker_expr",
  [sym__marker_paren] = "_marker_paren",
  [sym__marker_and] = "_marker_and",
  [sym__marker_or] = "_marker_or",
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
  [sym__marker] = sym__marker,
  [sym__marker_expr] = sym__marker_expr,
  [sym__marker_paren] = sym__marker_paren,
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
  [sym__marker] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_paren] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_and] = {
    .visible = false,
    .named = true,
  },
  [sym__marker_or] = {
    .visible = false,
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
  [26] = 26,
  [27] = 2,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 2,
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
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 2,
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
          lookahead != '"') ADVANCE(196);
      END_STATE();
    case 27:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(200);
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
          lookahead != '\\') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(197);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(201);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 140},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 140},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 140},
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
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 140},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 140},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 140},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 140},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
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
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 27},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {(TSStateId)(-1)},
  [187] = {(TSStateId)(-1)},
  [188] = {(TSStateId)(-1)},
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
    [sym_file] = STATE(173),
    [sym_requirement] = STATE(102),
    [sym_url] = STATE(102),
    [sym_global_opt] = STATE(102),
    [sym_linebreak] = STATE(1),
    [sym__space] = STATE(5),
    [aux_sym_file_repeat1] = STATE(3),
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
  [0] = 17,
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
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_linebreak,
    STATE(4), 1,
      aux_sym_file_repeat1,
    STATE(5), 1,
      sym__space,
    ACTIONS(21), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(102), 3,
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
  [69] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_package,
    ACTIONS(40), 1,
      aux_sym_file_token1,
    ACTIONS(43), 1,
      aux_sym_file_token2,
    ACTIONS(46), 1,
      aux_sym_url_token1,
    ACTIONS(49), 1,
      aux_sym_url_token2,
    ACTIONS(61), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym__space_token1,
    STATE(5), 1,
      sym__space,
    STATE(4), 2,
      sym_linebreak,
      aux_sym_file_repeat1,
    ACTIONS(58), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(102), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(52), 5,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
    ACTIONS(55), 10,
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
    STATE(109), 3,
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
    ACTIONS(78), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(76), 24,
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
    ACTIONS(82), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(80), 24,
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
    ACTIONS(86), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(84), 24,
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
    ACTIONS(90), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(88), 24,
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
    ACTIONS(35), 24,
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
  [383] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(11), 1,
      sym_linebreak,
    STATE(26), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(64), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [425] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(12), 1,
      sym_linebreak,
    STATE(25), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(93), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [467] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      sym_linebreak,
    STATE(23), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(61), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [509] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(100), 1,
      aux_sym_file_token1,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_linebreak,
    STATE(22), 1,
      sym_extras,
    STATE(28), 1,
      sym__space,
    STATE(125), 1,
      sym_version_cmp,
    STATE(127), 1,
      sym__version_list,
    STATE(150), 1,
      sym_marker_spec,
    STATE(84), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [565] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(15), 1,
      sym_linebreak,
    STATE(24), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(60), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [607] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(16), 1,
      sym_linebreak,
    STATE(20), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(91), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [649] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      sym_linebreak,
    STATE(21), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(65), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [691] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(18), 1,
      sym_linebreak,
    STATE(19), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(88), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [733] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(90), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [769] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(93), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [805] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(63), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [841] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      aux_sym_file_token1,
    STATE(22), 1,
      sym_linebreak,
    STATE(29), 1,
      sym__space,
    STATE(125), 1,
      sym_version_cmp,
    STATE(127), 1,
      sym__version_list,
    STATE(156), 1,
      sym_marker_spec,
    STATE(69), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [891] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(64), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [927] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(65), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [963] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(77), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [999] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(62), 1,
      sym__marker,
    STATE(68), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(96), 12,
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
  [1035] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym_linebreak,
    ACTIONS(31), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [1060] = 12,
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
    STATE(28), 1,
      sym_linebreak,
    STATE(45), 1,
      sym__space,
    STATE(128), 1,
      sym__version_list,
    STATE(131), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1103] = 11,
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
    STATE(45), 1,
      sym__space,
    STATE(128), 1,
      sym__version_list,
    STATE(131), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1143] = 9,
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
    STATE(67), 2,
      sym_version_cmp,
      sym_marker_op,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1178] = 4,
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
  [1202] = 4,
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
  [1226] = 4,
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
  [1250] = 4,
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
  [1274] = 4,
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
  [1298] = 4,
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
  [1322] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(37), 1,
      sym_linebreak,
    STATE(45), 1,
      sym__space,
    STATE(131), 1,
      sym_version_cmp,
    STATE(137), 1,
      sym__version_list,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1353] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(38), 1,
      sym_linebreak,
    STATE(41), 1,
      sym__space,
    STATE(119), 1,
      sym__version_list,
    STATE(125), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1384] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(124), 1,
      anon_sym_in,
    ACTIONS(126), 1,
      anon_sym_not,
    STATE(39), 1,
      sym_linebreak,
    STATE(87), 2,
      sym_version_cmp,
      sym_marker_op,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1413] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(37), 1,
      sym__space,
    STATE(40), 1,
      sym_linebreak,
    STATE(124), 1,
      sym__version_list,
    STATE(125), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1444] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(41), 1,
      sym_linebreak,
    STATE(45), 1,
      sym__space,
    STATE(124), 1,
      sym__version_list,
    STATE(131), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1475] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
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
  [1497] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(43), 1,
      sym_linebreak,
    STATE(47), 1,
      sym__space,
    STATE(121), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1525] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(44), 1,
      sym_linebreak,
    STATE(46), 1,
      sym__space,
    STATE(130), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1553] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(45), 1,
      sym_linebreak,
    STATE(108), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1575] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(46), 1,
      sym_linebreak,
    STATE(121), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1597] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(47), 1,
      sym_linebreak,
    STATE(112), 1,
      sym_version_cmp,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
  [1619] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      sym_linebreak,
    STATE(49), 1,
      aux_sym__version_list_repeat1,
    STATE(179), 1,
      sym__space,
    ACTIONS(156), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1641] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_linebreak,
    STATE(55), 1,
      aux_sym__version_list_repeat1,
    STATE(179), 1,
      sym__space,
    ACTIONS(161), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1663] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_linebreak,
    STATE(56), 1,
      aux_sym__version_list_repeat1,
    STATE(179), 1,
      sym__space,
    ACTIONS(164), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1685] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_linebreak,
    STATE(55), 1,
      aux_sym__version_list_repeat1,
    STATE(179), 1,
      sym__space,
    ACTIONS(164), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1707] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_linebreak,
    STATE(57), 1,
      aux_sym__version_list_repeat1,
    STATE(179), 1,
      sym__space,
    ACTIONS(166), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1729] = 9,
    ACTIONS(169), 1,
      aux_sym_argument_token1,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      aux_sym__space_token1,
    STATE(53), 1,
      sym_linebreak,
    STATE(96), 1,
      sym__space,
    STATE(144), 1,
      sym_quoted_string,
    STATE(145), 1,
      sym_argument,
  [1757] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      sym_linebreak,
    STATE(55), 1,
      aux_sym__version_list_repeat1,
    STATE(179), 1,
      sym__space,
    ACTIONS(179), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1779] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      aux_sym__space_token1,
    STATE(179), 1,
      sym__space,
    STATE(55), 2,
      sym_linebreak,
      aux_sym__version_list_repeat1,
    ACTIONS(181), 3,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1801] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym__version_list_repeat1,
    STATE(56), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
    ACTIONS(189), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1823] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym__version_list_repeat1,
    STATE(57), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
    ACTIONS(156), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1845] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym__version_list_repeat1,
    STATE(58), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
    ACTIONS(189), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1867] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym__version_list_repeat1,
    STATE(59), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
    ACTIONS(191), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1889] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(60), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
    ACTIONS(193), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1906] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
    ACTIONS(195), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1923] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(62), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
    ACTIONS(197), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1940] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
    ACTIONS(199), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1957] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(64), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
    ACTIONS(201), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1974] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
    ACTIONS(203), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [1991] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(66), 1,
      sym_linebreak,
    ACTIONS(205), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2005] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym_linebreak,
    STATE(89), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym__space,
  [2027] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(68), 1,
      sym_linebreak,
    ACTIONS(211), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2041] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      aux_sym_file_token1,
    STATE(69), 1,
      sym_linebreak,
    STATE(155), 1,
      sym_marker_spec,
    STATE(158), 1,
      sym__space,
  [2063] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      sym_linebreak,
    STATE(95), 1,
      aux_sym__package_list_repeat1,
    STATE(153), 1,
      sym__space,
  [2085] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      sym_linebreak,
    ACTIONS(219), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2099] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(72), 1,
      sym_linebreak,
    STATE(104), 1,
      sym__space,
    STATE(129), 1,
      sym_url,
  [2121] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_linebreak,
    ACTIONS(221), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2135] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      sym_linebreak,
    ACTIONS(223), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2149] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      sym_linebreak,
    STATE(94), 1,
      aux_sym__package_list_repeat1,
    STATE(153), 1,
      sym__space,
  [2171] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(76), 1,
      sym_linebreak,
    ACTIONS(225), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2185] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(227), 1,
      aux_sym_file_token1,
    ACTIONS(229), 1,
      anon_sym_and,
    ACTIONS(231), 1,
      anon_sym_or,
    STATE(77), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
  [2207] = 3,
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
  [2221] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(79), 1,
      sym_linebreak,
    ACTIONS(235), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2235] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(80), 1,
      sym_linebreak,
    STATE(116), 1,
      sym_url,
    STATE(117), 1,
      sym__space,
  [2257] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_linebreak,
    STATE(94), 1,
      aux_sym__package_list_repeat1,
    STATE(151), 1,
      sym__space,
  [2279] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_linebreak,
    STATE(98), 1,
      aux_sym__package_list_repeat1,
    STATE(151), 1,
      sym__space,
  [2301] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__package_list_repeat1,
    STATE(83), 1,
      sym_linebreak,
    STATE(147), 1,
      sym__space,
  [2323] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      aux_sym_file_token1,
    STATE(84), 1,
      sym_linebreak,
    STATE(156), 1,
      sym_marker_spec,
    STATE(158), 1,
      sym__space,
  [2345] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym__package_list_repeat1,
    STATE(85), 1,
      sym_linebreak,
    STATE(154), 1,
      sym__space,
  [2367] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(86), 1,
      sym_linebreak,
    ACTIONS(243), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2381] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym_quoted_string,
    STATE(87), 1,
      sym_linebreak,
    STATE(133), 1,
      sym__space,
  [2403] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(229), 1,
      anon_sym_and,
    ACTIONS(231), 1,
      anon_sym_or,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_linebreak,
    STATE(118), 1,
      sym__space,
  [2425] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(89), 1,
      sym_linebreak,
    ACTIONS(247), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2439] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(229), 1,
      anon_sym_and,
    ACTIONS(231), 1,
      anon_sym_or,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_linebreak,
    STATE(138), 1,
      sym__space,
  [2461] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(229), 1,
      anon_sym_and,
    ACTIONS(231), 1,
      anon_sym_or,
    ACTIONS(251), 1,
      aux_sym_file_token1,
    STATE(91), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
  [2483] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(92), 1,
      sym_linebreak,
    ACTIONS(253), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2497] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(229), 1,
      anon_sym_and,
    ACTIONS(231), 1,
      anon_sym_or,
    ACTIONS(255), 1,
      aux_sym_file_token1,
    STATE(93), 1,
      sym_linebreak,
    STATE(152), 1,
      sym__space,
  [2519] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      aux_sym__space_token1,
    STATE(184), 1,
      sym__space,
    STATE(94), 2,
      sym_linebreak,
      aux_sym__package_list_repeat1,
  [2539] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym__package_list_repeat1,
    STATE(95), 1,
      sym_linebreak,
    STATE(146), 1,
      sym__space,
  [2561] = 7,
    ACTIONS(169), 1,
      aux_sym_argument_token1,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    STATE(96), 1,
      sym_linebreak,
    STATE(144), 1,
      sym_quoted_string,
    STATE(148), 1,
      sym_argument,
  [2583] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(97), 1,
      sym_linebreak,
    ACTIONS(267), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2597] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym__package_list_repeat1,
    STATE(98), 1,
      sym_linebreak,
    STATE(147), 1,
      sym__space,
  [2619] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(99), 1,
      sym_linebreak,
    ACTIONS(269), 4,
      sym_version,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [2632] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(100), 1,
      sym_linebreak,
    ACTIONS(271), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2644] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      aux_sym__space_token1,
    ACTIONS(273), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym__space,
    STATE(101), 1,
      sym_linebreak,
  [2660] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(70), 1,
      aux_sym_file_token1,
    STATE(102), 1,
      sym_linebreak,
    STATE(143), 1,
      sym__space,
  [2676] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(275), 1,
      sym_package,
    STATE(103), 1,
      sym_linebreak,
    STATE(159), 1,
      sym__space,
  [2692] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    STATE(104), 1,
      sym_linebreak,
    STATE(136), 1,
      sym_url,
  [2708] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(277), 1,
      aux_sym_file_token1,
    STATE(105), 1,
      sym_linebreak,
    STATE(142), 1,
      sym__space,
  [2724] = 3,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    STATE(106), 1,
      sym_linebreak,
    ACTIONS(29), 3,
      aux_sym_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2736] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym_linebreak,
    ACTIONS(279), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2748] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(281), 1,
      sym_version,
    ACTIONS(283), 1,
      aux_sym__space_token1,
    STATE(108), 1,
      sym_linebreak,
    STATE(165), 1,
      sym__space,
  [2764] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(285), 1,
      aux_sym_file_token1,
    STATE(109), 1,
      sym_linebreak,
    STATE(149), 1,
      sym__space,
  [2780] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      sym_linebreak,
    ACTIONS(257), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [2792] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      sym_linebreak,
    ACTIONS(287), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2804] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      aux_sym__space_token1,
    ACTIONS(289), 1,
      sym_version,
    STATE(112), 1,
      sym_linebreak,
    STATE(182), 1,
      sym__space,
  [2820] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(291), 1,
      sym_package,
    STATE(113), 1,
      sym_linebreak,
    STATE(166), 1,
      sym__space,
  [2836] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(293), 1,
      sym_package,
    STATE(114), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
  [2852] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(115), 1,
      sym_linebreak,
    ACTIONS(295), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2864] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(116), 1,
      sym_linebreak,
    ACTIONS(297), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2876] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    STATE(117), 1,
      sym_linebreak,
    STATE(129), 1,
      sym_url,
  [2892] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 1,
      anon_sym_and,
    ACTIONS(301), 1,
      anon_sym_or,
    STATE(118), 1,
      sym_linebreak,
  [2908] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_linebreak,
    STATE(161), 1,
      sym__space,
  [2924] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(120), 1,
      sym_linebreak,
    ACTIONS(305), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [2936] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      aux_sym__space_token1,
    ACTIONS(307), 1,
      sym_version,
    STATE(121), 1,
      sym_linebreak,
    STATE(175), 1,
      sym__space,
  [2952] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym_linebreak,
  [2968] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(123), 1,
      sym_linebreak,
    ACTIONS(309), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [2980] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_linebreak,
    STATE(172), 1,
      sym__space,
  [2996] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      aux_sym__space_token1,
    ACTIONS(313), 1,
      sym_version,
    STATE(125), 1,
      sym_linebreak,
    STATE(163), 1,
      sym__space,
  [3012] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(293), 1,
      sym_package,
    STATE(103), 1,
      sym__space,
    STATE(126), 1,
      sym_linebreak,
  [3028] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(127), 1,
      sym_linebreak,
    ACTIONS(315), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3040] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      sym_linebreak,
    ACTIONS(317), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3052] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(129), 1,
      sym_linebreak,
    ACTIONS(319), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3064] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      aux_sym__space_token1,
    ACTIONS(321), 1,
      sym_version,
    STATE(130), 1,
      sym_linebreak,
    STATE(162), 1,
      sym__space,
  [3080] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      aux_sym__space_token1,
    ACTIONS(323), 1,
      sym_version,
    STATE(131), 1,
      sym_linebreak,
    STATE(185), 1,
      sym__space,
  [3096] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(325), 1,
      sym_package,
    STATE(114), 1,
      sym__space,
    STATE(132), 1,
      sym_linebreak,
  [3112] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_quoted_string,
    STATE(133), 1,
      sym_linebreak,
  [3128] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(327), 1,
      sym_package,
    STATE(134), 1,
      sym_linebreak,
    STATE(178), 1,
      sym__space,
  [3144] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(135), 1,
      sym_linebreak,
    ACTIONS(329), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [3156] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(136), 1,
      sym_linebreak,
    ACTIONS(331), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3168] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_linebreak,
    STATE(164), 1,
      sym__space,
  [3184] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(299), 1,
      anon_sym_and,
    ACTIONS(301), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_linebreak,
  [3200] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(139), 1,
      sym_linebreak,
    ACTIONS(337), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3212] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      sym_linebreak,
    ACTIONS(339), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [3224] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(141), 1,
      sym_linebreak,
    ACTIONS(341), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3235] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      aux_sym_file_token1,
    ACTIONS(345), 1,
      sym_comment,
    STATE(142), 1,
      sym_linebreak,
  [3248] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(285), 1,
      aux_sym_file_token1,
    ACTIONS(347), 1,
      sym_comment,
    STATE(143), 1,
      sym_linebreak,
  [3261] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(144), 1,
      sym_linebreak,
    ACTIONS(349), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3272] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      sym_linebreak,
    ACTIONS(351), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3283] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      sym_linebreak,
  [3296] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_linebreak,
  [3309] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(148), 1,
      sym_linebreak,
    ACTIONS(357), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3320] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      aux_sym_file_token1,
    ACTIONS(361), 1,
      sym_comment,
    STATE(149), 1,
      sym_linebreak,
  [3333] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(150), 1,
      sym_linebreak,
    ACTIONS(114), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3344] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_linebreak,
  [3357] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(299), 1,
      anon_sym_and,
    ACTIONS(301), 1,
      anon_sym_or,
    STATE(152), 1,
      sym_linebreak,
  [3370] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_linebreak,
  [3383] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      sym_linebreak,
  [3396] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(155), 1,
      sym_linebreak,
    ACTIONS(363), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3407] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(156), 1,
      sym_linebreak,
    ACTIONS(213), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3418] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(157), 1,
      sym_linebreak,
    STATE(167), 1,
      sym__space,
  [3431] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      sym_linebreak,
  [3441] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      sym_package,
    STATE(159), 1,
      sym_linebreak,
  [3451] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(70), 1,
      aux_sym_file_token1,
    STATE(160), 1,
      sym_linebreak,
  [3461] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_linebreak,
  [3471] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      sym_version,
    STATE(162), 1,
      sym_linebreak,
  [3481] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(281), 1,
      sym_version,
    STATE(163), 1,
      sym_linebreak,
  [3491] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_linebreak,
  [3501] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(369), 1,
      sym_version,
    STATE(165), 1,
      sym_linebreak,
  [3511] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      sym_package,
    STATE(166), 1,
      sym_linebreak,
  [3521] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      anon_sym_in,
    STATE(167), 1,
      sym_linebreak,
  [3531] = 3,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      aux_sym_quoted_string_token1,
    STATE(168), 1,
      sym_linebreak,
  [3541] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(275), 1,
      sym_package,
    STATE(169), 1,
      sym_linebreak,
  [3551] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_linebreak,
  [3561] = 3,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      aux_sym_quoted_string_token2,
    STATE(171), 1,
      sym_linebreak,
  [3571] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym_linebreak,
  [3581] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_linebreak,
  [3591] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      aux_sym_file_token1,
    STATE(174), 1,
      sym_linebreak,
  [3601] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(289), 1,
      sym_version,
    STATE(175), 1,
      sym_linebreak,
  [3611] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      sym_version,
    STATE(176), 1,
      sym_linebreak,
  [3621] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(383), 1,
      aux_sym_file_token1,
    STATE(177), 1,
      sym_linebreak,
  [3631] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(291), 1,
      sym_package,
    STATE(178), 1,
      sym_linebreak,
  [3641] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      sym_linebreak,
  [3651] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(285), 1,
      aux_sym_file_token1,
    STATE(180), 1,
      sym_linebreak,
  [3661] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      aux_sym_file_token1,
    STATE(181), 1,
      sym_linebreak,
  [3671] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(389), 1,
      sym_version,
    STATE(182), 1,
      sym_linebreak,
  [3681] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_linebreak,
  [3691] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      sym_linebreak,
  [3701] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(391), 1,
      sym_version,
    STATE(185), 1,
      sym_linebreak,
  [3711] = 1,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
  [3715] = 1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [3719] = 1,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 193,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 269,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 383,
  [SMALL_STATE(12)] = 425,
  [SMALL_STATE(13)] = 467,
  [SMALL_STATE(14)] = 509,
  [SMALL_STATE(15)] = 565,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 649,
  [SMALL_STATE(18)] = 691,
  [SMALL_STATE(19)] = 733,
  [SMALL_STATE(20)] = 769,
  [SMALL_STATE(21)] = 805,
  [SMALL_STATE(22)] = 841,
  [SMALL_STATE(23)] = 891,
  [SMALL_STATE(24)] = 927,
  [SMALL_STATE(25)] = 963,
  [SMALL_STATE(26)] = 999,
  [SMALL_STATE(27)] = 1035,
  [SMALL_STATE(28)] = 1060,
  [SMALL_STATE(29)] = 1103,
  [SMALL_STATE(30)] = 1143,
  [SMALL_STATE(31)] = 1178,
  [SMALL_STATE(32)] = 1202,
  [SMALL_STATE(33)] = 1226,
  [SMALL_STATE(34)] = 1250,
  [SMALL_STATE(35)] = 1274,
  [SMALL_STATE(36)] = 1298,
  [SMALL_STATE(37)] = 1322,
  [SMALL_STATE(38)] = 1353,
  [SMALL_STATE(39)] = 1384,
  [SMALL_STATE(40)] = 1413,
  [SMALL_STATE(41)] = 1444,
  [SMALL_STATE(42)] = 1475,
  [SMALL_STATE(43)] = 1497,
  [SMALL_STATE(44)] = 1525,
  [SMALL_STATE(45)] = 1553,
  [SMALL_STATE(46)] = 1575,
  [SMALL_STATE(47)] = 1597,
  [SMALL_STATE(48)] = 1619,
  [SMALL_STATE(49)] = 1641,
  [SMALL_STATE(50)] = 1663,
  [SMALL_STATE(51)] = 1685,
  [SMALL_STATE(52)] = 1707,
  [SMALL_STATE(53)] = 1729,
  [SMALL_STATE(54)] = 1757,
  [SMALL_STATE(55)] = 1779,
  [SMALL_STATE(56)] = 1801,
  [SMALL_STATE(57)] = 1823,
  [SMALL_STATE(58)] = 1845,
  [SMALL_STATE(59)] = 1867,
  [SMALL_STATE(60)] = 1889,
  [SMALL_STATE(61)] = 1906,
  [SMALL_STATE(62)] = 1923,
  [SMALL_STATE(63)] = 1940,
  [SMALL_STATE(64)] = 1957,
  [SMALL_STATE(65)] = 1974,
  [SMALL_STATE(66)] = 1991,
  [SMALL_STATE(67)] = 2005,
  [SMALL_STATE(68)] = 2027,
  [SMALL_STATE(69)] = 2041,
  [SMALL_STATE(70)] = 2063,
  [SMALL_STATE(71)] = 2085,
  [SMALL_STATE(72)] = 2099,
  [SMALL_STATE(73)] = 2121,
  [SMALL_STATE(74)] = 2135,
  [SMALL_STATE(75)] = 2149,
  [SMALL_STATE(76)] = 2171,
  [SMALL_STATE(77)] = 2185,
  [SMALL_STATE(78)] = 2207,
  [SMALL_STATE(79)] = 2221,
  [SMALL_STATE(80)] = 2235,
  [SMALL_STATE(81)] = 2257,
  [SMALL_STATE(82)] = 2279,
  [SMALL_STATE(83)] = 2301,
  [SMALL_STATE(84)] = 2323,
  [SMALL_STATE(85)] = 2345,
  [SMALL_STATE(86)] = 2367,
  [SMALL_STATE(87)] = 2381,
  [SMALL_STATE(88)] = 2403,
  [SMALL_STATE(89)] = 2425,
  [SMALL_STATE(90)] = 2439,
  [SMALL_STATE(91)] = 2461,
  [SMALL_STATE(92)] = 2483,
  [SMALL_STATE(93)] = 2497,
  [SMALL_STATE(94)] = 2519,
  [SMALL_STATE(95)] = 2539,
  [SMALL_STATE(96)] = 2561,
  [SMALL_STATE(97)] = 2583,
  [SMALL_STATE(98)] = 2597,
  [SMALL_STATE(99)] = 2619,
  [SMALL_STATE(100)] = 2632,
  [SMALL_STATE(101)] = 2644,
  [SMALL_STATE(102)] = 2660,
  [SMALL_STATE(103)] = 2676,
  [SMALL_STATE(104)] = 2692,
  [SMALL_STATE(105)] = 2708,
  [SMALL_STATE(106)] = 2724,
  [SMALL_STATE(107)] = 2736,
  [SMALL_STATE(108)] = 2748,
  [SMALL_STATE(109)] = 2764,
  [SMALL_STATE(110)] = 2780,
  [SMALL_STATE(111)] = 2792,
  [SMALL_STATE(112)] = 2804,
  [SMALL_STATE(113)] = 2820,
  [SMALL_STATE(114)] = 2836,
  [SMALL_STATE(115)] = 2852,
  [SMALL_STATE(116)] = 2864,
  [SMALL_STATE(117)] = 2876,
  [SMALL_STATE(118)] = 2892,
  [SMALL_STATE(119)] = 2908,
  [SMALL_STATE(120)] = 2924,
  [SMALL_STATE(121)] = 2936,
  [SMALL_STATE(122)] = 2952,
  [SMALL_STATE(123)] = 2968,
  [SMALL_STATE(124)] = 2980,
  [SMALL_STATE(125)] = 2996,
  [SMALL_STATE(126)] = 3012,
  [SMALL_STATE(127)] = 3028,
  [SMALL_STATE(128)] = 3040,
  [SMALL_STATE(129)] = 3052,
  [SMALL_STATE(130)] = 3064,
  [SMALL_STATE(131)] = 3080,
  [SMALL_STATE(132)] = 3096,
  [SMALL_STATE(133)] = 3112,
  [SMALL_STATE(134)] = 3128,
  [SMALL_STATE(135)] = 3144,
  [SMALL_STATE(136)] = 3156,
  [SMALL_STATE(137)] = 3168,
  [SMALL_STATE(138)] = 3184,
  [SMALL_STATE(139)] = 3200,
  [SMALL_STATE(140)] = 3212,
  [SMALL_STATE(141)] = 3224,
  [SMALL_STATE(142)] = 3235,
  [SMALL_STATE(143)] = 3248,
  [SMALL_STATE(144)] = 3261,
  [SMALL_STATE(145)] = 3272,
  [SMALL_STATE(146)] = 3283,
  [SMALL_STATE(147)] = 3296,
  [SMALL_STATE(148)] = 3309,
  [SMALL_STATE(149)] = 3320,
  [SMALL_STATE(150)] = 3333,
  [SMALL_STATE(151)] = 3344,
  [SMALL_STATE(152)] = 3357,
  [SMALL_STATE(153)] = 3370,
  [SMALL_STATE(154)] = 3383,
  [SMALL_STATE(155)] = 3396,
  [SMALL_STATE(156)] = 3407,
  [SMALL_STATE(157)] = 3418,
  [SMALL_STATE(158)] = 3431,
  [SMALL_STATE(159)] = 3441,
  [SMALL_STATE(160)] = 3451,
  [SMALL_STATE(161)] = 3461,
  [SMALL_STATE(162)] = 3471,
  [SMALL_STATE(163)] = 3481,
  [SMALL_STATE(164)] = 3491,
  [SMALL_STATE(165)] = 3501,
  [SMALL_STATE(166)] = 3511,
  [SMALL_STATE(167)] = 3521,
  [SMALL_STATE(168)] = 3531,
  [SMALL_STATE(169)] = 3541,
  [SMALL_STATE(170)] = 3551,
  [SMALL_STATE(171)] = 3561,
  [SMALL_STATE(172)] = 3571,
  [SMALL_STATE(173)] = 3581,
  [SMALL_STATE(174)] = 3591,
  [SMALL_STATE(175)] = 3601,
  [SMALL_STATE(176)] = 3611,
  [SMALL_STATE(177)] = 3621,
  [SMALL_STATE(178)] = 3631,
  [SMALL_STATE(179)] = 3641,
  [SMALL_STATE(180)] = 3651,
  [SMALL_STATE(181)] = 3661,
  [SMALL_STATE(182)] = 3671,
  [SMALL_STATE(183)] = 3681,
  [SMALL_STATE(184)] = 3691,
  [SMALL_STATE(185)] = 3701,
  [SMALL_STATE(186)] = 3711,
  [SMALL_STATE(187)] = 3715,
  [SMALL_STATE(188)] = 3719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__space, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(14),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(102),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(107),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(107),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(53),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(101),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(141),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(141),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(160),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 8),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 6),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 7),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_var, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 3), REDUCE(sym__version_list, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 4), REDUCE(sym__version_list, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 3),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 2), REDUCE(sym__version_list, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(44),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(134),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_cmp, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 4),
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
