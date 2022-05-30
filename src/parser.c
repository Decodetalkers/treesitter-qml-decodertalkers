#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOT = 1,
  anon_sym_COLON = 2,
  anon_sym_import = 3,
  anon_sym_DQUOTE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_bool = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_identifier = 10,
  sym_number = 11,
  sym_source_file = 12,
  sym__import = 13,
  sym__double = 14,
  sym__key = 15,
  sym__identifiers = 16,
  sym__importfromsource = 17,
  sym__importfromfile = 18,
  sym__definition = 19,
  sym__object_definition = 20,
  sym_block = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym__importfromsource_repeat1 = 23,
  aux_sym__object_definition_repeat1 = 24,
  aux_sym_block_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_import] = "import",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__import] = "_import",
  [sym__double] = "_double",
  [sym__key] = "_key",
  [sym__identifiers] = "_identifiers",
  [sym__importfromsource] = "_importfromsource",
  [sym__importfromfile] = "_importfromfile",
  [sym__definition] = "_definition",
  [sym__object_definition] = "_object_definition",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__importfromsource_repeat1] = "_importfromsource_repeat1",
  [aux_sym__object_definition_repeat1] = "_object_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__import] = sym__import,
  [sym__double] = sym__double,
  [sym__key] = sym__key,
  [sym__identifiers] = sym__identifiers,
  [sym__importfromsource] = sym__importfromsource,
  [sym__importfromfile] = sym__importfromfile,
  [sym__definition] = sym__definition,
  [sym__object_definition] = sym__object_definition,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__importfromsource_repeat1] = aux_sym__importfromsource_repeat1,
  [aux_sym__object_definition_repeat1] = aux_sym__object_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__import] = {
    .visible = false,
    .named = true,
  },
  [sym__double] = {
    .visible = false,
    .named = true,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym__identifiers] = {
    .visible = false,
    .named = true,
  },
  [sym__importfromsource] = {
    .visible = false,
    .named = true,
  },
  [sym__importfromfile] = {
    .visible = false,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__object_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__importfromsource_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__import] = STATE(2),
    [sym__key] = STATE(12),
    [sym__identifiers] = STATE(16),
    [sym__importfromsource] = STATE(2),
    [sym__importfromfile] = STATE(2),
    [sym__definition] = STATE(2),
    [sym__object_definition] = STATE(2),
    [sym_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__importfromsource_repeat1] = STATE(16),
    [aux_sym__object_definition_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym__import] = STATE(3),
    [sym__key] = STATE(12),
    [sym__identifiers] = STATE(16),
    [sym__importfromsource] = STATE(3),
    [sym__importfromfile] = STATE(3),
    [sym__definition] = STATE(3),
    [sym__object_definition] = STATE(3),
    [sym_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__importfromsource_repeat1] = STATE(16),
    [aux_sym__object_definition_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym__import] = STATE(3),
    [sym__key] = STATE(12),
    [sym__identifiers] = STATE(16),
    [sym__importfromsource] = STATE(3),
    [sym__importfromfile] = STATE(3),
    [sym__definition] = STATE(3),
    [sym__object_definition] = STATE(3),
    [sym_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__importfromsource_repeat1] = STATE(16),
    [aux_sym__object_definition_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(20),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(26),
  },
  [4] = {
    [sym__import] = STATE(22),
    [sym__double] = STATE(22),
    [sym__key] = STATE(12),
    [sym__identifiers] = STATE(16),
    [sym__importfromsource] = STATE(22),
    [sym__importfromfile] = STATE(22),
    [sym__definition] = STATE(22),
    [sym__object_definition] = STATE(22),
    [sym_block] = STATE(22),
    [aux_sym__importfromsource_repeat1] = STATE(16),
    [aux_sym__object_definition_repeat1] = STATE(12),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [5] = {
    [sym__import] = STATE(25),
    [sym__double] = STATE(25),
    [sym__key] = STATE(12),
    [sym__identifiers] = STATE(16),
    [sym__importfromsource] = STATE(25),
    [sym__importfromfile] = STATE(25),
    [sym__definition] = STATE(25),
    [sym__object_definition] = STATE(25),
    [sym_block] = STATE(25),
    [aux_sym__importfromsource_repeat1] = STATE(16),
    [aux_sym__object_definition_repeat1] = STATE(12),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(11), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
    STATE(17), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
    STATE(9), 3,
      sym__object_definition,
      sym_block,
      aux_sym_block_repeat1,
  [26] = 7,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
    STATE(17), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
    STATE(8), 3,
      sym__object_definition,
      sym_block,
      aux_sym_block_repeat1,
  [52] = 7,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
    STATE(17), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
    STATE(8), 3,
      sym__object_definition,
      sym_block,
      aux_sym_block_repeat1,
  [78] = 7,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
    STATE(17), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
    STATE(8), 3,
      sym__object_definition,
      sym_block,
      aux_sym_block_repeat1,
  [104] = 7,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
    STATE(17), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
    STATE(7), 3,
      sym__object_definition,
      sym_block,
      aux_sym_block_repeat1,
  [130] = 6,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(31), 1,
      sym_block,
    STATE(14), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
    STATE(21), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
  [151] = 6,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(23), 1,
      sym_block,
    STATE(18), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
    STATE(21), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
  [172] = 4,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_LBRACE,
      sym_number,
    STATE(13), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
  [187] = 5,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(33), 1,
      sym_block,
    STATE(13), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
  [204] = 5,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      sym_number,
    STATE(20), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
  [221] = 5,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(23), 1,
      sym_block,
    STATE(13), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
  [238] = 5,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(31), 1,
      sym_block,
    STATE(13), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
  [255] = 5,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(26), 1,
      sym_block,
    STATE(13), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
  [272] = 2,
    ACTIONS(72), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [282] = 4,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_number,
    STATE(13), 2,
      sym__identifiers,
      aux_sym__importfromsource_repeat1,
  [296] = 3,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(76), 2,
      anon_sym_DOT,
      anon_sym_LBRACE,
    STATE(21), 2,
      sym__key,
      aux_sym__object_definition_repeat1,
  [308] = 2,
    ACTIONS(83), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [318] = 2,
    ACTIONS(87), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [328] = 2,
    ACTIONS(91), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [338] = 2,
    ACTIONS(95), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [348] = 2,
    ACTIONS(99), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [358] = 2,
    ACTIONS(103), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [368] = 2,
    ACTIONS(107), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [378] = 1,
    ACTIONS(109), 4,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
  [385] = 1,
    ACTIONS(70), 4,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [392] = 1,
    ACTIONS(85), 4,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [399] = 1,
    ACTIONS(89), 4,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [406] = 1,
    ACTIONS(97), 4,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [413] = 2,
    ACTIONS(113), 1,
      anon_sym_COLON,
    ACTIONS(111), 3,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_identifier,
  [422] = 1,
    ACTIONS(115), 3,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_identifier,
  [428] = 2,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_number,
  [435] = 1,
    ACTIONS(113), 1,
      anon_sym_COLON,
  [439] = 1,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
  [443] = 1,
    ACTIONS(117), 1,
      sym_identifier,
  [447] = 1,
    ACTIONS(123), 1,
      sym_identifier,
  [451] = 1,
    ACTIONS(125), 1,
      sym_identifier,
  [455] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 172,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 221,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 255,
  [SMALL_STATE(19)] = 272,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 328,
  [SMALL_STATE(25)] = 338,
  [SMALL_STATE(26)] = 348,
  [SMALL_STATE(27)] = 358,
  [SMALL_STATE(28)] = 368,
  [SMALL_STATE(29)] = 378,
  [SMALL_STATE(30)] = 385,
  [SMALL_STATE(31)] = 392,
  [SMALL_STATE(32)] = 399,
  [SMALL_STATE(33)] = 406,
  [SMALL_STATE(34)] = 413,
  [SMALL_STATE(35)] = 422,
  [SMALL_STATE(36)] = 428,
  [SMALL_STATE(37)] = 435,
  [SMALL_STATE(38)] = 439,
  [SMALL_STATE(39)] = 443,
  [SMALL_STATE(40)] = 447,
  [SMALL_STATE(41)] = 451,
  [SMALL_STATE(42)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__importfromsource_repeat1, 2), SHIFT_REPEAT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__importfromsource_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__importfromsource_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_definition_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_definition_repeat1, 2), SHIFT_REPEAT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__importfromsource, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__importfromsource, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_definition, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_definition, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__importfromsource, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__importfromsource, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_definition, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_definition, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__importfromfile, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__importfromfile, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifiers, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifiers, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qml(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
