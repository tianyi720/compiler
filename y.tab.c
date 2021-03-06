/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Void = 258,
     T_Bool = 259,
     T_Int = 260,
     T_LessEqual = 261,
     T_GreaterEqual = 262,
     T_EQ = 263,
     T_NE = 264,
     T_LeftAngle = 265,
     T_RightAngle = 266,
     T_And = 267,
     T_Or = 268,
     T_Equal = 269,
     T_MulAssign = 270,
     T_DivAssign = 271,
     T_AddAssign = 272,
     T_SubAssign = 273,
     T_While = 274,
     T_For = 275,
     T_If = 276,
     T_Else = 277,
     T_Return = 278,
     T_Break = 279,
     T_Continue = 280,
     T_Inc = 281,
     T_Dec = 282,
     T_Semicolon = 283,
     T_Comma = 284,
     T_Dash = 285,
     T_Plus = 286,
     T_Star = 287,
     T_Slash = 288,
     T_LeftParen = 289,
     T_RightParen = 290,
     T_LeftBracket = 291,
     T_RightBracket = 292,
     T_LeftBrace = 293,
     T_RightBrace = 294,
     T_Public = 295,
     T_Private = 296,
     T_Static = 297,
     T_Class = 298,
     T_Identifier = 299,
     T_IntConstant = 300,
     T_BoolConstant = 301,
     LOWEST = 302,
     LOWER_THAN_ELSE = 303
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_LessEqual 261
#define T_GreaterEqual 262
#define T_EQ 263
#define T_NE 264
#define T_LeftAngle 265
#define T_RightAngle 266
#define T_And 267
#define T_Or 268
#define T_Equal 269
#define T_MulAssign 270
#define T_DivAssign 271
#define T_AddAssign 272
#define T_SubAssign 273
#define T_While 274
#define T_For 275
#define T_If 276
#define T_Else 277
#define T_Return 278
#define T_Break 279
#define T_Continue 280
#define T_Inc 281
#define T_Dec 282
#define T_Semicolon 283
#define T_Comma 284
#define T_Dash 285
#define T_Plus 286
#define T_Star 287
#define T_Slash 288
#define T_LeftParen 289
#define T_RightParen 290
#define T_LeftBracket 291
#define T_RightBracket 292
#define T_LeftBrace 293
#define T_RightBrace 294
#define T_Public 295
#define T_Private 296
#define T_Static 297
#define T_Class 298
#define T_Identifier 299
#define T_IntConstant 300
#define T_BoolConstant 301
#define LOWEST 302
#define LOWER_THAN_ELSE 303




/* Copy the first part of user declarations.  */
#line 11 "parser.y"


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "lexer.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(const char *msg); // standard error-handling routine



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 41 "parser.y"
{
    int integerConstant;
    bool boolConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null

    Type *varType;
    Decl *decl;
    VarDecl *varDecl;
    List<Decl*> *declList;

    FnDecl *funcDecl;
    Expr *expr;
    List<VarDecl *> *varDeclList;
    List<Stmt*> *stmtList;
    List<Expr*> *argList;
    Stmt       *stmt;
    Operator *ops;
    Identifier *funcId;
}
/* Line 193 of yacc.c.  */
#line 228 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 253 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNRULES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    24,
      26,    28,    30,    33,    36,    39,    43,    48,    52,    54,
      57,    61,    64,    67,    69,    71,    73,    75,    77,    79,
      81,    83,    85,    87,    90,    96,   104,   106,   108,   114,
     122,   124,   127,   129,   132,   134,   136,   138,   140,   142,
     144,   148,   150,   152,   154,   156,   158,   162,   166,   170,
     174,   178,   182,   186,   190,   194,   198,   202,   206,   208,
     211,   214,   216,   219,   222,   226,   229,   233,   235,   239,
     241,   245,   247,   249,   251,   255,   257,   260,   263,   266,
     269,   271
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    51,    52,    -1,    52,    -1,
      53,    -1,    55,    -1,    54,    44,    28,    -1,    54,    44,
      75,    73,    28,    -1,     3,    -1,     5,    -1,     4,    -1,
      56,    60,    -1,    56,    28,    -1,    57,    35,    -1,    54,
      44,    34,    -1,    54,    44,    34,    58,    -1,    58,    29,
      59,    -1,    59,    -1,    54,    44,    -1,    38,    61,    39,
      -1,    38,    39,    -1,    61,    62,    -1,    62,    -1,    60,
      -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,    70,
      -1,    71,    -1,    72,    -1,    28,    -1,    73,    28,    -1,
      21,    34,    73,    35,    60,    -1,    21,    34,    73,    35,
      60,    22,    60,    -1,    67,    -1,    68,    -1,    19,    34,
      69,    35,    62,    -1,    20,    34,    64,    64,    73,    35,
      62,    -1,    73,    -1,    23,    64,    -1,    53,    -1,    24,
      28,    -1,    74,    -1,    76,    -1,    77,    -1,    78,    -1,
      79,    -1,    87,    -1,    87,    75,    73,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    -1,    73,    31,
      73,    -1,    73,    30,    73,    -1,    73,    32,    73,    -1,
      73,    33,    73,    -1,    73,    10,    73,    -1,    73,    11,
      73,    -1,    73,     6,    73,    -1,    73,     7,    73,    -1,
      73,     8,    73,    -1,    73,     9,    73,    -1,    73,    12,
      73,    -1,    73,    13,    73,    -1,    86,    -1,    80,    26,
      -1,    80,    27,    -1,    81,    -1,    83,    35,    -1,    82,
      35,    -1,    85,    34,     3,    -1,    85,    34,    -1,    85,
      34,    84,    -1,    74,    -1,    84,    29,    74,    -1,    86,
      -1,    84,    29,    86,    -1,    44,    -1,    44,    -1,    88,
      -1,    34,    73,    35,    -1,    80,    -1,    26,    87,    -1,
      27,    87,    -1,    31,    87,    -1,    30,    87,    -1,    45,
      -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   153,   153,   165,   166,   170,   171,   175,   179,   186,
     190,   194,   201,   205,   211,   218,   222,   229,   233,   240,
     247,   251,   258,   262,   269,   273,   280,   284,   288,   292,
     296,   300,   307,   311,   318,   322,   329,   333,   340,   347,
     354,   361,   368,   375,   382,   386,   390,   394,   398,   402,
     409,   416,   420,   424,   428,   432,   439,   443,   447,   451,
     458,   462,   466,   470,   477,   481,   488,   491,   497,   501,
     505,   509,   516,   520,   527,   531,   538,   545,   549,   553,
     557,   564,   570,   574,   578,   585,   589,   593,   597,   601,
     609,   613
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int",
  "T_LessEqual", "T_GreaterEqual", "T_EQ", "T_NE", "T_LeftAngle",
  "T_RightAngle", "T_And", "T_Or", "T_Equal", "T_MulAssign", "T_DivAssign",
  "T_AddAssign", "T_SubAssign", "T_While", "T_For", "T_If", "T_Else",
  "T_Return", "T_Break", "T_Continue", "T_Inc", "T_Dec", "T_Semicolon",
  "T_Comma", "T_Dash", "T_Plus", "T_Star", "T_Slash", "T_LeftParen",
  "T_RightParen", "T_LeftBracket", "T_RightBracket", "T_LeftBrace",
  "T_RightBrace", "T_Public", "T_Private", "T_Static", "T_Class",
  "T_Identifier", "T_IntConstant", "T_BoolConstant", "LOWEST",
  "LOWER_THAN_ELSE", "$accept", "Program", "DeclList", "Decl",
  "single_declaration", "type_specifier", "function_definition",
  "function_prototype", "function_prototype_header",
  "parameter_declaration_list", "parameter_declaration",
  "compound_statement_with_scope", "statement_list", "statement",
  "simple_statement", "expression_statement", "selection_statement",
  "iteration_statement", "while_statement", "for_statement", "condition",
  "return_statement", "decl_statement", "break_statement", "expression",
  "assignment_expression", "assignment_operator", "arithmetic_expression",
  "relational_expression", "equality_expression", "logical_expression",
  "postfix_expression", "func_call_expression",
  "function_call_header_no_parameters",
  "function_call_header_with_parameters", "arg_list",
  "function_identifier", "primary_expression", "unary_expression",
  "constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    55,    55,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    68,
      69,    70,    71,    72,    73,    73,    73,    73,    73,    73,
      74,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    79,    79,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    84,    84,    84,
      84,    85,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     5,     1,
       1,     1,     2,     2,     2,     3,     4,     3,     1,     2,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     7,     1,     1,     5,     7,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     1,     2,     2,     3,     2,     3,     1,     3,     1,
       3,     1,     1,     1,     3,     1,     2,     2,     2,     2,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    11,    10,     0,     2,     4,     5,     0,     6,
       0,     0,     1,     3,     0,    13,     0,    12,    14,    51,
      52,    53,    54,    55,     7,    15,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    21,    82,
      90,    91,    42,     0,    24,     0,    23,    25,    26,    27,
      28,    36,    37,    29,    30,    31,     0,    44,    45,    46,
      47,    48,    85,    71,     0,     0,     0,    68,    49,    83,
       0,    16,    18,     0,     0,     0,     0,    41,    43,    86,
      87,    89,    88,     0,     0,    20,    22,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
      69,    70,    73,    72,    75,     0,    19,     0,     8,     0,
      40,     0,     0,    84,    62,    63,    64,    65,    60,    61,
      66,    67,    57,    56,    58,    59,    74,    77,    76,    68,
       0,    50,    17,     0,     0,     0,     0,    38,     0,    34,
      78,    68,     0,     0,    39,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    42,    43,     9,    10,    11,    71,
      72,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     109,    53,    54,    55,    56,    57,    26,    58,    59,    60,
      61,    62,    63,    64,    65,   128,    66,    67,    68,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int16 yypact[] =
{
      97,  -101,  -101,  -101,     6,    97,  -101,  -101,    -3,  -101,
     -19,     7,  -101,  -101,   340,  -101,    92,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,    97,   307,     4,    11,    12,
     301,    22,   307,   307,  -101,   307,   307,   307,  -101,    14,
    -101,  -101,  -101,    16,  -101,   124,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,   243,  -101,  -101,  -101,
    -101,  -101,    -5,  -101,    26,    35,    41,  -101,    69,  -101,
      32,    49,  -101,   251,   307,   301,   307,  -101,  -101,  -101,
    -101,  -101,  -101,   197,    89,  -101,  -101,   307,   307,   307,
     307,   307,   307,   307,   307,  -101,   307,   307,   307,   307,
    -101,  -101,  -101,  -101,    13,   307,  -101,    97,  -101,    44,
     279,   301,   205,  -101,    61,    61,   293,   293,    61,    61,
     287,    23,    -6,    -6,  -101,  -101,  -101,  -101,    52,   -12,
      69,   279,  -101,   156,   307,    51,   307,  -101,   213,    76,
    -101,   -11,   156,    51,  -101,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -101,  -101,  -101,   103,    20,     3,  -101,  -101,  -101,  -101,
      17,   -10,  -101,   -43,  -101,   -23,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,   -25,  -100,   -53,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,   -99,   -22,  -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -82
static const yytype_int16 yytable[] =
{
      17,    73,    86,     8,   127,   129,    12,    77,     8,    15,
      79,    80,    83,    81,    82,   105,   126,   -79,   -80,    16,
       7,   100,   101,   -79,   -80,     7,    98,    99,    70,    87,
      88,    89,    90,    91,    92,    93,   140,   141,    74,    32,
      33,    14,    18,    35,    36,    75,    76,    37,   -81,   110,
      78,   112,   111,    96,    97,    98,    99,    39,    40,    41,
      84,   102,   114,   115,   116,   117,   118,   119,   120,   121,
     103,   122,   123,   124,   125,   104,   106,   105,   107,   133,
     131,   136,   130,    19,    20,    21,    22,    23,   134,    16,
     137,    96,    97,    98,    99,     1,     2,     3,   143,   144,
       1,     2,     3,    19,    20,    21,    22,    23,    13,   138,
      70,    27,    28,    29,   130,    30,    31,    24,    32,    33,
      34,     0,    35,    36,   132,   139,    37,     1,     2,     3,
      16,    38,     0,   145,     0,     0,    39,    40,    41,     0,
       0,     0,     0,    27,    28,    29,     0,    30,    31,     0,
      32,    33,    34,     0,    35,    36,     0,     0,    37,     1,
       2,     3,    16,    85,     0,     0,     0,     0,    39,    40,
      41,     0,     0,     0,     0,    27,    28,    29,     0,    30,
      31,     0,    32,    33,    34,     0,    35,    36,     0,     0,
      37,     0,     0,     0,    16,     0,     0,     0,     0,     0,
      39,    40,    41,    87,    88,    89,    90,    91,    92,    93,
      94,    87,    88,    89,    90,    91,    92,    93,    94,    87,
      88,    89,    90,    91,    92,    93,    94,    96,    97,    98,
      99,     0,   113,     0,     0,    96,    97,    98,    99,     0,
     135,     0,     0,    96,    97,    98,    99,     0,   142,    87,
      88,    89,    90,    91,    92,    93,    94,    87,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
       0,    95,     0,    96,    97,    98,    99,     0,     0,   108,
       0,    96,    97,    98,    99,    87,    88,    89,    90,    91,
      92,    93,    94,    87,    88,    89,    90,    91,    92,    87,
      88,     0,     0,    91,    92,     0,     0,     0,     0,    96,
      97,    98,    99,     0,     0,     0,     0,    96,    97,    98,
      99,     0,     0,    96,    97,    98,    99,    32,    33,    34,
       0,    35,    36,    32,    33,    37,     0,    35,    36,     0,
       0,    37,     0,     0,     0,    39,    40,    41,     0,     0,
       0,    39,    40,    41,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    25
};

static const yytype_int16 yycheck[] =
{
      10,    26,    45,     0,   104,   104,     0,    30,     5,    28,
      32,    33,    37,    35,    36,    68,     3,    29,    29,    38,
       0,    26,    27,    35,    35,     5,    32,    33,    25,     6,
       7,     8,     9,    10,    11,    12,   136,   136,    34,    26,
      27,    44,    35,    30,    31,    34,    34,    34,    34,    74,
      28,    76,    75,    30,    31,    32,    33,    44,    45,    46,
      44,    35,    87,    88,    89,    90,    91,    92,    93,    94,
      35,    96,    97,    98,    99,    34,    44,   130,    29,    35,
     105,    29,   104,    14,    15,    16,    17,    18,   111,    38,
     133,    30,    31,    32,    33,     3,     4,     5,    22,   142,
       3,     4,     5,    14,    15,    16,    17,    18,     5,   134,
     107,    19,    20,    21,   136,    23,    24,    28,    26,    27,
      28,    -1,    30,    31,   107,   135,    34,     3,     4,     5,
      38,    39,    -1,   143,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    28,    -1,    30,    31,    -1,    -1,    34,     3,
       4,     5,    38,    39,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    28,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,     6,     7,     8,     9,    10,    11,    12,
      13,     6,     7,     8,     9,    10,    11,    12,    13,     6,
       7,     8,     9,    10,    11,    12,    13,    30,    31,    32,
      33,    -1,    35,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    30,    31,    32,    33,    -1,    35,     6,
       7,     8,     9,    10,    11,    12,    13,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    -1,    -1,    28,
      -1,    30,    31,    32,    33,     6,     7,     8,     9,    10,
      11,    12,    13,     6,     7,     8,     9,    10,    11,     6,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    30,    31,    32,    33,    26,    27,    28,
      -1,    30,    31,    26,    27,    34,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    44,    45,    46,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    50,    51,    52,    53,    54,    55,
      56,    57,     0,    52,    44,    28,    38,    60,    35,    14,
      15,    16,    17,    18,    28,    34,    75,    19,    20,    21,
      23,    24,    26,    27,    28,    30,    31,    34,    39,    44,
      45,    46,    53,    54,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    70,    71,    72,    73,    74,    76,    77,
      78,    79,    80,    81,    82,    83,    85,    86,    87,    88,
      54,    58,    59,    73,    34,    34,    34,    64,    28,    87,
      87,    87,    87,    73,    44,    39,    62,     6,     7,     8,
       9,    10,    11,    12,    13,    28,    30,    31,    32,    33,
      26,    27,    35,    35,    34,    75,    44,    29,    28,    69,
      73,    64,    73,    35,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,     3,    74,    84,    86,
      87,    73,    59,    35,    64,    35,    29,    62,    73,    60,
      74,    86,    35,    22,    62,    60
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 153 "parser.y"
    {
                                      (yylsp[(1) - (1)]);
                                      /* The @1 is needed to convince
                                       * yacc to set up yylloc. You can remove
                                       * it once you have other uses of @n*/
                                      Program *program = new Program((yyvsp[(1) - (1)].declList));
                                      if (ReportError::NumErrors() == 0)
                                          program->Emit();
                                    }
    break;

  case 3:
#line 165 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 4:
#line 166 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 5:
#line 170 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].varDecl); }
    break;

  case 6:
#line 171 "parser.y"
    {}
    break;

  case 7:
#line 176 "parser.y"
    {
                          (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].identifier)), (yyvsp[(1) - (3)].varType));
                      }
    break;

  case 8:
#line 180 "parser.y"
    {
                        (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(1) - (5)]), (yyvsp[(2) - (5)].identifier)), (yyvsp[(1) - (5)].varType), (yyvsp[(4) - (5)].expr));
                      }
    break;

  case 9:
#line 187 "parser.y"
    {
                    (yyval.varType) = Type::voidType;
                  }
    break;

  case 10:
#line 191 "parser.y"
    {
                    (yyval.varType) = Type::intType;
                  }
    break;

  case 11:
#line 195 "parser.y"
    {
                    (yyval.varType) = Type::boolType;
                  }
    break;

  case 12:
#line 202 "parser.y"
    { 
                        (yyvsp[(1) - (2)].funcDecl)->SetFunctionBody((yyvsp[(2) - (2)].stmt)); 
                      }
    break;

  case 13:
#line 206 "parser.y"
    {
                      }
    break;

  case 14:
#line 212 "parser.y"
    { 
                        (yyval.funcDecl) = (yyvsp[(1) - (2)].funcDecl); 
                      }
    break;

  case 15:
#line 219 "parser.y"
    {
                              (yyval.funcDecl) = new FnDecl(new Identifier((yylsp[(1) - (3)]), (yyvsp[(2) - (3)].identifier)), (yyvsp[(1) - (3)].varType),  new List<VarDecl *>);
                            }
    break;

  case 16:
#line 223 "parser.y"
    {
                              (yyval.funcDecl) = new FnDecl(new Identifier((yylsp[(1) - (4)]), (yyvsp[(2) - (4)].identifier)), (yyvsp[(1) - (4)].varType), (yyvsp[(4) - (4)].varDeclList));
                            }
    break;

  case 17:
#line 230 "parser.y"
    {
                                ((yyval.varDeclList) = (yyvsp[(1) - (3)].varDeclList))->Append((yyvsp[(3) - (3)].varDecl)); 
                              }
    break;

  case 18:
#line 234 "parser.y"
    { 
                                ((yyval.varDeclList) = new List<VarDecl *>)->Append((yyvsp[(1) - (1)].varDecl));  
                              }
    break;

  case 19:
#line 241 "parser.y"
    {
                            (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(1) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].varType));
                          }
    break;

  case 20:
#line 248 "parser.y"
    { 
                                  (yyval.stmt) = new StmtBlock((yyvsp[(2) - (3)].stmtList)); 
                                }
    break;

  case 21:
#line 252 "parser.y"
    { 
                                  (yyval.stmt) = new StmtBlock(new List<Stmt *>); 
                                }
    break;

  case 22:
#line 259 "parser.y"
    { 
                      ((yyval.stmtList) = (yyvsp[(1) - (2)].stmtList))->Append((yyvsp[(2) - (2)].stmt)); 
                    }
    break;

  case 23:
#line 263 "parser.y"
    { 
                      ((yyval.stmtList) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt)); 
                    }
    break;

  case 24:
#line 270 "parser.y"
    { 
                (yyval.stmt) = (yyvsp[(1) - (1)].stmt); 
              }
    break;

  case 25:
#line 274 "parser.y"
    {
                (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
              }
    break;

  case 26:
#line 281 "parser.y"
    {
                      (yyval.stmt) = (yyvsp[(1) - (1)].expr);
                    }
    break;

  case 27:
#line 285 "parser.y"
    {
                      (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
                    }
    break;

  case 28:
#line 289 "parser.y"
    {
                      (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
                    }
    break;

  case 29:
#line 293 "parser.y"
    {
                      (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
                    }
    break;

  case 30:
#line 297 "parser.y"
    {
                      (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
                    }
    break;

  case 31:
#line 301 "parser.y"
    {
                      (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
                    }
    break;

  case 32:
#line 308 "parser.y"
    {
                        (yyval.expr) = new EmptyExpr();
                      }
    break;

  case 33:
#line 312 "parser.y"
    {
                        (yyval.expr) = (yyvsp[(1) - (2)].expr);
                      }
    break;

  case 34:
#line 319 "parser.y"
    {
                        (yyval.stmt) = new IfStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt), NULL);
                      }
    break;

  case 35:
#line 323 "parser.y"
    {
                        (yyval.stmt) = new IfStmt((yyvsp[(3) - (7)].expr), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt));
                      }
    break;

  case 36:
#line 330 "parser.y"
    {
                        (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
                      }
    break;

  case 37:
#line 334 "parser.y"
    {
                        (yyval.stmt) = (yyvsp[(1) - (1)].stmt);
                      }
    break;

  case 38:
#line 341 "parser.y"
    {  
                    (yyval.stmt) = new WhileStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt)); 
                  }
    break;

  case 39:
#line 348 "parser.y"
    {
                  (yyval.stmt) = new ForStmt((yyvsp[(3) - (7)].expr), (yyvsp[(4) - (7)].expr), (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].stmt));
                }
    break;

  case 40:
#line 355 "parser.y"
    {
              (yyval.expr) = (yyvsp[(1) - (1)].expr);
            }
    break;

  case 41:
#line 362 "parser.y"
    {
                    (yyval.stmt) = new ReturnStmt((yylsp[(1) - (2)]), (yyvsp[(2) - (2)].expr));
                  }
    break;

  case 42:
#line 369 "parser.y"
    {
                  (yyval.stmt) = new DeclStmt((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].varDecl));
                }
    break;

  case 43:
#line 376 "parser.y"
    { 
                    (yyval.stmt) = new BreakStmt((yylsp[(1) - (2)])); 
                  }
    break;

  case 44:
#line 383 "parser.y"
    {
              (yyval.expr) = (yyvsp[(1) - (1)].expr);
            }
    break;

  case 45:
#line 387 "parser.y"
    {
              (yyval.expr) = (yyvsp[(1) - (1)].expr);
            }
    break;

  case 46:
#line 391 "parser.y"
    {
              (yyval.expr) = (yyvsp[(1) - (1)].expr);
            }
    break;

  case 47:
#line 395 "parser.y"
    {
              (yyval.expr) = (yyvsp[(1) - (1)].expr);
            }
    break;

  case 48:
#line 399 "parser.y"
    {
              (yyval.expr) = (yyvsp[(1) - (1)].expr);
            }
    break;

  case 49:
#line 403 "parser.y"
    {
              (yyval.expr) = (yyvsp[(1) - (1)].expr);
            }
    break;

  case 50:
#line 410 "parser.y"
    {
                          (yyval.expr) = new AssignExpr((yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].ops), (yyvsp[(3) - (3)].expr));
                        }
    break;

  case 51:
#line 417 "parser.y"
    {
                        (yyval.ops) = new Operator((yylsp[(1) - (1)]), "=");
                      }
    break;

  case 52:
#line 421 "parser.y"
    { 
                        (yyval.ops) = new Operator((yylsp[(1) - (1)]), "*=");  
                      }
    break;

  case 53:
#line 425 "parser.y"
    { 
                        (yyval.ops) = new Operator((yylsp[(1) - (1)]), "/=");  
                      }
    break;

  case 54:
#line 429 "parser.y"
    { 
                        (yyval.ops) = new Operator((yylsp[(1) - (1)]), "+=");  
                      }
    break;

  case 55:
#line 433 "parser.y"
    { 
                        (yyval.ops) = new Operator((yylsp[(1) - (1)]), "-=");  
                      }
    break;

  case 56:
#line 440 "parser.y"
    {
                          (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"+") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 57:
#line 444 "parser.y"
    {
                          (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"-") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 58:
#line 448 "parser.y"
    {
                          (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"*") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 59:
#line 452 "parser.y"
    {
                          (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"/") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 60:
#line 459 "parser.y"
    {
                          (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"<") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 61:
#line 463 "parser.y"
    {
                          (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),">") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 62:
#line 467 "parser.y"
    {
                          (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"<=") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 63:
#line 471 "parser.y"
    {
                          (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),">=") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 64:
#line 478 "parser.y"
    {
                        (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"==") ,(yyvsp[(3) - (3)].expr));
                      }
    break;

  case 65:
#line 482 "parser.y"
    {
                        (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"!=") ,(yyvsp[(3) - (3)].expr));
                      }
    break;

  case 66:
#line 488 "parser.y"
    {
                         (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"&&") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 67:
#line 491 "parser.y"
    {
                         (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"||") ,(yyvsp[(3) - (3)].expr));
                        }
    break;

  case 68:
#line 498 "parser.y"
    {
                      (yyval.expr)=(yyvsp[(1) - (1)].expr);
                    }
    break;

  case 69:
#line 502 "parser.y"
    {
                      (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]),"++"));
                    }
    break;

  case 70:
#line 506 "parser.y"
    {
                      (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]),"--"));
                    }
    break;

  case 71:
#line 510 "parser.y"
    {
                      (yyval.expr) = (yyvsp[(1) - (1)].expr);
                    }
    break;

  case 72:
#line 517 "parser.y"
    { 
                        (yyval.expr) = (yyvsp[(1) - (2)].expr); 
                      }
    break;

  case 73:
#line 521 "parser.y"
    { 
                        (yyval.expr) = (yyvsp[(1) - (2)].expr); 
                      }
    break;

  case 74:
#line 528 "parser.y"
    { 
                                      (yyval.expr) = new Call((yylsp[(1) - (3)]), NULL, (yyvsp[(1) - (3)].funcId), new List<Expr*>); 
                                    }
    break;

  case 75:
#line 532 "parser.y"
    { 
                                      (yyval.expr) = new Call((yylsp[(1) - (2)]), NULL, (yyvsp[(1) - (2)].funcId), new List<Expr*>); 
                                    }
    break;

  case 76:
#line 539 "parser.y"
    { 
                                        (yyval.expr) = new Call((yylsp[(1) - (3)]), NULL, (yyvsp[(1) - (3)].funcId), (yyvsp[(3) - (3)].argList));
                                      }
    break;

  case 77:
#line 546 "parser.y"
    { 
            ((yyval.argList) = new List<Expr*>)->Append((yyvsp[(1) - (1)].expr));
          }
    break;

  case 78:
#line 550 "parser.y"
    { 
            ((yyval.argList) = (yyvsp[(1) - (3)].argList))->Append((yyvsp[(3) - (3)].expr));
          }
    break;

  case 79:
#line 554 "parser.y"
    { 
            ((yyval.argList) = new List<Expr*>)->Append((yyvsp[(1) - (1)].expr));
          }
    break;

  case 80:
#line 558 "parser.y"
    { 
            ((yyval.argList) = (yyvsp[(1) - (3)].argList))->Append((yyvsp[(3) - (3)].expr));
          }
    break;

  case 81:
#line 565 "parser.y"
    { 
                        (yyval.funcId) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier)); 
                      }
    break;

  case 82:
#line 571 "parser.y"
    { 
                      (yyval.expr) = new VarExpr((yylsp[(1) - (1)]), new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier)));
                    }
    break;

  case 83:
#line 575 "parser.y"
    {
                      (yyval.expr) = (yyvsp[(1) - (1)].expr);
                    }
    break;

  case 84:
#line 579 "parser.y"
    { 
                      (yyval.expr) = (yyvsp[(2) - (3)].expr);
                    }
    break;

  case 85:
#line 586 "parser.y"
    {
                    (yyval.expr) = (yyvsp[(1) - (1)].expr);
                  }
    break;

  case 86:
#line 590 "parser.y"
    {
                    (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]),"++"),(yyvsp[(2) - (2)].expr));
                  }
    break;

  case 87:
#line 594 "parser.y"
    {
                    (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]),"--"),(yyvsp[(2) - (2)].expr));
                  }
    break;

  case 88:
#line 598 "parser.y"
    {
                    (yyval.expr) = new ArithmeticExpr(new IntConstant((yylsp[(1) - (2)]), 1),new Operator((yylsp[(2) - (2)]),"*") ,(yyvsp[(2) - (2)].expr));
                  }
    break;

  case 89:
#line 602 "parser.y"
    {
                    (yyval.expr) = new ArithmeticExpr(new IntConstant((yylsp[(1) - (2)]), -1) , new Operator((yylsp[(2) - (2)]),"*") ,(yyvsp[(2) - (2)].expr));
                  }
    break;

  case 90:
#line 610 "parser.y"
    {
            (yyval.expr) = new IntConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].integerConstant));
          }
    break;

  case 91:
#line 614 "parser.y"
    {
            (yyval.expr) = new BoolConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].boolConstant)); 
          }
    break;


/* Line 1267 of yacc.c.  */
#line 2299 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 620 "parser.y"


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}

