#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_DASH_DASHno_DASHbinary = 32,
  anon_sym_DASH_DASHonly_DASHbinary = 33,
  anon_sym_DASH_DASHtrusted_DASHhost = 34,
  anon_sym_DASH_DASHuse_DASHfeature = 35,
  anon_sym_EQ = 36,
  anon_sym_DASH_DASHno_DASHindex = 37,
  anon_sym_DASH_DASHprefer_DASHbinary = 38,
  anon_sym_DASH_DASHrequire_DASHhashes = 39,
  anon_sym_DASH_DASHpre = 40,
  anon_sym_DASHi = 41,
  anon_sym_DASH_DASHindex_DASHurl = 42,
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 43,
  anon_sym_DASHc = 44,
  anon_sym_DASHr = 45,
  anon_sym_DASH_DASHconstraint = 46,
  anon_sym_DASH_DASHrequirement = 47,
  anon_sym_DASHe = 48,
  anon_sym_DASHf = 49,
  anon_sym_DASH_DASHeditable = 50,
  anon_sym_DASH_DASHfind_DASHlinks = 51,
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
  [anon_sym_DASH_DASHno_DASHbinary] = "option",
  [anon_sym_DASH_DASHonly_DASHbinary] = "option",
  [anon_sym_DASH_DASHtrusted_DASHhost] = "option",
  [anon_sym_DASH_DASHuse_DASHfeature] = "option",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_DASHno_DASHindex] = "option",
  [anon_sym_DASH_DASHprefer_DASHbinary] = "option",
  [anon_sym_DASH_DASHrequire_DASHhashes] = "option",
  [anon_sym_DASH_DASHpre] = "option",
  [anon_sym_DASHi] = "option",
  [anon_sym_DASH_DASHindex_DASHurl] = "option",
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = "option",
  [anon_sym_DASHc] = "option",
  [anon_sym_DASHr] = "option",
  [anon_sym_DASH_DASHconstraint] = "option",
  [anon_sym_DASH_DASHrequirement] = "option",
  [anon_sym_DASHe] = "option",
  [anon_sym_DASHf] = "option",
  [anon_sym_DASH_DASHeditable] = "option",
  [anon_sym_DASH_DASHfind_DASHlinks] = "option",
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
  [anon_sym_DASH_DASHno_DASHbinary] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHonly_DASHbinary] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHtrusted_DASHhost] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHuse_DASHfeature] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_DASHno_DASHindex] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHprefer_DASHbinary] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHrequire_DASHhashes] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHpre] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHi] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHindex_DASHurl] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHc] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHr] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHconstraint] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHrequirement] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHe] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASHf] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHeditable] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHfind_DASHlinks] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHglobal_DASHoption] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHconfig_DASHsettings] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHhash] = anon_sym_DASH_DASHno_DASHbinary,
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
  [anon_sym_DASHi] = {
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
  [anon_sym_DASHc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHr] = {
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
  [anon_sym_DASHe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHf] = {
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
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
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
  [2] = {
    [1] = aux_sym_file_token2,
  },
  [3] = {
    [2] = aux_sym_file_token2,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    aux_sym_file_token2,
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
  [28] = 2,
  [29] = 3,
  [30] = 4,
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
  [91] = 2,
  [92] = 92,
  [93] = 93,
  [94] = 3,
  [95] = 95,
  [96] = 96,
  [97] = 4,
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
  [111] = 50,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 48,
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
  [134] = 3,
  [135] = 135,
  [136] = 2,
  [137] = 137,
  [138] = 92,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 89,
  [145] = 139,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 93,
  [153] = 153,
  [154] = 154,
  [155] = 4,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 88,
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
  [177] = 3,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 99,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 4,
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
  [214] = 214,
  [215] = 215,
  [216] = 205,
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
  [233] = 220,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
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
      if (lookahead == '=') ADVANCE(199);
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
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(208);
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
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(8);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(199);
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
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(198);
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
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(206);
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
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(202);
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
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(197);
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
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 165:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(201);
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
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(176);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
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
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHbinary);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH_DASHonly_DASHbinary);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtrusted_DASHhost);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH_DASHuse_DASHfeature);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHindex);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH_DASHprefer_DASHbinary);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequire_DASHhashes);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpre);
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASHi);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_DASHfind_DASHlinks);
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
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(26);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(27);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
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
  [32] = {.lex_state = 171},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 171},
  [35] = {.lex_state = 171},
  [36] = {.lex_state = 171},
  [37] = {.lex_state = 171},
  [38] = {.lex_state = 171},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 171},
  [41] = {.lex_state = 171},
  [42] = {.lex_state = 171},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 171},
  [45] = {.lex_state = 171},
  [46] = {.lex_state = 171},
  [47] = {.lex_state = 171},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 171},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 171},
  [53] = {.lex_state = 171},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 171},
  [62] = {.lex_state = 171},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 171},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 171},
  [70] = {.lex_state = 171},
  [71] = {.lex_state = 171},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 171},
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
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 171},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 171},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 171},
  [101] = {.lex_state = 171},
  [102] = {.lex_state = 171},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 171},
  [105] = {.lex_state = 171},
  [106] = {.lex_state = 171},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 171},
  [114] = {.lex_state = 171},
  [115] = {.lex_state = 171},
  [116] = {.lex_state = 171},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 171},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 171},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 171},
  [124] = {.lex_state = 171},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 171},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 171},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 171},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 171},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 171},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 171},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 171},
  [154] = {.lex_state = 171},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 171},
  [158] = {.lex_state = 171},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 171},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 171},
  [163] = {.lex_state = 171},
  [164] = {.lex_state = 171},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 171},
  [168] = {.lex_state = 171},
  [169] = {.lex_state = 171},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 171},
  [174] = {.lex_state = 171},
  [175] = {.lex_state = 171},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 171},
  [179] = {.lex_state = 171},
  [180] = {.lex_state = 171},
  [181] = {.lex_state = 171},
  [182] = {.lex_state = 171},
  [183] = {.lex_state = 171},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 171},
  [188] = {.lex_state = 171},
  [189] = {.lex_state = 171},
  [190] = {.lex_state = 29},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 171},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 171},
  [195] = {.lex_state = 171},
  [196] = {.lex_state = 171},
  [197] = {.lex_state = 171},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 171},
  [202] = {.lex_state = 171},
  [203] = {.lex_state = 171},
  [204] = {.lex_state = 171},
  [205] = {.lex_state = 32},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 171},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 171},
  [210] = {.lex_state = 171},
  [211] = {.lex_state = 29},
  [212] = {.lex_state = 171},
  [213] = {.lex_state = 171},
  [214] = {.lex_state = 29},
  [215] = {.lex_state = 29},
  [216] = {.lex_state = 32},
  [217] = {.lex_state = 171},
  [218] = {.lex_state = 33},
  [219] = {.lex_state = 171},
  [220] = {.lex_state = 171},
  [221] = {.lex_state = 171},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 171},
  [227] = {.lex_state = 171},
  [228] = {.lex_state = 171},
  [229] = {.lex_state = 171},
  [230] = {.lex_state = 171},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 29},
  [233] = {.lex_state = 171},
  [234] = {.lex_state = 171},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 29},
  [237] = {(TSStateId)(-1)},
  [238] = {(TSStateId)(-1)},
  [239] = {(TSStateId)(-1)},
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
    [sym_file] = STATE(223),
    [sym_requirement] = STATE(141),
    [sym_url] = STATE(141),
    [sym_global_opt] = STATE(141),
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
    [anon_sym_DASH_DASHno_DASHbinary] = ACTIONS(17),
    [anon_sym_DASH_DASHonly_DASHbinary] = ACTIONS(17),
    [anon_sym_DASH_DASHtrusted_DASHhost] = ACTIONS(17),
    [anon_sym_DASH_DASHuse_DASHfeature] = ACTIONS(17),
    [anon_sym_DASH_DASHno_DASHindex] = ACTIONS(19),
    [anon_sym_DASH_DASHprefer_DASHbinary] = ACTIONS(19),
    [anon_sym_DASH_DASHrequire_DASHhashes] = ACTIONS(19),
    [anon_sym_DASH_DASHpre] = ACTIONS(21),
    [anon_sym_DASHi] = ACTIONS(23),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(25),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(25),
    [anon_sym_DASHc] = ACTIONS(27),
    [anon_sym_DASHr] = ACTIONS(27),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(29),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(29),
    [anon_sym_DASHe] = ACTIONS(31),
    [anon_sym_DASHf] = ACTIONS(31),
    [anon_sym_DASH_DASHeditable] = ACTIONS(33),
    [anon_sym_DASH_DASHfind_DASHlinks] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(3),
    [sym_comment] = ACTIONS(35),
    [aux_sym__space_token1] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      aux_sym__space_token1,
    STATE(2), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(39), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(41), 35,
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
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [55] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    STATE(2), 1,
      aux_sym__space_repeat1,
    STATE(3), 1,
      sym_linebreak,
    ACTIONS(46), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(48), 35,
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
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
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
    ACTIONS(50), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(52), 36,
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
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym__space_token1,
  [164] = 22,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_package,
    ACTIONS(59), 1,
      aux_sym_file_token1,
    ACTIONS(62), 1,
      aux_sym_file_token2,
    ACTIONS(65), 1,
      aux_sym_url_token1,
    ACTIONS(68), 1,
      aux_sym_url_token2,
    ACTIONS(77), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(80), 1,
      anon_sym_DASHi,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(7), 1,
      sym__space,
    ACTIONS(83), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(86), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(89), 2,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(92), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(95), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    STATE(5), 2,
      sym_linebreak,
      aux_sym_file_repeat1,
    ACTIONS(74), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(141), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(71), 4,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [244] = 23,
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
    ACTIONS(21), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(23), 1,
      anon_sym_DASHi,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(5), 1,
      aux_sym_file_repeat1,
    STATE(6), 1,
      sym_linebreak,
    STATE(7), 1,
      sym__space,
    ACTIONS(25), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(27), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(29), 2,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(31), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(33), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    ACTIONS(19), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(141), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 4,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [326] = 18,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      sym_package,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(21), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(23), 1,
      anon_sym_DASHi,
    ACTIONS(106), 1,
      aux_sym_file_token1,
    ACTIONS(108), 1,
      aux_sym_file_token2,
    ACTIONS(110), 1,
      sym_comment,
    STATE(7), 1,
      sym_linebreak,
    ACTIONS(25), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(27), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(29), 2,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(31), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(33), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    ACTIONS(19), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(172), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 4,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
  [393] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_linebreak,
    ACTIONS(114), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(112), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [431] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      sym_linebreak,
    ACTIONS(116), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(54), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_linebreak,
    ACTIONS(120), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(118), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [507] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      sym_linebreak,
    ACTIONS(124), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(122), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [545] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_linebreak,
    ACTIONS(128), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(126), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym__space_token1,
  [583] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      sym_linebreak,
    STATE(22), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(54), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [628] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(14), 1,
      sym_linebreak,
    STATE(23), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(90), 1,
      sym_marker_var,
    STATE(114), 1,
      sym__marker,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [673] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(15), 1,
      sym_linebreak,
    STATE(26), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(53), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [718] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(16), 1,
      sym_linebreak,
    STATE(24), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(49), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [763] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      sym_linebreak,
    STATE(27), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(55), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [808] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(18), 1,
      sym_linebreak,
    STATE(20), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(68), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [853] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(19), 1,
      sym_linebreak,
    STATE(25), 1,
      sym__space,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(57), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [898] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_linebreak,
    STATE(57), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [934] = 18,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(136), 1,
      aux_sym_file_token1,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      sym_version_cmp,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(21), 1,
      sym_linebreak,
    STATE(31), 1,
      sym_extras,
    STATE(32), 1,
      sym__space,
    STATE(65), 1,
      sym_marker_spec,
    STATE(74), 1,
      aux_sym_requirement_repeat1,
    STATE(107), 1,
      sym__version_list,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(43), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [992] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_linebreak,
    STATE(53), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [1028] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_linebreak,
    STATE(90), 1,
      sym_marker_var,
    STATE(116), 1,
      sym__marker,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [1064] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_linebreak,
    STATE(55), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [1100] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_linebreak,
    STATE(62), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [1136] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_linebreak,
    STATE(52), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [1172] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_linebreak,
    STATE(51), 1,
      sym__marker,
    STATE(90), 1,
      sym_marker_var,
    STATE(79), 4,
      sym__marker_expr,
      sym__marker_paren,
      sym__marker_and,
      sym__marker_or,
    ACTIONS(132), 12,
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
  [1208] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(150), 1,
      aux_sym__space_token1,
    STATE(28), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(41), 16,
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
  [1237] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    STATE(28), 1,
      aux_sym__space_repeat1,
    STATE(29), 1,
      sym_linebreak,
    ACTIONS(48), 16,
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
  [1268] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(30), 1,
      sym_linebreak,
    ACTIONS(52), 17,
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
  [1294] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      sym_version_cmp,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(31), 1,
      sym_linebreak,
    STATE(38), 1,
      sym__space,
    STATE(56), 1,
      sym_marker_spec,
    STATE(73), 1,
      aux_sym_requirement_repeat1,
    STATE(107), 1,
      sym__version_list,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(39), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1346] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_version_cmp,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(32), 1,
      sym_linebreak,
    STATE(125), 1,
      sym__version_list,
    STATE(210), 1,
      sym__space,
    ACTIONS(165), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1385] = 13,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(167), 1,
      aux_sym_argument_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      aux_sym__space_token1,
    STATE(33), 1,
      sym_linebreak,
    STATE(63), 1,
      sym__space,
    STATE(94), 1,
      aux_sym__space_repeat1,
    STATE(138), 1,
      aux_sym_argument_repeat1,
    STATE(191), 1,
      sym_argument,
    STATE(193), 2,
      sym_url,
      sym_quoted_string,
  [1426] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(34), 1,
      sym_linebreak,
    STATE(36), 1,
      aux_sym__version_list_repeat1,
    STATE(217), 1,
      sym__space,
    ACTIONS(177), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1454] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(35), 1,
      sym_linebreak,
    STATE(42), 1,
      aux_sym__version_list_repeat1,
    STATE(217), 1,
      sym__space,
    ACTIONS(182), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1482] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(217), 1,
      sym__space,
    STATE(36), 2,
      sym_linebreak,
      aux_sym__version_list_repeat1,
    ACTIONS(184), 6,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1510] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(36), 1,
      aux_sym__version_list_repeat1,
    STATE(37), 1,
      sym_linebreak,
    STATE(217), 1,
      sym__space,
    ACTIONS(192), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1538] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_version_cmp,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(38), 1,
      sym_linebreak,
    STATE(125), 1,
      sym__version_list,
    STATE(210), 1,
      sym__space,
    ACTIONS(165), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1574] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(39), 1,
      sym_linebreak,
    STATE(67), 1,
      sym_marker_spec,
    STATE(75), 1,
      aux_sym_requirement_repeat1,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(156), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1610] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(40), 1,
      sym_linebreak,
    STATE(45), 1,
      aux_sym__version_list_repeat1,
    STATE(217), 1,
      sym__space,
    ACTIONS(192), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1638] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(36), 1,
      aux_sym__version_list_repeat1,
    STATE(41), 1,
      sym_linebreak,
    STATE(217), 1,
      sym__space,
    ACTIONS(196), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1666] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(36), 1,
      aux_sym__version_list_repeat1,
    STATE(42), 1,
      sym_linebreak,
    STATE(217), 1,
      sym__space,
    ACTIONS(199), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1694] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(43), 1,
      sym_linebreak,
    STATE(56), 1,
      sym_marker_spec,
    STATE(73), 1,
      aux_sym_requirement_repeat1,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(156), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1730] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(41), 1,
      aux_sym__version_list_repeat1,
    STATE(44), 1,
      sym_linebreak,
    STATE(217), 1,
      sym__space,
    ACTIONS(177), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1758] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(36), 1,
      aux_sym__version_list_repeat1,
    STATE(45), 1,
      sym_linebreak,
    STATE(217), 1,
      sym__space,
    ACTIONS(201), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1786] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(37), 1,
      aux_sym__version_list_repeat1,
    STATE(46), 1,
      sym_linebreak,
    STATE(217), 1,
      sym__space,
    ACTIONS(199), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1814] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(34), 1,
      aux_sym__version_list_repeat1,
    STATE(47), 1,
      sym_linebreak,
    STATE(217), 1,
      sym__space,
    ACTIONS(203), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1842] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      aux_sym_url_token3,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(88), 1,
      sym_env_var,
    STATE(48), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
    ACTIONS(206), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1867] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(49), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(214), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1890] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(218), 1,
      aux_sym_url_token3,
    ACTIONS(220), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(48), 1,
      aux_sym_url_repeat1,
    STATE(50), 1,
      sym_linebreak,
    STATE(88), 1,
      sym_env_var,
    ACTIONS(216), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1917] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(51), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(222), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1940] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(52), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(224), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1963] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(53), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(226), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [1986] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(54), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(228), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2009] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(55), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(230), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2032] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(194), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(56), 1,
      sym_linebreak,
    STATE(75), 1,
      aux_sym_requirement_repeat1,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2062] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(234), 1,
      anon_sym_and,
    ACTIONS(236), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(57), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(232), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2090] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(238), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(58), 1,
      sym_linebreak,
    STATE(59), 1,
      aux_sym_requirement_repeat1,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2120] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(240), 1,
      aux_sym_file_token1,
    ACTIONS(245), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    STATE(59), 2,
      sym_linebreak,
      aux_sym_requirement_repeat1,
    ACTIONS(242), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2148] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(60), 1,
      sym_linebreak,
    ACTIONS(248), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2166] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym_linebreak,
    ACTIONS(250), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2184] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(234), 1,
      anon_sym_and,
    ACTIONS(236), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(62), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(252), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2212] = 10,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(167), 1,
      aux_sym_argument_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      sym_linebreak,
    STATE(138), 1,
      aux_sym_argument_repeat1,
    STATE(198), 1,
      sym_argument,
    STATE(200), 2,
      sym_url,
      sym_quoted_string,
  [2244] = 11,
    ACTIONS(167), 1,
      aux_sym_argument_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(254), 1,
      aux_sym__space_token1,
    STATE(64), 1,
      sym_linebreak,
    STATE(117), 1,
      sym__space,
    STATE(134), 1,
      aux_sym__space_repeat1,
    STATE(138), 1,
      aux_sym_argument_repeat1,
    STATE(191), 1,
      sym_argument,
    STATE(193), 1,
      sym_quoted_string,
  [2278] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(153), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(65), 1,
      sym_linebreak,
    STATE(73), 1,
      aux_sym_requirement_repeat1,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2308] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(66), 1,
      sym_linebreak,
    ACTIONS(256), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2326] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(258), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(58), 1,
      aux_sym_requirement_repeat1,
    STATE(67), 1,
      sym_linebreak,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2356] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(234), 1,
      anon_sym_and,
    ACTIONS(236), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(68), 1,
      sym_linebreak,
    STATE(195), 1,
      sym__space,
    ACTIONS(260), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2384] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(69), 1,
      sym_linebreak,
    STATE(96), 1,
      sym__space,
    STATE(193), 2,
      sym_url,
      sym_quoted_string,
  [2416] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      sym_linebreak,
    ACTIONS(262), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2434] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(71), 1,
      sym_linebreak,
    ACTIONS(264), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2452] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      sym_linebreak,
    ACTIONS(266), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2470] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(194), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(59), 1,
      aux_sym_requirement_repeat1,
    STATE(73), 1,
      sym_linebreak,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2500] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(153), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(59), 1,
      aux_sym_requirement_repeat1,
    STATE(74), 1,
      sym_linebreak,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2530] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(258), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(59), 1,
      aux_sym_requirement_repeat1,
    STATE(75), 1,
      sym_linebreak,
    STATE(132), 1,
      sym_requirement_opt,
    STATE(185), 1,
      sym__space,
    ACTIONS(148), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2560] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(76), 1,
      sym_linebreak,
    ACTIONS(268), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2577] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(77), 1,
      sym_linebreak,
    ACTIONS(270), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2594] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(78), 1,
      sym_linebreak,
    ACTIONS(272), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2611] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(79), 1,
      sym_linebreak,
    ACTIONS(274), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2628] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(80), 1,
      sym_linebreak,
    ACTIONS(276), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2645] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(81), 1,
      sym_linebreak,
    ACTIONS(278), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2662] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      sym_linebreak,
    ACTIONS(280), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2679] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      sym_linebreak,
    ACTIONS(282), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2696] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(84), 1,
      sym_linebreak,
    ACTIONS(284), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2713] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(85), 1,
      sym_linebreak,
    ACTIONS(286), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2730] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(86), 1,
      sym_linebreak,
    ACTIONS(288), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2747] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      sym_linebreak,
    ACTIONS(290), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2764] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(294), 1,
      aux_sym_url_token3,
    STATE(88), 1,
      sym_linebreak,
    ACTIONS(292), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2783] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(298), 1,
      aux_sym_url_token3,
    STATE(89), 1,
      sym_linebreak,
    ACTIONS(296), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [2802] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(300), 1,
      sym_version_cmp,
    ACTIONS(302), 1,
      anon_sym_in,
    ACTIONS(304), 1,
      anon_sym_not,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(90), 1,
      sym_linebreak,
    STATE(115), 1,
      sym_marker_op,
    STATE(169), 1,
      sym__space,
  [2830] = 5,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(306), 1,
      aux_sym__space_token1,
    ACTIONS(39), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    STATE(91), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
    ACTIONS(41), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2850] = 5,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      aux_sym_argument_token1,
    STATE(92), 1,
      sym_linebreak,
    STATE(93), 1,
      aux_sym_argument_repeat1,
    ACTIONS(309), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2870] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      aux_sym_argument_token1,
    STATE(93), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
    ACTIONS(313), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2888] = 6,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      aux_sym__space_token1,
    STATE(91), 1,
      aux_sym__space_repeat1,
    STATE(94), 1,
      sym_linebreak,
    ACTIONS(46), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(48), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2910] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(95), 1,
      sym_linebreak,
    ACTIONS(318), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2925] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym_linebreak,
    STATE(200), 2,
      sym_url,
      sym_quoted_string,
  [2948] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(97), 1,
      sym_linebreak,
    ACTIONS(50), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(52), 4,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [2965] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(98), 1,
      sym_linebreak,
    ACTIONS(320), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2980] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      aux_sym_argument_token1,
    STATE(99), 1,
      sym_linebreak,
    ACTIONS(322), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [2997] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(100), 1,
      sym_linebreak,
    STATE(119), 1,
      aux_sym__package_list_repeat1,
    STATE(196), 1,
      sym__space,
  [3022] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(330), 1,
      aux_sym_url_token1,
    ACTIONS(332), 1,
      aux_sym_url_token2,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(95), 1,
      sym_url,
    STATE(101), 1,
      sym_linebreak,
    STATE(181), 1,
      sym__space,
  [3047] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(102), 1,
      sym_linebreak,
    STATE(121), 1,
      aux_sym__package_list_repeat1,
    STATE(196), 1,
      sym__space,
  [3072] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(103), 1,
      sym_linebreak,
    ACTIONS(334), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3087] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(104), 1,
      sym_linebreak,
    STATE(121), 1,
      aux_sym__package_list_repeat1,
    STATE(202), 1,
      sym__space,
  [3112] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(105), 1,
      sym_linebreak,
    STATE(121), 1,
      aux_sym__package_list_repeat1,
    STATE(189), 1,
      sym__space,
  [3137] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(102), 1,
      aux_sym__package_list_repeat1,
    STATE(106), 1,
      sym_linebreak,
    STATE(189), 1,
      sym__space,
  [3162] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym_linebreak,
    ACTIONS(340), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3177] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      sym_linebreak,
    ACTIONS(342), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3192] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(109), 1,
      sym_linebreak,
    ACTIONS(344), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3207] = 7,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      aux_sym_argument_token1,
    STATE(92), 1,
      aux_sym_argument_repeat1,
    STATE(110), 1,
      sym_linebreak,
    STATE(131), 2,
      sym_argument,
      sym_quoted_string,
  [3230] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(346), 1,
      aux_sym_url_token3,
    ACTIONS(348), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(111), 1,
      sym_linebreak,
    STATE(120), 1,
      aux_sym_url_repeat1,
    STATE(165), 1,
      sym_env_var,
    ACTIONS(216), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3253] = 7,
    ACTIONS(167), 1,
      aux_sym_argument_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(112), 1,
      sym_linebreak,
    STATE(138), 1,
      aux_sym_argument_repeat1,
    STATE(200), 2,
      sym_argument,
      sym_quoted_string,
  [3276] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(104), 1,
      aux_sym__package_list_repeat1,
    STATE(113), 1,
      sym_linebreak,
    STATE(201), 1,
      sym__space,
  [3301] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(234), 1,
      anon_sym_and,
    ACTIONS(236), 1,
      anon_sym_or,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(114), 1,
      sym_linebreak,
    STATE(182), 1,
      sym__space,
  [3326] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(78), 1,
      sym_quoted_string,
    STATE(115), 1,
      sym_linebreak,
    STATE(179), 1,
      sym__space,
  [3351] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      aux_sym__space_token1,
    ACTIONS(234), 1,
      anon_sym_and,
    ACTIONS(236), 1,
      anon_sym_or,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym__space_repeat1,
    STATE(116), 1,
      sym_linebreak,
    STATE(187), 1,
      sym__space,
  [3376] = 8,
    ACTIONS(167), 1,
      aux_sym_argument_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(117), 1,
      sym_linebreak,
    STATE(138), 1,
      aux_sym_argument_repeat1,
    STATE(198), 1,
      sym_argument,
    STATE(200), 1,
      sym_quoted_string,
  [3401] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(118), 1,
      sym_linebreak,
    ACTIONS(356), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3416] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(119), 1,
      sym_linebreak,
    STATE(121), 1,
      aux_sym__package_list_repeat1,
    STATE(201), 1,
      sym__space,
  [3441] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(358), 1,
      aux_sym_url_token3,
    ACTIONS(361), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(165), 1,
      sym_env_var,
    ACTIONS(206), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(120), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
  [3462] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(229), 1,
      sym__space,
    STATE(121), 2,
      sym_linebreak,
      aux_sym__package_list_repeat1,
  [3485] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(122), 1,
      sym_linebreak,
    ACTIONS(372), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3500] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(76), 1,
      sym_quoted_string,
    STATE(123), 1,
      sym_linebreak,
    STATE(188), 1,
      sym__space,
  [3525] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(105), 1,
      aux_sym__package_list_repeat1,
    STATE(124), 1,
      sym_linebreak,
    STATE(203), 1,
      sym__space,
  [3550] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(125), 1,
      sym_linebreak,
    ACTIONS(376), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3565] = 7,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      aux_sym_argument_token1,
    STATE(92), 1,
      aux_sym_argument_repeat1,
    STATE(126), 1,
      sym_linebreak,
    STATE(129), 2,
      sym_argument,
      sym_quoted_string,
  [3588] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(330), 1,
      aux_sym_url_token1,
    ACTIONS(332), 1,
      aux_sym_url_token2,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(108), 1,
      sym_url,
    STATE(127), 1,
      sym_linebreak,
    STATE(174), 1,
      sym__space,
  [3613] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(161), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(128), 1,
      sym_linebreak,
    STATE(137), 1,
      sym__version_list,
    STATE(210), 1,
      sym__space,
  [3635] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(129), 1,
      sym_linebreak,
    ACTIONS(378), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3649] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(161), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(130), 1,
      sym_linebreak,
    STATE(163), 1,
      sym__version_list,
    STATE(210), 1,
      sym__space,
  [3671] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(131), 1,
      sym_linebreak,
    ACTIONS(380), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3685] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(132), 1,
      sym_linebreak,
    ACTIONS(382), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym__space_token1,
  [3699] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(144), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(130), 1,
      sym__space,
    STATE(133), 1,
      sym_linebreak,
    STATE(162), 1,
      sym__version_list,
  [3721] = 6,
    ACTIONS(46), 1,
      aux_sym_argument_token1,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(254), 1,
      aux_sym__space_token1,
    STATE(134), 1,
      sym_linebreak,
    STATE(136), 1,
      aux_sym__space_repeat1,
    ACTIONS(48), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3741] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(144), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(128), 1,
      sym__space,
    STATE(135), 1,
      sym_linebreak,
    STATE(163), 1,
      sym__version_list,
  [3763] = 5,
    ACTIONS(39), 1,
      aux_sym_argument_token1,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      aux_sym__space_token1,
    ACTIONS(41), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(136), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
  [3781] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(137), 1,
      sym_linebreak,
    STATE(219), 1,
      sym__space,
  [3800] = 5,
    ACTIONS(167), 1,
      aux_sym_argument_token1,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(138), 1,
      sym_linebreak,
    STATE(152), 1,
      aux_sym_argument_repeat1,
    ACTIONS(309), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [3817] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(218), 1,
      aux_sym_url_token3,
    ACTIONS(220), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      aux_sym_url_repeat1,
    STATE(88), 1,
      sym_env_var,
    STATE(139), 1,
      sym_linebreak,
  [3836] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(254), 1,
      aux_sym__space_token1,
    ACTIONS(389), 1,
      anon_sym_EQ,
    STATE(110), 1,
      sym__space,
    STATE(134), 1,
      aux_sym__space_repeat1,
    STATE(140), 1,
      sym_linebreak,
  [3855] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(106), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(141), 1,
      sym_linebreak,
    STATE(197), 1,
      sym__space,
  [3874] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(391), 1,
      sym_version,
    ACTIONS(393), 1,
      aux_sym__space_token1,
    STATE(142), 1,
      sym_linebreak,
    STATE(177), 1,
      aux_sym__space_repeat1,
    STATE(236), 1,
      sym__space,
  [3893] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      aux_sym__space_token1,
    ACTIONS(395), 1,
      sym_version,
    STATE(143), 1,
      sym_linebreak,
    STATE(177), 1,
      aux_sym__space_repeat1,
    STATE(232), 1,
      sym__space,
  [3912] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(298), 1,
      aux_sym_url_token3,
    STATE(144), 1,
      sym_linebreak,
    ACTIONS(296), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [3927] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(346), 1,
      aux_sym_url_token3,
    ACTIONS(348), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(111), 1,
      aux_sym_url_repeat1,
    STATE(145), 1,
      sym_linebreak,
    STATE(165), 1,
      sym_env_var,
  [3946] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(254), 1,
      aux_sym__space_token1,
    ACTIONS(397), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym__space,
    STATE(134), 1,
      aux_sym__space_repeat1,
    STATE(146), 1,
      sym_linebreak,
  [3965] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(399), 1,
      anon_sym_EQ,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(96), 1,
      sym__space,
    STATE(147), 1,
      sym_linebreak,
  [3984] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(401), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(148), 1,
      sym_linebreak,
    STATE(230), 1,
      sym__space,
  [4003] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(254), 1,
      aux_sym__space_token1,
    ACTIONS(403), 1,
      anon_sym_EQ,
    STATE(117), 1,
      sym__space,
    STATE(134), 1,
      aux_sym__space_repeat1,
    STATE(149), 1,
      sym_linebreak,
  [4022] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      aux_sym__space_token1,
    ACTIONS(405), 1,
      anon_sym_EQ,
    STATE(63), 1,
      sym__space,
    STATE(94), 1,
      aux_sym__space_repeat1,
    STATE(150), 1,
      sym_linebreak,
  [4041] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      aux_sym__space_token1,
    ACTIONS(407), 1,
      sym_version,
    STATE(151), 1,
      sym_linebreak,
    STATE(177), 1,
      aux_sym__space_repeat1,
    STATE(224), 1,
      sym__space,
  [4060] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(409), 1,
      aux_sym_argument_token1,
    ACTIONS(313), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
    STATE(152), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
  [4075] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(412), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(153), 1,
      sym_linebreak,
    STATE(221), 1,
      sym__space,
  [4094] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(414), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(154), 1,
      sym_linebreak,
    STATE(168), 1,
      sym__space,
  [4113] = 4,
    ACTIONS(50), 1,
      aux_sym_argument_token1,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(155), 1,
      sym_linebreak,
    ACTIONS(52), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [4128] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_linebreak,
    ACTIONS(165), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [4143] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(416), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(157), 1,
      sym_linebreak,
    STATE(164), 1,
      sym__space,
  [4162] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(418), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(158), 1,
      sym_linebreak,
    STATE(234), 1,
      sym__space,
  [4181] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      aux_sym__space_token1,
    ACTIONS(420), 1,
      sym_version,
    STATE(159), 1,
      sym_linebreak,
    STATE(177), 1,
      aux_sym__space_repeat1,
    STATE(211), 1,
      sym__space,
  [4200] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(160), 1,
      sym_linebreak,
    ACTIONS(422), 4,
      sym_version_cmp,
      anon_sym_in,
      anon_sym_not,
      aux_sym__space_token1,
  [4213] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(254), 1,
      aux_sym__space_token1,
    ACTIONS(424), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym__space,
    STATE(134), 1,
      aux_sym__space_repeat1,
    STATE(161), 1,
      sym_linebreak,
  [4232] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(162), 1,
      sym_linebreak,
    STATE(207), 1,
      sym__space,
  [4251] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(163), 1,
      sym_linebreak,
    STATE(227), 1,
      sym__space,
  [4270] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(414), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(164), 1,
      sym_linebreak,
    STATE(209), 1,
      sym__space,
  [4289] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(294), 1,
      aux_sym_url_token3,
    STATE(165), 1,
      sym_linebreak,
    ACTIONS(292), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__space_token1,
  [4304] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      aux_sym__space_token1,
    ACTIONS(430), 1,
      sym_version,
    STATE(166), 1,
      sym_linebreak,
    STATE(177), 1,
      aux_sym__space_repeat1,
    STATE(214), 1,
      sym__space,
  [4323] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(432), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(167), 1,
      sym_linebreak,
    STATE(226), 1,
      sym__space,
  [4342] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(434), 1,
      sym_package,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(168), 1,
      sym_linebreak,
    STATE(213), 1,
      sym__space,
  [4361] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      anon_sym_in,
    ACTIONS(304), 1,
      anon_sym_not,
    ACTIONS(436), 1,
      sym_version_cmp,
    STATE(123), 1,
      sym_marker_op,
    STATE(169), 1,
      sym_linebreak,
  [4380] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      aux_sym__space_token1,
    ACTIONS(438), 1,
      sym_version,
    STATE(170), 1,
      sym_linebreak,
    STATE(177), 1,
      aux_sym__space_repeat1,
    STATE(215), 1,
      sym__space,
  [4399] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(440), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(171), 1,
      sym_linebreak,
    STATE(192), 1,
      sym__space,
  [4418] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    ACTIONS(442), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(172), 1,
      sym_linebreak,
    STATE(194), 1,
      sym__space,
  [4437] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(173), 1,
      sym_linebreak,
    ACTIONS(444), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [4449] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      aux_sym_url_token1,
    ACTIONS(332), 1,
      aux_sym_url_token2,
    STATE(122), 1,
      sym_url,
    STATE(174), 1,
      sym_linebreak,
  [4465] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(175), 1,
      sym_linebreak,
    ACTIONS(364), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4477] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(41), 1,
      sym_version,
    ACTIONS(446), 1,
      aux_sym__space_token1,
    STATE(176), 2,
      sym_linebreak,
      aux_sym__space_repeat1,
  [4491] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(48), 1,
      sym_version,
    ACTIONS(393), 1,
      aux_sym__space_token1,
    STATE(176), 1,
      aux_sym__space_repeat1,
    STATE(177), 1,
      sym_linebreak,
  [4507] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(178), 1,
      sym_linebreak,
    ACTIONS(449), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4519] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym_quoted_string,
    STATE(179), 1,
      sym_linebreak,
  [4535] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(180), 1,
      sym_linebreak,
    ACTIONS(451), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      aux_sym__space_token1,
  [4547] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      aux_sym_url_token1,
    ACTIONS(332), 1,
      aux_sym_url_token2,
    STATE(108), 1,
      sym_url,
    STATE(181), 1,
      sym_linebreak,
  [4563] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_and,
    ACTIONS(455), 1,
      anon_sym_or,
    STATE(182), 1,
      sym_linebreak,
  [4579] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(183), 1,
      sym_linebreak,
    ACTIONS(457), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__space_token1,
  [4591] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      aux_sym__space_repeat1,
    STATE(184), 1,
      sym_linebreak,
    STATE(212), 1,
      sym__space,
  [4607] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(185), 1,
      sym_linebreak,
    ACTIONS(165), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [4619] = 4,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      aux_sym_argument_token1,
    STATE(186), 1,
      sym_linebreak,
    ACTIONS(322), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4633] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(453), 1,
      anon_sym_and,
    ACTIONS(455), 1,
      anon_sym_or,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_linebreak,
  [4649] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym_quoted_string,
    STATE(188), 1,
      sym_linebreak,
  [4665] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      sym_linebreak,
  [4678] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(190), 1,
      sym_linebreak,
    ACTIONS(52), 2,
      sym_version,
      aux_sym__space_token1,
  [4689] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(191), 1,
      sym_linebreak,
    ACTIONS(463), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4700] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      aux_sym_file_token1,
    ACTIONS(467), 1,
      sym_comment,
    STATE(192), 1,
      sym_linebreak,
  [4713] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(193), 1,
      sym_linebreak,
    ACTIONS(469), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4724] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(471), 1,
      aux_sym_file_token1,
    ACTIONS(473), 1,
      sym_comment,
    STATE(194), 1,
      sym_linebreak,
  [4737] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(453), 1,
      anon_sym_and,
    ACTIONS(455), 1,
      anon_sym_or,
    STATE(195), 1,
      sym_linebreak,
  [4750] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_linebreak,
  [4763] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      aux_sym_file_token1,
    ACTIONS(475), 1,
      sym_comment,
    STATE(197), 1,
      sym_linebreak,
  [4776] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(198), 1,
      sym_linebreak,
    ACTIONS(477), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4787] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(199), 1,
      sym_linebreak,
    ACTIONS(479), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4798] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(200), 1,
      sym_linebreak,
    ACTIONS(481), 2,
      aux_sym_file_token1,
      aux_sym__space_token1,
  [4809] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      sym_linebreak,
  [4822] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      sym_linebreak,
  [4835] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_linebreak,
  [4848] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_linebreak,
  [4858] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      aux_sym_env_var_token1,
    STATE(205), 1,
      sym_linebreak,
  [4868] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(471), 1,
      aux_sym_file_token1,
    STATE(206), 1,
      sym_linebreak,
  [4878] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_linebreak,
  [4888] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      aux_sym_file_token1,
    STATE(208), 1,
      sym_linebreak,
  [4898] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(434), 1,
      sym_package,
    STATE(209), 1,
      sym_linebreak,
  [4908] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 1,
      sym_version_cmp,
    STATE(210), 1,
      sym_linebreak,
  [4918] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(395), 1,
      sym_version,
    STATE(211), 1,
      sym_linebreak,
  [4928] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(493), 1,
      anon_sym_in,
    STATE(212), 1,
      sym_linebreak,
  [4938] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(495), 1,
      sym_package,
    STATE(213), 1,
      sym_linebreak,
  [4948] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(497), 1,
      sym_version,
    STATE(214), 1,
      sym_linebreak,
  [4958] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      sym_version,
    STATE(215), 1,
      sym_linebreak,
  [4968] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(499), 1,
      aux_sym_env_var_token1,
    STATE(216), 1,
      sym_linebreak,
  [4978] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      sym_linebreak,
  [4988] = 3,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(503), 1,
      aux_sym_quoted_string_token1,
    STATE(218), 1,
      sym_linebreak,
  [4998] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym_linebreak,
  [5008] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_linebreak,
  [5018] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(509), 1,
      sym_version_cmp,
    STATE(221), 1,
      sym_linebreak,
  [5028] = 3,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(511), 1,
      aux_sym_quoted_string_token2,
    STATE(222), 1,
      sym_linebreak,
  [5038] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    STATE(223), 1,
      sym_linebreak,
  [5048] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(438), 1,
      sym_version,
    STATE(224), 1,
      sym_linebreak,
  [5058] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      aux_sym_file_token1,
    STATE(225), 1,
      sym_linebreak,
  [5068] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(412), 1,
      sym_version_cmp,
    STATE(226), 1,
      sym_linebreak,
  [5078] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_linebreak,
  [5088] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym_linebreak,
  [5098] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      sym_linebreak,
  [5108] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(515), 1,
      sym_package,
    STATE(230), 1,
      sym_linebreak,
  [5118] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      aux_sym_file_token1,
    STATE(231), 1,
      sym_linebreak,
  [5128] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(517), 1,
      sym_version,
    STATE(232), 1,
      sym_linebreak,
  [5138] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_linebreak,
  [5148] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(401), 1,
      sym_package,
    STATE(234), 1,
      sym_linebreak,
  [5158] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(521), 1,
      aux_sym_file_token1,
    STATE(235), 1,
      sym_linebreak,
  [5168] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(523), 1,
      sym_version,
    STATE(236), 1,
      sym_linebreak,
  [5178] = 1,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
  [5182] = 1,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
  [5186] = 1,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 326,
  [SMALL_STATE(8)] = 393,
  [SMALL_STATE(9)] = 431,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 507,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 583,
  [SMALL_STATE(14)] = 628,
  [SMALL_STATE(15)] = 673,
  [SMALL_STATE(16)] = 718,
  [SMALL_STATE(17)] = 763,
  [SMALL_STATE(18)] = 808,
  [SMALL_STATE(19)] = 853,
  [SMALL_STATE(20)] = 898,
  [SMALL_STATE(21)] = 934,
  [SMALL_STATE(22)] = 992,
  [SMALL_STATE(23)] = 1028,
  [SMALL_STATE(24)] = 1064,
  [SMALL_STATE(25)] = 1100,
  [SMALL_STATE(26)] = 1136,
  [SMALL_STATE(27)] = 1172,
  [SMALL_STATE(28)] = 1208,
  [SMALL_STATE(29)] = 1237,
  [SMALL_STATE(30)] = 1268,
  [SMALL_STATE(31)] = 1294,
  [SMALL_STATE(32)] = 1346,
  [SMALL_STATE(33)] = 1385,
  [SMALL_STATE(34)] = 1426,
  [SMALL_STATE(35)] = 1454,
  [SMALL_STATE(36)] = 1482,
  [SMALL_STATE(37)] = 1510,
  [SMALL_STATE(38)] = 1538,
  [SMALL_STATE(39)] = 1574,
  [SMALL_STATE(40)] = 1610,
  [SMALL_STATE(41)] = 1638,
  [SMALL_STATE(42)] = 1666,
  [SMALL_STATE(43)] = 1694,
  [SMALL_STATE(44)] = 1730,
  [SMALL_STATE(45)] = 1758,
  [SMALL_STATE(46)] = 1786,
  [SMALL_STATE(47)] = 1814,
  [SMALL_STATE(48)] = 1842,
  [SMALL_STATE(49)] = 1867,
  [SMALL_STATE(50)] = 1890,
  [SMALL_STATE(51)] = 1917,
  [SMALL_STATE(52)] = 1940,
  [SMALL_STATE(53)] = 1963,
  [SMALL_STATE(54)] = 1986,
  [SMALL_STATE(55)] = 2009,
  [SMALL_STATE(56)] = 2032,
  [SMALL_STATE(57)] = 2062,
  [SMALL_STATE(58)] = 2090,
  [SMALL_STATE(59)] = 2120,
  [SMALL_STATE(60)] = 2148,
  [SMALL_STATE(61)] = 2166,
  [SMALL_STATE(62)] = 2184,
  [SMALL_STATE(63)] = 2212,
  [SMALL_STATE(64)] = 2244,
  [SMALL_STATE(65)] = 2278,
  [SMALL_STATE(66)] = 2308,
  [SMALL_STATE(67)] = 2326,
  [SMALL_STATE(68)] = 2356,
  [SMALL_STATE(69)] = 2384,
  [SMALL_STATE(70)] = 2416,
  [SMALL_STATE(71)] = 2434,
  [SMALL_STATE(72)] = 2452,
  [SMALL_STATE(73)] = 2470,
  [SMALL_STATE(74)] = 2500,
  [SMALL_STATE(75)] = 2530,
  [SMALL_STATE(76)] = 2560,
  [SMALL_STATE(77)] = 2577,
  [SMALL_STATE(78)] = 2594,
  [SMALL_STATE(79)] = 2611,
  [SMALL_STATE(80)] = 2628,
  [SMALL_STATE(81)] = 2645,
  [SMALL_STATE(82)] = 2662,
  [SMALL_STATE(83)] = 2679,
  [SMALL_STATE(84)] = 2696,
  [SMALL_STATE(85)] = 2713,
  [SMALL_STATE(86)] = 2730,
  [SMALL_STATE(87)] = 2747,
  [SMALL_STATE(88)] = 2764,
  [SMALL_STATE(89)] = 2783,
  [SMALL_STATE(90)] = 2802,
  [SMALL_STATE(91)] = 2830,
  [SMALL_STATE(92)] = 2850,
  [SMALL_STATE(93)] = 2870,
  [SMALL_STATE(94)] = 2888,
  [SMALL_STATE(95)] = 2910,
  [SMALL_STATE(96)] = 2925,
  [SMALL_STATE(97)] = 2948,
  [SMALL_STATE(98)] = 2965,
  [SMALL_STATE(99)] = 2980,
  [SMALL_STATE(100)] = 2997,
  [SMALL_STATE(101)] = 3022,
  [SMALL_STATE(102)] = 3047,
  [SMALL_STATE(103)] = 3072,
  [SMALL_STATE(104)] = 3087,
  [SMALL_STATE(105)] = 3112,
  [SMALL_STATE(106)] = 3137,
  [SMALL_STATE(107)] = 3162,
  [SMALL_STATE(108)] = 3177,
  [SMALL_STATE(109)] = 3192,
  [SMALL_STATE(110)] = 3207,
  [SMALL_STATE(111)] = 3230,
  [SMALL_STATE(112)] = 3253,
  [SMALL_STATE(113)] = 3276,
  [SMALL_STATE(114)] = 3301,
  [SMALL_STATE(115)] = 3326,
  [SMALL_STATE(116)] = 3351,
  [SMALL_STATE(117)] = 3376,
  [SMALL_STATE(118)] = 3401,
  [SMALL_STATE(119)] = 3416,
  [SMALL_STATE(120)] = 3441,
  [SMALL_STATE(121)] = 3462,
  [SMALL_STATE(122)] = 3485,
  [SMALL_STATE(123)] = 3500,
  [SMALL_STATE(124)] = 3525,
  [SMALL_STATE(125)] = 3550,
  [SMALL_STATE(126)] = 3565,
  [SMALL_STATE(127)] = 3588,
  [SMALL_STATE(128)] = 3613,
  [SMALL_STATE(129)] = 3635,
  [SMALL_STATE(130)] = 3649,
  [SMALL_STATE(131)] = 3671,
  [SMALL_STATE(132)] = 3685,
  [SMALL_STATE(133)] = 3699,
  [SMALL_STATE(134)] = 3721,
  [SMALL_STATE(135)] = 3741,
  [SMALL_STATE(136)] = 3763,
  [SMALL_STATE(137)] = 3781,
  [SMALL_STATE(138)] = 3800,
  [SMALL_STATE(139)] = 3817,
  [SMALL_STATE(140)] = 3836,
  [SMALL_STATE(141)] = 3855,
  [SMALL_STATE(142)] = 3874,
  [SMALL_STATE(143)] = 3893,
  [SMALL_STATE(144)] = 3912,
  [SMALL_STATE(145)] = 3927,
  [SMALL_STATE(146)] = 3946,
  [SMALL_STATE(147)] = 3965,
  [SMALL_STATE(148)] = 3984,
  [SMALL_STATE(149)] = 4003,
  [SMALL_STATE(150)] = 4022,
  [SMALL_STATE(151)] = 4041,
  [SMALL_STATE(152)] = 4060,
  [SMALL_STATE(153)] = 4075,
  [SMALL_STATE(154)] = 4094,
  [SMALL_STATE(155)] = 4113,
  [SMALL_STATE(156)] = 4128,
  [SMALL_STATE(157)] = 4143,
  [SMALL_STATE(158)] = 4162,
  [SMALL_STATE(159)] = 4181,
  [SMALL_STATE(160)] = 4200,
  [SMALL_STATE(161)] = 4213,
  [SMALL_STATE(162)] = 4232,
  [SMALL_STATE(163)] = 4251,
  [SMALL_STATE(164)] = 4270,
  [SMALL_STATE(165)] = 4289,
  [SMALL_STATE(166)] = 4304,
  [SMALL_STATE(167)] = 4323,
  [SMALL_STATE(168)] = 4342,
  [SMALL_STATE(169)] = 4361,
  [SMALL_STATE(170)] = 4380,
  [SMALL_STATE(171)] = 4399,
  [SMALL_STATE(172)] = 4418,
  [SMALL_STATE(173)] = 4437,
  [SMALL_STATE(174)] = 4449,
  [SMALL_STATE(175)] = 4465,
  [SMALL_STATE(176)] = 4477,
  [SMALL_STATE(177)] = 4491,
  [SMALL_STATE(178)] = 4507,
  [SMALL_STATE(179)] = 4519,
  [SMALL_STATE(180)] = 4535,
  [SMALL_STATE(181)] = 4547,
  [SMALL_STATE(182)] = 4563,
  [SMALL_STATE(183)] = 4579,
  [SMALL_STATE(184)] = 4591,
  [SMALL_STATE(185)] = 4607,
  [SMALL_STATE(186)] = 4619,
  [SMALL_STATE(187)] = 4633,
  [SMALL_STATE(188)] = 4649,
  [SMALL_STATE(189)] = 4665,
  [SMALL_STATE(190)] = 4678,
  [SMALL_STATE(191)] = 4689,
  [SMALL_STATE(192)] = 4700,
  [SMALL_STATE(193)] = 4713,
  [SMALL_STATE(194)] = 4724,
  [SMALL_STATE(195)] = 4737,
  [SMALL_STATE(196)] = 4750,
  [SMALL_STATE(197)] = 4763,
  [SMALL_STATE(198)] = 4776,
  [SMALL_STATE(199)] = 4787,
  [SMALL_STATE(200)] = 4798,
  [SMALL_STATE(201)] = 4809,
  [SMALL_STATE(202)] = 4822,
  [SMALL_STATE(203)] = 4835,
  [SMALL_STATE(204)] = 4848,
  [SMALL_STATE(205)] = 4858,
  [SMALL_STATE(206)] = 4868,
  [SMALL_STATE(207)] = 4878,
  [SMALL_STATE(208)] = 4888,
  [SMALL_STATE(209)] = 4898,
  [SMALL_STATE(210)] = 4908,
  [SMALL_STATE(211)] = 4918,
  [SMALL_STATE(212)] = 4928,
  [SMALL_STATE(213)] = 4938,
  [SMALL_STATE(214)] = 4948,
  [SMALL_STATE(215)] = 4958,
  [SMALL_STATE(216)] = 4968,
  [SMALL_STATE(217)] = 4978,
  [SMALL_STATE(218)] = 4988,
  [SMALL_STATE(219)] = 4998,
  [SMALL_STATE(220)] = 5008,
  [SMALL_STATE(221)] = 5018,
  [SMALL_STATE(222)] = 5028,
  [SMALL_STATE(223)] = 5038,
  [SMALL_STATE(224)] = 5048,
  [SMALL_STATE(225)] = 5058,
  [SMALL_STATE(226)] = 5068,
  [SMALL_STATE(227)] = 5078,
  [SMALL_STATE(228)] = 5088,
  [SMALL_STATE(229)] = 5098,
  [SMALL_STATE(230)] = 5108,
  [SMALL_STATE(231)] = 5118,
  [SMALL_STATE(232)] = 5128,
  [SMALL_STATE(233)] = 5138,
  [SMALL_STATE(234)] = 5148,
  [SMALL_STATE(235)] = 5158,
  [SMALL_STATE(236)] = 5168,
  [SMALL_STATE(237)] = 5178,
  [SMALL_STATE(238)] = 5182,
  [SMALL_STATE(239)] = 5186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__space, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(21),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(141),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(145),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(145),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(146),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(199),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(199),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(69),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(147),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(64),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(149),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(33),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(150),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(225),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 3), REDUCE(sym__version_list, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(167),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 2), SHIFT_REPEAT(4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 3),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 4), REDUCE(sym__version_list, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_list, 5),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__version_list, 2), REDUCE(sym__version_list, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(88),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(205),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_and, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_or, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2), SHIFT_REPEAT(161),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2), SHIFT_REPEAT(4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 8),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, .production_id = 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_paren, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker_expr, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_list_repeat1, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 3, .production_id = 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(97),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(99),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 5),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(165),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(216),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(158),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 2), SHIFT_REPEAT(4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 1),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(155),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(186),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(190),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_list_repeat1, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2, .production_id = 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3, .production_id = 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [513] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 2),
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
