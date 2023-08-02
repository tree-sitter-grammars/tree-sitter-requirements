#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

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
  aux_sym_url_token3 = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  sym_version = 13,
  anon_sym_LT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_EQ_EQ_EQ = 20,
  anon_sym_TILDE_EQ = 21,
  anon_sym_SEMI = 22,
  anon_sym_in = 23,
  anon_sym_not = 24,
  anon_sym_python_version = 25,
  anon_sym_python_full_version = 26,
  anon_sym_os_name = 27,
  anon_sym_sys_platform = 28,
  anon_sym_platform_release = 29,
  anon_sym_platform_system = 30,
  anon_sym_platform_version = 31,
  anon_sym_platform_machine = 32,
  anon_sym_platform_python_implementation = 33,
  anon_sym_implementation_name = 34,
  anon_sym_implementation_version = 35,
  anon_sym_extra = 36,
  anon_sym_and = 37,
  anon_sym_or = 38,
  anon_sym_DASHc = 39,
  anon_sym_DASHe = 40,
  anon_sym_DASHi = 41,
  anon_sym_DASHf = 42,
  anon_sym_DASHr = 43,
  anon_sym_DASH_DASHindex_DASHurl = 44,
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 45,
  anon_sym_DASH_DASHconstraint = 46,
  anon_sym_DASH_DASHrequirement = 47,
  anon_sym_DASH_DASHeditable = 48,
  anon_sym_DASH_DASHfind_DASHlinks = 49,
  anon_sym_DASH_DASHno_DASHbinary = 50,
  anon_sym_DASH_DASHonly_DASHbinary = 51,
  anon_sym_DASH_DASHtrusted_DASHhost = 52,
  anon_sym_DASH_DASHuse_DASHfeature = 53,
  anon_sym_EQ = 54,
  anon_sym_DASH_DASHno_DASHindex = 55,
  anon_sym_DASH_DASHprefer_DASHbinary = 56,
  anon_sym_DASH_DASHrequire_DASHhashes = 57,
  anon_sym_DASH_DASHpre = 58,
  aux_sym_argument_token1 = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_quoted_string_token1 = 61,
  anon_sym_SQUOTE = 62,
  aux_sym_quoted_string_token2 = 63,
  anon_sym_DOLLAR_LBRACE = 64,
  aux_sym_env_var_token1 = 65,
  anon_sym_RBRACE = 66,
  anon_sym_BSLASH = 67,
  sym_comment = 68,
  aux_sym__space_token1 = 69,
  sym_file = 70,
  sym_requirement = 71,
  sym_extras = 72,
  sym_url_spec = 73,
  sym_url = 74,
  sym_version_spec = 75,
  sym__version_list = 76,
  sym_version_cmp = 77,
  sym_marker_spec = 78,
  sym_marker_op = 79,
  sym_marker_var = 80,
  sym__marker = 81,
  sym__marker_expr = 82,
  sym__marker_paren = 83,
  sym__marker_and = 84,
  sym__marker_or = 85,
  sym_global_opt = 86,
  sym_argument = 87,
  sym_quoted_string = 88,
  sym_env_var = 89,
  sym_linebreak = 90,
  sym__space = 91,
  aux_sym_file_repeat1 = 92,
  aux_sym__package_list_repeat1 = 93,
  aux_sym_url_repeat1 = 94,
  aux_sym__version_list_repeat1 = 95,
  aux_sym_argument_repeat1 = 96,
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
  [aux_sym_url_token3] = "url_token3",
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
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_env_var_token1] = "env_var_token1",
  [anon_sym_RBRACE] = "}",
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
  [sym_env_var] = "env_var",
  [sym_linebreak] = "linebreak",
  [sym__space] = "_space",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__package_list_repeat1] = "_package_list_repeat1",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym__version_list_repeat1] = "_version_list_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
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
  [aux_sym_url_token3] = aux_sym_url_token3,
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
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_env_var_token1] = aux_sym_env_var_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_env_var] = sym_env_var,
  [sym_linebreak] = sym_linebreak,
  [sym__space] = sym__space,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__package_list_repeat1] = aux_sym__package_list_repeat1,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym__version_list_repeat1] = aux_sym__version_list_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
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
  [aux_sym_url_token3] = {
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
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_var_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [sym_env_var] = {
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
  [aux_sym_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__version_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_name = 2,
  field_scheme = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_name] = "name",
  [field_scheme] = "scheme",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_scheme, 0},
  [1] =
    {field_name, 1},
  [2] =
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
  [66] = 59,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 55,
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
  [105] = 2,
  [106] = 106,
  [107] = 98,
  [108] = 92,
  [109] = 109,
  [110] = 110,
  [111] = 110,
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
  [176] = 176,
  [177] = 177,
  [178] = 170,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 175,
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
  [201] = 2,
  [202] = 202,
  [203] = 203,
  [204] = 204,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(151);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 27:
      if (lookahead == '\\') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(198);
      END_STATE();
    case 28:
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(195);
      END_STATE();
    case 29:
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'q') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(182);
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
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 130:
      if (lookahead == 'x') ADVANCE(185);
      END_STATE();
    case 131:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 132:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '~') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_file_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'z') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_url_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_url_token3);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_url_token3);
      if (lookahead == '{') ADVANCE(197);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DASHi);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH_DASHfind_DASHlinks);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHbinary);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DASH_DASHonly_DASHbinary);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtrusted_DASHhost);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH_DASHuse_DASHfeature);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHindex);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH_DASHprefer_DASHbinary);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequire_DASHhashes);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpre);
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_env_var_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(196);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(193);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
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
  [1] = {.lex_state = 138},
  [2] = {.lex_state = 138},
  [3] = {.lex_state = 138},
  [4] = {.lex_state = 138},
  [5] = {.lex_state = 138},
  [6] = {.lex_state = 138},
  [7] = {.lex_state = 138},
  [8] = {.lex_state = 138},
  [9] = {.lex_state = 138},
  [10] = {.lex_state = 138},
  [11] = {.lex_state = 138},
  [12] = {.lex_state = 138},
  [13] = {.lex_state = 138},
  [14] = {.lex_state = 138},
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 138},
  [17] = {.lex_state = 138},
  [18] = {.lex_state = 138},
  [19] = {.lex_state = 138},
  [20] = {.lex_state = 138},
  [21] = {.lex_state = 138},
  [22] = {.lex_state = 138},
  [23] = {.lex_state = 138},
  [24] = {.lex_state = 138},
  [25] = {.lex_state = 138},
  [26] = {.lex_state = 138},
  [27] = {.lex_state = 138},
  [28] = {.lex_state = 138},
  [29] = {.lex_state = 138},
  [30] = {.lex_state = 138},
  [31] = {.lex_state = 138},
  [32] = {.lex_state = 138},
  [33] = {.lex_state = 138},
  [34] = {.lex_state = 138},
  [35] = {.lex_state = 138},
  [36] = {.lex_state = 138},
  [37] = {.lex_state = 138},
  [38] = {.lex_state = 138},
  [39] = {.lex_state = 138},
  [40] = {.lex_state = 138},
  [41] = {.lex_state = 138},
  [42] = {.lex_state = 138},
  [43] = {.lex_state = 138},
  [44] = {.lex_state = 138},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 138},
  [47] = {.lex_state = 138},
  [48] = {.lex_state = 138},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 138},
  [51] = {.lex_state = 138},
  [52] = {.lex_state = 138},
  [53] = {.lex_state = 138},
  [54] = {.lex_state = 138},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 138},
  [57] = {.lex_state = 138},
  [58] = {.lex_state = 138},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 138},
  [61] = {.lex_state = 138},
  [62] = {.lex_state = 138},
  [63] = {.lex_state = 138},
  [64] = {.lex_state = 138},
  [65] = {.lex_state = 138},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 138},
  [68] = {.lex_state = 138},
  [69] = {.lex_state = 138},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 138},
  [72] = {.lex_state = 138},
  [73] = {.lex_state = 138},
  [74] = {.lex_state = 138},
  [75] = {.lex_state = 138},
  [76] = {.lex_state = 138},
  [77] = {.lex_state = 138},
  [78] = {.lex_state = 138},
  [79] = {.lex_state = 138},
  [80] = {.lex_state = 138},
  [81] = {.lex_state = 138},
  [82] = {.lex_state = 138},
  [83] = {.lex_state = 138},
  [84] = {.lex_state = 138},
  [85] = {.lex_state = 138},
  [86] = {.lex_state = 138},
  [87] = {.lex_state = 138},
  [88] = {.lex_state = 138},
  [89] = {.lex_state = 138},
  [90] = {.lex_state = 138},
  [91] = {.lex_state = 138},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 138},
  [94] = {.lex_state = 138},
  [95] = {.lex_state = 138},
  [96] = {.lex_state = 138},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 138},
  [100] = {.lex_state = 138},
  [101] = {.lex_state = 138},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 138},
  [104] = {.lex_state = 138},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 138},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 138},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 138},
  [119] = {.lex_state = 138},
  [120] = {.lex_state = 138},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 138},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 138},
  [132] = {.lex_state = 138},
  [133] = {.lex_state = 138},
  [134] = {.lex_state = 138},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 138},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 138},
  [142] = {.lex_state = 138},
  [143] = {.lex_state = 138},
  [144] = {.lex_state = 138},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 138},
  [147] = {.lex_state = 138},
  [148] = {.lex_state = 138},
  [149] = {.lex_state = 138},
  [150] = {.lex_state = 138},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 138},
  [157] = {.lex_state = 138},
  [158] = {.lex_state = 138},
  [159] = {.lex_state = 138},
  [160] = {.lex_state = 138},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 138},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 138},
  [168] = {.lex_state = 138},
  [169] = {.lex_state = 138},
  [170] = {.lex_state = 138},
  [171] = {.lex_state = 138},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 138},
  [175] = {.lex_state = 27},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 138},
  [178] = {.lex_state = 138},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 138},
  [181] = {.lex_state = 28},
  [182] = {.lex_state = 29},
  [183] = {.lex_state = 138},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 27},
  [187] = {.lex_state = 138},
  [188] = {.lex_state = 138},
  [189] = {.lex_state = 138},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 138},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 138},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 138},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 138},
  [201] = {.lex_state = 6},
  [202] = {(TSStateId)(-1)},
  [203] = {(TSStateId)(-1)},
  [204] = {(TSStateId)(-1)},
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
    [aux_sym_url_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(3),
    [aux_sym__space_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(197),
    [sym_requirement] = STATE(115),
    [sym_url] = STATE(115),
    [sym_global_opt] = STATE(115),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(2), 1,
      sym_linebreak,
    ACTIONS(29), 8,
      sym_package,
      aux_sym_url_token2,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(31), 37,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_SEMI,
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
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym__space_token1,
  [56] = 16,
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
    STATE(115), 3,
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
  [123] = 17,
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
    STATE(115), 3,
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
  [192] = 13,
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
    STATE(130), 3,
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
  [249] = 4,
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
  [287] = 4,
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
  [325] = 4,
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
  [363] = 4,
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
  [401] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_linebreak,
    ACTIONS(92), 3,
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
  [439] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(11), 1,
      sym_linebreak,
    STATE(22), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(100), 1,
      sym__marker,
    STATE(76), 4,
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
  [481] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(12), 1,
      sym_linebreak,
    STATE(26), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(91), 1,
      sym__marker,
    STATE(76), 4,
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
  [523] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      sym_linebreak,
    STATE(25), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(68), 1,
      sym__marker,
    STATE(76), 4,
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
  [565] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      sym_linebreak,
    STATE(21), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(64), 1,
      sym__marker,
    STATE(76), 4,
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
    STATE(15), 1,
      sym_linebreak,
    STATE(24), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(67), 1,
      sym__marker,
    STATE(76), 4,
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
    STATE(16), 1,
      sym_linebreak,
    STATE(19), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(71), 1,
      sym__marker,
    STATE(76), 4,
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
    STATE(17), 1,
      sym_linebreak,
    STATE(20), 1,
      sym__space,
    STATE(30), 1,
      sym_marker_var,
    STATE(65), 1,
      sym__marker,
    STATE(76), 4,
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
  [733] = 16,
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
    STATE(18), 1,
      sym_linebreak,
    STATE(23), 1,
      sym_extras,
    STATE(28), 1,
      sym__space,
    STATE(121), 1,
      sym__version_list,
    STATE(123), 1,
      sym_version_cmp,
    STATE(163), 1,
      sym_marker_spec,
    STATE(97), 2,
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
  [789] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(100), 1,
      sym__marker,
    STATE(76), 4,
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
  [825] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(63), 1,
      sym__marker,
    STATE(76), 4,
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
  [861] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(69), 1,
      sym__marker,
    STATE(76), 4,
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
  [897] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(75), 1,
      sym__marker,
    STATE(76), 4,
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
  [933] = 14,
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
    STATE(23), 1,
      sym_linebreak,
    STATE(29), 1,
      sym__space,
    STATE(121), 1,
      sym__version_list,
    STATE(123), 1,
      sym_version_cmp,
    STATE(164), 1,
      sym_marker_spec,
    STATE(102), 2,
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
  [983] = 7,
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
    STATE(76), 4,
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
  [1019] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(64), 1,
      sym__marker,
    STATE(76), 4,
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
  [1055] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_marker_var,
    STATE(99), 1,
      sym__marker,
    STATE(76), 4,
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
  [1091] = 3,
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
  [1116] = 12,
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
    STATE(46), 1,
      sym__space,
    STATE(151), 1,
      sym__version_list,
    STATE(152), 1,
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
  [1159] = 11,
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
    STATE(46), 1,
      sym__space,
    STATE(151), 1,
      sym__version_list,
    STATE(152), 1,
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
  [1199] = 9,
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
    STATE(95), 2,
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
  [1234] = 4,
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
  [1258] = 4,
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
  [1282] = 4,
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
  [1306] = 4,
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
  [1330] = 4,
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
  [1354] = 4,
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
  [1378] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(37), 1,
      sym_linebreak,
    STATE(38), 1,
      sym__space,
    STATE(123), 1,
      sym_version_cmp,
    STATE(134), 1,
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
  [1409] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(38), 1,
      sym_linebreak,
    STATE(46), 1,
      sym__space,
    STATE(146), 1,
      sym__version_list,
    STATE(152), 1,
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
  [1440] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(124), 1,
      anon_sym_in,
    ACTIONS(126), 1,
      anon_sym_not,
    STATE(39), 1,
      sym_linebreak,
    STATE(93), 2,
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
  [1469] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(40), 1,
      sym_linebreak,
    STATE(41), 1,
      sym__space,
    STATE(123), 1,
      sym_version_cmp,
    STATE(143), 1,
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
  [1500] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(41), 1,
      sym_linebreak,
    STATE(46), 1,
      sym__space,
    STATE(134), 1,
      sym__version_list,
    STATE(152), 1,
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
  [1531] = 4,
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
  [1553] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(43), 1,
      sym_linebreak,
    STATE(47), 1,
      sym__space,
    STATE(135), 1,
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
  [1581] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(44), 1,
      sym_linebreak,
    STATE(48), 1,
      sym__space,
    STATE(139), 1,
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
  [1609] = 11,
    ACTIONS(156), 1,
      aux_sym_argument_token1,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    ACTIONS(166), 1,
      aux_sym__space_token1,
    STATE(45), 1,
      sym_linebreak,
    STATE(49), 1,
      sym__space,
    STATE(109), 1,
      aux_sym_argument_repeat1,
    STATE(166), 1,
      sym_argument,
    STATE(153), 2,
      sym_quoted_string,
      sym_env_var,
  [1644] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(46), 1,
      sym_linebreak,
    STATE(122), 1,
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
  [1666] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(47), 1,
      sym_linebreak,
    STATE(128), 1,
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
  [1688] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(48), 1,
      sym_linebreak,
    STATE(135), 1,
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
  [1710] = 9,
    ACTIONS(156), 1,
      aux_sym_argument_token1,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    STATE(49), 1,
      sym_linebreak,
    STATE(109), 1,
      aux_sym_argument_repeat1,
    STATE(161), 1,
      sym_argument,
    STATE(153), 2,
      sym_quoted_string,
      sym_env_var,
  [1739] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_linebreak,
    STATE(60), 1,
      aux_sym__version_list_repeat1,
    STATE(189), 1,
      sym__space,
    ACTIONS(168), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1761] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_linebreak,
    STATE(57), 1,
      aux_sym__version_list_repeat1,
    STATE(189), 1,
      sym__space,
    ACTIONS(172), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1783] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_linebreak,
    STATE(60), 1,
      aux_sym__version_list_repeat1,
    STATE(189), 1,
      sym__space,
    ACTIONS(175), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1805] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_linebreak,
    STATE(54), 1,
      aux_sym__version_list_repeat1,
    STATE(189), 1,
      sym__space,
    ACTIONS(175), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1827] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      sym_linebreak,
    STATE(60), 1,
      aux_sym__version_list_repeat1,
    STATE(189), 1,
      sym__space,
    ACTIONS(177), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1849] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      aux_sym_url_token3,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(55), 1,
      sym_linebreak,
    STATE(59), 1,
      aux_sym_url_repeat1,
    STATE(98), 1,
      sym_env_var,
    ACTIONS(179), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1873] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym__version_list_repeat1,
    STATE(56), 1,
      sym_linebreak,
    STATE(189), 1,
      sym__space,
    ACTIONS(185), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1895] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      sym_linebreak,
    STATE(60), 1,
      aux_sym__version_list_repeat1,
    STATE(189), 1,
      sym__space,
    ACTIONS(187), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1917] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym__version_list_repeat1,
    STATE(58), 1,
      sym_linebreak,
    STATE(189), 1,
      sym__space,
    ACTIONS(177), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1939] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(192), 1,
      aux_sym_url_token3,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(98), 1,
      sym_env_var,
    STATE(59), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
    ACTIONS(190), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [1961] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      aux_sym__space_token1,
    STATE(189), 1,
      sym__space,
    STATE(60), 2,
      sym_linebreak,
      aux_sym__version_list_repeat1,
    ACTIONS(198), 3,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [1983] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      sym_linebreak,
    STATE(62), 1,
      aux_sym__version_list_repeat1,
    STATE(189), 1,
      sym__space,
    ACTIONS(206), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2005] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym__version_list_repeat1,
    STATE(62), 1,
      sym_linebreak,
    STATE(189), 1,
      sym__space,
    ACTIONS(172), 4,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2027] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
    ACTIONS(209), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2044] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(64), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
    ACTIONS(211), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2061] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
    ACTIONS(213), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2078] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      aux_sym_url_token3,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(107), 1,
      sym_env_var,
    ACTIONS(190), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(66), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
  [2099] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(67), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
    ACTIONS(221), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2116] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(68), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
    ACTIONS(223), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2133] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(69), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
    ACTIONS(225), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2150] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      aux_sym_url_token3,
    STATE(66), 1,
      aux_sym_url_repeat1,
    STATE(70), 1,
      sym_linebreak,
    STATE(107), 1,
      sym_env_var,
    ACTIONS(179), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [2173] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(229), 1,
      aux_sym_file_token1,
    ACTIONS(231), 1,
      anon_sym_and,
    ACTIONS(233), 1,
      anon_sym_or,
    STATE(71), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
  [2195] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(235), 1,
      aux_sym_url_token1,
    ACTIONS(237), 1,
      aux_sym_url_token2,
    STATE(72), 1,
      sym_linebreak,
    STATE(140), 1,
      sym_url,
    STATE(142), 1,
      sym__space,
  [2217] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(235), 1,
      aux_sym_url_token1,
    ACTIONS(237), 1,
      aux_sym_url_token2,
    STATE(73), 1,
      sym_linebreak,
    STATE(118), 1,
      sym__space,
    STATE(137), 1,
      sym_url,
  [2239] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      sym_linebreak,
    ACTIONS(239), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2253] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(231), 1,
      anon_sym_and,
    ACTIONS(233), 1,
      anon_sym_or,
    ACTIONS(241), 1,
      aux_sym_file_token1,
    STATE(75), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
  [2275] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(76), 1,
      sym_linebreak,
    ACTIONS(243), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2289] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_linebreak,
    STATE(81), 1,
      aux_sym__package_list_repeat1,
    STATE(156), 1,
      sym__space,
  [2311] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(78), 1,
      sym_linebreak,
    ACTIONS(249), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2325] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_linebreak,
    STATE(80), 1,
      aux_sym__package_list_repeat1,
    STATE(156), 1,
      sym__space,
  [2347] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_linebreak,
    STATE(81), 1,
      aux_sym__package_list_repeat1,
    STATE(157), 1,
      sym__space,
  [2369] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      aux_sym__space_token1,
    STATE(177), 1,
      sym__space,
    STATE(81), 2,
      sym_linebreak,
      aux_sym__package_list_repeat1,
  [2389] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_linebreak,
    STATE(84), 1,
      aux_sym__package_list_repeat1,
    STATE(167), 1,
      sym__space,
  [2411] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      sym_linebreak,
    ACTIONS(263), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2425] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym__package_list_repeat1,
    STATE(84), 1,
      sym_linebreak,
    STATE(160), 1,
      sym__space,
  [2447] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__package_list_repeat1,
    STATE(85), 1,
      sym_linebreak,
    STATE(160), 1,
      sym__space,
  [2469] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_linebreak,
    STATE(96), 1,
      aux_sym__package_list_repeat1,
    STATE(157), 1,
      sym__space,
  [2491] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      sym_linebreak,
    ACTIONS(267), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2505] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(88), 1,
      sym_linebreak,
    ACTIONS(269), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2519] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(89), 1,
      sym_linebreak,
    ACTIONS(271), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2533] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(90), 1,
      sym_linebreak,
    ACTIONS(273), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2547] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(231), 1,
      anon_sym_and,
    ACTIONS(233), 1,
      anon_sym_or,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_linebreak,
    STATE(127), 1,
      sym__space,
  [2569] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      aux_sym_url_token3,
    STATE(92), 1,
      sym_linebreak,
    ACTIONS(277), 4,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2585] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym_quoted_string,
    STATE(93), 1,
      sym_linebreak,
    STATE(144), 1,
      sym__space,
  [2607] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(94), 1,
      sym_linebreak,
    ACTIONS(281), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2621] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      sym_quoted_string,
    STATE(95), 1,
      sym_linebreak,
    STATE(131), 1,
      sym__space,
  [2643] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym__package_list_repeat1,
    STATE(96), 1,
      sym_linebreak,
    STATE(162), 1,
      sym__space,
  [2665] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      aux_sym_file_token1,
    STATE(97), 1,
      sym_linebreak,
    STATE(164), 1,
      sym_marker_spec,
    STATE(193), 1,
      sym__space,
  [2687] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(287), 1,
      aux_sym_url_token3,
    STATE(98), 1,
      sym_linebreak,
    ACTIONS(285), 4,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2703] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(231), 1,
      anon_sym_and,
    ACTIONS(233), 1,
      anon_sym_or,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_linebreak,
    STATE(148), 1,
      sym__space,
  [2725] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym__space_token1,
    ACTIONS(231), 1,
      anon_sym_and,
    ACTIONS(233), 1,
      anon_sym_or,
    ACTIONS(291), 1,
      aux_sym_file_token1,
    STATE(100), 1,
      sym_linebreak,
    STATE(169), 1,
      sym__space,
  [2747] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      sym_linebreak,
    ACTIONS(293), 5,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      aux_sym__space_token1,
  [2761] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      aux_sym_file_token1,
    STATE(102), 1,
      sym_linebreak,
    STATE(165), 1,
      sym_marker_spec,
    STATE(193), 1,
      sym__space,
  [2783] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(103), 1,
      sym_linebreak,
    ACTIONS(297), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2797] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      sym_linebreak,
    ACTIONS(299), 5,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2811] = 4,
    ACTIONS(29), 1,
      aux_sym_argument_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    STATE(105), 1,
      sym_linebreak,
    ACTIONS(31), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2826] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(106), 1,
      sym_linebreak,
    ACTIONS(301), 4,
      sym_version,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [2839] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(287), 1,
      aux_sym_url_token3,
    STATE(107), 1,
      sym_linebreak,
    ACTIONS(285), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2854] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      aux_sym_url_token3,
    STATE(108), 1,
      sym_linebreak,
    ACTIONS(277), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2869] = 5,
    ACTIONS(156), 1,
      aux_sym_argument_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    STATE(109), 1,
      sym_linebreak,
    STATE(112), 1,
      aux_sym_argument_repeat1,
    ACTIONS(303), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [2886] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      aux_sym_url_token3,
    STATE(70), 1,
      aux_sym_url_repeat1,
    STATE(107), 1,
      sym_env_var,
    STATE(110), 1,
      sym_linebreak,
  [2905] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      aux_sym_url_token3,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(55), 1,
      aux_sym_url_repeat1,
    STATE(98), 1,
      sym_env_var,
    STATE(111), 1,
      sym_linebreak,
  [2924] = 4,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      aux_sym_argument_token1,
    ACTIONS(305), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(112), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
  [2939] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      sym_linebreak,
    ACTIONS(310), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [2951] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(114), 1,
      sym_linebreak,
    ACTIONS(312), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [2963] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(70), 1,
      aux_sym_file_token1,
    STATE(115), 1,
      sym_linebreak,
    STATE(159), 1,
      sym__space,
  [2979] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(116), 1,
      sym_linebreak,
    ACTIONS(253), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [2991] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(166), 1,
      aux_sym__space_token1,
    ACTIONS(314), 1,
      anon_sym_EQ,
    STATE(49), 1,
      sym__space,
    STATE(117), 1,
      sym_linebreak,
  [3007] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(235), 1,
      aux_sym_url_token1,
    ACTIONS(237), 1,
      aux_sym_url_token2,
    STATE(118), 1,
      sym_linebreak,
    STATE(145), 1,
      sym_url,
  [3023] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(316), 1,
      sym_package,
    STATE(119), 1,
      sym_linebreak,
    STATE(188), 1,
      sym__space,
  [3039] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(318), 1,
      sym_package,
    STATE(120), 1,
      sym_linebreak,
    STATE(138), 1,
      sym__space,
  [3055] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      sym_linebreak,
    ACTIONS(320), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3067] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(322), 1,
      sym_version,
    ACTIONS(324), 1,
      aux_sym__space_token1,
    STATE(122), 1,
      sym_linebreak,
    STATE(199), 1,
      sym__space,
  [3083] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      sym_version,
    STATE(123), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
  [3099] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      sym_linebreak,
    ACTIONS(328), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3111] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(125), 1,
      sym_linebreak,
    ACTIONS(330), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3123] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(332), 1,
      aux_sym_file_token1,
    STATE(126), 1,
      sym_linebreak,
    STATE(158), 1,
      sym__space,
  [3139] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 1,
      anon_sym_and,
    ACTIONS(336), 1,
      anon_sym_or,
    STATE(127), 1,
      sym_linebreak,
  [3155] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      aux_sym__space_token1,
    ACTIONS(338), 1,
      sym_version,
    STATE(128), 1,
      sym_linebreak,
    STATE(191), 1,
      sym__space,
  [3171] = 4,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    ACTIONS(342), 1,
      aux_sym_argument_token1,
    STATE(129), 1,
      sym_linebreak,
    ACTIONS(340), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3185] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(344), 1,
      aux_sym_file_token1,
    STATE(130), 1,
      sym_linebreak,
    STATE(168), 1,
      sym__space,
  [3201] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym_quoted_string,
    STATE(131), 1,
      sym_linebreak,
  [3217] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(132), 1,
      sym_linebreak,
    ACTIONS(346), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [3229] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(133), 1,
      sym_linebreak,
    ACTIONS(348), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [3241] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_linebreak,
    STATE(171), 1,
      sym__space,
  [3257] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      aux_sym__space_token1,
    ACTIONS(352), 1,
      sym_version,
    STATE(135), 1,
      sym_linebreak,
    STATE(184), 1,
      sym__space,
  [3273] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(136), 1,
      sym_linebreak,
    ACTIONS(354), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3285] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(137), 1,
      sym_linebreak,
    ACTIONS(356), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3297] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(358), 1,
      sym_package,
    STATE(138), 1,
      sym_linebreak,
    STATE(180), 1,
      sym__space,
  [3313] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      aux_sym__space_token1,
    ACTIONS(360), 1,
      sym_version,
    STATE(139), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
  [3329] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      sym_linebreak,
    ACTIONS(362), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3341] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(364), 1,
      sym_package,
    STATE(141), 1,
      sym_linebreak,
    STATE(200), 1,
      sym__space,
  [3357] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(235), 1,
      aux_sym_url_token1,
    ACTIONS(237), 1,
      aux_sym_url_token2,
    STATE(137), 1,
      sym_url,
    STATE(142), 1,
      sym_linebreak,
  [3373] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
  [3389] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_quoted_string,
    STATE(144), 1,
      sym_linebreak,
  [3405] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      sym_linebreak,
    ACTIONS(368), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3417] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_linebreak,
    STATE(174), 1,
      sym__space,
  [3433] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(147), 1,
      sym_linebreak,
    ACTIONS(372), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [3445] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(334), 1,
      anon_sym_and,
    ACTIONS(336), 1,
      anon_sym_or,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_linebreak,
  [3461] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(376), 1,
      sym_package,
    STATE(149), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
  [3477] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(358), 1,
      sym_package,
    STATE(149), 1,
      sym__space,
    STATE(150), 1,
      sym_linebreak,
  [3493] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(151), 1,
      sym_linebreak,
    ACTIONS(378), 3,
      aux_sym_file_token1,
      anon_sym_SEMI,
      aux_sym__space_token1,
  [3505] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      aux_sym__space_token1,
    ACTIONS(380), 1,
      sym_version,
    STATE(152), 1,
      sym_linebreak,
    STATE(190), 1,
      sym__space,
  [3521] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(153), 1,
      sym_linebreak,
    ACTIONS(303), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3532] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(154), 1,
      sym_linebreak,
    STATE(183), 1,
      sym__space,
  [3545] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(155), 1,
      sym_linebreak,
    ACTIONS(382), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3556] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_linebreak,
  [3569] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_linebreak,
  [3582] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(386), 1,
      aux_sym_file_token1,
    ACTIONS(388), 1,
      sym_comment,
    STATE(158), 1,
      sym_linebreak,
  [3595] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(344), 1,
      aux_sym_file_token1,
    ACTIONS(390), 1,
      sym_comment,
    STATE(159), 1,
      sym_linebreak,
  [3608] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      sym_linebreak,
  [3621] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(161), 1,
      sym_linebreak,
    ACTIONS(392), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3632] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_linebreak,
  [3645] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(163), 1,
      sym_linebreak,
    ACTIONS(114), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3656] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(164), 1,
      sym_linebreak,
    ACTIONS(295), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3667] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(165), 1,
      sym_linebreak,
    ACTIONS(396), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3678] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(166), 1,
      sym_linebreak,
    ACTIONS(398), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3689] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      sym_linebreak,
  [3702] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(400), 1,
      aux_sym_file_token1,
    ACTIONS(402), 1,
      sym_comment,
    STATE(168), 1,
      sym_linebreak,
  [3715] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(334), 1,
      anon_sym_and,
    ACTIONS(336), 1,
      anon_sym_or,
    STATE(169), 1,
      sym_linebreak,
  [3728] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_linebreak,
  [3738] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_linebreak,
  [3748] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(400), 1,
      aux_sym_file_token1,
    STATE(172), 1,
      sym_linebreak,
  [3758] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(406), 1,
      aux_sym_file_token1,
    STATE(173), 1,
      sym_linebreak,
  [3768] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_linebreak,
  [3778] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(410), 1,
      aux_sym_env_var_token1,
    STATE(175), 1,
      sym_linebreak,
  [3788] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(344), 1,
      aux_sym_file_token1,
    STATE(176), 1,
      sym_linebreak,
  [3798] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_linebreak,
  [3808] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      sym_linebreak,
  [3818] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(352), 1,
      sym_version,
    STATE(179), 1,
      sym_linebreak,
  [3828] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      sym_package,
    STATE(180), 1,
      sym_linebreak,
  [3838] = 3,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    ACTIONS(414), 1,
      aux_sym_quoted_string_token2,
    STATE(181), 1,
      sym_linebreak,
  [3848] = 3,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    ACTIONS(416), 1,
      aux_sym_quoted_string_token1,
    STATE(182), 1,
      sym_linebreak,
  [3858] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(418), 1,
      anon_sym_in,
    STATE(183), 1,
      sym_linebreak,
  [3868] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      sym_version,
    STATE(184), 1,
      sym_linebreak,
  [3878] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 1,
      aux_sym_file_token1,
    STATE(185), 1,
      sym_linebreak,
  [3888] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(422), 1,
      aux_sym_env_var_token1,
    STATE(186), 1,
      sym_linebreak,
  [3898] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_linebreak,
  [3908] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(424), 1,
      sym_package,
    STATE(188), 1,
      sym_linebreak,
  [3918] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      sym_linebreak,
  [3928] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(428), 1,
      sym_version,
    STATE(190), 1,
      sym_linebreak,
  [3938] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      sym_version,
    STATE(191), 1,
      sym_linebreak,
  [3948] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(432), 1,
      sym_package,
    STATE(192), 1,
      sym_linebreak,
  [3958] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      sym_linebreak,
  [3968] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_linebreak,
  [3978] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(322), 1,
      sym_version,
    STATE(195), 1,
      sym_linebreak,
  [3988] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_linebreak,
  [3998] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym_linebreak,
  [4008] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(70), 1,
      aux_sym_file_token1,
    STATE(198), 1,
      sym_linebreak,
  [4018] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(438), 1,
      sym_version,
    STATE(199), 1,
      sym_linebreak,
  [4028] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(316), 1,
      sym_package,
    STATE(200), 1,
      sym_linebreak,
  [4038] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      sym_version,
    STATE(201), 1,
      sym_linebreak,
  [4048] = 1,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
  [4052] = 1,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [4056] = 1,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 123,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 249,
  [SMALL_STATE(7)] = 287,
  [SMALL_STATE(8)] = 325,
  [SMALL_STATE(9)] = 363,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 439,
  [SMALL_STATE(12)] = 481,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 565,
  [SMALL_STATE(15)] = 607,
  [SMALL_STATE(16)] = 649,
  [SMALL_STATE(17)] = 691,
  [SMALL_STATE(18)] = 733,
  [SMALL_STATE(19)] = 789,
  [SMALL_STATE(20)] = 825,
  [SMALL_STATE(21)] = 861,
  [SMALL_STATE(22)] = 897,
  [SMALL_STATE(23)] = 933,
  [SMALL_STATE(24)] = 983,
  [SMALL_STATE(25)] = 1019,
  [SMALL_STATE(26)] = 1055,
  [SMALL_STATE(27)] = 1091,
  [SMALL_STATE(28)] = 1116,
  [SMALL_STATE(29)] = 1159,
  [SMALL_STATE(30)] = 1199,
  [SMALL_STATE(31)] = 1234,
  [SMALL_STATE(32)] = 1258,
  [SMALL_STATE(33)] = 1282,
  [SMALL_STATE(34)] = 1306,
  [SMALL_STATE(35)] = 1330,
  [SMALL_STATE(36)] = 1354,
  [SMALL_STATE(37)] = 1378,
  [SMALL_STATE(38)] = 1409,
  [SMALL_STATE(39)] = 1440,
  [SMALL_STATE(40)] = 1469,
  [SMALL_STATE(41)] = 1500,
  [SMALL_STATE(42)] = 1531,
  [SMALL_STATE(43)] = 1553,
  [SMALL_STATE(44)] = 1581,
  [SMALL_STATE(45)] = 1609,
  [SMALL_STATE(46)] = 1644,
  [SMALL_STATE(47)] = 1666,
  [SMALL_STATE(48)] = 1688,
  [SMALL_STATE(49)] = 1710,
  [SMALL_STATE(50)] = 1739,
  [SMALL_STATE(51)] = 1761,
  [SMALL_STATE(52)] = 1783,
  [SMALL_STATE(53)] = 1805,
  [SMALL_STATE(54)] = 1827,
  [SMALL_STATE(55)] = 1849,
  [SMALL_STATE(56)] = 1873,
  [SMALL_STATE(57)] = 1895,
  [SMALL_STATE(58)] = 1917,
  [SMALL_STATE(59)] = 1939,
  [SMALL_STATE(60)] = 1961,
  [SMALL_STATE(61)] = 1983,
  [SMALL_STATE(62)] = 2005,
  [SMALL_STATE(63)] = 2027,
  [SMALL_STATE(64)] = 2044,
  [SMALL_STATE(65)] = 2061,
  [SMALL_STATE(66)] = 2078,
  [SMALL_STATE(67)] = 2099,
  [SMALL_STATE(68)] = 2116,
  [SMALL_STATE(69)] = 2133,
  [SMALL_STATE(70)] = 2150,
  [SMALL_STATE(71)] = 2173,
  [SMALL_STATE(72)] = 2195,
  [SMALL_STATE(73)] = 2217,
  [SMALL_STATE(74)] = 2239,
  [SMALL_STATE(75)] = 2253,
  [SMALL_STATE(76)] = 2275,
  [SMALL_STATE(77)] = 2289,
  [SMALL_STATE(78)] = 2311,
  [SMALL_STATE(79)] = 2325,
  [SMALL_STATE(80)] = 2347,
  [SMALL_STATE(81)] = 2369,
  [SMALL_STATE(82)] = 2389,
  [SMALL_STATE(83)] = 2411,
  [SMALL_STATE(84)] = 2425,
  [SMALL_STATE(85)] = 2447,
  [SMALL_STATE(86)] = 2469,
  [SMALL_STATE(87)] = 2491,
  [SMALL_STATE(88)] = 2505,
  [SMALL_STATE(89)] = 2519,
  [SMALL_STATE(90)] = 2533,
  [SMALL_STATE(91)] = 2547,
  [SMALL_STATE(92)] = 2569,
  [SMALL_STATE(93)] = 2585,
  [SMALL_STATE(94)] = 2607,
  [SMALL_STATE(95)] = 2621,
  [SMALL_STATE(96)] = 2643,
  [SMALL_STATE(97)] = 2665,
  [SMALL_STATE(98)] = 2687,
  [SMALL_STATE(99)] = 2703,
  [SMALL_STATE(100)] = 2725,
  [SMALL_STATE(101)] = 2747,
  [SMALL_STATE(102)] = 2761,
  [SMALL_STATE(103)] = 2783,
  [SMALL_STATE(104)] = 2797,
  [SMALL_STATE(105)] = 2811,
  [SMALL_STATE(106)] = 2826,
  [SMALL_STATE(107)] = 2839,
  [SMALL_STATE(108)] = 2854,
  [SMALL_STATE(109)] = 2869,
  [SMALL_STATE(110)] = 2886,
  [SMALL_STATE(111)] = 2905,
  [SMALL_STATE(112)] = 2924,
  [SMALL_STATE(113)] = 2939,
  [SMALL_STATE(114)] = 2951,
  [SMALL_STATE(115)] = 2963,
  [SMALL_STATE(116)] = 2979,
  [SMALL_STATE(117)] = 2991,
  [SMALL_STATE(118)] = 3007,
  [SMALL_STATE(119)] = 3023,
  [SMALL_STATE(120)] = 3039,
  [SMALL_STATE(121)] = 3055,
  [SMALL_STATE(122)] = 3067,
  [SMALL_STATE(123)] = 3083,
  [SMALL_STATE(124)] = 3099,
  [SMALL_STATE(125)] = 3111,
  [SMALL_STATE(126)] = 3123,
  [SMALL_STATE(127)] = 3139,
  [SMALL_STATE(128)] = 3155,
  [SMALL_STATE(129)] = 3171,
  [SMALL_STATE(130)] = 3185,
  [SMALL_STATE(131)] = 3201,
  [SMALL_STATE(132)] = 3217,
  [SMALL_STATE(133)] = 3229,
  [SMALL_STATE(134)] = 3241,
  [SMALL_STATE(135)] = 3257,
  [SMALL_STATE(136)] = 3273,
  [SMALL_STATE(137)] = 3285,
  [SMALL_STATE(138)] = 3297,
  [SMALL_STATE(139)] = 3313,
  [SMALL_STATE(140)] = 3329,
  [SMALL_STATE(141)] = 3341,
  [SMALL_STATE(142)] = 3357,
  [SMALL_STATE(143)] = 3373,
  [SMALL_STATE(144)] = 3389,
  [SMALL_STATE(145)] = 3405,
  [SMALL_STATE(146)] = 3417,
  [SMALL_STATE(147)] = 3433,
  [SMALL_STATE(148)] = 3445,
  [SMALL_STATE(149)] = 3461,
  [SMALL_STATE(150)] = 3477,
  [SMALL_STATE(151)] = 3493,
  [SMALL_STATE(152)] = 3505,
  [SMALL_STATE(153)] = 3521,
  [SMALL_STATE(154)] = 3532,
  [SMALL_STATE(155)] = 3545,
  [SMALL_STATE(156)] = 3556,
  [SMALL_STATE(157)] = 3569,
  [SMALL_STATE(158)] = 3582,
  [SMALL_STATE(159)] = 3595,
  [SMALL_STATE(160)] = 3608,
  [SMALL_STATE(161)] = 3621,
  [SMALL_STATE(162)] = 3632,
  [SMALL_STATE(163)] = 3645,
  [SMALL_STATE(164)] = 3656,
  [SMALL_STATE(165)] = 3667,
  [SMALL_STATE(166)] = 3678,
  [SMALL_STATE(167)] = 3689,
  [SMALL_STATE(168)] = 3702,
  [SMALL_STATE(169)] = 3715,
  [SMALL_STATE(170)] = 3728,
  [SMALL_STATE(171)] = 3738,
  [SMALL_STATE(172)] = 3748,
  [SMALL_STATE(173)] = 3758,
  [SMALL_STATE(174)] = 3768,
  [SMALL_STATE(175)] = 3778,
  [SMALL_STATE(176)] = 3788,
  [SMALL_STATE(177)] = 3798,
  [SMALL_STATE(178)] = 3808,
  [SMALL_STATE(179)] = 3818,
  [SMALL_STATE(180)] = 3828,
  [SMALL_STATE(181)] = 3838,
  [SMALL_STATE(182)] = 3848,
  [SMALL_STATE(183)] = 3858,
  [SMALL_STATE(184)] = 3868,
  [SMALL_STATE(185)] = 3878,
  [SMALL_STATE(186)] = 3888,
  [SMALL_STATE(187)] = 3898,
  [SMALL_STATE(188)] = 3908,
  [SMALL_STATE(189)] = 3918,
  [SMALL_STATE(190)] = 3928,
  [SMALL_STATE(191)] = 3938,
  [SMALL_STATE(192)] = 3948,
  [SMALL_STATE(193)] = 3958,
  [SMALL_STATE(194)] = 3968,
  [SMALL_STATE(195)] = 3978,
  [SMALL_STATE(196)] = 3988,
  [SMALL_STATE(197)] = 3998,
  [SMALL_STATE(198)] = 4008,
  [SMALL_STATE(199)] = 4018,
  [SMALL_STATE(200)] = 4028,
  [SMALL_STATE(201)] = 4038,
  [SMALL_STATE(202)] = 4048,
  [SMALL_STATE(203)] = 4052,
  [SMALL_STATE(204)] = 4056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__space, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(115),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(110),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(110),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(45),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(117),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(155),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(155),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(198),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 8),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 8),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_var, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 3), REDUCE(sym__version_list, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 4), REDUCE(sym__version_list, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(98),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(175),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(44),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 2), REDUCE(sym__version_list, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 4),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(107),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(186),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(141),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, .production_id = 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 3, .production_id = 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3, .production_id = 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_cmp, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(129),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [436] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 3),
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
