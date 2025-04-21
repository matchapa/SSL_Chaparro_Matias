
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"
 // Definiciones y declariaciones de C 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

extern int yylex();
extern FILE * yyin;
extern int yylineno;
void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 86 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIPO_DE_DATO = 258,
     IDENTIFICADOR = 259,
     CALIFICADOR_DE_TIPO = 260,
     STRUCT_O_UNION = 261,
     ENUM = 262,
     ELIPSIS = 263,
     CASE = 264,
     DEFAULT = 265,
     IF = 266,
     SWITCH = 267,
     ELSE = 268,
     DO = 269,
     WHILE = 270,
     FOR = 271,
     GOTO = 272,
     CONTINUE = 273,
     BREAK = 274,
     RETURN = 275,
     OPERADOR_DE_ASIGNACION = 276,
     OR = 277,
     AND = 278,
     IGUALDAD = 279,
     DISTINTO = 280,
     MENOR_IGUAL = 281,
     MAYOR_IGUAL = 282,
     DESPLAZAMIENTO_A_DERECHA = 283,
     DESPLAZAMIENTO_A_IZQUIERDA = 284,
     INCREMENTO = 285,
     DECREMENTO = 286,
     SIZEOF = 287,
     OPERADOR_UNARIO = 288,
     APUNTA = 289,
     CADENA = 290,
     CONSTANTE_ENTERA = 291,
     CONSTANTE_CARACTER = 292,
     CONSTANTE_FLOTANTE = 293,
     AUTO = 294,
     REGISTER = 295,
     STATIC = 296,
     EXTERN = 297,
     TYPEDEF = 298,
     THEN = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "parser.y"

    struct yylval_struct{
        char cadena[200];
        int tipo;
        int entero;
        float real;
    } s;



/* Line 214 of yacc.c  */
#line 177 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 189 "parser.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNRULES -- Number of states.  */
#define YYNSTATES  319

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,     2,     2,    49,    58,     2,
      51,    52,    47,    45,    67,    46,    68,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    66,
      53,    44,    54,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    57,    64,    59,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    17,    21,    25,
      28,    32,    35,    37,    40,    43,    46,    49,    51,    53,
      55,    57,    59,    61,    62,    64,    66,    68,    74,    79,
      82,    84,    87,    89,    93,    95,    99,   103,   106,   108,
     111,   113,   115,   119,   121,   127,   132,   135,   137,   141,
     143,   147,   150,   152,   154,   158,   163,   167,   172,   177,
     181,   184,   188,   190,   191,   193,   196,   198,   202,   204,
     208,   211,   214,   216,   218,   222,   224,   228,   233,   235,
     239,   242,   244,   246,   249,   251,   255,   260,   264,   268,
     271,   276,   280,   284,   287,   289,   291,   293,   295,   297,
     299,   303,   308,   312,   315,   320,   324,   328,   331,   333,
     336,   342,   350,   356,   362,   370,   380,   382,   383,   387,
     390,   393,   397,   399,   403,   405,   409,   411,   417,   419,
     421,   425,   427,   431,   433,   437,   439,   443,   445,   449,
     451,   455,   459,   461,   465,   469,   473,   477,   479,   483,
     487,   489,   493,   497,   499,   503,   507,   511,   513,   518,
     520,   523,   526,   529,   532,   537,   539,   544,   549,   553,
     557,   561,   564,   567,   569,   571,   573,   577,   579,   583,
     585,   587
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      70,     0,    -1,    71,    -1,    70,    71,    -1,    72,    -1,
      73,    -1,    75,    90,    74,   107,    -1,    75,    90,   107,
      -1,    90,    74,   107,    -1,    90,   107,    -1,    75,    81,
      66,    -1,    75,    66,    -1,    73,    -1,    74,    73,    -1,
      76,    77,    -1,    78,    77,    -1,     5,    77,    -1,    39,
      -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,    75,
      -1,    -1,     3,    -1,    79,    -1,    87,    -1,     6,     4,
      63,    80,    64,    -1,     6,    63,    80,    64,    -1,     6,
       4,    -1,    83,    -1,    80,    83,    -1,    82,    -1,    81,
      67,    82,    -1,    90,    -1,    90,    44,    99,    -1,    84,
      85,    66,    -1,    78,    84,    -1,    78,    -1,     5,    84,
      -1,     5,    -1,    86,    -1,    85,    67,    86,    -1,    90,
      -1,     7,     4,    63,    88,    64,    -1,     7,    63,    88,
      64,    -1,     7,     4,    -1,    89,    -1,    88,    67,    89,
      -1,     4,    -1,     4,    44,   116,    -1,    92,    91,    -1,
      91,    -1,     4,    -1,    51,    90,    52,    -1,    91,    61,
     116,    62,    -1,    91,    61,    62,    -1,    91,    51,    95,
      52,    -1,    91,    51,    98,    52,    -1,    91,    51,    52,
      -1,    47,    93,    -1,    47,    93,    92,    -1,    94,    -1,
      -1,     5,    -1,    94,     5,    -1,    96,    -1,    96,    67,
       8,    -1,    97,    -1,    96,    67,    97,    -1,    75,    90,
      -1,    75,   102,    -1,    75,    -1,     4,    -1,    98,    67,
       4,    -1,   114,    -1,    63,   100,    64,    -1,    63,   100,
      67,    64,    -1,    99,    -1,   100,    67,    99,    -1,    84,
     102,    -1,    84,    -1,    92,    -1,    92,   103,    -1,   103,
      -1,    51,   102,    52,    -1,   103,    61,   116,    62,    -1,
      61,   116,    62,    -1,   103,    61,    62,    -1,    61,    62,
      -1,   103,    51,    95,    52,    -1,    51,    95,    52,    -1,
     103,    51,    52,    -1,    51,    52,    -1,   105,    -1,   106,
      -1,   107,    -1,   109,    -1,   110,    -1,   112,    -1,     4,
      56,   104,    -1,     9,   116,    56,   104,    -1,    10,    56,
     104,    -1,   111,    66,    -1,    63,    74,   108,    64,    -1,
      63,   108,    64,    -1,    63,    74,    64,    -1,    63,    64,
      -1,   104,    -1,   108,   104,    -1,    11,    51,   113,    52,
     104,    -1,    11,    51,   113,    52,   104,    13,   104,    -1,
      12,    51,   113,    52,   104,    -1,    15,    51,   113,    52,
     104,    -1,    14,   104,    15,    51,   113,    52,    66,    -1,
      16,    51,   111,    66,   111,    66,   111,    52,   104,    -1,
     113,    -1,    -1,    17,     4,    66,    -1,    18,    66,    -1,
      19,    66,    -1,    20,   111,    66,    -1,   114,    -1,   113,
      67,   114,    -1,   115,    -1,   128,    44,   114,    -1,   117,
      -1,   117,    55,   113,    56,   115,    -1,   115,    -1,   118,
      -1,   117,    22,   118,    -1,   119,    -1,   118,    23,   119,
      -1,   120,    -1,   119,    57,   120,    -1,   121,    -1,   120,
      50,   121,    -1,   122,    -1,   121,    58,   122,    -1,   123,
      -1,   122,    24,   123,    -1,   122,    25,   123,    -1,   124,
      -1,   123,    53,   124,    -1,   123,    54,   124,    -1,   123,
      26,   124,    -1,   123,    27,   124,    -1,   125,    -1,   124,
      29,   125,    -1,   124,    28,   125,    -1,   126,    -1,   125,
      45,   126,    -1,   125,    46,   126,    -1,   127,    -1,   126,
      47,   127,    -1,   126,    48,   127,    -1,   126,    49,   127,
      -1,   128,    -1,    51,   101,    52,   127,    -1,   129,    -1,
      30,   128,    -1,    31,   128,    -1,    33,   127,    -1,    32,
     128,    -1,    32,    51,   101,    52,    -1,   130,    -1,   129,
      61,   113,    62,    -1,   129,    51,   131,    52,    -1,   129,
      51,    52,    -1,   129,    68,     4,    -1,   129,    34,     4,
      -1,   129,    30,    -1,   129,    31,    -1,     4,    -1,   132,
      -1,    35,    -1,    51,   113,    52,    -1,   114,    -1,   131,
      67,   114,    -1,    36,    -1,    37,    -1,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   105,   109,   110,   114,   115,   116,   117,
     121,   122,   126,   127,   131,   132,   133,   137,   138,   139,
     140,   141,   145,   146,   150,   151,   152,   156,   157,   158,
     162,   163,   167,   168,   172,   173,   177,   181,   182,   183,
     184,   188,   189,   193,   199,   200,   201,   205,   206,   210,
     211,   215,   216,   220,   221,   222,   223,   224,   225,   226,
     230,   231,   236,   237,   241,   242,   246,   247,   251,   252,
     256,   257,   258,   262,   263,   267,   268,   269,   273,   274,
     278,   279,   283,   284,   285,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   301,   302,   303,   304,   305,   306,
     310,   311,   312,   316,   320,   321,   322,   323,   327,   328,
     332,   333,   334,   339,   340,   341,   345,   346,   350,   351,
     352,   353,   357,   358,   362,   363,   368,   369,   373,   377,
     378,   382,   383,   387,   388,   392,   393,   397,   398,   402,
     403,   404,   408,   409,   410,   411,   412,   416,   417,   418,
     422,   423,   424,   428,   429,   430,   431,   435,   436,   440,
     441,   442,   443,   444,   445,   449,   450,   451,   452,   453,
     454,   455,   456,   460,   461,   462,   463,   467,   468,   472,
     473,   474
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIPO_DE_DATO", "IDENTIFICADOR",
  "CALIFICADOR_DE_TIPO", "STRUCT_O_UNION", "ENUM", "ELIPSIS", "CASE",
  "DEFAULT", "IF", "SWITCH", "ELSE", "DO", "WHILE", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "OPERADOR_DE_ASIGNACION", "OR", "AND",
  "IGUALDAD", "DISTINTO", "MENOR_IGUAL", "MAYOR_IGUAL",
  "DESPLAZAMIENTO_A_DERECHA", "DESPLAZAMIENTO_A_IZQUIERDA", "INCREMENTO",
  "DECREMENTO", "SIZEOF", "OPERADOR_UNARIO", "APUNTA", "CADENA",
  "CONSTANTE_ENTERA", "CONSTANTE_CARACTER", "CONSTANTE_FLOTANTE", "AUTO",
  "REGISTER", "STATIC", "EXTERN", "TYPEDEF", "'='", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "'('", "')'", "'<'", "'>'", "'?'", "':'", "'|'",
  "'&'", "'~'", "'!'", "'['", "']'", "'{'", "'}'", "THEN", "';'", "','",
  "'.'", "$accept", "unidad_de_traduccion", "declaracion_externa",
  "definicion_de_funcion", "declaracion", "lista_de_declaraciones",
  "especificadores_de_declaracion",
  "especificador_de_categoria_de_almacenamiento",
  "opt_especificadores_de_declaracion", "especificador_de_tipo",
  "especificador_estructura_o_union", "lista_declaraciones_struct",
  "lista_declaradores_init", "declarador_init", "declaracion_struct",
  "lista_calificador_especificador", "lista_declaradores_struct",
  "declarador_struct", "especificador_enum", "lista_de_enumerador",
  "enumerador", "declarador", "declarador_directo", "apuntador",
  "opt_lista_calificadores_de_tipo", "lista_calificadores_de_tipo",
  "lista_tipos_de_parametro", "lista_de_parametros",
  "declaracion_parametro", "lista_de_identificadores", "inicializador",
  "lista_de_inicializadores", "nombre_de_tipo", "declarador_abstracto",
  "declarador_abstracto_directo", "proposicion", "proposicion_etiquetada",
  "proposicion_expresion", "proposicion_compuesta",
  "lista_de_proposiciones", "proposicion_de_seleccion",
  "proposicion_de_iteracion", "opt_expresion", "proposicion_de_salto",
  "expresion", "expresion_de_asignacion", "expresion_condicional",
  "expresion_constante", "expresion_logica_OR", "expresion_logica_AND",
  "expresion_OR_inclusivo", "expresion_OR_exclusivo", "expresion_AND",
  "expresion_de_igualdad", "expresion_relacional",
  "expresion_de_corrimiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_cast", "expresion_unaria",
  "expresion_posfija", "expresion_primaria",
  "lista_de_expresiones_argumento", "constante", 0
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
     295,   296,   297,   298,    61,    43,    45,    42,    47,    37,
      94,    40,    41,    60,    62,    63,    58,   124,    38,   126,
      33,    91,    93,   123,   125,   299,    59,    44,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      76,    76,    77,    77,    78,    78,    78,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    84,    84,    84,
      84,    85,    85,    86,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    98,    98,    99,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   107,   107,   107,   107,   108,   108,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   117,
     117,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   122,   123,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   127,   127,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   130,   131,   131,   132,
     132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     3,     3,     2,
       3,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     5,     4,     2,
       1,     2,     1,     3,     1,     3,     3,     2,     1,     2,
       1,     1,     3,     1,     5,     4,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       2,     3,     1,     0,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     3,     4,     1,     3,
       2,     1,     1,     2,     1,     3,     4,     3,     3,     2,
       4,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     4,     3,     3,     2,     1,     2,
       5,     7,     5,     5,     7,     9,     1,     0,     3,     2,
       2,     3,     1,     3,     1,     3,     1,     5,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     4,     1,
       2,     2,     2,     2,     4,     1,     4,     4,     3,     3,
       3,     2,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    53,    23,     0,     0,    17,    18,    19,    20,
      21,    63,     0,     0,     2,     4,     5,     0,    23,    23,
      25,    26,     0,    52,     0,    22,    16,    29,     0,    46,
       0,    64,    60,    62,     0,     1,     3,    11,     0,    32,
      34,    14,    15,   117,    12,     0,     0,     9,     0,     0,
      51,     0,    40,    38,     0,    30,     0,     0,    49,     0,
      47,    61,    65,    54,    10,     0,     0,     0,     7,   173,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,   175,   179,   180,   181,     0,
     107,   117,   108,    94,    95,    96,   117,    97,    98,     0,
      99,   116,   122,   124,   126,   129,   131,   133,   135,   137,
     139,   142,   147,   150,   153,   157,   159,   165,   174,    13,
       8,    34,    73,    59,    72,     0,    66,    68,     0,   173,
      56,   128,     0,   157,     0,    39,    37,    28,    31,     0,
      41,    43,     0,     0,    45,     0,    33,     0,    35,    75,
       6,   117,     0,   117,     0,     0,     0,     0,   117,     0,
     119,   120,     0,     0,   160,   161,     0,   163,   162,    81,
       0,     0,   106,   117,   105,   109,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   172,
       0,     0,     0,     0,     0,     0,    70,    82,    71,    84,
      57,     0,    58,     0,    55,    27,    36,     0,    44,    50,
      48,    78,     0,   100,   117,   102,     0,     0,     0,     0,
       0,   118,   121,     0,     0,    82,    80,     0,   176,   104,
     123,   130,     0,   132,   134,   136,   138,   140,   141,   145,
     146,   143,   144,   149,   148,   151,   152,   154,   155,   156,
     125,   170,   168,   177,     0,     0,   169,    93,     0,     0,
      89,     0,    83,     0,     0,    67,    69,    74,    42,    76,
       0,   101,   117,   117,     0,   117,   117,   164,   158,     0,
     167,     0,   166,    91,    85,    87,    92,     0,    88,     0,
      77,    79,   110,   112,     0,   113,     0,   127,   178,    90,
      86,   117,     0,   117,   111,   114,     0,   117,   115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    44,    45,    46,    18,    26,    19,
      20,    54,    38,    39,    55,    56,   139,   140,    21,    59,
      60,    22,    23,    24,    32,    33,   268,   126,   127,   128,
     148,   222,   170,   269,   209,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   132,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   264,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -155
static const yytype_int16 yypact[] =
{
     642,  -155,  -155,   730,    32,    36,  -155,  -155,  -155,  -155,
    -155,    38,    17,   617,  -155,  -155,  -155,    18,   730,   730,
    -155,  -155,   248,    85,    22,  -155,  -155,    -1,   188,     3,
      41,  -155,    35,   102,    64,  -155,  -155,  -155,   159,  -155,
     180,  -155,  -155,   265,  -155,   248,    18,  -155,   592,   539,
      85,   188,   188,   188,    44,  -155,    17,    41,    90,    63,
    -155,  -155,  -155,  -155,  -155,    17,   476,   248,  -155,    73,
     688,   119,   133,   141,   459,   150,   154,   204,   151,   162,
     688,   711,   711,   728,   688,  -155,  -155,  -155,  -155,   666,
    -155,   327,  -155,  -155,  -155,  -155,   383,  -155,  -155,   167,
    -155,   170,  -155,  -155,     6,   226,   195,   206,   220,   211,
      78,   217,   194,   183,  -155,   242,   723,  -155,  -155,  -155,
    -155,   250,  -155,  -155,    67,   212,   225,  -155,   -28,  -155,
    -155,  -155,   237,  -155,    86,  -155,  -155,  -155,  -155,   181,
    -155,  -155,    88,   688,  -155,    41,  -155,   476,  -155,  -155,
    -155,   459,   253,   459,   688,   688,   295,   688,   688,   246,
    -155,  -155,   247,   688,  -155,  -155,   666,  -155,  -155,   127,
     262,   -11,  -155,   421,  -155,  -155,  -155,   688,   688,   688,
     688,   688,   688,   688,   688,   688,   688,   688,   688,   688,
     688,   688,   688,   688,   688,   688,   688,   688,  -155,  -155,
     311,   676,   688,   313,   495,   556,  -155,    51,  -155,    92,
    -155,   368,  -155,   314,  -155,  -155,  -155,    17,  -155,  -155,
    -155,  -155,   112,  -155,   459,  -155,    23,    42,   272,    58,
     269,  -155,  -155,   296,   512,   129,  -155,   688,  -155,  -155,
    -155,   226,    50,   195,   206,   220,   211,    78,    78,   217,
     217,   217,   217,   194,   194,   183,   183,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,    68,   -25,  -155,  -155,   297,   298,
    -155,   292,    92,   636,   578,  -155,  -155,  -155,  -155,  -155,
     289,  -155,   459,   459,   688,   459,   688,  -155,  -155,   688,
    -155,   688,  -155,  -155,  -155,  -155,  -155,   299,  -155,   293,
    -155,  -155,   343,  -155,    71,  -155,   306,  -155,  -155,  -155,
    -155,   459,   315,   688,  -155,  -155,   309,   459,  -155
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   364,  -155,     7,   160,     0,  -155,   240,   -19,
    -155,   328,  -155,   317,   -38,   -22,  -155,   163,  -155,   326,
     239,    -2,   -18,   -27,  -155,  -155,   -44,  -155,   174,  -155,
    -135,  -155,   222,   -97,  -154,   -73,  -155,  -155,    81,   305,
    -155,  -155,   -72,  -155,   -78,   -64,   -32,   -56,  -155,   208,
     209,   223,   224,   229,    76,    10,    72,    74,   -55,   -24,
    -155,  -155,  -155,  -155
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      17,   156,   149,    25,   125,    61,    50,    16,   162,    53,
      34,   171,   221,    17,   152,    40,   138,   131,    25,    25,
      16,     2,     2,   175,   212,   133,     2,   208,   178,   168,
     135,   136,    53,    53,    53,    53,    27,   292,   131,   213,
      29,   238,   177,    31,   121,    58,   133,     1,   124,    52,
       4,     5,   119,   272,   141,     2,   177,   164,   165,   167,
     133,   179,    51,   121,    11,    11,    57,   169,    12,    12,
      53,     2,   236,    12,   119,   282,   226,   227,   223,   229,
     225,   272,    11,   149,    37,   171,   230,   219,   171,     1,
     177,    52,     4,     5,   283,    28,   138,   207,   119,    30,
     175,   242,   204,    47,   186,   187,   289,    62,   137,   177,
     285,   131,   205,   240,    11,    53,    63,   177,   204,   133,
     290,    68,   206,   312,   265,   177,   120,   144,   205,   151,
     145,   188,   189,   260,   143,   291,    48,   263,   177,   257,
     258,   259,   235,   273,   169,   301,    49,    53,   150,   271,
     215,   281,   218,   274,   133,   145,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   131,    11,   153,   279,   207,   234,   280,
     234,   133,   288,     1,   154,     3,     4,     5,   205,    50,
     205,     1,   155,    52,     4,     5,   249,   250,   251,   252,
      67,   157,    34,    91,   124,   158,   304,   235,   159,   302,
     303,   124,   305,   133,   306,   141,   149,   160,   299,     6,
       7,     8,     9,    10,    66,    64,    65,   308,   161,   297,
     194,   195,   196,   176,   124,   184,   185,   177,   314,   192,
     193,   316,   131,    43,   318,   190,   191,   216,   217,   180,
     133,     1,   181,     3,     4,     5,   182,   307,    41,    42,
     247,   248,   253,   254,   210,   133,   255,   256,     1,    69,
       3,     4,     5,   124,    70,    71,    72,    73,   183,    74,
      75,    76,    77,    78,    79,    80,   197,     6,     7,     8,
       9,    10,   211,   129,    66,    81,    82,    83,    84,   214,
      85,    86,    87,    88,     6,     7,     8,     9,    10,   224,
     228,    43,   231,   232,   237,   261,    89,   266,   277,    81,
      82,    83,    84,   284,    85,    86,    87,    88,    43,    90,
       1,    69,     3,     4,     5,   286,    70,    71,    72,    73,
      89,    74,    75,    76,    77,    78,    79,    80,   287,   293,
     294,   309,   147,   300,   295,   310,   311,    81,    82,    83,
      84,   317,    85,    86,    87,    88,     6,     7,     8,     9,
      10,     1,   313,     3,     4,     5,   275,    36,    89,   134,
     278,   315,   146,   142,   220,   276,   241,    69,   233,   243,
      43,   172,    70,    71,    72,    73,   173,    74,    75,    76,
      77,    78,    79,    80,   244,     0,   245,     6,     7,     8,
       9,    10,   246,    81,    82,    83,    84,     0,    85,    86,
      87,    88,     0,     0,     0,    69,     0,     0,     0,     0,
      70,    71,    72,    73,    89,    74,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,    43,   174,     0,     0,
       0,    81,    82,    83,    84,     0,    85,    86,    87,    88,
       0,     0,     0,    69,     0,     0,     0,     0,    70,    71,
      72,    73,    89,    74,    75,    76,    77,    78,    79,    80,
     129,     0,     0,     0,    43,   239,     0,     0,     0,    81,
      82,    83,    84,     0,    85,    86,    87,    88,     1,     2,
       3,     4,     5,     0,     0,     0,    81,    82,    83,    84,
      89,    85,    86,    87,    88,     1,     0,     3,     4,     5,
       0,     0,    43,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,   147,
       0,     0,    11,   129,     0,     0,   204,   267,     0,     0,
       0,     6,     7,     8,     9,    10,   205,     0,     0,    11,
     129,     0,     0,   234,   267,     0,     0,     0,     0,    81,
      82,    83,    84,   205,    85,    86,    87,    88,     0,     0,
       0,     0,   129,     0,     0,     0,    81,    82,    83,    84,
      89,    85,    86,    87,    88,     1,   122,     3,     4,     5,
       0,   130,     0,     0,     0,     0,     0,    89,    81,    82,
      83,    84,     0,    85,    86,    87,    88,    35,   270,     0,
       1,     2,     3,     4,     5,     0,     0,     0,     0,    89,
       0,     6,     7,     8,     9,    10,     0,     0,     0,     1,
     298,     3,     4,     5,   123,     1,     2,     3,     4,     5,
       0,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,     0,     0,     0,    11,     0,     0,     0,    12,     1,
     129,    52,     4,     5,     0,     6,     7,     8,     9,    10,
     129,     6,     7,     8,     9,    10,     0,     0,   296,    11,
       0,     0,   129,    12,     0,     0,    81,    82,    83,    84,
       0,    85,    86,    87,    88,     0,    81,    82,    83,    84,
       0,    85,    86,    87,    88,   129,     0,    89,    81,    82,
      83,    84,     0,    85,    86,    87,    88,    89,   262,     0,
       0,     0,   129,     1,     0,     3,     4,     5,     0,    89,
       0,    81,    82,    83,    84,     0,    85,    86,    87,    88,
       0,     0,     0,   198,   199,     0,     0,   200,    81,    82,
      83,    84,   163,    85,    86,    87,    88,     0,     0,     6,
       7,     8,     9,    10,   201,     0,     0,     0,     0,   166,
       0,     0,     0,     0,   202,     0,     0,     0,     0,     0,
       0,   203
};

static const yytype_int16 yycheck[] =
{
       0,    74,    66,     3,    48,    32,    24,     0,    80,    28,
      12,    89,   147,    13,    70,    17,    54,    49,    18,    19,
      13,     4,     4,    96,    52,    49,     4,   124,    22,    84,
      52,    53,    51,    52,    53,    54,     4,    62,    70,    67,
       4,    52,    67,     5,    46,     4,    70,     3,    48,     5,
       6,     7,    45,   207,    56,     4,    67,    81,    82,    83,
      84,    55,    63,    65,    47,    47,    63,    89,    51,    51,
      89,     4,   169,    51,    67,    52,   154,   155,   151,   157,
     153,   235,    47,   147,    66,   163,   158,   143,   166,     3,
      67,     5,     6,     7,    52,    63,   134,   124,    91,    63,
     173,   179,    51,    22,    26,    27,    56,     5,    64,    67,
      52,   143,    61,   177,    47,   134,    52,    67,    51,   143,
      52,    40,   124,    52,   202,    67,    45,    64,    61,    56,
      67,    53,    54,   197,    44,    67,    51,   201,    67,   194,
     195,   196,   169,    51,   166,   280,    61,   166,    67,   205,
      64,   224,    64,    61,   178,    67,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   205,    47,    56,    64,   204,    51,    67,
      51,   205,   237,     3,    51,     5,     6,     7,    61,   207,
      61,     3,    51,     5,     6,     7,   186,   187,   188,   189,
      40,    51,   204,    43,   204,    51,   284,   234,     4,   282,
     283,   211,   285,   237,   286,   217,   280,    66,   274,    39,
      40,    41,    42,    43,    44,    66,    67,   291,    66,   273,
      47,    48,    49,    66,   234,    24,    25,    67,   311,    45,
      46,   313,   274,    63,   317,    28,    29,    66,    67,    23,
     274,     3,    57,     5,     6,     7,    50,   289,    18,    19,
     184,   185,   190,   191,    52,   289,   192,   193,     3,     4,
       5,     6,     7,   273,     9,    10,    11,    12,    58,    14,
      15,    16,    17,    18,    19,    20,    44,    39,    40,    41,
      42,    43,    67,     4,    44,    30,    31,    32,    33,    62,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    56,
      15,    63,    66,    66,    52,     4,    51,     4,     4,    30,
      31,    32,    33,    51,    35,    36,    37,    38,    63,    64,
       3,     4,     5,     6,     7,    66,     9,    10,    11,    12,
      51,    14,    15,    16,    17,    18,    19,    20,    52,    52,
      52,    52,    63,    64,    62,    62,    13,    30,    31,    32,
      33,    52,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     3,    66,     5,     6,     7,     8,    13,    51,    51,
     217,    66,    65,    57,   145,   211,   178,     4,   166,   180,
      63,    64,     9,    10,    11,    12,    91,    14,    15,    16,
      17,    18,    19,    20,   181,    -1,   182,    39,    40,    41,
      42,    43,   183,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    51,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    51,    14,    15,    16,    17,    18,    19,    20,
       4,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    30,    31,    32,    33,
      51,    35,    36,    37,    38,     3,    -1,     5,     6,     7,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    63,
      -1,    -1,    47,     4,    -1,    -1,    51,    52,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    61,    -1,    -1,    47,
       4,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    61,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    30,    31,    32,    33,
      51,    35,    36,    37,    38,     3,     4,     5,     6,     7,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    51,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,     0,    62,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    51,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,     3,
      62,     5,     6,     7,    52,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,     3,
       4,     5,     6,     7,    -1,    39,    40,    41,    42,    43,
       4,    39,    40,    41,    42,    43,    -1,    -1,    52,    47,
      -1,    -1,     4,    51,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,     4,    -1,    51,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    51,    52,    -1,
      -1,    -1,     4,     3,    -1,     5,     6,     7,    -1,    51,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    30,    31,    -1,    -1,    34,    30,    31,
      32,    33,    51,    35,    36,    37,    38,    -1,    -1,    39,
      40,    41,    42,    43,    51,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    39,    40,    41,    42,
      43,    47,    51,    70,    71,    72,    73,    75,    76,    78,
      79,    87,    90,    91,    92,    75,    77,     4,    63,     4,
      63,     5,    93,    94,    90,     0,    71,    66,    81,    82,
      90,    77,    77,    63,    73,    74,    75,   107,    51,    61,
      91,    63,     5,    78,    80,    83,    84,    63,     4,    88,
      89,    92,     5,    52,    66,    67,    44,    74,   107,     4,
       9,    10,    11,    12,    14,    15,    16,    17,    18,    19,
      20,    30,    31,    32,    33,    35,    36,    37,    38,    51,
      64,    74,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   132,    73,
     107,    90,     4,    52,    75,    95,    96,    97,    98,     4,
      62,   115,   116,   128,    80,    84,    84,    64,    83,    85,
      86,    90,    88,    44,    64,    67,    82,    63,    99,   114,
     107,    56,   116,    56,    51,    51,   104,    51,    51,     4,
      66,    66,   111,    51,   128,   128,    51,   128,   127,    84,
     101,   113,    64,   108,    64,   104,    66,    67,    22,    55,
      23,    57,    50,    58,    24,    25,    26,    27,    53,    54,
      28,    29,    45,    46,    47,    48,    49,    44,    30,    31,
      34,    51,    61,    68,    51,    61,    90,    92,   102,   103,
      52,    67,    52,    67,    62,    64,    66,    67,    64,   116,
      89,    99,   100,   104,    56,   104,   113,   113,    15,   113,
     111,    66,    66,   101,    51,    92,   102,    52,    52,    64,
     114,   118,   113,   119,   120,   121,   122,   123,   123,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     114,     4,    52,   114,   131,   113,     4,    52,    95,   102,
      62,   116,   103,    51,    61,     8,    97,     4,    86,    64,
      67,   104,    52,    52,    51,    52,    66,    52,   127,    56,
      52,    67,    62,    52,    52,    62,    52,    95,    62,   116,
      64,    99,   104,   104,   113,   104,   111,   115,   114,    52,
      62,    13,    52,    66,   104,    66,   111,    52,   104
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
# if YYLTYPE_IS_TRIVIAL
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 57:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { printf("Funcion: %s\n\tLinea:%d\n", (yyvsp[(1) - (4)].s).cadena, yylineno); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { printf("Parametro: %s\n\tTipo: %s\n", (yyvsp[(2) - (2)].s).cadena, (yyvsp[(1) - (2)].s).cadena); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1818 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 1675 of yacc.c  */
#line 481 "parser.y"
 // Codigo C

void yyerror(char *s){
	printf("Error en la linea %d: %s\n", yylineno, s);
}

int main(int argc, const char *argv[]){
    #if YYDEBUG
        yydebug = 1;
    #endif

    // Verifica que se este pasando la cantidad correcta de argumentos, siendo uno el archivo a analizar
    if(argc != 2){
        puts("Error: Se requiere el nombre del archivo a analizar. Ej: ./a.exe archivo.c ");
        return 1;
    }
    yyin = fopen(argv[1], "r");
    yyparse();
    return 0;
}

