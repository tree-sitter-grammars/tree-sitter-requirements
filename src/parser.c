#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 235
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
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
  sym_version_cmp = 14,
  anon_sym_SEMI = 15,
  anon_sym_in = 16,
  anon_sym_not = 17,
  anon_sym_python_version = 18,
  anon_sym_python_full_version = 19,
  anon_sym_os_name = 20,
  anon_sym_sys_platform = 21,
  anon_sym_platform_release = 22,
  anon_sym_platform_system = 23,
  anon_sym_platform_version = 24,
  anon_sym_platform_machine = 25,
  anon_sym_platform_python_implementation = 26,
  anon_sym_implementation_name = 27,
  anon_sym_implementation_version = 28,
  anon_sym_extra = 29,
  anon_sym_and = 30,
  anon_sym_or = 31,
  anon_sym_DASHc = 32,
  anon_sym_DASHe = 33,
  anon_sym_DASHi = 34,
  anon_sym_DASHf = 35,
  anon_sym_DASHr = 36,
  anon_sym_DASH_DASHindex_DASHurl = 37,
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 38,
  anon_sym_DASH_DASHconstraint = 39,
  anon_sym_DASH_DASHrequirement = 40,
  anon_sym_DASH_DASHeditable = 41,
  anon_sym_DASH_DASHfind_DASHlinks = 42,
  anon_sym_DASH_DASHno_DASHbinary = 43,
  anon_sym_DASH_DASHonly_DASHbinary = 44,
  anon_sym_DASH_DASHtrusted_DASHhost = 45,
  anon_sym_DASH_DASHuse_DASHfeature = 46,
  anon_sym_EQ = 47,
  anon_sym_DASH_DASHno_DASHindex = 48,
  anon_sym_DASH_DASHprefer_DASHbinary = 49,
  anon_sym_DASH_DASHrequire_DASHhashes = 50,
  anon_sym_DASH_DASHpre = 51,
  anon_sym_DASH_DASHglobal_DASHoption = 52,
  anon_sym_DASH_DASHconfig_DASHsettings = 53,
  anon_sym_DASH_DASHhash = 54,
  aux_sym_argument_token1 = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_quoted_string_token1 = 57,
  anon_sym_SQUOTE = 58,
  aux_sym_quoted_string_token2 = 59,
  anon_sym_DOLLAR_LBRACE = 60,
  aux_sym_env_var_token1 = 61,
  anon_sym_RBRACE = 62,
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
  sym_marker_spec = 73,
  sym_marker_op = 74,
  sym_marker_var = 75,
  sym__marker = 76,
  sym__marker_expr = 77,
  sym__marker_paren = 78,
  sym__marker_and = 79,
  sym__marker_or = 80,
  sym_global_opt = 81,
  sym_requirement_opt = 82,
  sym_argument = 83,
  sym_quoted_string = 84,
  sym_env_var = 85,
  sym_linebreak = 86,
  sym__space = 87,
  aux_sym_file_repeat1 = 88,
  aux_sym_requirement_repeat1 = 89,
  aux_sym__package_list_repeat1 = 90,
  aux_sym_url_repeat1 = 91,
  aux_sym__version_list_repeat1 = 92,
  aux_sym_argument_repeat1 = 93,
  aux_sym__space_repeat1 = 94,
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
  [sym_version_cmp] = "version_cmp",
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
  [anon_sym_DASH_DASHglobal_DASHoption] = "option",
  [anon_sym_DASH_DASHconfig_DASHsettings] = "option",
  [anon_sym_DASH_DASHhash] = "option",
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
  [sym_marker_spec] = "marker_spec",
  [sym_marker_op] = "marker_op",
  [sym_marker_var] = "marker_var",
  [sym__marker] = "_marker",
  [sym__marker_expr] = "_marker_expr",
  [sym__marker_paren] = "_marker_paren",
  [sym__marker_and] = "_marker_and",
  [sym__marker_or] = "_marker_or",
  [sym_global_opt] = "global_opt",
  [sym_requirement_opt] = "requirement_opt",
  [sym_argument] = "argument",
  [sym_quoted_string] = "quoted_string",
  [sym_env_var] = "env_var",
  [sym_linebreak] = "linebreak",
  [sym__space] = "_space",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_requirement_repeat1] = "requirement_repeat1",
  [aux_sym__package_list_repeat1] = "_package_list_repeat1",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym__version_list_repeat1] = "_version_list_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym__space_repeat1] = "_space_repeat1",
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
  [sym_version_cmp] = sym_version_cmp,
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
  [anon_sym_DASH_DASHglobal_DASHoption] = anon_sym_DASHc,
  [anon_sym_DASH_DASHconfig_DASHsettings] = anon_sym_DASHc,
  [anon_sym_DASH_DASHhash] = anon_sym_DASHc,
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
  [sym_marker_spec] = sym_marker_spec,
  [sym_marker_op] = sym_marker_op,
  [sym_marker_var] = sym_marker_var,
  [sym__marker] = sym__marker,
  [sym__marker_expr] = sym__marker_expr,
  [sym__marker_paren] = sym__marker_paren,
  [sym__marker_and] = sym__marker_and,
  [sym__marker_or] = sym__marker_or,
  [sym_global_opt] = sym_global_opt,
  [sym_requirement_opt] = sym_requirement_opt,
  [sym_argument] = sym_argument,
  [sym_quoted_string] = sym_quoted_string,
  [sym_env_var] = sym_env_var,
  [sym_linebreak] = sym_linebreak,
  [sym__space] = sym__space,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_requirement_repeat1] = aux_sym_requirement_repeat1,
  [aux_sym__package_list_repeat1] = aux_sym__package_list_repeat1,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym__version_list_repeat1] = aux_sym__version_list_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
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
  [sym_version_cmp] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DASH_DASHglobal_DASHoption] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHconfig_DASHsettings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHhash] = {
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
  [sym_requirement_opt] = {
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
  [aux_sym_requirement_repeat1] = {
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
  [aux_sym__space_repeat1] = {
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
  [27] = 27,
  [28] = 3,
  [29] = 2,
  [30] = 30,
  [31] = 4,
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
  [59] = 52,
  [60] = 50,
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
  [93] = 3,
  [94] = 94,
  [95] = 2,
  [96] = 96,
  [97] = 88,
  [98] = 91,
  [99] = 99,
  [100] = 50,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 52,
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
  [126] = 4,
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
  [145] = 94,
  [146] = 96,
  [147] = 147,
  [148] = 148,
  [149] = 91,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 88,
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
  [165] = 162,
  [166] = 166,
  [167] = 162,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 2,
  [175] = 3,
  [176] = 122,
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
  [188] = 4,
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
  [213] = 213,
  [214] = 199,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 199,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 223,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 34:
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(226);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == 'q') ADVANCE(160);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 165:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_file_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'z') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_url_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_url_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_url_token3);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_url_token3);
      if (lookahead == '{') ADVANCE(228);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_version_cmp);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_version_cmp);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASHi);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASHfind_DASHlinks);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHbinary);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASH_DASHonly_DASHbinary);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtrusted_DASHhost);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH_DASHuse_DASHfeature);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHindex);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH_DASHprefer_DASHbinary);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequire_DASHhashes);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpre);
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH_DASHglobal_DASHoption);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconfig_DASHsettings);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH_DASHhash);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'z') ADVANCE(26);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(27);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_env_var_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(224);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(227);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__space_token1);
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
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 171},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 171},
  [8] = {.lex_state = 171},
  [9] = {.lex_state = 171},
  [10] = {.lex_state = 171},
  [11] = {.lex_state = 171},
  [12] = {.lex_state = 171},
  [13] = {.lex_state = 171},
  [14] = {.lex_state = 171},
  [15] = {.lex_state = 171},
  [16] = {.lex_state = 171},
  [17] = {.lex_state = 171},
  [18] = {.lex_state = 171},
  [19] = {.lex_state = 171},
  [20] = {.lex_state = 171},
  [21] = {.lex_state = 171},
  [22] = {.lex_state = 171},
  [23] = {.lex_state = 171},
  [24] = {.lex_state = 171},
  [25] = {.lex_state = 171},
  [26] = {.lex_state = 171},
  [27] = {.lex_state = 171},
  [28] = {.lex_state = 171},
  [29] = {.lex_state = 171},
  [30] = {.lex_state = 171},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 171},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 171},
  [36] = {.lex_state = 171},
  [37] = {.lex_state = 171},
  [38] = {.lex_state = 171},
  [39] = {.lex_state = 171},
  [40] = {.lex_state = 171},
  [41] = {.lex_state = 171},
  [42] = {.lex_state = 171},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 171},
  [45] = {.lex_state = 171},
  [46] = {.lex_state = 171},
  [47] = {.lex_state = 171},
  [48] = {.lex_state = 171},
  [49] = {.lex_state = 171},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 171},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 171},
  [64] = {.lex_state = 171},
  [65] = {.lex_state = 171},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 171},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 171},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 171},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 171},
  [80] = {.lex_state = 171},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 171},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 171},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 171},
  [90] = {.lex_state = 171},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 171},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 171},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 171},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 171},
  [105] = {.lex_state = 171},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 171},
  [112] = {.lex_state = 171},
  [113] = {.lex_state = 171},
  [114] = {.lex_state = 171},
  [115] = {.lex_state = 171},
  [116] = {.lex_state = 171},
  [117] = {.lex_state = 171},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 171},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 171},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 171},
  [124] = {.lex_state = 171},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 171},
  [132] = {.lex_state = 171},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 171},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 171},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 171},
  [141] = {.lex_state = 171},
  [142] = {.lex_state = 171},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 171},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 171},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 171},
  [153] = {.lex_state = 171},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 171},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 171},
  [159] = {.lex_state = 171},
  [160] = {.lex_state = 171},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 171},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 171},
  [169] = {.lex_state = 171},
  [170] = {.lex_state = 171},
  [171] = {.lex_state = 171},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 171},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 29},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 171},
  [179] = {.lex_state = 171},
  [180] = {.lex_state = 171},
  [181] = {.lex_state = 171},
  [182] = {.lex_state = 171},
  [183] = {.lex_state = 171},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 171},
  [188] = {.lex_state = 29},
  [189] = {.lex_state = 171},
  [190] = {.lex_state = 171},
  [191] = {.lex_state = 171},
  [192] = {.lex_state = 171},
  [193] = {.lex_state = 171},
  [194] = {.lex_state = 171},
  [195] = {.lex_state = 171},
  [196] = {.lex_state = 171},
  [197] = {.lex_state = 171},
  [198] = {.lex_state = 171},
  [199] = {.lex_state = 32},
  [200] = {.lex_state = 171},
  [201] = {.lex_state = 171},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 171},
  [204] = {.lex_state = 29},
  [205] = {.lex_state = 29},
  [206] = {.lex_state = 171},
  [207] = {.lex_state = 171},
  [208] = {.lex_state = 29},
  [209] = {.lex_state = 33},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 171},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 29},
  [214] = {.lex_state = 32},
  [215] = {.lex_state = 171},
  [216] = {.lex_state = 34},
  [217] = {.lex_state = 171},
  [218] = {.lex_state = 29},
  [219] = {.lex_state = 32},
  [220] = {.lex_state = 171},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 171},
  [224] = {.lex_state = 171},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 29},
  [227] = {.lex_state = 171},
  [228] = {.lex_state = 171},
  [229] = {.lex_state = 171},
  [230] = {.lex_state = 171},
  [231] = {.lex_state = 171},
  [232] = {(TSStateId)(-1)},
  [233] = {(TSStateId)(-1)},
  [234] = {(TSStateId)(-1)},
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
    [anon_sym_DASH_DASHglobal_DASHoption] = ACTIONS(1),
    [anon_sym_DASH_DASHconfig_DASHsettings] = ACTIONS(1),
    [anon_sym_DASH_DASHhash] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(3),
    [aux_sym__space_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(202),
    [sym_requirement] = STATE(164),
    [sym_url] = STATE(164),
    [sym_global_opt] = STATE(164),
    [sym_linebreak] = STATE(1),
    [sym__space] = STATE(7),
    [aux_sym_file_repeat1] = STATE(6),
    [aux_sym__space_repeat1] = STATE(3),
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
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym__space_token1,
    STATE(2), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(29), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(31), 35,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
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
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [55] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(3), 1,
      sym_linebreak,
    ACTIONS(36), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(38), 35,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
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
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [112] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(4), 1,
      sym_linebreak,
    ACTIONS(40), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(42), 36,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
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
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym__space_token1,
  [164] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_package,
    ACTIONS(49), 1,
      aux_sym_file_token1,
    ACTIONS(52), 1,
      aux_sym_file_token2,
    ACTIONS(55), 1,
      aux_sym_url_token1,
    ACTIONS(58), 1,
      aux_sym_url_token2,
    ACTIONS(70), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(76), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(7), 1,
      sym__space,
    STATE(5), 2,
      sym_linebreak,
      aux_sym_file_repeat1,
    ACTIONS(67), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(164), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(61), 5,
      anon_sym_DASHc,
      anon_sym_DASHe,
      anon_sym_DASHi,
      anon_sym_DASHf,
      anon_sym_DASHr,
    ACTIONS(64), 10,
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
  [234] = 18,
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
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(5), 1,
      aux_sym_file_repeat1,
    STATE(6), 1,
      sym_linebreak,
    STATE(7), 1,
      sym__space,
    ACTIONS(21), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(164), 3,
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
  [306] = 13,
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
    ACTIONS(81), 1,
      aux_sym_file_token1,
    ACTIONS(83), 1,
      aux_sym_file_token2,
    ACTIONS(85), 1,
      sym_comment,
    STATE(7), 1,
      sym_linebreak,
    ACTIONS(21), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(143), 3,
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
  [363] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_linebreak,
    ACTIONS(89), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(87), 24,
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
    STATE(9), 1,
      sym_linebreak,
    ACTIONS(93), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(91), 24,
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
  [439] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_linebreak,
    ACTIONS(97), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(95), 24,
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
  [477] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      sym_linebreak,
    ACTIONS(99), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(44), 24,
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
  [515] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_linebreak,
    ACTIONS(103), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(101), 24,
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
  [553] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      sym_linebreak,
    STATE(26), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(64), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [598] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      sym_linebreak,
    STATE(23), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(72), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [643] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(15), 1,
      sym_linebreak,
    STATE(27), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(51), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [688] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(16), 1,
      sym_linebreak,
    STATE(24), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(92), 1,
      sym_marker_var,
    STATE(113), 1,
      sym__marker,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [733] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      sym_linebreak,
    STATE(21), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(49), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [778] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(18), 1,
      sym_linebreak,
    STATE(20), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(48), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [823] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(19), 1,
      sym_linebreak,
    STATE(22), 1,
      sym__space,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(53), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [868] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_linebreak,
    STATE(54), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [904] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_linebreak,
    STATE(48), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [940] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_linebreak,
    STATE(55), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [976] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_linebreak,
    STATE(64), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [1012] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_linebreak,
    STATE(92), 1,
      sym_marker_var,
    STATE(99), 1,
      sym__marker,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [1048] = 18,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(111), 1,
      aux_sym_file_token1,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_version_cmp,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(25), 1,
      sym_linebreak,
    STATE(30), 1,
      sym_extras,
    STATE(33), 1,
      sym__space,
    STATE(66), 1,
      aux_sym_requirement_repeat1,
    STATE(69), 1,
      sym_marker_spec,
    STATE(103), 1,
      sym__version_list,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(34), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1106] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_linebreak,
    STATE(57), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [1142] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_linebreak,
    STATE(53), 1,
      sym__marker,
    STATE(92), 1,
      sym_marker_var,
    STATE(81), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(107), 12,
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
  [1178] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    STATE(28), 1,
      sym_linebreak,
    STATE(29), 1,
      aux_sym__space_repeat1,
    ACTIONS(38), 16,
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
  [1209] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      aux_sym__space_token1,
    STATE(29), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
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
  [1238] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_version_cmp,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(30), 1,
      sym_linebreak,
    STATE(42), 1,
      sym__space,
    STATE(75), 1,
      sym_marker_spec,
    STATE(76), 1,
      aux_sym_requirement_repeat1,
    STATE(103), 1,
      sym__version_list,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(43), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1290] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym_linebreak,
    ACTIONS(42), 17,
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
      aux_sym__space_token1,
  [1316] = 13,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(130), 1,
      aux_sym_argument_token1,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(138), 1,
      aux_sym__space_token1,
    STATE(32), 1,
      sym_linebreak,
    STATE(58), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__space_repeat1,
    STATE(145), 1,
      aux_sym_argument_repeat1,
    STATE(186), 1,
      sym_argument,
    STATE(133), 2,
      sym_url,
      sym_quoted_string,
  [1357] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_version_cmp,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(33), 1,
      sym_linebreak,
    STATE(106), 1,
      sym__version_list,
    STATE(231), 1,
      sym__space,
    ACTIONS(150), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1396] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(34), 1,
      sym_linebreak,
    STATE(75), 1,
      sym_marker_spec,
    STATE(76), 1,
      aux_sym_requirement_repeat1,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(163), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1432] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(35), 1,
      sym_linebreak,
    STATE(36), 1,
      aux_sym__version_list_repeat1,
    STATE(227), 1,
      sym__space,
    ACTIONS(152), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1460] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(36), 1,
      sym_linebreak,
    STATE(37), 1,
      aux_sym__version_list_repeat1,
    STATE(227), 1,
      sym__space,
    ACTIONS(156), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1488] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(227), 1,
      sym__space,
    STATE(37), 2,
      sym_linebreak,
      aux_sym__version_list_repeat1,
    ACTIONS(158), 6,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1516] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(37), 1,
      aux_sym__version_list_repeat1,
    STATE(38), 1,
      sym_linebreak,
    STATE(227), 1,
      sym__space,
    ACTIONS(152), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1544] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(39), 1,
      sym_linebreak,
    STATE(45), 1,
      aux_sym__version_list_repeat1,
    STATE(227), 1,
      sym__space,
    ACTIONS(166), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1572] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(40), 1,
      sym_linebreak,
    STATE(44), 1,
      aux_sym__version_list_repeat1,
    STATE(227), 1,
      sym__space,
    ACTIONS(156), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1600] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(38), 1,
      aux_sym__version_list_repeat1,
    STATE(41), 1,
      sym_linebreak,
    STATE(227), 1,
      sym__space,
    ACTIONS(169), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1628] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(142), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_version_cmp,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(42), 1,
      sym_linebreak,
    STATE(106), 1,
      sym__version_list,
    STATE(231), 1,
      sym__space,
    ACTIONS(150), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1664] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(43), 1,
      sym_linebreak,
    STATE(56), 1,
      aux_sym_requirement_repeat1,
    STATE(61), 1,
      sym_marker_spec,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(163), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1700] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(37), 1,
      aux_sym__version_list_repeat1,
    STATE(44), 1,
      sym_linebreak,
    STATE(227), 1,
      sym__space,
    ACTIONS(173), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1728] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(37), 1,
      aux_sym__version_list_repeat1,
    STATE(45), 1,
      sym_linebreak,
    STATE(227), 1,
      sym__space,
    ACTIONS(175), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1756] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(46), 1,
      sym_linebreak,
    STATE(47), 1,
      aux_sym__version_list_repeat1,
    STATE(227), 1,
      sym__space,
    ACTIONS(175), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1784] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(37), 1,
      aux_sym__version_list_repeat1,
    STATE(47), 1,
      sym_linebreak,
    STATE(227), 1,
      sym__space,
    ACTIONS(178), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1812] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(48), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(181), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1835] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(49), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(183), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1858] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      aux_sym_url_token3,
    ACTIONS(189), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      sym_linebreak,
    STATE(52), 1,
      aux_sym_url_repeat1,
    STATE(88), 1,
      sym_env_var,
    ACTIONS(185), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1885] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(51), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(191), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1908] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 1,
      aux_sym_url_token3,
    ACTIONS(198), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(88), 1,
      sym_env_var,
    STATE(52), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
    ACTIONS(193), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1933] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(53), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(201), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1956] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(54), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(203), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1979] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(55), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(205), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2002] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(207), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(56), 1,
      sym_linebreak,
    STATE(70), 1,
      aux_sym_requirement_repeat1,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2032] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(57), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(209), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2060] = 10,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(130), 1,
      aux_sym_argument_token1,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    STATE(58), 1,
      sym_linebreak,
    STATE(145), 1,
      aux_sym_argument_repeat1,
    STATE(185), 1,
      sym_argument,
    STATE(133), 2,
      sym_url,
      sym_quoted_string,
  [2092] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      aux_sym_url_token3,
    ACTIONS(218), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(97), 1,
      sym_env_var,
    STATE(59), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
    ACTIONS(193), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2116] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(221), 1,
      aux_sym_url_token3,
    ACTIONS(223), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(59), 1,
      aux_sym_url_repeat1,
    STATE(60), 1,
      sym_linebreak,
    STATE(97), 1,
      sym_env_var,
    ACTIONS(185), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2142] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(207), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(61), 1,
      sym_linebreak,
    STATE(67), 1,
      aux_sym_requirement_repeat1,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2172] = 10,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(225), 1,
      aux_sym_url_token1,
    ACTIONS(227), 1,
      aux_sym_url_token2,
    ACTIONS(229), 1,
      aux_sym_argument_token1,
    STATE(62), 1,
      sym_linebreak,
    STATE(94), 1,
      aux_sym_argument_repeat1,
    STATE(129), 1,
      sym_argument,
    STATE(133), 2,
      sym_url,
      sym_quoted_string,
  [2204] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      sym_linebreak,
    ACTIONS(231), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2222] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(64), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(233), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2250] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_linebreak,
    ACTIONS(235), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2268] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(128), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(66), 1,
      sym_linebreak,
    STATE(70), 1,
      aux_sym_requirement_repeat1,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2298] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(237), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(67), 1,
      sym_linebreak,
    STATE(70), 1,
      aux_sym_requirement_repeat1,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2328] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(68), 1,
      sym_linebreak,
    ACTIONS(239), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2346] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(128), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(69), 1,
      sym_linebreak,
    STATE(76), 1,
      aux_sym_requirement_repeat1,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2376] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(241), 1,
      aux_sym_file_token1,
    ACTIONS(246), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    STATE(70), 2,
      sym_linebreak,
      aux_sym_requirement_repeat1,
    ACTIONS(243), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2404] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      sym_linebreak,
    ACTIONS(249), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2422] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(72), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
    ACTIONS(251), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2450] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_linebreak,
    ACTIONS(253), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2468] = 10,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(225), 1,
      aux_sym_url_token1,
    ACTIONS(227), 1,
      aux_sym_url_token2,
    ACTIONS(229), 1,
      aux_sym_argument_token1,
    STATE(74), 1,
      sym_linebreak,
    STATE(94), 1,
      aux_sym_argument_repeat1,
    STATE(128), 1,
      sym_argument,
    STATE(133), 2,
      sym_url,
      sym_quoted_string,
  [2500] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(171), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(56), 1,
      aux_sym_requirement_repeat1,
    STATE(75), 1,
      sym_linebreak,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2530] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(171), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(70), 1,
      aux_sym_requirement_repeat1,
    STATE(76), 1,
      sym_linebreak,
    STATE(130), 1,
      sym_requirement_opt,
    STATE(172), 1,
      sym__space,
    ACTIONS(123), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2560] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(77), 1,
      sym_linebreak,
    ACTIONS(255), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2578] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(78), 1,
      sym_linebreak,
    ACTIONS(257), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2595] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(79), 1,
      sym_linebreak,
    ACTIONS(259), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2612] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(80), 1,
      sym_linebreak,
    ACTIONS(261), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2629] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(81), 1,
      sym_linebreak,
    ACTIONS(263), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2646] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      sym_linebreak,
    ACTIONS(265), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2663] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      sym_linebreak,
    ACTIONS(267), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2680] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(84), 1,
      sym_linebreak,
    ACTIONS(269), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2697] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(85), 1,
      sym_linebreak,
    ACTIONS(271), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2714] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(86), 1,
      sym_linebreak,
    ACTIONS(273), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2731] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      sym_linebreak,
    ACTIONS(275), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2748] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      aux_sym_url_token3,
    STATE(88), 1,
      sym_linebreak,
    ACTIONS(277), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2767] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(89), 1,
      sym_linebreak,
    ACTIONS(281), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2784] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(90), 1,
      sym_linebreak,
    ACTIONS(283), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2801] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(287), 1,
      aux_sym_url_token3,
    STATE(91), 1,
      sym_linebreak,
    ACTIONS(285), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2820] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(289), 1,
      sym_version_cmp,
    ACTIONS(291), 1,
      anon_sym_in,
    ACTIONS(293), 1,
      anon_sym_not,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(92), 1,
      sym_linebreak,
    STATE(114), 1,
      sym_marker_op,
    STATE(142), 1,
      sym__space,
  [2848] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(138), 1,
      aux_sym__space_token1,
    STATE(93), 1,
      sym_linebreak,
    STATE(95), 1,
      aux_sym__space_repeat1,
    ACTIONS(36), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(38), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2870] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(229), 1,
      aux_sym_argument_token1,
    STATE(94), 1,
      sym_linebreak,
    STATE(96), 1,
      aux_sym_argument_repeat1,
    ACTIONS(295), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2890] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      aux_sym__space_token1,
    ACTIONS(29), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    STATE(95), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(31), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2910] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      aux_sym_argument_token1,
    STATE(96), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
    ACTIONS(300), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2928] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      aux_sym_url_token3,
    STATE(97), 1,
      sym_linebreak,
    ACTIONS(277), 6,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2946] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(287), 1,
      aux_sym_url_token3,
    STATE(98), 1,
      sym_linebreak,
    ACTIONS(285), 6,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2964] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(99), 1,
      sym_linebreak,
    STATE(178), 1,
      sym__space,
  [2989] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      aux_sym_url_token3,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(100), 1,
      sym_linebreak,
    STATE(109), 1,
      aux_sym_url_repeat1,
    STATE(154), 1,
      sym_env_var,
    ACTIONS(185), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3012] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      sym_linebreak,
    ACTIONS(311), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3027] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(102), 1,
      sym_linebreak,
    STATE(124), 1,
      aux_sym__package_list_repeat1,
    STATE(192), 1,
      sym__space,
  [3052] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(103), 1,
      sym_linebreak,
    ACTIONS(317), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3067] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(104), 1,
      sym_linebreak,
    STATE(124), 1,
      aux_sym__package_list_repeat1,
    STATE(193), 1,
      sym__space,
  [3092] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(105), 1,
      sym_linebreak,
    STATE(123), 1,
      aux_sym__package_list_repeat1,
    STATE(193), 1,
      sym__space,
  [3117] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(106), 1,
      sym_linebreak,
    ACTIONS(321), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3132] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym_linebreak,
    ACTIONS(323), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3147] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      sym_linebreak,
    ACTIONS(325), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3162] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(327), 1,
      aux_sym_url_token3,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(154), 1,
      sym_env_var,
    ACTIONS(193), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(109), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
  [3183] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      sym_linebreak,
    ACTIONS(333), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3198] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(335), 1,
      aux_sym_url_token1,
    ACTIONS(337), 1,
      aux_sym_url_token2,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(111), 1,
      sym_linebreak,
    STATE(118), 1,
      sym_url,
    STATE(182), 1,
      sym__space,
  [3223] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(112), 1,
      sym_linebreak,
    STATE(119), 1,
      aux_sym__package_list_repeat1,
    STATE(192), 1,
      sym__space,
  [3248] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      aux_sym__space_token1,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(113), 1,
      sym_linebreak,
    STATE(170), 1,
      sym__space,
  [3273] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(89), 1,
      sym_quoted_string,
    STATE(114), 1,
      sym_linebreak,
    STATE(171), 1,
      sym__space,
  [3298] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(104), 1,
      aux_sym__package_list_repeat1,
    STATE(115), 1,
      sym_linebreak,
    STATE(194), 1,
      sym__space,
  [3323] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(82), 1,
      sym_quoted_string,
    STATE(116), 1,
      sym_linebreak,
    STATE(181), 1,
      sym__space,
  [3348] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(335), 1,
      aux_sym_url_token1,
    ACTIONS(337), 1,
      aux_sym_url_token2,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(107), 1,
      sym_url,
    STATE(117), 1,
      sym_linebreak,
    STATE(183), 1,
      sym__space,
  [3373] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(118), 1,
      sym_linebreak,
    ACTIONS(343), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3388] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(119), 1,
      sym_linebreak,
    STATE(124), 1,
      aux_sym__package_list_repeat1,
    STATE(191), 1,
      sym__space,
  [3413] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(120), 1,
      sym_linebreak,
    ACTIONS(347), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3428] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(102), 1,
      aux_sym__package_list_repeat1,
    STATE(121), 1,
      sym_linebreak,
    STATE(196), 1,
      sym__space,
  [3453] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(353), 1,
      aux_sym_argument_token1,
    STATE(122), 1,
      sym_linebreak,
    ACTIONS(351), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3470] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(123), 1,
      sym_linebreak,
    STATE(124), 1,
      aux_sym__package_list_repeat1,
    STATE(196), 1,
      sym__space,
  [3495] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(215), 1,
      sym__space,
    STATE(124), 2,
      sym_linebreak,
      aux_sym__package_list_repeat1,
  [3518] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(125), 1,
      sym_linebreak,
    ACTIONS(363), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3533] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    STATE(126), 1,
      sym_linebreak,
    ACTIONS(40), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(42), 4,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [3550] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(119), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(127), 1,
      sym_linebreak,
    STATE(134), 1,
      sym__space,
    STATE(158), 1,
      sym__version_list,
  [3572] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      sym_linebreak,
    ACTIONS(365), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3586] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(129), 1,
      sym_linebreak,
    ACTIONS(367), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3600] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(130), 1,
      sym_linebreak,
    ACTIONS(369), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3614] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(119), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(131), 1,
      sym_linebreak,
    STATE(132), 1,
      sym__space,
    STATE(152), 1,
      sym__version_list,
  [3636] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(146), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(132), 1,
      sym_linebreak,
    STATE(158), 1,
      sym__version_list,
    STATE(231), 1,
      sym__space,
  [3658] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(133), 1,
      sym_linebreak,
    ACTIONS(295), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3672] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(146), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(134), 1,
      sym_linebreak,
    STATE(159), 1,
      sym__version_list,
    STATE(231), 1,
      sym__space,
  [3694] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      sym_version,
    ACTIONS(373), 1,
      aux_sym__space_token1,
    STATE(135), 1,
      sym_linebreak,
    STATE(175), 1,
      aux_sym__space_repeat1,
    STATE(213), 1,
      sym__space,
  [3713] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      aux_sym__space_token1,
    ACTIONS(375), 1,
      sym_version,
    STATE(136), 1,
      sym_linebreak,
    STATE(175), 1,
      aux_sym__space_repeat1,
    STATE(204), 1,
      sym__space,
  [3732] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(377), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(137), 1,
      sym_linebreak,
    STATE(198), 1,
      sym__space,
  [3751] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(379), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(138), 1,
      sym_linebreak,
    STATE(190), 1,
      sym__space,
  [3770] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      aux_sym__space_token1,
    ACTIONS(381), 1,
      sym_version,
    STATE(139), 1,
      sym_linebreak,
    STATE(175), 1,
      aux_sym__space_repeat1,
    STATE(226), 1,
      sym__space,
  [3789] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(383), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(137), 1,
      sym__space,
    STATE(140), 1,
      sym_linebreak,
  [3808] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(385), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(141), 1,
      sym_linebreak,
    STATE(220), 1,
      sym__space,
  [3827] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(291), 1,
      anon_sym_in,
    ACTIONS(293), 1,
      anon_sym_not,
    ACTIONS(387), 1,
      sym_version_cmp,
    STATE(116), 1,
      sym_marker_op,
    STATE(142), 1,
      sym_linebreak,
  [3846] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(389), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(143), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
  [3865] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      aux_sym__space_token1,
    ACTIONS(391), 1,
      sym_version,
    STATE(144), 1,
      sym_linebreak,
    STATE(175), 1,
      aux_sym__space_repeat1,
    STATE(205), 1,
      sym__space,
  [3884] = 5,
    ACTIONS(130), 1,
      aux_sym_argument_token1,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      sym_linebreak,
    STATE(146), 1,
      aux_sym_argument_repeat1,
    ACTIONS(295), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3901] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      aux_sym_argument_token1,
    ACTIONS(300), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(146), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
  [3916] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      aux_sym__space_token1,
    ACTIONS(396), 1,
      sym_version,
    STATE(147), 1,
      sym_linebreak,
    STATE(175), 1,
      aux_sym__space_repeat1,
    STATE(218), 1,
      sym__space,
  [3935] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(383), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(148), 1,
      sym_linebreak,
    STATE(229), 1,
      sym__space,
  [3954] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(287), 1,
      aux_sym_url_token3,
    STATE(149), 1,
      sym_linebreak,
    ACTIONS(285), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [3969] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(398), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(148), 1,
      sym__space,
    STATE(150), 1,
      sym_linebreak,
  [3988] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(138), 1,
      aux_sym__space_token1,
    ACTIONS(400), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__space_repeat1,
    STATE(151), 1,
      sym_linebreak,
  [4007] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(152), 1,
      sym_linebreak,
    STATE(228), 1,
      sym__space,
  [4026] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(404), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(153), 1,
      sym_linebreak,
    STATE(200), 1,
      sym__space,
  [4045] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(279), 1,
      aux_sym_url_token3,
    STATE(154), 1,
      sym_linebreak,
    ACTIONS(277), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [4060] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(155), 1,
      sym_linebreak,
    ACTIONS(406), 4,
      sym_version_cmp,
      anon_sym_in,
      anon_sym_not,
      aux_sym__space_token1,
  [4073] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      aux_sym__space_token1,
    ACTIONS(408), 1,
      sym_version,
    STATE(156), 1,
      sym_linebreak,
    STATE(175), 1,
      aux_sym__space_repeat1,
    STATE(208), 1,
      sym__space,
  [4092] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(138), 1,
      aux_sym__space_token1,
    ACTIONS(410), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__space_repeat1,
    STATE(157), 1,
      sym_linebreak,
  [4111] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(158), 1,
      sym_linebreak,
    STATE(201), 1,
      sym__space,
  [4130] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(159), 1,
      sym_linebreak,
    STATE(211), 1,
      sym__space,
  [4149] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(416), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(160), 1,
      sym_linebreak,
    STATE(203), 1,
      sym__space,
  [4168] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(138), 1,
      aux_sym__space_token1,
    ACTIONS(418), 1,
      anon_sym_EQ,
    STATE(62), 1,
      sym__space,
    STATE(93), 1,
      aux_sym__space_repeat1,
    STATE(161), 1,
      sym_linebreak,
  [4187] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      aux_sym_url_token3,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(100), 1,
      aux_sym_url_repeat1,
    STATE(154), 1,
      sym_env_var,
    STATE(162), 1,
      sym_linebreak,
  [4206] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_linebreak,
    ACTIONS(150), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [4221] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(81), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(164), 1,
      sym_linebreak,
    STATE(189), 1,
      sym__space,
  [4240] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      aux_sym_url_token3,
    ACTIONS(189), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      aux_sym_url_repeat1,
    STATE(88), 1,
      sym_env_var,
    STATE(165), 1,
      sym_linebreak,
  [4259] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    ACTIONS(420), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(166), 1,
      sym_linebreak,
    STATE(207), 1,
      sym__space,
  [4278] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(221), 1,
      aux_sym_url_token3,
    ACTIONS(223), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(60), 1,
      aux_sym_url_repeat1,
    STATE(97), 1,
      sym_env_var,
    STATE(167), 1,
      sym_linebreak,
  [4297] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(168), 1,
      sym_linebreak,
    ACTIONS(422), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4309] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(169), 1,
      sym_linebreak,
    ACTIONS(424), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4321] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(426), 1,
      anon_sym_and,
    ACTIONS(428), 1,
      anon_sym_or,
    STATE(170), 1,
      sym_linebreak,
  [4337] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym_quoted_string,
    STATE(171), 1,
      sym_linebreak,
  [4353] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(172), 1,
      sym_linebreak,
    ACTIONS(150), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [4365] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(173), 1,
      sym_linebreak,
    ACTIONS(430), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [4377] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      sym_version,
    ACTIONS(432), 1,
      aux_sym__space_token1,
    STATE(174), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
  [4391] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(38), 1,
      sym_version,
    ACTIONS(373), 1,
      aux_sym__space_token1,
    STATE(174), 1,
      aux_sym__space_repeat1,
    STATE(175), 1,
      sym_linebreak,
  [4407] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(353), 1,
      aux_sym_argument_token1,
    STATE(176), 1,
      sym_linebreak,
    ACTIONS(351), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4421] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(177), 1,
      sym_linebreak,
    STATE(206), 1,
      sym__space,
  [4437] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      anon_sym_and,
    ACTIONS(428), 1,
      anon_sym_or,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_linebreak,
  [4453] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(179), 1,
      sym_linebreak,
    ACTIONS(355), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4465] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(180), 1,
      sym_linebreak,
    ACTIONS(437), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [4477] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym_quoted_string,
    STATE(181), 1,
      sym_linebreak,
  [4493] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      aux_sym_url_token1,
    ACTIONS(337), 1,
      aux_sym_url_token2,
    STATE(107), 1,
      sym_url,
    STATE(182), 1,
      sym_linebreak,
  [4509] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      aux_sym_url_token1,
    ACTIONS(337), 1,
      aux_sym_url_token2,
    STATE(110), 1,
      sym_url,
    STATE(183), 1,
      sym_linebreak,
  [4525] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(184), 1,
      sym_linebreak,
    ACTIONS(439), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4536] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(185), 1,
      sym_linebreak,
    ACTIONS(441), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4547] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(186), 1,
      sym_linebreak,
    ACTIONS(443), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4558] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      anon_sym_and,
    ACTIONS(428), 1,
      anon_sym_or,
    STATE(187), 1,
      sym_linebreak,
  [4571] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(188), 1,
      sym_linebreak,
    ACTIONS(42), 2,
      sym_version,
      aux_sym__space_token1,
  [4582] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(389), 1,
      aux_sym_file_token1,
    ACTIONS(445), 1,
      sym_comment,
    STATE(189), 1,
      sym_linebreak,
  [4595] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(447), 1,
      aux_sym_file_token1,
    ACTIONS(449), 1,
      sym_comment,
    STATE(190), 1,
      sym_linebreak,
  [4608] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      sym_linebreak,
  [4621] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      sym_linebreak,
  [4634] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      sym_linebreak,
  [4647] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      sym_linebreak,
  [4660] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(455), 1,
      aux_sym_file_token1,
    ACTIONS(457), 1,
      sym_comment,
    STATE(195), 1,
      sym_linebreak,
  [4673] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_linebreak,
  [4686] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym_linebreak,
  [4696] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(461), 1,
      sym_package,
    STATE(198), 1,
      sym_linebreak,
  [4706] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(463), 1,
      aux_sym_env_var_token1,
    STATE(199), 1,
      sym_linebreak,
  [4716] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      sym_version_cmp,
    STATE(200), 1,
      sym_linebreak,
  [4726] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_linebreak,
  [4736] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_linebreak,
  [4746] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(467), 1,
      sym_package,
    STATE(203), 1,
      sym_linebreak,
  [4756] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(391), 1,
      sym_version,
    STATE(204), 1,
      sym_linebreak,
  [4766] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(469), 1,
      sym_version,
    STATE(205), 1,
      sym_linebreak,
  [4776] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(471), 1,
      anon_sym_in,
    STATE(206), 1,
      sym_linebreak,
  [4786] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(416), 1,
      sym_package,
    STATE(207), 1,
      sym_linebreak,
  [4796] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(396), 1,
      sym_version,
    STATE(208), 1,
      sym_linebreak,
  [4806] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(473), 1,
      aux_sym_quoted_string_token1,
    STATE(209), 1,
      sym_linebreak,
  [4816] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(475), 1,
      aux_sym_file_token1,
    STATE(210), 1,
      sym_linebreak,
  [4826] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym_linebreak,
  [4836] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      aux_sym_file_token1,
    STATE(212), 1,
      sym_linebreak,
  [4846] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 1,
      sym_version,
    STATE(213), 1,
      sym_linebreak,
  [4856] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(481), 1,
      aux_sym_env_var_token1,
    STATE(214), 1,
      sym_linebreak,
  [4866] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      sym_linebreak,
  [4876] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(483), 1,
      aux_sym_quoted_string_token2,
    STATE(216), 1,
      sym_linebreak,
  [4886] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_linebreak,
  [4896] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 1,
      sym_version,
    STATE(218), 1,
      sym_linebreak,
  [4906] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      aux_sym_env_var_token1,
    STATE(219), 1,
      sym_linebreak,
  [4916] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      sym_version_cmp,
    STATE(220), 1,
      sym_linebreak,
  [4926] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(455), 1,
      aux_sym_file_token1,
    STATE(221), 1,
      sym_linebreak,
  [4936] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 1,
      aux_sym_file_token1,
    STATE(222), 1,
      sym_linebreak,
  [4946] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_linebreak,
  [4956] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_linebreak,
  [4966] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(389), 1,
      aux_sym_file_token1,
    STATE(225), 1,
      sym_linebreak,
  [4976] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      sym_version,
    STATE(226), 1,
      sym_linebreak,
  [4986] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym_linebreak,
  [4996] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_linebreak,
  [5006] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(377), 1,
      sym_package,
    STATE(229), 1,
      sym_linebreak,
  [5016] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_linebreak,
  [5026] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(501), 1,
      sym_version_cmp,
    STATE(231), 1,
      sym_linebreak,
  [5036] = 1,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
  [5040] = 1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [5044] = 1,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 363,
  [SMALL_STATE(9)] = 401,
  [SMALL_STATE(10)] = 439,
  [SMALL_STATE(11)] = 477,
  [SMALL_STATE(12)] = 515,
  [SMALL_STATE(13)] = 553,
  [SMALL_STATE(14)] = 598,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 688,
  [SMALL_STATE(17)] = 733,
  [SMALL_STATE(18)] = 778,
  [SMALL_STATE(19)] = 823,
  [SMALL_STATE(20)] = 868,
  [SMALL_STATE(21)] = 904,
  [SMALL_STATE(22)] = 940,
  [SMALL_STATE(23)] = 976,
  [SMALL_STATE(24)] = 1012,
  [SMALL_STATE(25)] = 1048,
  [SMALL_STATE(26)] = 1106,
  [SMALL_STATE(27)] = 1142,
  [SMALL_STATE(28)] = 1178,
  [SMALL_STATE(29)] = 1209,
  [SMALL_STATE(30)] = 1238,
  [SMALL_STATE(31)] = 1290,
  [SMALL_STATE(32)] = 1316,
  [SMALL_STATE(33)] = 1357,
  [SMALL_STATE(34)] = 1396,
  [SMALL_STATE(35)] = 1432,
  [SMALL_STATE(36)] = 1460,
  [SMALL_STATE(37)] = 1488,
  [SMALL_STATE(38)] = 1516,
  [SMALL_STATE(39)] = 1544,
  [SMALL_STATE(40)] = 1572,
  [SMALL_STATE(41)] = 1600,
  [SMALL_STATE(42)] = 1628,
  [SMALL_STATE(43)] = 1664,
  [SMALL_STATE(44)] = 1700,
  [SMALL_STATE(45)] = 1728,
  [SMALL_STATE(46)] = 1756,
  [SMALL_STATE(47)] = 1784,
  [SMALL_STATE(48)] = 1812,
  [SMALL_STATE(49)] = 1835,
  [SMALL_STATE(50)] = 1858,
  [SMALL_STATE(51)] = 1885,
  [SMALL_STATE(52)] = 1908,
  [SMALL_STATE(53)] = 1933,
  [SMALL_STATE(54)] = 1956,
  [SMALL_STATE(55)] = 1979,
  [SMALL_STATE(56)] = 2002,
  [SMALL_STATE(57)] = 2032,
  [SMALL_STATE(58)] = 2060,
  [SMALL_STATE(59)] = 2092,
  [SMALL_STATE(60)] = 2116,
  [SMALL_STATE(61)] = 2142,
  [SMALL_STATE(62)] = 2172,
  [SMALL_STATE(63)] = 2204,
  [SMALL_STATE(64)] = 2222,
  [SMALL_STATE(65)] = 2250,
  [SMALL_STATE(66)] = 2268,
  [SMALL_STATE(67)] = 2298,
  [SMALL_STATE(68)] = 2328,
  [SMALL_STATE(69)] = 2346,
  [SMALL_STATE(70)] = 2376,
  [SMALL_STATE(71)] = 2404,
  [SMALL_STATE(72)] = 2422,
  [SMALL_STATE(73)] = 2450,
  [SMALL_STATE(74)] = 2468,
  [SMALL_STATE(75)] = 2500,
  [SMALL_STATE(76)] = 2530,
  [SMALL_STATE(77)] = 2560,
  [SMALL_STATE(78)] = 2578,
  [SMALL_STATE(79)] = 2595,
  [SMALL_STATE(80)] = 2612,
  [SMALL_STATE(81)] = 2629,
  [SMALL_STATE(82)] = 2646,
  [SMALL_STATE(83)] = 2663,
  [SMALL_STATE(84)] = 2680,
  [SMALL_STATE(85)] = 2697,
  [SMALL_STATE(86)] = 2714,
  [SMALL_STATE(87)] = 2731,
  [SMALL_STATE(88)] = 2748,
  [SMALL_STATE(89)] = 2767,
  [SMALL_STATE(90)] = 2784,
  [SMALL_STATE(91)] = 2801,
  [SMALL_STATE(92)] = 2820,
  [SMALL_STATE(93)] = 2848,
  [SMALL_STATE(94)] = 2870,
  [SMALL_STATE(95)] = 2890,
  [SMALL_STATE(96)] = 2910,
  [SMALL_STATE(97)] = 2928,
  [SMALL_STATE(98)] = 2946,
  [SMALL_STATE(99)] = 2964,
  [SMALL_STATE(100)] = 2989,
  [SMALL_STATE(101)] = 3012,
  [SMALL_STATE(102)] = 3027,
  [SMALL_STATE(103)] = 3052,
  [SMALL_STATE(104)] = 3067,
  [SMALL_STATE(105)] = 3092,
  [SMALL_STATE(106)] = 3117,
  [SMALL_STATE(107)] = 3132,
  [SMALL_STATE(108)] = 3147,
  [SMALL_STATE(109)] = 3162,
  [SMALL_STATE(110)] = 3183,
  [SMALL_STATE(111)] = 3198,
  [SMALL_STATE(112)] = 3223,
  [SMALL_STATE(113)] = 3248,
  [SMALL_STATE(114)] = 3273,
  [SMALL_STATE(115)] = 3298,
  [SMALL_STATE(116)] = 3323,
  [SMALL_STATE(117)] = 3348,
  [SMALL_STATE(118)] = 3373,
  [SMALL_STATE(119)] = 3388,
  [SMALL_STATE(120)] = 3413,
  [SMALL_STATE(121)] = 3428,
  [SMALL_STATE(122)] = 3453,
  [SMALL_STATE(123)] = 3470,
  [SMALL_STATE(124)] = 3495,
  [SMALL_STATE(125)] = 3518,
  [SMALL_STATE(126)] = 3533,
  [SMALL_STATE(127)] = 3550,
  [SMALL_STATE(128)] = 3572,
  [SMALL_STATE(129)] = 3586,
  [SMALL_STATE(130)] = 3600,
  [SMALL_STATE(131)] = 3614,
  [SMALL_STATE(132)] = 3636,
  [SMALL_STATE(133)] = 3658,
  [SMALL_STATE(134)] = 3672,
  [SMALL_STATE(135)] = 3694,
  [SMALL_STATE(136)] = 3713,
  [SMALL_STATE(137)] = 3732,
  [SMALL_STATE(138)] = 3751,
  [SMALL_STATE(139)] = 3770,
  [SMALL_STATE(140)] = 3789,
  [SMALL_STATE(141)] = 3808,
  [SMALL_STATE(142)] = 3827,
  [SMALL_STATE(143)] = 3846,
  [SMALL_STATE(144)] = 3865,
  [SMALL_STATE(145)] = 3884,
  [SMALL_STATE(146)] = 3901,
  [SMALL_STATE(147)] = 3916,
  [SMALL_STATE(148)] = 3935,
  [SMALL_STATE(149)] = 3954,
  [SMALL_STATE(150)] = 3969,
  [SMALL_STATE(151)] = 3988,
  [SMALL_STATE(152)] = 4007,
  [SMALL_STATE(153)] = 4026,
  [SMALL_STATE(154)] = 4045,
  [SMALL_STATE(155)] = 4060,
  [SMALL_STATE(156)] = 4073,
  [SMALL_STATE(157)] = 4092,
  [SMALL_STATE(158)] = 4111,
  [SMALL_STATE(159)] = 4130,
  [SMALL_STATE(160)] = 4149,
  [SMALL_STATE(161)] = 4168,
  [SMALL_STATE(162)] = 4187,
  [SMALL_STATE(163)] = 4206,
  [SMALL_STATE(164)] = 4221,
  [SMALL_STATE(165)] = 4240,
  [SMALL_STATE(166)] = 4259,
  [SMALL_STATE(167)] = 4278,
  [SMALL_STATE(168)] = 4297,
  [SMALL_STATE(169)] = 4309,
  [SMALL_STATE(170)] = 4321,
  [SMALL_STATE(171)] = 4337,
  [SMALL_STATE(172)] = 4353,
  [SMALL_STATE(173)] = 4365,
  [SMALL_STATE(174)] = 4377,
  [SMALL_STATE(175)] = 4391,
  [SMALL_STATE(176)] = 4407,
  [SMALL_STATE(177)] = 4421,
  [SMALL_STATE(178)] = 4437,
  [SMALL_STATE(179)] = 4453,
  [SMALL_STATE(180)] = 4465,
  [SMALL_STATE(181)] = 4477,
  [SMALL_STATE(182)] = 4493,
  [SMALL_STATE(183)] = 4509,
  [SMALL_STATE(184)] = 4525,
  [SMALL_STATE(185)] = 4536,
  [SMALL_STATE(186)] = 4547,
  [SMALL_STATE(187)] = 4558,
  [SMALL_STATE(188)] = 4571,
  [SMALL_STATE(189)] = 4582,
  [SMALL_STATE(190)] = 4595,
  [SMALL_STATE(191)] = 4608,
  [SMALL_STATE(192)] = 4621,
  [SMALL_STATE(193)] = 4634,
  [SMALL_STATE(194)] = 4647,
  [SMALL_STATE(195)] = 4660,
  [SMALL_STATE(196)] = 4673,
  [SMALL_STATE(197)] = 4686,
  [SMALL_STATE(198)] = 4696,
  [SMALL_STATE(199)] = 4706,
  [SMALL_STATE(200)] = 4716,
  [SMALL_STATE(201)] = 4726,
  [SMALL_STATE(202)] = 4736,
  [SMALL_STATE(203)] = 4746,
  [SMALL_STATE(204)] = 4756,
  [SMALL_STATE(205)] = 4766,
  [SMALL_STATE(206)] = 4776,
  [SMALL_STATE(207)] = 4786,
  [SMALL_STATE(208)] = 4796,
  [SMALL_STATE(209)] = 4806,
  [SMALL_STATE(210)] = 4816,
  [SMALL_STATE(211)] = 4826,
  [SMALL_STATE(212)] = 4836,
  [SMALL_STATE(213)] = 4846,
  [SMALL_STATE(214)] = 4856,
  [SMALL_STATE(215)] = 4866,
  [SMALL_STATE(216)] = 4876,
  [SMALL_STATE(217)] = 4886,
  [SMALL_STATE(218)] = 4896,
  [SMALL_STATE(219)] = 4906,
  [SMALL_STATE(220)] = 4916,
  [SMALL_STATE(221)] = 4926,
  [SMALL_STATE(222)] = 4936,
  [SMALL_STATE(223)] = 4946,
  [SMALL_STATE(224)] = 4956,
  [SMALL_STATE(225)] = 4966,
  [SMALL_STATE(226)] = 4976,
  [SMALL_STATE(227)] = 4986,
  [SMALL_STATE(228)] = 4996,
  [SMALL_STATE(229)] = 5006,
  [SMALL_STATE(230)] = 5016,
  [SMALL_STATE(231)] = 5026,
  [SMALL_STATE(232)] = 5036,
  [SMALL_STATE(233)] = 5040,
  [SMALL_STATE(234)] = 5044,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__space, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(164),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(162),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(162),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(32),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(151),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(184),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(184),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(212),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(153),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(4),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 2), REDUCE(sym__version_list, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 5),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 3), REDUCE(sym__version_list, 4),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 4), REDUCE(sym__version_list, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(88),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(219),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(97),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(199),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 8),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2), SHIFT_REPEAT(157),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2), SHIFT_REPEAT(4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 6),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 7),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 3, .production_id = 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(126),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(122),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 3),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(154),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(214),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(166),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(176),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(188),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 2),
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
