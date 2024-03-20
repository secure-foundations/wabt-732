/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m 50 -L C++ -N InWordSet -E -t -c --output-file=src/prebuilt/lexer-keywords.cc src/lexer-keywords.txt  */
/* Computed positions: -k'1,3,5-8,10,12,15,17-19,23,27,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "src/lexer-keywords.txt"
struct TokenInfo {
  TokenInfo(const char* name) : name(name) {}
  TokenInfo(const char* name, TokenType token_type)
      : name(name), token_type(token_type) {}
  TokenInfo(const char* name, Type value_type)
      : name(name), token_type(TokenType::ValueType), value_type(value_type) {}
  TokenInfo(const char* name, Type value_type, TokenType token_type)
      : name(name), token_type(token_type), value_type(value_type) {}
  TokenInfo(const char* name, TokenType token_type, Opcode opcode)
      : name(name), token_type(token_type), opcode(opcode) {}

  const char* name;
  TokenType token_type;
  union {
    Type value_type;
    Opcode opcode;
  };
};
/* maximum key range = 2503, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static struct TokenInfo *InWordSet (const char *str, size_t len);
};

inline unsigned int
Perfect_Hash::hash (const char *str, size_t len)
{
  static unsigned short asso_values[] =
    {
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518,    4, 2518, 2518,  494,
       372,    5,    4,    4,  183,  432,   26, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518,  200,    5,   21,  753,   62,
        74,    7,  665,    4,  300,  226,   10,    7,    6,  118,
        43,   70,  614,  423,    5,    6,   15,    4,  654,  479,
        34,  507,   39, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518, 2518,
      2518, 2518, 2518, 2518, 2518, 2518, 2518
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[26])];
      /*FALLTHROUGH*/
      case 26:
      case 25:
      case 24:
      case 23:
        hval += asso_values[static_cast<unsigned char>(str[22])];
      /*FALLTHROUGH*/
      case 22:
      case 21:
      case 20:
      case 19:
        hval += asso_values[static_cast<unsigned char>(str[18])];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[static_cast<unsigned char>(str[17])];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[static_cast<unsigned char>(str[16])];
      /*FALLTHROUGH*/
      case 16:
      case 15:
        hval += asso_values[static_cast<unsigned char>(str[14])];
      /*FALLTHROUGH*/
      case 14:
      case 13:
      case 12:
        hval += asso_values[static_cast<unsigned char>(str[11])];
      /*FALLTHROUGH*/
      case 11:
      case 10:
        hval += asso_values[static_cast<unsigned char>(str[9])];
      /*FALLTHROUGH*/
      case 9:
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7])];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[static_cast<unsigned char>(str[6])];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[static_cast<unsigned char>(str[5])];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2]+1)];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0]+1)];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

struct TokenInfo *
Perfect_Hash::InWordSet (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 595,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 32,
      MIN_HASH_VALUE = 15,
      MAX_HASH_VALUE = 2517
    };

  static struct TokenInfo wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 148 "src/lexer-keywords.txt"
      {"f64", Type::F64},
      {""}, {""}, {""}, {""}, {""},
#line 461 "src/lexer-keywords.txt"
      {"i64", Type::I64},
#line 118 "src/lexer-keywords.txt"
      {"f32x4", TokenType::F32X4},
      {""}, {""}, {""}, {""}, {""},
#line 361 "src/lexer-keywords.txt"
      {"i32x4", TokenType::I32X4},
      {""}, {""}, {""},
#line 131 "src/lexer-keywords.txt"
      {"f64.ge", TokenType::Compare, Opcode::F64Ge},
#line 70 "src/lexer-keywords.txt"
      {"f32.ge", TokenType::Compare, Opcode::F32Ge},
#line 133 "src/lexer-keywords.txt"
      {"f64.le", TokenType::Compare, Opcode::F64Le},
#line 72 "src/lexer-keywords.txt"
      {"f32.le", TokenType::Compare, Opcode::F32Le},
#line 43 "src/lexer-keywords.txt"
      {"data", TokenType::Data},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 96 "src/lexer-keywords.txt"
      {"f32x4.ge", TokenType::Compare, Opcode::F32X4Ge},
      {""},
#line 98 "src/lexer-keywords.txt"
      {"f32x4.le", TokenType::Compare, Opcode::F32X4Le},
      {""}, {""},
#line 132 "src/lexer-keywords.txt"
      {"f64.gt", TokenType::Compare, Opcode::F64Gt},
#line 71 "src/lexer-keywords.txt"
      {"f32.gt", TokenType::Compare, Opcode::F32Gt},
#line 135 "src/lexer-keywords.txt"
      {"f64.lt", TokenType::Compare, Opcode::F64Lt},
#line 74 "src/lexer-keywords.txt"
      {"f32.lt", TokenType::Compare, Opcode::F32Lt},
#line 327 "src/lexer-keywords.txt"
      {"i32x4.ge_u", TokenType::Compare, Opcode::I32X4GeU},
      {""},
#line 331 "src/lexer-keywords.txt"
      {"i32x4.le_u", TokenType::Compare, Opcode::I32X4LeU},
      {""},
#line 326 "src/lexer-keywords.txt"
      {"i32x4.ge_s", TokenType::Compare, Opcode::I32X4GeS},
      {""},
#line 330 "src/lexer-keywords.txt"
      {"i32x4.le_s", TokenType::Compare, Opcode::I32X4LeS},
#line 97 "src/lexer-keywords.txt"
      {"f32x4.gt", TokenType::Compare, Opcode::F32X4Gt},
#line 329 "src/lexer-keywords.txt"
      {"i32x4.gt_u", TokenType::Compare, Opcode::I32X4GtU},
#line 99 "src/lexer-keywords.txt"
      {"f32x4.lt", TokenType::Compare, Opcode::F32X4Lt},
#line 339 "src/lexer-keywords.txt"
      {"i32x4.lt_u", TokenType::Compare, Opcode::I32X4LtU},
#line 566 "src/lexer-keywords.txt"
      {"result", TokenType::Result},
#line 328 "src/lexer-keywords.txt"
      {"i32x4.gt_s", TokenType::Compare, Opcode::I32X4GtS},
#line 552 "src/lexer-keywords.txt"
      {"mut", TokenType::Mut},
#line 338 "src/lexer-keywords.txt"
      {"i32x4.lt_s", TokenType::Compare, Opcode::I32X4LtS},
      {""}, {""},
#line 35 "src/lexer-keywords.txt"
      {"br", TokenType::Br, Opcode::Br},
      {""},
#line 141 "src/lexer-keywords.txt"
      {"f64.ne", TokenType::Compare, Opcode::F64Ne},
#line 80 "src/lexer-keywords.txt"
      {"f32.ne", TokenType::Compare, Opcode::F32Ne},
#line 140 "src/lexer-keywords.txt"
      {"f64.neg", TokenType::Unary, Opcode::F64Neg},
#line 79 "src/lexer-keywords.txt"
      {"f32.neg", TokenType::Unary, Opcode::F32Neg},
      {""},
#line 551 "src/lexer-keywords.txt"
      {"module", TokenType::Module},
#line 437 "src/lexer-keywords.txt"
      {"i64.ne", TokenType::Compare, Opcode::I64Ne},
#line 294 "src/lexer-keywords.txt"
      {"i32.ne", TokenType::Compare, Opcode::I32Ne},
#line 46 "src/lexer-keywords.txt"
      {"do", TokenType::Do},
#line 104 "src/lexer-keywords.txt"
      {"f32x4.neg", TokenType::Unary, Opcode::F32X4Neg},
      {""},
#line 105 "src/lexer-keywords.txt"
      {"f32x4.ne", TokenType::Compare, Opcode::F32X4Ne},
#line 564 "src/lexer-keywords.txt"
      {"ref.null", TokenType::RefNull, Opcode::RefNull},
      {""},
#line 582 "src/lexer-keywords.txt"
      {"table", TokenType::Table},
#line 346 "src/lexer-keywords.txt"
      {"i32x4.neg", TokenType::Unary, Opcode::I32X4Neg},
      {""},
#line 347 "src/lexer-keywords.txt"
      {"i32x4.ne", TokenType::Compare, Opcode::I32X4Ne},
      {""}, {""},
#line 30 "src/lexer-keywords.txt"
      {"before", TokenType::Before},
#line 41 "src/lexer-keywords.txt"
      {"code", TokenType::Code},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 438 "src/lexer-keywords.txt"
      {"i64.or", TokenType::Binary, Opcode::I64Or},
#line 295 "src/lexer-keywords.txt"
      {"i32.or", TokenType::Binary, Opcode::I32Or},
      {""}, {""}, {""}, {""},
#line 103 "src/lexer-keywords.txt"
      {"f32x4.nearest", TokenType::Unary, Opcode::F32X4Nearest},
#line 570 "src/lexer-keywords.txt"
      {"return", TokenType::Return, Opcode::Return},
#line 89 "src/lexer-keywords.txt"
      {"f32x4.ceil", TokenType::Unary, Opcode::F32X4Ceil},
      {""}, {""}, {""},
#line 577 "src/lexer-keywords.txt"
      {"table.get", TokenType::TableGet, Opcode::TableGet},
      {""},
#line 580 "src/lexer-keywords.txt"
      {"table.set", TokenType::TableSet, Opcode::TableSet},
      {""},
#line 139 "src/lexer-keywords.txt"
      {"f64.nearest", TokenType::Unary, Opcode::F64Nearest},
#line 78 "src/lexer-keywords.txt"
      {"f32.nearest", TokenType::Unary, Opcode::F32Nearest},
      {""},
#line 574 "src/lexer-keywords.txt"
      {"struct", Type::Struct, TokenType::Struct},
#line 145 "src/lexer-keywords.txt"
      {"f64.store", TokenType::Store, Opcode::F64Store},
#line 83 "src/lexer-keywords.txt"
      {"f32.store", TokenType::Store, Opcode::F32Store},
#line 444 "src/lexer-keywords.txt"
      {"i64.rotr", TokenType::Binary, Opcode::I64Rotr},
#line 301 "src/lexer-keywords.txt"
      {"i32.rotr", TokenType::Binary, Opcode::I32Rotr},
#line 443 "src/lexer-keywords.txt"
      {"i64.rotl", TokenType::Binary, Opcode::I64Rotl},
#line 300 "src/lexer-keywords.txt"
      {"i32.rotl", TokenType::Binary, Opcode::I32Rotl},
#line 451 "src/lexer-keywords.txt"
      {"i64.store", TokenType::Store, Opcode::I64Store},
#line 307 "src/lexer-keywords.txt"
      {"i32.store", TokenType::Store, Opcode::I32Store},
#line 44 "src/lexer-keywords.txt"
      {"declare", TokenType::Declare},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 493 "src/lexer-keywords.txt"
      {"i64.xor", TokenType::Binary, Opcode::I64Xor},
#line 370 "src/lexer-keywords.txt"
      {"i32.xor", TokenType::Binary, Opcode::I32Xor},
      {""}, {""}, {""},
#line 183 "src/lexer-keywords.txt"
      {"func", Type::FuncRef, TokenType::Func},
      {""}, {""}, {""}, {""}, {""},
#line 147 "src/lexer-keywords.txt"
      {"f64.trunc", TokenType::Unary, Opcode::F64Trunc},
#line 85 "src/lexer-keywords.txt"
      {"f32.trunc", TokenType::Unary, Opcode::F32Trunc},
      {""},
#line 138 "src/lexer-keywords.txt"
      {"f64.mul", TokenType::Binary, Opcode::F64Mul},
#line 77 "src/lexer-keywords.txt"
      {"f32.mul", TokenType::Binary, Opcode::F32Mul},
      {""}, {""},
#line 116 "src/lexer-keywords.txt"
      {"f32x4.trunc", TokenType::Unary, Opcode::F32X4Trunc},
#line 102 "src/lexer-keywords.txt"
      {"f32x4.mul", TokenType::Binary, Opcode::F32X4Mul},
#line 436 "src/lexer-keywords.txt"
      {"i64.mul", TokenType::Binary, Opcode::I64Mul},
#line 292 "src/lexer-keywords.txt"
      {"i32.mul", TokenType::Binary, Opcode::I32Mul},
      {""}, {""}, {""},
#line 345 "src/lexer-keywords.txt"
      {"i32x4.mul", TokenType::Binary, Opcode::I32X4Mul},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 409 "src/lexer-keywords.txt"
      {"i64.clz", TokenType::Unary, Opcode::I64Clz},
#line 270 "src/lexer-keywords.txt"
      {"i32.clz", TokenType::Unary, Opcode::I32Clz},
#line 561 "src/lexer-keywords.txt"
      {"ref.extern", TokenType::RefExtern},
      {""}, {""},
#line 450 "src/lexer-keywords.txt"
      {"i64.store8", TokenType::Store, Opcode::I64Store8},
#line 306 "src/lexer-keywords.txt"
      {"i32.store8", TokenType::Store, Opcode::I32Store8},
      {""}, {""},
#line 411 "src/lexer-keywords.txt"
      {"i64.ctz", TokenType::Unary, Opcode::I64Ctz},
#line 272 "src/lexer-keywords.txt"
      {"i32.ctz", TokenType::Unary, Opcode::I32Ctz},
#line 112 "src/lexer-keywords.txt"
      {"f32x4.replace_lane", TokenType::SimdLaneOp, Opcode::F32X4ReplaceLane},
      {""}, {""}, {""}, {""}, {""},
#line 349 "src/lexer-keywords.txt"
      {"i32x4.replace_lane", TokenType::SimdLaneOp, Opcode::I32X4ReplaceLane},
      {""}, {""},
#line 45 "src/lexer-keywords.txt"
      {"delegate", TokenType::Delegate},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 88 "src/lexer-keywords.txt"
      {"f32x4.add", TokenType::Binary, Opcode::F32X4Add},
      {""}, {""}, {""},
#line 100 "src/lexer-keywords.txt"
      {"f32x4.max", TokenType::Binary, Opcode::F32X4Max},
      {""},
#line 320 "src/lexer-keywords.txt"
      {"i32x4.add", TokenType::Binary, Opcode::I32X4Add},
#line 38 "src/lexer-keywords.txt"
      {"call", TokenType::Call, Opcode::Call},
      {""}, {""}, {""},
#line 94 "src/lexer-keywords.txt"
      {"f32x4.extract_lane", TokenType::SimdLaneOp, Opcode::F32X4ExtractLane},
      {""}, {""},
#line 540 "src/lexer-keywords.txt"
      {"local", TokenType::Local},
      {""}, {""},
#line 325 "src/lexer-keywords.txt"
      {"i32x4.extract_lane", TokenType::SimdLaneOp, Opcode::I32X4ExtractLane},
#line 122 "src/lexer-keywords.txt"
      {"f64.const", TokenType::Const, Opcode::F64Const},
#line 60 "src/lexer-keywords.txt"
      {"f32.const", TokenType::Const, Opcode::F32Const},
      {""}, {""}, {""}, {""},
#line 410 "src/lexer-keywords.txt"
      {"i64.const", TokenType::Const, Opcode::I64Const},
#line 271 "src/lexer-keywords.txt"
      {"i32.const", TokenType::Const, Opcode::I32Const},
      {""},
#line 136 "src/lexer-keywords.txt"
      {"f64.max", TokenType::Binary, Opcode::F64Max},
#line 75 "src/lexer-keywords.txt"
      {"f32.max", TokenType::Binary, Opcode::F32Max},
      {""}, {""},
#line 348 "src/lexer-keywords.txt"
      {"i32x4.relaxed_laneselect", TokenType::Ternary, Opcode::I32X4RelaxedLaneSelect},
      {""}, {""}, {""}, {""},
#line 571 "src/lexer-keywords.txt"
      {"select", TokenType::Select, Opcode::Select},
      {""},
#line 372 "src/lexer-keywords.txt"
      {"i64.and", TokenType::Binary, Opcode::I64And},
#line 242 "src/lexer-keywords.txt"
      {"i32.and", TokenType::Binary, Opcode::I32And},
      {""}, {""},
#line 537 "src/lexer-keywords.txt"
      {"local.get", TokenType::LocalGet, Opcode::LocalGet},
      {""},
#line 538 "src/lexer-keywords.txt"
      {"local.set", TokenType::LocalSet, Opcode::LocalSet},
#line 539 "src/lexer-keywords.txt"
      {"local.tee", TokenType::LocalTee, Opcode::LocalTee},
#line 422 "src/lexer-keywords.txt"
      {"i64.ge_u", TokenType::Compare, Opcode::I64GeU},
#line 280 "src/lexer-keywords.txt"
      {"i32.ge_u", TokenType::Compare, Opcode::I32GeU},
#line 426 "src/lexer-keywords.txt"
      {"i64.le_u", TokenType::Compare, Opcode::I64LeU},
#line 284 "src/lexer-keywords.txt"
      {"i32.le_u", TokenType::Compare, Opcode::I32LeU},
#line 421 "src/lexer-keywords.txt"
      {"i64.ge_s", TokenType::Compare, Opcode::I64GeS},
#line 279 "src/lexer-keywords.txt"
      {"i32.ge_s", TokenType::Compare, Opcode::I32GeS},
#line 425 "src/lexer-keywords.txt"
      {"i64.le_s", TokenType::Compare, Opcode::I64LeS},
#line 283 "src/lexer-keywords.txt"
      {"i32.le_s", TokenType::Compare, Opcode::I32LeS},
#line 424 "src/lexer-keywords.txt"
      {"i64.gt_u", TokenType::Compare, Opcode::I64GtU},
#line 282 "src/lexer-keywords.txt"
      {"i32.gt_u", TokenType::Compare, Opcode::I32GtU},
#line 435 "src/lexer-keywords.txt"
      {"i64.lt_u", TokenType::Compare, Opcode::I64LtU},
#line 291 "src/lexer-keywords.txt"
      {"i32.lt_u", TokenType::Compare, Opcode::I32LtU},
#line 423 "src/lexer-keywords.txt"
      {"i64.gt_s", TokenType::Compare, Opcode::I64GtS},
#line 281 "src/lexer-keywords.txt"
      {"i32.gt_s", TokenType::Compare, Opcode::I32GtS},
#line 434 "src/lexer-keywords.txt"
      {"i64.lt_s", TokenType::Compare, Opcode::I64LtS},
#line 290 "src/lexer-keywords.txt"
      {"i32.lt_s", TokenType::Compare, Opcode::I32LtS},
      {""},
#line 120 "src/lexer-keywords.txt"
      {"f64.add", TokenType::Binary, Opcode::F64Add},
#line 58 "src/lexer-keywords.txt"
      {"f32.add", TokenType::Binary, Opcode::F32Add},
#line 109 "src/lexer-keywords.txt"
      {"f32x4.relaxed_max", TokenType::Binary, Opcode::F32X4RelaxedMax},
#line 134 "src/lexer-keywords.txt"
      {"f64.load", TokenType::Load, Opcode::F64Load},
#line 73 "src/lexer-keywords.txt"
      {"f32.load", TokenType::Load, Opcode::F32Load},
      {""},
#line 371 "src/lexer-keywords.txt"
      {"i64.add", TokenType::Binary, Opcode::I64Add},
#line 241 "src/lexer-keywords.txt"
      {"i32.add", TokenType::Binary, Opcode::I32Add},
      {""},
#line 433 "src/lexer-keywords.txt"
      {"i64.load", TokenType::Load, Opcode::I64Load},
#line 289 "src/lexer-keywords.txt"
      {"i32.load", TokenType::Load, Opcode::I32Load},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 321 "src/lexer-keywords.txt"
      {"i32x4.all_true", TokenType::Unary, Opcode::I32X4AllTrue},
      {""},
#line 110 "src/lexer-keywords.txt"
      {"f32x4.relaxed_min", TokenType::Binary, Opcode::F32X4RelaxedMin},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 335 "src/lexer-keywords.txt"
      {"i32x4.relaxed_trunc_f64x2_u_zero", TokenType::Unary, Opcode::I32X4RelaxedTruncF64X2UZero},
      {""},
#line 334 "src/lexer-keywords.txt"
      {"i32x4.relaxed_trunc_f64x2_s_zero", TokenType::Unary, Opcode::I32X4RelaxedTruncF64X2SZero},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 454 "src/lexer-keywords.txt"
      {"i64.trunc_f32_u", TokenType::Convert, Opcode::I64TruncF32U},
#line 310 "src/lexer-keywords.txt"
      {"i32.trunc_f32_u", TokenType::Convert, Opcode::I32TruncF32U},
#line 53 "src/lexer-keywords.txt"
      {"tag", TokenType::Tag},
      {""},
#line 453 "src/lexer-keywords.txt"
      {"i64.trunc_f32_s", TokenType::Convert, Opcode::I64TruncF32S},
#line 309 "src/lexer-keywords.txt"
      {"i32.trunc_f32_s", TokenType::Convert, Opcode::I32TruncF32S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 185 "src/lexer-keywords.txt"
      {"get", TokenType::Get},
#line 121 "src/lexer-keywords.txt"
      {"f64.ceil", TokenType::Unary, Opcode::F64Ceil},
#line 59 "src/lexer-keywords.txt"
      {"f32.ceil", TokenType::Unary, Opcode::F32Ceil},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 581 "src/lexer-keywords.txt"
      {"table.size", TokenType::TableSize, Opcode::TableSize},
#line 408 "src/lexer-keywords.txt"
      {"i64.atomic.store", TokenType::AtomicStore, Opcode::I64AtomicStore},
#line 269 "src/lexer-keywords.txt"
      {"i32.atomic.store", TokenType::AtomicStore, Opcode::I32AtomicStore},
#line 401 "src/lexer-keywords.txt"
      {"i64.atomic.rmw.or", TokenType::AtomicRmw, Opcode::I64AtomicRmwOr},
#line 263 "src/lexer-keywords.txt"
      {"i32.atomic.rmw.or", TokenType::AtomicRmw, Opcode::I32AtomicRmwOr},
      {""},
#line 445 "src/lexer-keywords.txt"
      {"i64.shl", TokenType::Binary, Opcode::I64Shl},
#line 302 "src/lexer-keywords.txt"
      {"i32.shl", TokenType::Binary, Opcode::I32Shl},
      {""}, {""},
#line 569 "src/lexer-keywords.txt"
      {"return_call", TokenType::ReturnCall, Opcode::ReturnCall},
#line 350 "src/lexer-keywords.txt"
      {"i32x4.shl", TokenType::Binary, Opcode::I32X4Shl},
      {""}, {""}, {""}, {""}, {""},
#line 388 "src/lexer-keywords.txt"
      {"i64.atomic.rmw32.sub_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw32SubU},
      {""},
#line 565 "src/lexer-keywords.txt"
      {"register", TokenType::Register},
      {""},
#line 416 "src/lexer-keywords.txt"
      {"i64.extend16_s", TokenType::Unary, Opcode::I64Extend16S},
#line 277 "src/lexer-keywords.txt"
      {"i32.extend16_s", TokenType::Unary, Opcode::I32Extend16S},
      {""},
#line 442 "src/lexer-keywords.txt"
      {"i64.rem_u", TokenType::Binary, Opcode::I64RemU},
#line 299 "src/lexer-keywords.txt"
      {"i32.rem_u", TokenType::Binary, Opcode::I32RemU},
#line 441 "src/lexer-keywords.txt"
      {"i64.rem_s", TokenType::Binary, Opcode::I64RemS},
#line 298 "src/lexer-keywords.txt"
      {"i32.rem_s", TokenType::Binary, Opcode::I32RemS},
      {""},
#line 111 "src/lexer-keywords.txt"
      {"f32x4.relaxed_nmadd", TokenType::Ternary, Opcode::F32X4RelaxedNmadd},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 418 "src/lexer-keywords.txt"
      {"i64.extend8_s", TokenType::Unary, Opcode::I64Extend8S},
#line 278 "src/lexer-keywords.txt"
      {"i32.extend8_s", TokenType::Unary, Opcode::I32Extend8S},
      {""}, {""}, {""}, {""}, {""},
#line 341 "src/lexer-keywords.txt"
      {"i32x4.max_u", TokenType::Binary, Opcode::I32X4MaxU},
      {""},
#line 340 "src/lexer-keywords.txt"
      {"i32x4.max_s", TokenType::Binary, Opcode::I32X4MaxS},
#line 407 "src/lexer-keywords.txt"
      {"i64.atomic.store8", TokenType::AtomicStore, Opcode::I64AtomicStore8},
#line 268 "src/lexer-keywords.txt"
      {"i32.atomic.store8", TokenType::AtomicStore, Opcode::I32AtomicStore8},
      {""}, {""},
#line 86 "src/lexer-keywords.txt"
      {"f32", Type::F32},
      {""},
#line 579 "src/lexer-keywords.txt"
      {"table.init", TokenType::TableInit, Opcode::TableInit},
      {""},
#line 428 "src/lexer-keywords.txt"
      {"i64.load16_u", TokenType::Load, Opcode::I64Load16U},
#line 286 "src/lexer-keywords.txt"
      {"i32.load16_u", TokenType::Load, Opcode::I32Load16U},
#line 317 "src/lexer-keywords.txt"
      {"i32", Type::I32},
      {""},
#line 427 "src/lexer-keywords.txt"
      {"i64.load16_s", TokenType::Load, Opcode::I64Load16S},
#line 285 "src/lexer-keywords.txt"
      {"i32.load16_s", TokenType::Load, Opcode::I32Load16S},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 432 "src/lexer-keywords.txt"
      {"i64.load8_u", TokenType::Load, Opcode::I64Load8U},
#line 288 "src/lexer-keywords.txt"
      {"i32.load8_u", TokenType::Load, Opcode::I32Load8U},
#line 431 "src/lexer-keywords.txt"
      {"i64.load8_s", TokenType::Load, Opcode::I64Load8S},
#line 287 "src/lexer-keywords.txt"
      {"i32.load8_s", TokenType::Load, Opcode::I32Load8S},
#line 385 "src/lexer-keywords.txt"
      {"i64.atomic.rmw32.and_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw32AndU},
      {""}, {""},
#line 404 "src/lexer-keywords.txt"
      {"i64.atomic.rmw.xor", TokenType::AtomicRmw, Opcode::I64AtomicRmwXor},
#line 266 "src/lexer-keywords.txt"
      {"i32.atomic.rmw.xor", TokenType::AtomicRmw, Opcode::I32AtomicRmwXor},
      {""},
#line 156 "src/lexer-keywords.txt"
      {"f64x2.ge", TokenType::Compare, Opcode::F64X2Ge},
      {""},
#line 158 "src/lexer-keywords.txt"
      {"f64x2.le", TokenType::Compare, Opcode::F64X2Le},
#line 101 "src/lexer-keywords.txt"
      {"f32x4.min", TokenType::Binary, Opcode::F32X4Min},
#line 387 "src/lexer-keywords.txt"
      {"i64.atomic.rmw32.or_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw32OrU},
#line 108 "src/lexer-keywords.txt"
      {"f32x4.relaxed_madd", TokenType::Ternary, Opcode::F32X4RelaxedMadd},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 472 "src/lexer-keywords.txt"
      {"i64x2.ge_s", TokenType::Binary, Opcode::I64X2GeS},
      {""},
#line 471 "src/lexer-keywords.txt"
      {"i64x2.le_s", TokenType::Binary, Opcode::I64X2LeS},
#line 157 "src/lexer-keywords.txt"
      {"f64x2.gt", TokenType::Compare, Opcode::F64X2Gt},
      {""},
#line 159 "src/lexer-keywords.txt"
      {"f64x2.lt", TokenType::Compare, Opcode::F64X2Lt},
      {""}, {""},
#line 470 "src/lexer-keywords.txt"
      {"i64x2.gt_s", TokenType::Binary, Opcode::I64X2GtS},
      {""},
#line 469 "src/lexer-keywords.txt"
      {"i64x2.lt_s", TokenType::Binary, Opcode::I64X2LtS},
      {""},
#line 384 "src/lexer-keywords.txt"
      {"i64.atomic.rmw32.add_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw32AddU},
      {""}, {""},
#line 586 "src/lexer-keywords.txt"
      {"type", TokenType::Type},
      {""}, {""},
#line 389 "src/lexer-keywords.txt"
      {"i64.atomic.rmw32.xchg_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw32XchgU},
      {""}, {""},
#line 390 "src/lexer-keywords.txt"
      {"i64.atomic.rmw32.xor_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw32XorU},
#line 137 "src/lexer-keywords.txt"
      {"f64.min", TokenType::Binary, Opcode::F64Min},
#line 76 "src/lexer-keywords.txt"
      {"f32.min", TokenType::Binary, Opcode::F32Min},
#line 164 "src/lexer-keywords.txt"
      {"f64x2.neg", TokenType::Unary, Opcode::F64X2Neg},
      {""},
#line 165 "src/lexer-keywords.txt"
      {"f64x2.ne", TokenType::Compare, Opcode::F64X2Ne},
      {""}, {""}, {""},
#line 474 "src/lexer-keywords.txt"
      {"i64x2.neg", TokenType::Unary, Opcode::I64X2Neg},
      {""},
#line 468 "src/lexer-keywords.txt"
      {"i64x2.ne", TokenType::Binary, Opcode::I64X2Ne},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 397 "src/lexer-keywords.txt"
      {"i64.atomic.rmw8.xor_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw8XorU},
#line 259 "src/lexer-keywords.txt"
      {"i32.atomic.rmw8.xor_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw8XorU},
      {""},
#line 534 "src/lexer-keywords.txt"
      {"input", TokenType::Input},
#line 376 "src/lexer-keywords.txt"
      {"i64.atomic.load", TokenType::AtomicLoad, Opcode::I64AtomicLoad},
#line 245 "src/lexer-keywords.txt"
      {"i32.atomic.load", TokenType::AtomicLoad, Opcode::I32AtomicLoad},
      {""}, {""},
#line 163 "src/lexer-keywords.txt"
      {"f64x2.nearest", TokenType::Unary, Opcode::F64X2Nearest},
#line 533 "src/lexer-keywords.txt"
      {"import", TokenType::Import},
#line 151 "src/lexer-keywords.txt"
      {"f64x2.ceil", TokenType::Unary, Opcode::F64X2Ceil},
      {""}, {""}, {""},
#line 184 "src/lexer-keywords.txt"
      {"function", TokenType::Function},
#line 144 "src/lexer-keywords.txt"
      {"f64.sqrt", TokenType::Unary, Opcode::F64Sqrt},
#line 82 "src/lexer-keywords.txt"
      {"f32.sqrt", TokenType::Unary, Opcode::F32Sqrt},
      {""}, {""}, {""}, {""},
#line 114 "src/lexer-keywords.txt"
      {"f32x4.sqrt", TokenType::Unary, Opcode::F32X4Sqrt},
#line 456 "src/lexer-keywords.txt"
      {"i64.trunc_f64_u", TokenType::Convert, Opcode::I64TruncF64U},
#line 312 "src/lexer-keywords.txt"
      {"i32.trunc_f64_u", TokenType::Convert, Opcode::I32TruncF64U},
      {""}, {""},
#line 455 "src/lexer-keywords.txt"
      {"i64.trunc_f64_s", TokenType::Convert, Opcode::I64TruncF64S},
#line 311 "src/lexer-keywords.txt"
      {"i32.trunc_f64_s", TokenType::Convert, Opcode::I32TruncF64S},
      {""},
#line 392 "src/lexer-keywords.txt"
      {"i64.atomic.rmw8.and_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw8AndU},
#line 254 "src/lexer-keywords.txt"
      {"i32.atomic.rmw8.and_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw8AndU},
      {""}, {""},
#line 449 "src/lexer-keywords.txt"
      {"i64.store32", TokenType::Store, Opcode::I64Store32},
#line 236 "src/lexer-keywords.txt"
      {"i16x8", TokenType::I16X8},
      {""},
#line 201 "src/lexer-keywords.txt"
      {"i16x8.ge_u", TokenType::Compare, Opcode::I16X8GeU},
#line 293 "src/lexer-keywords.txt"
      {"i32.mul_add", TokenType::Ternary, Opcode::I32MulAdd},
#line 205 "src/lexer-keywords.txt"
      {"i16x8.le_u", TokenType::Compare, Opcode::I16X8LeU},
      {""},
#line 200 "src/lexer-keywords.txt"
      {"i16x8.ge_s", TokenType::Compare, Opcode::I16X8GeS},
      {""},
#line 204 "src/lexer-keywords.txt"
      {"i16x8.le_s", TokenType::Compare, Opcode::I16X8LeS},
#line 563 "src/lexer-keywords.txt"
      {"ref.is_null", TokenType::RefIsNull, Opcode::RefIsNull},
#line 203 "src/lexer-keywords.txt"
      {"i16x8.gt_u", TokenType::Compare, Opcode::I16X8GtU},
      {""},
#line 209 "src/lexer-keywords.txt"
      {"i16x8.lt_u", TokenType::Compare, Opcode::I16X8LtU},
      {""},
#line 202 "src/lexer-keywords.txt"
      {"i16x8.gt_s", TokenType::Compare, Opcode::I16X8GtS},
#line 599 "src/lexer-keywords.txt"
      {"v128", Type::V128},
#line 208 "src/lexer-keywords.txt"
      {"i16x8.lt_s", TokenType::Compare, Opcode::I16X8LtS},
#line 535 "src/lexer-keywords.txt"
      {"invoke", TokenType::Invoke},
      {""},
#line 399 "src/lexer-keywords.txt"
      {"i64.atomic.rmw.and", TokenType::AtomicRmw, Opcode::I64AtomicRmwAnd},
#line 261 "src/lexer-keywords.txt"
      {"i32.atomic.rmw.and", TokenType::AtomicRmw, Opcode::I32AtomicRmwAnd},
#line 176 "src/lexer-keywords.txt"
      {"f64x2.trunc", TokenType::Unary, Opcode::F64X2Trunc},
#line 162 "src/lexer-keywords.txt"
      {"f64x2.mul", TokenType::Binary, Opcode::F64X2Mul},
      {""}, {""}, {""},
#line 391 "src/lexer-keywords.txt"
      {"i64.atomic.rmw8.add_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw8AddU},
#line 253 "src/lexer-keywords.txt"
      {"i32.atomic.rmw8.add_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw8AddU},
#line 466 "src/lexer-keywords.txt"
      {"i64x2.mul", TokenType::Binary, Opcode::I64X2Mul},
      {""},
#line 415 "src/lexer-keywords.txt"
      {"i64.eqz", TokenType::Convert, Opcode::I64Eqz},
#line 276 "src/lexer-keywords.txt"
      {"i32.eqz", TokenType::Convert, Opcode::I32Eqz},
      {""}, {""}, {""}, {""},
#line 217 "src/lexer-keywords.txt"
      {"i16x8.neg", TokenType::Unary, Opcode::I16X8Neg},
      {""},
#line 219 "src/lexer-keywords.txt"
      {"i16x8.ne", TokenType::Compare, Opcode::I16X8Ne},
#line 447 "src/lexer-keywords.txt"
      {"i64.shr_u", TokenType::Binary, Opcode::I64ShrU},
#line 304 "src/lexer-keywords.txt"
      {"i32.shr_u", TokenType::Binary, Opcode::I32ShrU},
#line 446 "src/lexer-keywords.txt"
      {"i64.shr_s", TokenType::Binary, Opcode::I64ShrS},
#line 303 "src/lexer-keywords.txt"
      {"i32.shr_s", TokenType::Binary, Opcode::I32ShrS},
      {""},
#line 417 "src/lexer-keywords.txt"
      {"i64.extend32_s", TokenType::Unary, Opcode::I64Extend32S},
#line 352 "src/lexer-keywords.txt"
      {"i32x4.shr_u", TokenType::Binary, Opcode::I32X4ShrU},
#line 172 "src/lexer-keywords.txt"
      {"f64x2.replace_lane", TokenType::SimdLaneOp, Opcode::F64X2ReplaceLane},
#line 351 "src/lexer-keywords.txt"
      {"i32x4.shr_s", TokenType::Binary, Opcode::I32X4ShrS},
      {""}, {""},
#line 398 "src/lexer-keywords.txt"
      {"i64.atomic.rmw.add", TokenType::AtomicRmw, Opcode::I64AtomicRmwAdd},
#line 260 "src/lexer-keywords.txt"
      {"i32.atomic.rmw.add", TokenType::AtomicRmw, Opcode::I32AtomicRmwAdd},
#line 482 "src/lexer-keywords.txt"
      {"i64x2.replace_lane", TokenType::SimdLaneOp, Opcode::I64X2ReplaceLane},
      {""},
#line 585 "src/lexer-keywords.txt"
      {"try", TokenType::Try, Opcode::Try},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 150 "src/lexer-keywords.txt"
      {"f64x2.add", TokenType::Binary, Opcode::F64X2Add},
      {""}, {""}, {""},
#line 160 "src/lexer-keywords.txt"
      {"f64x2.max", TokenType::Binary, Opcode::F64X2Max},
      {""},
#line 462 "src/lexer-keywords.txt"
      {"i64x2.add", TokenType::Binary, Opcode::I64X2Add},
      {""}, {""}, {""}, {""},
#line 154 "src/lexer-keywords.txt"
      {"f64x2.extract_lane", TokenType::SimdLaneOp, Opcode::F64X2ExtractLane},
      {""},
#line 594 "src/lexer-keywords.txt"
      {"v128.or", TokenType::Binary, Opcode::V128Or},
      {""},
#line 430 "src/lexer-keywords.txt"
      {"i64.load32_u", TokenType::Load, Opcode::I64Load32U},
      {""},
#line 463 "src/lexer-keywords.txt"
      {"i64x2.extract_lane", TokenType::SimdLaneOp, Opcode::I64X2ExtractLane},
      {""},
#line 429 "src/lexer-keywords.txt"
      {"i64.load32_s", TokenType::Load, Opcode::I64Load32S},
#line 343 "src/lexer-keywords.txt"
      {"i32x4.min_u", TokenType::Binary, Opcode::I32X4MinU},
      {""},
#line 342 "src/lexer-keywords.txt"
      {"i32x4.min_s", TokenType::Binary, Opcode::I32X4MinS},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 481 "src/lexer-keywords.txt"
      {"i64x2.relaxed_laneselect", TokenType::Ternary, Opcode::I64X2RelaxedLaneSelect},
#line 333 "src/lexer-keywords.txt"
      {"i32x4.relaxed_trunc_f32x4_u", TokenType::Unary, Opcode::I32X4RelaxedTruncF32X4U},
      {""}, {""},
#line 420 "src/lexer-keywords.txt"
      {"i64.extend_i32_u", TokenType::Convert, Opcode::I64ExtendI32U},
#line 332 "src/lexer-keywords.txt"
      {"i32x4.relaxed_trunc_f32x4_s", TokenType::Unary, Opcode::I32X4RelaxedTruncF32X4S},
#line 419 "src/lexer-keywords.txt"
      {"i64.extend_i32_s", TokenType::Convert, Opcode::I64ExtendI32S},
      {""}, {""},
#line 554 "src/lexer-keywords.txt"
      {"nan:canonical", TokenType::NanCanonical},
#line 598 "src/lexer-keywords.txt"
      {"v128.store", TokenType::Store, Opcode::V128Store},
      {""}, {""},
#line 375 "src/lexer-keywords.txt"
      {"i64.atomic.load8_u", TokenType::AtomicLoad, Opcode::I64AtomicLoad8U},
#line 244 "src/lexer-keywords.txt"
      {"i32.atomic.load8_u", TokenType::AtomicLoad, Opcode::I32AtomicLoad8U},
      {""},
#line 214 "src/lexer-keywords.txt"
      {"i16x8.mul", TokenType::Binary, Opcode::I16X8Mul},
#line 600 "src/lexer-keywords.txt"
      {"v128.xor", TokenType::Binary, Opcode::V128Xor},
      {""}, {""}, {""}, {""}, {""},
#line 553 "src/lexer-keywords.txt"
      {"nan:arithmetic", TokenType::NanArithmetic},
      {""}, {""}, {""},
#line 40 "src/lexer-keywords.txt"
      {"catch_all", TokenType::CatchAll, Opcode::CatchAll},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 169 "src/lexer-keywords.txt"
      {"f64x2.relaxed_max", TokenType::Binary, Opcode::F64X2RelaxedMax},
      {""}, {""},
#line 394 "src/lexer-keywords.txt"
      {"i64.atomic.rmw8.or_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw8OrU},
#line 256 "src/lexer-keywords.txt"
      {"i32.atomic.rmw8.or_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw8OrU},
      {""},
#line 222 "src/lexer-keywords.txt"
      {"i16x8.replace_lane", TokenType::SimdLaneOp, Opcode::I16X8ReplaceLane},
      {""}, {""}, {""}, {""},
#line 560 "src/lexer-keywords.txt"
      {"quote", TokenType::Quote},
#line 593 "src/lexer-keywords.txt"
      {"v128.not", TokenType::Unary, Opcode::V128Not},
      {""}, {""},
#line 612 "src/lexer-keywords.txt"
      {"v128.store64_lane", TokenType::SimdStoreLane, Opcode::V128Store64Lane},
#line 475 "src/lexer-keywords.txt"
      {"i64x2.all_true", TokenType::Unary, Opcode::I64X2AllTrue},
      {""},
#line 170 "src/lexer-keywords.txt"
      {"f64x2.relaxed_min", TokenType::Binary, Opcode::F64X2RelaxedMin},
#line 605 "src/lexer-keywords.txt"
      {"v128.load8_lane", TokenType::SimdLoadLane, Opcode::V128Load8Lane},
#line 465 "src/lexer-keywords.txt"
      {"v128.load32x2_u", TokenType::Load, Opcode::V128Load32X2U},
      {""}, {""},
#line 192 "src/lexer-keywords.txt"
      {"i16x8.add", TokenType::Binary, Opcode::I16X8Add},
#line 464 "src/lexer-keywords.txt"
      {"v128.load32x2_s", TokenType::Load, Opcode::V128Load32X2S},
      {""}, {""}, {""},
#line 207 "src/lexer-keywords.txt"
      {"v128.load8x8_u", TokenType::Load, Opcode::V128Load8X8U},
      {""},
#line 206 "src/lexer-keywords.txt"
      {"v128.load8x8_s", TokenType::Load, Opcode::V128Load8X8S},
#line 557 "src/lexer-keywords.txt"
      {"output", TokenType::Output},
      {""}, {""},
#line 556 "src/lexer-keywords.txt"
      {"offset", TokenType::Offset},
      {""}, {""}, {""},
#line 549 "src/lexer-keywords.txt"
      {"memory.size", TokenType::MemorySize, Opcode::MemorySize},
      {""}, {""},
#line 592 "src/lexer-keywords.txt"
      {"v128.load", TokenType::Load, Opcode::V128Load},
#line 604 "src/lexer-keywords.txt"
      {"v128.load8_splat", TokenType::Load, Opcode::V128Load8Splat},
#line 558 "src/lexer-keywords.txt"
      {"param", TokenType::Param},
      {""}, {""}, {""}, {""},
#line 220 "src/lexer-keywords.txt"
      {"i16x8.relaxed_laneselect", TokenType::Ternary, Opcode::I16X8RelaxedLaneSelect},
      {""},
#line 532 "src/lexer-keywords.txt"
      {"if", TokenType::If, Opcode::If},
#line 559 "src/lexer-keywords.txt"
      {"ref", TokenType::Ref},
      {""}, {""}, {""}, {""},
#line 39 "src/lexer-keywords.txt"
      {"catch", TokenType::Catch, Opcode::Catch},
#line 113 "src/lexer-keywords.txt"
      {"f32x4.splat", TokenType::Unary, Opcode::F32X4Splat},
      {""}, {""}, {""}, {""}, {""},
#line 353 "src/lexer-keywords.txt"
      {"i32x4.splat", TokenType::Unary, Opcode::I32X4Splat},
#line 51 "src/lexer-keywords.txt"
      {"else", TokenType::Else, Opcode::Else},
#line 48 "src/lexer-keywords.txt"
      {"either", TokenType::Either},
      {""}, {""},
#line 32 "src/lexer-keywords.txt"
      {"block", TokenType::Block, Opcode::Block},
      {""}, {""},
#line 403 "src/lexer-keywords.txt"
      {"i64.atomic.rmw.xchg", TokenType::AtomicRmw, Opcode::I64AtomicRmwXchg},
#line 265 "src/lexer-keywords.txt"
      {"i32.atomic.rmw.xchg", TokenType::AtomicRmw, Opcode::I32AtomicRmwXchg},
      {""}, {""}, {""},
#line 591 "src/lexer-keywords.txt"
      {"v128.const", TokenType::Const, Opcode::V128Const},
      {""}, {""}, {""}, {""},
#line 589 "src/lexer-keywords.txt"
      {"v128.and", TokenType::Binary, Opcode::V128And},
#line 568 "src/lexer-keywords.txt"
      {"return_call_indirect", TokenType::ReturnCallIndirect, Opcode::ReturnCallIndirect},
      {""},
#line 483 "src/lexer-keywords.txt"
      {"i64x2.shl", TokenType::Binary, Opcode::I64X2Shl},
      {""}, {""}, {""}, {""},
#line 583 "src/lexer-keywords.txt"
      {"then", TokenType::Then},
      {""}, {""}, {""}, {""}, {""},
#line 588 "src/lexer-keywords.txt"
      {"v128.andnot", TokenType::Binary, Opcode::V128Andnot},
      {""}, {""},
#line 193 "src/lexer-keywords.txt"
      {"i16x8.all_true", TokenType::Unary, Opcode::I16X8AllTrue},
#line 228 "src/lexer-keywords.txt"
      {"i16x8.sub_sat_u", TokenType::Binary, Opcode::I16X8SubSatU},
      {""}, {""},
#line 171 "src/lexer-keywords.txt"
      {"f64x2.relaxed_nmadd", TokenType::Ternary, Opcode::F64X2RelaxedNmadd},
#line 227 "src/lexer-keywords.txt"
      {"i16x8.sub_sat_s", TokenType::Binary, Opcode::I16X8SubSatS},
      {""}, {""},
#line 505 "src/lexer-keywords.txt"
      {"i8x16.ge_u", TokenType::Compare, Opcode::I8X16GeU},
      {""},
#line 509 "src/lexer-keywords.txt"
      {"i8x16.le_u", TokenType::Compare, Opcode::I8X16LeU},
      {""},
#line 504 "src/lexer-keywords.txt"
      {"i8x16.ge_s", TokenType::Compare, Opcode::I8X16GeS},
      {""},
#line 508 "src/lexer-keywords.txt"
      {"i8x16.le_s", TokenType::Compare, Opcode::I8X16LeS},
      {""},
#line 507 "src/lexer-keywords.txt"
      {"i8x16.gt_u", TokenType::Compare, Opcode::I8X16GtU},
      {""},
#line 511 "src/lexer-keywords.txt"
      {"i8x16.lt_u", TokenType::Compare, Opcode::I8X16LtU},
      {""},
#line 506 "src/lexer-keywords.txt"
      {"i8x16.gt_s", TokenType::Compare, Opcode::I8X16GtS},
      {""},
#line 510 "src/lexer-keywords.txt"
      {"i8x16.lt_s", TokenType::Compare, Opcode::I8X16LtS},
      {""},
#line 52 "src/lexer-keywords.txt"
      {"end", TokenType::End, Opcode::End},
      {""}, {""}, {""},
#line 396 "src/lexer-keywords.txt"
      {"i64.atomic.rmw8.xchg_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw8XchgU},
#line 258 "src/lexer-keywords.txt"
      {"i32.atomic.rmw8.xchg_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw8XchgU},
      {""}, {""},
#line 180 "src/lexer-keywords.txt"
      {"f64x2", TokenType::F64X2},
      {""}, {""}, {""}, {""}, {""},
#line 492 "src/lexer-keywords.txt"
      {"i64x2", TokenType::I64X2},
      {""}, {""},
#line 54 "src/lexer-keywords.txt"
      {"extern", Type::ExternRef, TokenType::Extern},
#line 518 "src/lexer-keywords.txt"
      {"i8x16.neg", TokenType::Unary, Opcode::I8X16Neg},
      {""},
#line 520 "src/lexer-keywords.txt"
      {"i8x16.ne", TokenType::Compare, Opcode::I8X16Ne},
      {""}, {""},
#line 21 "src/lexer-keywords.txt"
      {"after", TokenType::After},
      {""},
#line 95 "src/lexer-keywords.txt"
      {"f32x4.floor", TokenType::Unary, Opcode::F32X4Floor},
      {""}, {""}, {""}, {""}, {""},
#line 161 "src/lexer-keywords.txt"
      {"f64x2.min", TokenType::Binary, Opcode::F64X2Min},
      {""},
#line 168 "src/lexer-keywords.txt"
      {"f64x2.relaxed_madd", TokenType::Ternary, Opcode::F64X2RelaxedMadd},
      {""}, {""}, {""}, {""},
#line 42 "src/lexer-keywords.txt"
      {"data.drop", TokenType::DataDrop, Opcode::DataDrop},
      {""},
#line 115 "src/lexer-keywords.txt"
      {"f32x4.sub", TokenType::Binary, Opcode::F32X4Sub},
#line 373 "src/lexer-keywords.txt"
      {"i64.atomic.load16_u", TokenType::AtomicLoad, Opcode::I64AtomicLoad16U},
#line 243 "src/lexer-keywords.txt"
      {"i32.atomic.load16_u", TokenType::AtomicLoad, Opcode::I32AtomicLoad16U},
      {""},
#line 223 "src/lexer-keywords.txt"
      {"i16x8.shl", TokenType::Binary, Opcode::I16X8Shl},
      {""},
#line 354 "src/lexer-keywords.txt"
      {"i32x4.sub", TokenType::Binary, Opcode::I32X4Sub},
      {""},
#line 536 "src/lexer-keywords.txt"
      {"item", TokenType::Item},
#line 448 "src/lexer-keywords.txt"
      {"i64.store16", TokenType::Store, Opcode::I64Store16},
#line 305 "src/lexer-keywords.txt"
      {"i32.store16", TokenType::Store, Opcode::I32Store16},
      {""},
#line 119 "src/lexer-keywords.txt"
      {"f64.abs", TokenType::Unary, Opcode::F64Abs},
#line 57 "src/lexer-keywords.txt"
      {"f32.abs", TokenType::Unary, Opcode::F32Abs},
#line 573 "src/lexer-keywords.txt"
      {"start", TokenType::Start},
      {""}, {""},
#line 87 "src/lexer-keywords.txt"
      {"f32x4.abs", TokenType::Unary, Opcode::F32X4Abs},
      {""}, {""}, {""}, {""},
#line 191 "src/lexer-keywords.txt"
      {"i16x8.add_sat_u", TokenType::Binary, Opcode::I16X8AddSatU},
#line 319 "src/lexer-keywords.txt"
      {"i32x4.abs", TokenType::Unary, Opcode::I32X4Abs},
      {""}, {""},
#line 190 "src/lexer-keywords.txt"
      {"i16x8.add_sat_s", TokenType::Binary, Opcode::I16X8AddSatS},
      {""}, {""}, {""}, {""}, {""},
#line 610 "src/lexer-keywords.txt"
      {"v128.store16_lane", TokenType::SimdStoreLane, Opcode::V128Store16Lane},
#line 181 "src/lexer-keywords.txt"
      {"field", TokenType::Field},
      {""},
#line 386 "src/lexer-keywords.txt"
      {"i64.atomic.rmw32.cmpxchg_u", TokenType::AtomicRmwCmpxchg, Opcode::I64AtomicRmw32CmpxchgU},
      {""},
#line 211 "src/lexer-keywords.txt"
      {"i16x8.max_u", TokenType::Binary, Opcode::I16X8MaxU},
#line 106 "src/lexer-keywords.txt"
      {"f32x4.pmax", TokenType::Binary, Opcode::F32X4PMax},
#line 210 "src/lexer-keywords.txt"
      {"i16x8.max_s", TokenType::Binary, Opcode::I16X8MaxS},
      {""},
#line 36 "src/lexer-keywords.txt"
      {"call_indirect", TokenType::CallIndirect, Opcode::CallIndirect},
      {""}, {""},
#line 130 "src/lexer-keywords.txt"
      {"f64.floor", TokenType::Unary, Opcode::F64Floor},
#line 69 "src/lexer-keywords.txt"
      {"f32.floor", TokenType::Unary, Opcode::F32Floor},
      {""}, {""}, {""}, {""},
#line 381 "src/lexer-keywords.txt"
      {"i64.atomic.rmw16.sub_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw16SubU},
#line 250 "src/lexer-keywords.txt"
      {"i32.atomic.rmw16.sub_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw16SubU},
      {""}, {""},
#line 602 "src/lexer-keywords.txt"
      {"v128.load32_splat", TokenType::Load, Opcode::V128Load32Splat},
      {""},
#line 107 "src/lexer-keywords.txt"
      {"f32x4.pmin", TokenType::Binary, Opcode::F32X4PMin},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 609 "src/lexer-keywords.txt"
      {"v128.store8_lane", TokenType::SimdStoreLane, Opcode::V128Store8Lane},
#line 174 "src/lexer-keywords.txt"
      {"f64x2.sqrt", TokenType::Unary, Opcode::F64X2Sqrt},
#line 562 "src/lexer-keywords.txt"
      {"ref.func", TokenType::RefFunc, Opcode::RefFunc},
      {""},
#line 607 "src/lexer-keywords.txt"
      {"v128.load32_lane", TokenType::SimdLoadLane, Opcode::V128Load32Lane},
      {""}, {""}, {""},
#line 199 "src/lexer-keywords.txt"
      {"i16x8.extract_lane_u", TokenType::SimdLaneOp, Opcode::I16X8ExtractLaneU},
      {""},
#line 198 "src/lexer-keywords.txt"
      {"i16x8.extract_lane_s", TokenType::SimdLaneOp, Opcode::I16X8ExtractLaneS},
      {""}, {""},
#line 523 "src/lexer-keywords.txt"
      {"i8x16.replace_lane", TokenType::SimdLaneOp, Opcode::I8X16ReplaceLane},
      {""},
#line 129 "src/lexer-keywords.txt"
      {"f64.eq", TokenType::Compare, Opcode::F64Eq},
#line 68 "src/lexer-keywords.txt"
      {"f32.eq", TokenType::Compare, Opcode::F32Eq},
#line 34 "src/lexer-keywords.txt"
      {"br_table", TokenType::BrTable, Opcode::BrTable},
      {""}, {""}, {""},
#line 414 "src/lexer-keywords.txt"
      {"i64.eq", TokenType::Compare, Opcode::I64Eq},
#line 275 "src/lexer-keywords.txt"
      {"i32.eq", TokenType::Compare, Opcode::I32Eq},
      {""}, {""}, {""},
#line 93 "src/lexer-keywords.txt"
      {"f32x4.eq", TokenType::Compare, Opcode::F32X4Eq},
      {""}, {""},
#line 596 "src/lexer-keywords.txt"
      {"v128.load32_zero", TokenType::Load, Opcode::V128Load32Zero},
#line 497 "src/lexer-keywords.txt"
      {"i8x16.add", TokenType::Binary, Opcode::I8X16Add},
      {""},
#line 324 "src/lexer-keywords.txt"
      {"i32x4.eq", TokenType::Compare, Opcode::I32X4Eq},
      {""}, {""}, {""},
#line 531 "src/lexer-keywords.txt"
      {"i8x16", TokenType::I8X16},
      {""}, {""}, {""}, {""},
#line 378 "src/lexer-keywords.txt"
      {"i64.atomic.rmw16.and_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw16AndU},
#line 247 "src/lexer-keywords.txt"
      {"i32.atomic.rmw16.and_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw16AndU},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 380 "src/lexer-keywords.txt"
      {"i64.atomic.rmw16.or_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw16OrU},
#line 249 "src/lexer-keywords.txt"
      {"i32.atomic.rmw16.or_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw16OrU},
      {""}, {""},
#line 522 "src/lexer-keywords.txt"
      {"i8x16.relaxed_laneselect", TokenType::Ternary, Opcode::I8X16RelaxedLaneSelect},
      {""}, {""}, {""},
#line 485 "src/lexer-keywords.txt"
      {"i64x2.shr_u", TokenType::Binary, Opcode::I64X2ShrU},
      {""},
#line 484 "src/lexer-keywords.txt"
      {"i64x2.shr_s", TokenType::Binary, Opcode::I64X2ShrS},
      {""}, {""},
#line 344 "src/lexer-keywords.txt"
      {"i32x4.dot_i16x8_s", TokenType::Binary, Opcode::I32X4DotI16X8S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 377 "src/lexer-keywords.txt"
      {"i64.atomic.rmw16.add_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw16AddU},
#line 246 "src/lexer-keywords.txt"
      {"i32.atomic.rmw16.add_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw16AddU},
      {""}, {""}, {""},
#line 572 "src/lexer-keywords.txt"
      {"shared", TokenType::Shared},
#line 382 "src/lexer-keywords.txt"
      {"i64.atomic.rmw16.xchg_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw16XchgU},
#line 251 "src/lexer-keywords.txt"
      {"i32.atomic.rmw16.xchg_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw16XchgU},
      {""},
#line 383 "src/lexer-keywords.txt"
      {"i64.atomic.rmw16.xor_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw16XorU},
#line 252 "src/lexer-keywords.txt"
      {"i32.atomic.rmw16.xor_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw16XorU},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 188 "src/lexer-keywords.txt"
      {"global", TokenType::Global},
      {""}, {""}, {""},
#line 498 "src/lexer-keywords.txt"
      {"i8x16.all_true", TokenType::Unary, Opcode::I8X16AllTrue},
#line 529 "src/lexer-keywords.txt"
      {"i8x16.sub_sat_u", TokenType::Binary, Opcode::I8X16SubSatU},
      {""}, {""}, {""},
#line 528 "src/lexer-keywords.txt"
      {"i8x16.sub_sat_s", TokenType::Binary, Opcode::I8X16SubSatS},
      {""}, {""}, {""}, {""}, {""},
#line 66 "src/lexer-keywords.txt"
      {"f32.demote_f64", TokenType::Convert, Opcode::F32DemoteF64},
      {""}, {""}, {""}, {""},
#line 584 "src/lexer-keywords.txt"
      {"throw", TokenType::Throw, Opcode::Throw},
      {""}, {""}, {""}, {""}, {""},
#line 374 "src/lexer-keywords.txt"
      {"i64.atomic.load32_u", TokenType::AtomicLoad, Opcode::I64AtomicLoad32U},
#line 92 "src/lexer-keywords.txt"
      {"f32x4.div", TokenType::Binary, Opcode::F32X4Div},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 186 "src/lexer-keywords.txt"
      {"global.get", TokenType::GlobalGet, Opcode::GlobalGet},
#line 576 "src/lexer-keywords.txt"
      {"table.fill", TokenType::TableFill, Opcode::TableFill},
#line 187 "src/lexer-keywords.txt"
      {"global.set", TokenType::GlobalSet, Opcode::GlobalSet},
      {""},
#line 225 "src/lexer-keywords.txt"
      {"i16x8.shr_u", TokenType::Binary, Opcode::I16X8ShrU},
      {""},
#line 224 "src/lexer-keywords.txt"
      {"i16x8.shr_s", TokenType::Binary, Opcode::I16X8ShrS},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 611 "src/lexer-keywords.txt"
      {"v128.store32_lane", TokenType::SimdStoreLane, Opcode::V128Store32Lane},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 603 "src/lexer-keywords.txt"
      {"v128.load64_splat", TokenType::Load, Opcode::V128Load64Splat},
      {""}, {""}, {""},
#line 524 "src/lexer-keywords.txt"
      {"i8x16.shl", TokenType::Binary, Opcode::I8X16Shl},
      {""}, {""}, {""}, {""}, {""},
#line 213 "src/lexer-keywords.txt"
      {"i16x8.min_u", TokenType::Binary, Opcode::I16X8MinU},
      {""},
#line 212 "src/lexer-keywords.txt"
      {"i16x8.min_s", TokenType::Binary, Opcode::I16X8MinS},
#line 608 "src/lexer-keywords.txt"
      {"v128.load64_lane", TokenType::SimdLoadLane, Opcode::V128Load64Lane},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 496 "src/lexer-keywords.txt"
      {"i8x16.add_sat_u", TokenType::Binary, Opcode::I8X16AddSatU},
      {""}, {""}, {""},
#line 495 "src/lexer-keywords.txt"
      {"i8x16.add_sat_s", TokenType::Binary, Opcode::I8X16AddSatS},
      {""}, {""},
#line 567 "src/lexer-keywords.txt"
      {"rethrow", TokenType::Rethrow, Opcode::Rethrow},
#line 173 "src/lexer-keywords.txt"
      {"f64x2.splat", TokenType::Unary, Opcode::F64X2Splat},
      {""}, {""},
#line 578 "src/lexer-keywords.txt"
      {"table.grow", TokenType::TableGrow, Opcode::TableGrow},
      {""}, {""},
#line 486 "src/lexer-keywords.txt"
      {"i64x2.splat", TokenType::Unary, Opcode::I64X2Splat},
#line 513 "src/lexer-keywords.txt"
      {"i8x16.max_u", TokenType::Binary, Opcode::I8X16MaxU},
#line 597 "src/lexer-keywords.txt"
      {"v128.load64_zero", TokenType::Load, Opcode::V128Load64Zero},
#line 512 "src/lexer-keywords.txt"
      {"i8x16.max_s", TokenType::Binary, Opcode::I8X16MaxS},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 26 "src/lexer-keywords.txt"
      {"assert_return", TokenType::AssertReturn},
      {""},
#line 126 "src/lexer-keywords.txt"
      {"f64.convert_i64_u", TokenType::Convert, Opcode::F64ConvertI64U},
#line 64 "src/lexer-keywords.txt"
      {"f32.convert_i64_u", TokenType::Convert, Opcode::F32ConvertI64U},
      {""}, {""},
#line 125 "src/lexer-keywords.txt"
      {"f64.convert_i64_s", TokenType::Convert, Opcode::F64ConvertI64S},
#line 63 "src/lexer-keywords.txt"
      {"f32.convert_i64_s", TokenType::Convert, Opcode::F32ConvertI64S},
      {""},
#line 406 "src/lexer-keywords.txt"
      {"i64.atomic.store32", TokenType::AtomicStore, Opcode::I64AtomicStore32},
      {""},
#line 548 "src/lexer-keywords.txt"
      {"memory.init", TokenType::MemoryInit, Opcode::MemoryInit},
      {""},
#line 521 "src/lexer-keywords.txt"
      {"i8x16.relaxed_swizzle", TokenType::Binary, Opcode::I8X16RelaxedSwizzle},
      {""}, {""}, {""}, {""}, {""},
#line 587 "src/lexer-keywords.txt"
      {"unreachable", TokenType::Unreachable, Opcode::Unreachable},
      {""}, {""}, {""},
#line 503 "src/lexer-keywords.txt"
      {"i8x16.extract_lane_u", TokenType::SimdLaneOp, Opcode::I8X16ExtractLaneU},
      {""},
#line 502 "src/lexer-keywords.txt"
      {"i8x16.extract_lane_s", TokenType::SimdLaneOp, Opcode::I8X16ExtractLaneS},
      {""},
#line 221 "src/lexer-keywords.txt"
      {"i16x8.relaxed_q15mulr_s", TokenType::Binary, Opcode::I16X8RelaxedQ15mulrS},
      {""},
#line 595 "src/lexer-keywords.txt"
      {"v128.any_true", TokenType::Unary, Opcode::V128AnyTrue},
      {""}, {""},
#line 400 "src/lexer-keywords.txt"
      {"i64.atomic.rmw.cmpxchg", TokenType::AtomicRmwCmpxchg, Opcode::I64AtomicRmwCmpxchg},
#line 262 "src/lexer-keywords.txt"
      {"i32.atomic.rmw.cmpxchg", TokenType::AtomicRmwCmpxchg, Opcode::I32AtomicRmwCmpxchg},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 555 "src/lexer-keywords.txt"
      {"nop", TokenType::Nop, Opcode::Nop},
#line 550 "src/lexer-keywords.txt"
      {"memory", TokenType::Memory},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 395 "src/lexer-keywords.txt"
      {"i64.atomic.rmw8.sub_u", TokenType::AtomicRmw, Opcode::I64AtomicRmw8SubU},
#line 257 "src/lexer-keywords.txt"
      {"i32.atomic.rmw8.sub_u", TokenType::AtomicRmw, Opcode::I32AtomicRmw8SubU},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 117 "src/lexer-keywords.txt"
      {"f32x4.demote_f64x2_zero", TokenType::Unary, Opcode::F32X4DemoteF64X2Zero},
      {""},
#line 56 "src/lexer-keywords.txt"
      {"export", TokenType::Export},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 337 "src/lexer-keywords.txt"
      {"v128.load16x4_u", TokenType::Load, Opcode::V128Load16X4U},
      {""}, {""},
#line 226 "src/lexer-keywords.txt"
      {"i16x8.splat", TokenType::Unary, Opcode::I16X8Splat},
#line 336 "src/lexer-keywords.txt"
      {"v128.load16x4_s", TokenType::Load, Opcode::V128Load16X4S},
#line 155 "src/lexer-keywords.txt"
      {"f64x2.floor", TokenType::Unary, Opcode::F64X2Floor},
      {""}, {""}, {""}, {""},
#line 322 "src/lexer-keywords.txt"
      {"i32x4.bitmask", TokenType::Unary, Opcode::I32X4Bitmask},
      {""}, {""}, {""}, {""}, {""},
#line 365 "src/lexer-keywords.txt"
      {"i32x4.extend_high_i16x8_u", TokenType::Unary, Opcode::I32X4ExtendHighI16X8U},
      {""},
#line 364 "src/lexer-keywords.txt"
      {"i32x4.extend_high_i16x8_s", TokenType::Unary, Opcode::I32X4ExtendHighI16X8S},
      {""},
#line 175 "src/lexer-keywords.txt"
      {"f64x2.sub", TokenType::Binary, Opcode::F64X2Sub},
#line 31 "src/lexer-keywords.txt"
      {"binary", TokenType::Bin},
#line 393 "src/lexer-keywords.txt"
      {"i64.atomic.rmw8.cmpxchg_u", TokenType::AtomicRmwCmpxchg, Opcode::I64AtomicRmw8CmpxchgU},
#line 255 "src/lexer-keywords.txt"
      {"i32.atomic.rmw8.cmpxchg_u", TokenType::AtomicRmwCmpxchg, Opcode::I32AtomicRmw8CmpxchgU},
      {""}, {""},
#line 487 "src/lexer-keywords.txt"
      {"i64x2.sub", TokenType::Binary, Opcode::I64X2Sub},
      {""}, {""}, {""},
#line 547 "src/lexer-keywords.txt"
      {"memory.grow", TokenType::MemoryGrow, Opcode::MemoryGrow},
      {""}, {""}, {""}, {""}, {""},
#line 194 "src/lexer-keywords.txt"
      {"i16x8.avgr_u", TokenType::Binary, Opcode::I16X8AvgrU},
#line 149 "src/lexer-keywords.txt"
      {"f64x2.abs", TokenType::Unary, Opcode::F64X2Abs},
      {""},
#line 356 "src/lexer-keywords.txt"
      {"i32x4.extadd_pairwise_i16x8_u", TokenType::Unary, Opcode::I32X4ExtaddPairwiseI16X8U},
      {""},
#line 355 "src/lexer-keywords.txt"
      {"i32x4.extadd_pairwise_i16x8_s", TokenType::Unary, Opcode::I32X4ExtaddPairwiseI16X8S},
      {""},
#line 473 "src/lexer-keywords.txt"
      {"i64x2.abs", TokenType::Unary, Opcode::I64X2Abs},
      {""},
#line 413 "src/lexer-keywords.txt"
      {"i64.div_u", TokenType::Binary, Opcode::I64DivU},
#line 274 "src/lexer-keywords.txt"
      {"i32.div_u", TokenType::Binary, Opcode::I32DivU},
#line 412 "src/lexer-keywords.txt"
      {"i64.div_s", TokenType::Binary, Opcode::I64DivS},
#line 273 "src/lexer-keywords.txt"
      {"i32.div_s", TokenType::Binary, Opcode::I32DivS},
      {""}, {""}, {""}, {""},
#line 405 "src/lexer-keywords.txt"
      {"i64.atomic.store16", TokenType::AtomicStore, Opcode::I64AtomicStore16},
#line 267 "src/lexer-keywords.txt"
      {"i32.atomic.store16", TokenType::AtomicStore, Opcode::I32AtomicStore16},
      {""}, {""}, {""},
#line 166 "src/lexer-keywords.txt"
      {"f64x2.pmax", TokenType::Binary, Opcode::F64X2PMax},
#line 360 "src/lexer-keywords.txt"
      {"i32x4.extmul_high_i16x8_u", TokenType::Binary, Opcode::I32X4ExtmulHighI16X8U},
      {""},
#line 358 "src/lexer-keywords.txt"
      {"i32x4.extmul_high_i16x8_s", TokenType::Binary, Opcode::I32X4ExtmulHighI16X8S},
#line 460 "src/lexer-keywords.txt"
      {"i64.trunc_sat_f64_u", TokenType::Convert, Opcode::I64TruncSatF64U},
#line 316 "src/lexer-keywords.txt"
      {"i32.trunc_sat_f64_u", TokenType::Convert, Opcode::I32TruncSatF64U},
      {""}, {""},
#line 459 "src/lexer-keywords.txt"
      {"i64.trunc_sat_f64_s", TokenType::Convert, Opcode::I64TruncSatF64S},
#line 315 "src/lexer-keywords.txt"
      {"i32.trunc_sat_f64_s", TokenType::Convert, Opcode::I32TruncSatF64S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 167 "src/lexer-keywords.txt"
      {"f64x2.pmin", TokenType::Binary, Opcode::F64X2PMin},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 526 "src/lexer-keywords.txt"
      {"i8x16.shr_u", TokenType::Binary, Opcode::I8X16ShrU},
      {""},
#line 525 "src/lexer-keywords.txt"
      {"i8x16.shr_s", TokenType::Binary, Opcode::I8X16ShrS},
      {""}, {""}, {""}, {""}, {""},
#line 575 "src/lexer-keywords.txt"
      {"table.copy", TokenType::TableCopy, Opcode::TableCopy},
      {""}, {""}, {""}, {""}, {""},
#line 47 "src/lexer-keywords.txt"
      {"drop", TokenType::Drop, Opcode::Drop},
      {""},
#line 479 "src/lexer-keywords.txt"
      {"i64x2.extend_low_i32x4_u", TokenType::Unary, Opcode::I64X2ExtendLowI32X4U},
      {""},
#line 477 "src/lexer-keywords.txt"
      {"i64x2.extend_low_i32x4_s", TokenType::Unary, Opcode::I64X2ExtendLowI32X4S},
#line 229 "src/lexer-keywords.txt"
      {"i16x8.sub", TokenType::Binary, Opcode::I16X8Sub},
#line 153 "src/lexer-keywords.txt"
      {"f64x2.eq", TokenType::Compare, Opcode::F64X2Eq},
      {""}, {""}, {""}, {""}, {""},
#line 467 "src/lexer-keywords.txt"
      {"i64x2.eq", TokenType::Binary, Opcode::I64X2Eq},
      {""}, {""},
#line 614 "src/lexer-keywords.txt"
      {"i8x16.swizzle", TokenType::Binary, Opcode::I8X16Swizzle},
      {""}, {""}, {""}, {""}, {""},
#line 369 "src/lexer-keywords.txt"
      {"i32x4.trunc_sat_f64x2_u_zero", TokenType::Unary, Opcode::I32X4TruncSatF64X2UZero},
#line 189 "src/lexer-keywords.txt"
      {"i16x8.abs", TokenType::Unary, Opcode::I16X8Abs},
#line 368 "src/lexer-keywords.txt"
      {"i32x4.trunc_sat_f64x2_s_zero", TokenType::Unary, Opcode::I32X4TruncSatF64X2SZero},
#line 515 "src/lexer-keywords.txt"
      {"i8x16.min_u", TokenType::Binary, Opcode::I8X16MinU},
      {""},
#line 514 "src/lexer-keywords.txt"
      {"i8x16.min_s", TokenType::Binary, Opcode::I8X16MinS},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 25 "src/lexer-keywords.txt"
      {"assert_malformed", TokenType::AssertMalformed},
      {""}, {""}, {""}, {""},
#line 490 "src/lexer-keywords.txt"
      {"i64x2.extmul_low_i32x4_u", TokenType::Binary, Opcode::I64X2ExtmulLowI32X4U},
      {""},
#line 488 "src/lexer-keywords.txt"
      {"i64x2.extmul_low_i32x4_s", TokenType::Binary, Opcode::I64X2ExtmulLowI32X4S},
#line 216 "src/lexer-keywords.txt"
      {"i16x8.narrow_i32x4_u", TokenType::Binary, Opcode::I16X8NarrowI32X4U},
      {""},
#line 215 "src/lexer-keywords.txt"
      {"i16x8.narrow_i32x4_s", TokenType::Binary, Opcode::I16X8NarrowI32X4S},
#line 546 "src/lexer-keywords.txt"
      {"memory.fill", TokenType::MemoryFill, Opcode::MemoryFill},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 379 "src/lexer-keywords.txt"
      {"i64.atomic.rmw16.cmpxchg_u", TokenType::AtomicRmwCmpxchg, Opcode::I64AtomicRmw16CmpxchgU},
#line 248 "src/lexer-keywords.txt"
      {"i32.atomic.rmw16.cmpxchg_u", TokenType::AtomicRmwCmpxchg, Opcode::I32AtomicRmw16CmpxchgU},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 323 "src/lexer-keywords.txt"
      {"i32x4.dot_i8x16_i7x16_add_s", TokenType::Ternary, Opcode::I32X4DotI8X16I7X16AddS},
      {""}, {""}, {""},
#line 601 "src/lexer-keywords.txt"
      {"v128.load16_splat", TokenType::Load, Opcode::V128Load16Splat},
#line 197 "src/lexer-keywords.txt"
      {"i16x8.eq", TokenType::Compare, Opcode::I16X8Eq},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 240 "src/lexer-keywords.txt"
      {"i16x8.extend_low_i8x16_u", TokenType::Unary, Opcode::I16X8ExtendLowI8X16U},
#line 606 "src/lexer-keywords.txt"
      {"v128.load16_lane", TokenType::SimdLoadLane, Opcode::V128Load16Lane},
#line 239 "src/lexer-keywords.txt"
      {"i16x8.extend_low_i8x16_s", TokenType::Unary, Opcode::I16X8ExtendLowI8X16S},
#line 152 "src/lexer-keywords.txt"
      {"f64x2.div", TokenType::Binary, Opcode::F64X2Div},
      {""}, {""},
#line 541 "src/lexer-keywords.txt"
      {"loop", TokenType::Loop, Opcode::Loop},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 143 "src/lexer-keywords.txt"
      {"f64.reinterpret_i64", TokenType::Convert, Opcode::F64ReinterpretI64},
      {""},
#line 367 "src/lexer-keywords.txt"
      {"i32x4.extend_low_i16x8_u", TokenType::Unary, Opcode::I32X4ExtendLowI16X8U},
      {""},
#line 366 "src/lexer-keywords.txt"
      {"i32x4.extend_low_i16x8_s", TokenType::Unary, Opcode::I32X4ExtendLowI16X8S},
      {""}, {""}, {""}, {""}, {""},
#line 527 "src/lexer-keywords.txt"
      {"i8x16.splat", TokenType::Unary, Opcode::I8X16Splat},
      {""}, {""},
#line 363 "src/lexer-keywords.txt"
      {"i32x4.trunc_sat_f32x4_u", TokenType::Unary, Opcode::I32X4TruncSatF32X4U},
      {""}, {""}, {""},
#line 362 "src/lexer-keywords.txt"
      {"i32x4.trunc_sat_f32x4_s", TokenType::Unary, Opcode::I32X4TruncSatF32X4S},
      {""},
#line 318 "src/lexer-keywords.txt"
      {"i32.wrap_i64", TokenType::Convert, Opcode::I32WrapI64},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 234 "src/lexer-keywords.txt"
      {"i16x8.extmul_low_i8x16_u", TokenType::Binary, Opcode::I16X8ExtmulLowI8X16U},
      {""},
#line 232 "src/lexer-keywords.txt"
      {"i16x8.extmul_low_i8x16_s", TokenType::Binary, Opcode::I16X8ExtmulLowI8X16S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 33 "src/lexer-keywords.txt"
      {"br_if", TokenType::BrIf, Opcode::BrIf},
#line 55 "src/lexer-keywords.txt"
      {"externref", Type::ExternRef},
#line 499 "src/lexer-keywords.txt"
      {"i8x16.avgr_u", TokenType::Binary, Opcode::I8X16AvgrU},
      {""},
#line 359 "src/lexer-keywords.txt"
      {"i32x4.extmul_low_i16x8_u", TokenType::Binary, Opcode::I32X4ExtmulLowI16X8U},
      {""},
#line 357 "src/lexer-keywords.txt"
      {"i32x4.extmul_low_i16x8_s", TokenType::Binary, Opcode::I32X4ExtmulLowI16X8S},
      {""}, {""}, {""}, {""}, {""},
#line 439 "src/lexer-keywords.txt"
      {"i64.popcnt", TokenType::Unary, Opcode::I64Popcnt},
#line 296 "src/lexer-keywords.txt"
      {"i32.popcnt", TokenType::Unary, Opcode::I32Popcnt},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 182 "src/lexer-keywords.txt"
      {"funcref", Type::FuncRef},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 124 "src/lexer-keywords.txt"
      {"f64.convert_i32_u", TokenType::Convert, Opcode::F64ConvertI32U},
#line 62 "src/lexer-keywords.txt"
      {"f32.convert_i32_u", TokenType::Convert, Opcode::F32ConvertI32U},
      {""}, {""},
#line 123 "src/lexer-keywords.txt"
      {"f64.convert_i32_s", TokenType::Convert, Opcode::F64ConvertI32S},
#line 61 "src/lexer-keywords.txt"
      {"f32.convert_i32_s", TokenType::Convert, Opcode::F32ConvertI32S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 50 "src/lexer-keywords.txt"
      {"elem", TokenType::Elem},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 91 "src/lexer-keywords.txt"
      {"f32x4.convert_i32x4_u", TokenType::Unary, Opcode::F32X4ConvertI32X4U},
      {""},
#line 90 "src/lexer-keywords.txt"
      {"f32x4.convert_i32x4_s", TokenType::Unary, Opcode::F32X4ConvertI32X4S},
      {""}, {""}, {""}, {""},
#line 530 "src/lexer-keywords.txt"
      {"i8x16.sub", TokenType::Binary, Opcode::I8X16Sub},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 519 "src/lexer-keywords.txt"
      {"i8x16.popcnt", TokenType::Unary, Opcode::I8X16Popcnt},
#line 494 "src/lexer-keywords.txt"
      {"i8x16.abs", TokenType::Unary, Opcode::I8X16Abs},
      {""}, {""}, {""},
#line 480 "src/lexer-keywords.txt"
      {"i64x2.extend_high_i32x4_u", TokenType::Unary, Opcode::I64X2ExtendHighI32X4U},
      {""},
#line 478 "src/lexer-keywords.txt"
      {"i64x2.extend_high_i32x4_s", TokenType::Unary, Opcode::I64X2ExtendHighI32X4S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 476 "src/lexer-keywords.txt"
      {"i64x2.bitmask", TokenType::Unary, Opcode::I64X2Bitmask},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 590 "src/lexer-keywords.txt"
      {"v128.bitselect", TokenType::Ternary, Opcode::V128BitSelect},
      {""}, {""}, {""}, {""}, {""},
#line 146 "src/lexer-keywords.txt"
      {"f64.sub", TokenType::Binary, Opcode::F64Sub},
#line 84 "src/lexer-keywords.txt"
      {"f32.sub", TokenType::Binary, Opcode::F32Sub},
      {""}, {""}, {""}, {""},
#line 452 "src/lexer-keywords.txt"
      {"i64.sub", TokenType::Binary, Opcode::I64Sub},
#line 308 "src/lexer-keywords.txt"
      {"i32.sub", TokenType::Binary, Opcode::I32Sub},
      {""},
#line 491 "src/lexer-keywords.txt"
      {"i64x2.extmul_high_i32x4_u", TokenType::Binary, Opcode::I64X2ExtmulHighI32X4U},
      {""},
#line 489 "src/lexer-keywords.txt"
      {"i64x2.extmul_high_i32x4_s", TokenType::Binary, Opcode::I64X2ExtmulHighI32X4S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 501 "src/lexer-keywords.txt"
      {"i8x16.eq", TokenType::Compare, Opcode::I8X16Eq},
#line 458 "src/lexer-keywords.txt"
      {"i64.trunc_sat_f32_u", TokenType::Convert, Opcode::I64TruncSatF32U},
#line 314 "src/lexer-keywords.txt"
      {"i32.trunc_sat_f32_u", TokenType::Convert, Opcode::I32TruncSatF32U},
      {""}, {""},
#line 457 "src/lexer-keywords.txt"
      {"i64.trunc_sat_f32_s", TokenType::Convert, Opcode::I64TruncSatF32S},
#line 313 "src/lexer-keywords.txt"
      {"i32.trunc_sat_f32_s", TokenType::Convert, Opcode::I32TruncSatF32S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 127 "src/lexer-keywords.txt"
      {"f64.copysign", TokenType::Binary, Opcode::F64Copysign},
#line 65 "src/lexer-keywords.txt"
      {"f32.copysign", TokenType::Binary, Opcode::F32Copysign},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 195 "src/lexer-keywords.txt"
      {"i16x8.bitmask", TokenType::Unary, Opcode::I16X8Bitmask},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 128 "src/lexer-keywords.txt"
      {"f64.div", TokenType::Binary, Opcode::F64Div},
#line 67 "src/lexer-keywords.txt"
      {"f32.div", TokenType::Binary, Opcode::F32Div},
      {""}, {""}, {""},
#line 23 "src/lexer-keywords.txt"
      {"assert_exhaustion", TokenType::AssertExhaustion},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 27 "src/lexer-keywords.txt"
      {"assert_trap", TokenType::AssertTrap},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 613 "src/lexer-keywords.txt"
      {"i8x16.shuffle", TokenType::SimdShuffleOp, Opcode::I8X16Shuffle},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 37 "src/lexer-keywords.txt"
      {"call_ref", TokenType::CallRef, Opcode::CallRef},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 196 "src/lexer-keywords.txt"
      {"i16x8.dot_i8x16_i7x16_s", TokenType::Binary, Opcode::I16X8DotI8X16I7X16S},
      {""}, {""}, {""}, {""}, {""},
#line 238 "src/lexer-keywords.txt"
      {"i16x8.extend_high_i8x16_u", TokenType::Unary, Opcode::I16X8ExtendHighI8X16U},
      {""},
#line 237 "src/lexer-keywords.txt"
      {"i16x8.extend_high_i8x16_s", TokenType::Unary, Opcode::I16X8ExtendHighI8X16S},
      {""}, {""}, {""}, {""},
#line 218 "src/lexer-keywords.txt"
      {"i16x8.q15mulr_sat_s", TokenType::Binary, Opcode::I16X8Q15mulrSatS},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 20 "src/lexer-keywords.txt"
      {"array", Type::Array, TokenType::Array},
      {""}, {""},
#line 231 "src/lexer-keywords.txt"
      {"i16x8.extadd_pairwise_i8x16_u", TokenType::Unary, Opcode::I16X8ExtaddPairwiseI8X16U},
      {""},
#line 230 "src/lexer-keywords.txt"
      {"i16x8.extadd_pairwise_i8x16_s", TokenType::Unary, Opcode::I16X8ExtaddPairwiseI8X16S},
      {""}, {""}, {""}, {""}, {""},
#line 142 "src/lexer-keywords.txt"
      {"f64.promote_f32", TokenType::Convert, Opcode::F64PromoteF32},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 545 "src/lexer-keywords.txt"
      {"memory.copy", TokenType::MemoryCopy, Opcode::MemoryCopy},
      {""}, {""}, {""},
#line 22 "src/lexer-keywords.txt"
      {"assert_exception", TokenType::AssertException},
#line 235 "src/lexer-keywords.txt"
      {"i16x8.extmul_high_i8x16_u", TokenType::Binary, Opcode::I16X8ExtmulHighI8X16U},
      {""},
#line 233 "src/lexer-keywords.txt"
      {"i16x8.extmul_high_i8x16_s", TokenType::Binary, Opcode::I16X8ExtmulHighI8X16S},
      {""}, {""},
#line 440 "src/lexer-keywords.txt"
      {"i64.reinterpret_f64", TokenType::Convert, Opcode::I64ReinterpretF64},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 28 "src/lexer-keywords.txt"
      {"assert_unlinkable", TokenType::AssertUnlinkable},
      {""},
#line 500 "src/lexer-keywords.txt"
      {"i8x16.bitmask", TokenType::Unary, Opcode::I8X16Bitmask},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 402 "src/lexer-keywords.txt"
      {"i64.atomic.rmw.sub", TokenType::AtomicRmw, Opcode::I64AtomicRmwSub},
#line 264 "src/lexer-keywords.txt"
      {"i32.atomic.rmw.sub", TokenType::AtomicRmw, Opcode::I32AtomicRmwSub},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 544 "src/lexer-keywords.txt"
      {"memory.atomic.wait64", TokenType::AtomicWait, Opcode::MemoryAtomicWait64},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 81 "src/lexer-keywords.txt"
      {"f32.reinterpret_i32", TokenType::Convert, Opcode::F32ReinterpretI32},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 24 "src/lexer-keywords.txt"
      {"assert_invalid", TokenType::AssertInvalid},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 517 "src/lexer-keywords.txt"
      {"i8x16.narrow_i16x8_u", TokenType::Binary, Opcode::I8X16NarrowI16X8U},
      {""},
#line 516 "src/lexer-keywords.txt"
      {"i8x16.narrow_i16x8_s", TokenType::Binary, Opcode::I8X16NarrowI16X8S},
      {""}, {""}, {""},
#line 543 "src/lexer-keywords.txt"
      {"memory.atomic.wait32", TokenType::AtomicWait, Opcode::MemoryAtomicWait32},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 49 "src/lexer-keywords.txt"
      {"elem.drop", TokenType::ElemDrop, Opcode::ElemDrop},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 178 "src/lexer-keywords.txt"
      {"f64x2.convert_low_i32x4_u", TokenType::Unary, Opcode::F64X2ConvertLowI32X4U},
      {""},
#line 177 "src/lexer-keywords.txt"
      {"f64x2.convert_low_i32x4_s", TokenType::Unary, Opcode::F64X2ConvertLowI32X4S},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 297 "src/lexer-keywords.txt"
      {"i32.reinterpret_f32", TokenType::Convert, Opcode::I32ReinterpretF32},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 29 "src/lexer-keywords.txt"
      {"atomic.fence", TokenType::AtomicFence, Opcode::AtomicFence},
      {""},
#line 542 "src/lexer-keywords.txt"
      {"memory.atomic.notify", TokenType::AtomicNotify, Opcode::MemoryAtomicNotify},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 179 "src/lexer-keywords.txt"
      {"f64x2.promote_low_f32x4", TokenType::Unary, Opcode::F64X2PromoteLowF32X4}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
