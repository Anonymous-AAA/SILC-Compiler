/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "exprtree.y"

 int yyerror(char const *s);
 int yylex(void);
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.c"
 #include "codegen.c"
// #include "symbol.c"
// #include "test.c"
// #include "evaluate.c"
 extern FILE *yyin;   //yyin is declared in the lex file

#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    PLUS = 259,                    /* PLUS  */
    MINUS = 260,                   /* MINUS  */
    MUL = 261,                     /* MUL  */
    DIV = 262,                     /* DIV  */
    MOD = 263,                     /* MOD  */
    END = 264,                     /* END  */
    BEG = 265,                     /* BEG  */
    READ = 266,                    /* READ  */
    WRITE = 267,                   /* WRITE  */
    ID = 268,                      /* ID  */
    EQUAL = 269,                   /* EQUAL  */
    IF = 270,                      /* IF  */
    THEN = 271,                    /* THEN  */
    ELSE = 272,                    /* ELSE  */
    ENDIF = 273,                   /* ENDIF  */
    WHILE = 274,                   /* WHILE  */
    DO = 275,                      /* DO  */
    ENDWHILE = 276,                /* ENDWHILE  */
    LT = 277,                      /* LT  */
    GT = 278,                      /* GT  */
    LE = 279,                      /* LE  */
    GE = 280,                      /* GE  */
    NE = 281,                      /* NE  */
    EQ = 282,                      /* EQ  */
    BREAK = 283,                   /* BREAK  */
    CONTINUE = 284,                /* CONTINUE  */
    DECL = 285,                    /* DECL  */
    ENDDECL = 286,                 /* ENDDECL  */
    INT = 287,                     /* INT  */
    STR = 288,                     /* STR  */
    STRCON = 289,                  /* STRCON  */
    MAIN = 290                     /* MAIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define PLUS 259
#define MINUS 260
#define MUL 261
#define DIV 262
#define MOD 263
#define END 264
#define BEG 265
#define READ 266
#define WRITE 267
#define ID 268
#define EQUAL 269
#define IF 270
#define THEN 271
#define ELSE 272
#define ENDIF 273
#define WHILE 274
#define DO 275
#define ENDWHILE 276
#define LT 277
#define GT 278
#define LE 279
#define GE 280
#define NE 281
#define EQ 282
#define BREAK 283
#define CONTINUE 284
#define DECL 285
#define ENDDECL 286
#define INT 287
#define STR 288
#define STRCON 289
#define MAIN 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exprtree.y"

 struct tnode *no;
 int integer;
 struct  Gsymbol *sym;
 struct Paramstruct *param;

#line 214 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_PLUS = 4,                       /* PLUS  */
  YYSYMBOL_MINUS = 5,                      /* MINUS  */
  YYSYMBOL_MUL = 6,                        /* MUL  */
  YYSYMBOL_DIV = 7,                        /* DIV  */
  YYSYMBOL_MOD = 8,                        /* MOD  */
  YYSYMBOL_END = 9,                        /* END  */
  YYSYMBOL_BEG = 10,                       /* BEG  */
  YYSYMBOL_READ = 11,                      /* READ  */
  YYSYMBOL_WRITE = 12,                     /* WRITE  */
  YYSYMBOL_ID = 13,                        /* ID  */
  YYSYMBOL_EQUAL = 14,                     /* EQUAL  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_THEN = 16,                      /* THEN  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_ENDIF = 18,                     /* ENDIF  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_ENDWHILE = 21,                  /* ENDWHILE  */
  YYSYMBOL_LT = 22,                        /* LT  */
  YYSYMBOL_GT = 23,                        /* GT  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_NE = 26,                        /* NE  */
  YYSYMBOL_EQ = 27,                        /* EQ  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_DECL = 30,                      /* DECL  */
  YYSYMBOL_ENDDECL = 31,                   /* ENDDECL  */
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_STR = 33,                       /* STR  */
  YYSYMBOL_STRCON = 34,                    /* STRCON  */
  YYSYMBOL_MAIN = 35,                      /* MAIN  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* '['  */
  YYSYMBOL_39_ = 39,                       /* ']'  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_Program = 45,                   /* Program  */
  YYSYMBOL_GDeclBlock = 46,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 47,                 /* GDeclList  */
  YYSYMBOL_GDecl = 48,                     /* GDecl  */
  YYSYMBOL_GidList = 49,                   /* GidList  */
  YYSYMBOL_Gid = 50,                       /* Gid  */
  YYSYMBOL_MainBlock = 51,                 /* MainBlock  */
  YYSYMBOL_FDefBlock = 52,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 53,                      /* Fdef  */
  YYSYMBOL_ParamList = 54,                 /* ParamList  */
  YYSYMBOL_Param = 55,                     /* Param  */
  YYSYMBOL_Type = 56,                      /* Type  */
  YYSYMBOL_LDeclBlock = 57,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 58,                  /* LDecList  */
  YYSYMBOL_LDecl = 59,                     /* LDecl  */
  YYSYMBOL_IdList = 60,                    /* IdList  */
  YYSYMBOL_Body = 61,                      /* Body  */
  YYSYMBOL_Stmt = 62,                      /* Stmt  */
  YYSYMBOL_InputStmt = 63,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 64,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 65,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 66,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 67,                 /* WhileStmt  */
  YYSYMBOL_BreakStmt = 68,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 69,              /* ContinueStmt  */
  YYSYMBOL_expr = 70,                      /* expr  */
  YYSYMBOL_ArgList = 71                    /* ArgList  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    56,    63,    74,    75,    78,    79,    82,
      87,    88,    92,    93,    94,   106,   107,   113,   114,   117,
     120,   121,   122,   125,   129,   130,   134,   135,   138,   139,
     142,   145,   146,   149,   150,   153,   154,   155,   156,   157,
     158,   159,   161,   164,   168,   170,   173,   178,   179,   182,
     185,   188,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     211,   212
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "END", "BEG", "READ", "WRITE", "ID", "EQUAL", "IF",
  "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "LT", "GT", "LE",
  "GE", "NE", "EQ", "BREAK", "CONTINUE", "DECL", "ENDDECL", "INT", "STR",
  "STRCON", "MAIN", "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'",
  "$accept", "Program", "GDeclBlock", "GDeclList", "GDecl", "GidList",
  "Gid", "MainBlock", "FDefBlock", "Fdef", "ParamList", "Param", "Type",
  "LDeclBlock", "LDecList", "LDecl", "IdList", "Body", "Stmt", "InputStmt",
  "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt", "BreakStmt",
  "ContinueStmt", "expr", "ArgList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      70,    14,     6,    49,    50,   -55,   -55,   -55,   -55,    41,
     -55,    39,    24,   -55,     6,   -55,    50,   -55,    57,   -55,
     -55,   142,   -32,   -55,    60,   -55,   -55,    55,   101,    54,
     -55,    39,    69,    54,    78,    -9,   -55,   110,   -55,    -4,
      -6,   -55,    54,   -55,   -55,   121,   158,   -11,   160,   161,
     106,   166,    45,   317,    56,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   180,   -55,   190,     3,     3,     3,     3,
       3,   -55,   -55,   -55,   210,    48,   -55,   214,   -55,   -55,
     198,   -28,   -55,   159,   -55,     3,   102,   188,   146,   108,
     114,   -55,   147,   -55,   -55,   -55,   317,     3,   194,     3,
      -1,   140,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   195,   -55,   218,   224,   221,   -55,   231,
     234,   152,   -55,   182,   -55,   260,    -3,   -55,    86,    86,
     -55,   -55,   -55,   266,   266,   266,   266,   266,   266,   -55,
       3,   317,   317,   -55,   -55,   209,   -55,     3,   -55,   212,
     283,   294,   215,   260,   -55,   317,   216,   219,   -55,   306,
     -55,   -55,   220,   -55
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     6,    24,    25,     0,
       8,     0,     0,     1,    24,     3,     0,    18,     0,     5,
       7,    12,     0,    11,     0,     2,    17,     0,     0,    22,
       9,     0,     0,    22,     0,     0,    21,     0,    10,     0,
       0,    13,     0,    14,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    40,    41,     0,    20,     0,     0,     0,     0,     0,
       0,    50,    51,    27,     0,     0,    29,     0,    16,    33,
       0,     0,    64,    66,    65,     0,     0,     0,     0,     0,
       0,    32,     0,    26,    28,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    30,     0,
       0,     0,    42,     0,    68,    71,     0,    63,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    44,
       0,     0,     0,    31,    19,     0,    67,     0,    69,     0,
       0,     0,     0,    70,    46,     0,     0,     0,    43,     0,
      48,    49,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   -55,   -55,   245,   -55,   227,    26,   -55,   243,
     228,   233,    13,   189,   -55,   185,   -55,   -52,   -54,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -49,   -55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     9,    10,    22,    23,     5,    16,    17,
      35,    36,    37,    53,    75,    76,    92,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    86,   126
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,    77,    82,    67,    30,    31,    82,    45,    46,    47,
      97,    48,    83,    98,    11,    49,    83,    18,    87,    88,
      89,    90,    11,    79,    50,    51,    52,    68,    42,    18,
      15,    42,    43,    84,   147,    63,   101,    84,   148,    85,
     124,    12,    25,    85,   120,     6,     7,     8,   121,    13,
     123,   125,    21,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    24,    74,    79,    45,    46,    47,
      27,    48,    19,     7,     8,    49,    73,     7,     8,    93,
       7,     8,    14,     8,    50,    51,     7,     8,    74,   150,
     151,   149,   104,   105,   106,    33,    79,    79,   153,    78,
       1,    32,     2,   159,    34,    79,   102,   103,   104,   105,
     106,    39,   102,   103,   104,   105,   106,    41,   102,   103,
     104,   105,   106,    44,   107,   108,   109,   110,   111,   112,
     107,   108,   109,   110,   111,   112,   107,   108,   109,   110,
     111,   112,    71,   113,   102,   103,   104,   105,   106,   116,
     102,   103,   104,   105,   106,   117,   102,   103,   104,   105,
     106,    65,   107,   108,   109,   110,   111,   112,   107,   108,
     109,   110,   111,   112,   107,   108,   109,   110,   111,   112,
      28,   127,    29,   118,   119,   115,   102,   103,   104,   105,
     106,   145,   102,   103,   104,   105,   106,    99,    66,   100,
      69,    70,    72,    81,   107,   108,   109,   110,   111,   112,
     107,   108,   109,   110,   111,   112,   102,   103,   104,   105,
     106,   146,    80,    91,   114,    45,    46,    47,    52,    48,
     122,   139,   140,    49,   107,   108,   109,   110,   111,   112,
     141,   142,    50,    51,   143,    45,    46,    47,   154,    48,
     152,   158,   160,    49,    20,   161,   163,    95,    38,    26,
      94,    40,    50,    51,   102,   103,   104,   105,   106,    96,
     102,   103,   104,   105,   106,    64,     0,   144,     0,     0,
       0,     0,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,     0,    48,     0,
     155,   156,    49,     0,     0,    45,    46,    47,     0,    48,
       0,    50,    51,    49,     0,   157,     0,    45,    46,    47,
       0,    48,    50,    51,   162,    49,     0,     0,    45,    46,
      47,     0,    48,     0,    50,    51,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51
};

static const yytype_int16 yycheck[] =
{
      54,    53,     3,    14,    36,    37,     3,    11,    12,    13,
      38,    15,    13,    41,     1,    19,    13,     4,    67,    68,
      69,    70,     9,    77,    28,    29,    30,    38,    37,    16,
       4,    37,    41,    34,    37,    41,    85,    34,    41,    40,
      41,    35,    16,    40,    96,    31,    32,    33,    97,     0,
      99,   100,    13,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    40,    52,   120,    11,    12,    13,
      13,    15,    31,    32,    33,    19,    31,    32,    33,    31,
      32,    33,    32,    33,    28,    29,    32,    33,    75,   141,
     142,   140,     6,     7,     8,    40,   150,   151,   147,    43,
      30,    41,    32,   155,     3,   159,     4,     5,     6,     7,
       8,    42,     4,     5,     6,     7,     8,    39,     4,     5,
       6,     7,     8,    13,    22,    23,    24,    25,    26,    27,
      22,    23,    24,    25,    26,    27,    22,    23,    24,    25,
      26,    27,    36,    41,     4,     5,     6,     7,     8,    41,
       4,     5,     6,     7,     8,    41,     4,     5,     6,     7,
       8,    40,    22,    23,    24,    25,    26,    27,    22,    23,
      24,    25,    26,    27,    22,    23,    24,    25,    26,    27,
      38,    41,    40,    36,    37,    39,     4,     5,     6,     7,
       8,    39,     4,     5,     6,     7,     8,    38,    40,    40,
      40,    40,    36,    13,    22,    23,    24,    25,    26,    27,
      22,    23,    24,    25,    26,    27,     4,     5,     6,     7,
       8,    39,    42,    13,    36,    11,    12,    13,    30,    15,
      36,    36,    14,    19,    22,    23,    24,    25,    26,    27,
      16,    20,    28,    29,    13,    11,    12,    13,    36,    15,
      41,    36,    36,    19,     9,    36,    36,    43,    31,    16,
      75,    33,    28,    29,     4,     5,     6,     7,     8,    80,
       4,     5,     6,     7,     8,    42,    -1,    43,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    22,    23,
      24,    25,    26,    27,    11,    12,    13,    -1,    15,    -1,
      17,    18,    19,    -1,    -1,    11,    12,    13,    -1,    15,
      -1,    28,    29,    19,    -1,    21,    -1,    11,    12,    13,
      -1,    15,    28,    29,    18,    19,    -1,    -1,    11,    12,
      13,    -1,    15,    -1,    28,    29,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    30,    32,    45,    46,    51,    31,    32,    33,    47,
      48,    56,    35,     0,    32,    51,    52,    53,    56,    31,
      48,    13,    49,    50,    40,    51,    53,    13,    38,    40,
      36,    37,    41,    40,     3,    54,    55,    56,    50,    42,
      54,    39,    37,    41,    13,    11,    12,    13,    15,    19,
      28,    29,    30,    57,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    41,    55,    40,    40,    14,    38,    40,
      40,    36,    36,    31,    56,    58,    59,    61,    43,    62,
      42,    13,     3,    13,    34,    40,    70,    70,    70,    70,
      70,    13,    60,    31,    59,    43,    57,    38,    41,    38,
      40,    70,     4,     5,     6,     7,     8,    22,    23,    24,
      25,    26,    27,    41,    36,    39,    41,    41,    36,    37,
      61,    70,    36,    70,    41,    70,    71,    41,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    36,
      14,    16,    20,    13,    43,    39,    39,    37,    41,    70,
      61,    61,    41,    70,    36,    17,    18,    21,    36,    61,
      36,    36,    18,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      49,    49,    50,    50,    50,    51,    51,    52,    52,    53,
      54,    54,    54,    55,    56,    56,    57,    57,    58,    58,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    65,    65,    66,    66,    67,
      68,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       3,     1,     1,     4,     4,     8,     7,     2,     1,     9,
       3,     1,     0,     2,     1,     1,     3,     2,     2,     1,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     8,     5,     4,     7,    10,     8,     8,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     4,     3,     4,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: GDeclBlock FDefBlock MainBlock  */
#line 49 "exprtree.y"
                                         {
          //code($3);
          //evaluate($3)
          //test($3)
          printSymbolTable();
          exit(0);
          }
#line 1409 "y.tab.c"
    break;

  case 3: /* Program: GDeclBlock MainBlock  */
#line 56 "exprtree.y"
                               {
          //code($2);
          printSymbolTable();
          //evaluate($2)
          //test($2)
          exit(0);
          }
#line 1421 "y.tab.c"
    break;

  case 4: /* Program: MainBlock  */
#line 63 "exprtree.y"
                    {
          //code($1); 
          printSymbolTable();
          //evaluate($1)
          //test($1)
          exit(0);
          }
#line 1433 "y.tab.c"
    break;

  case 9: /* GDecl: Type GidList ';'  */
#line 82 "exprtree.y"
                         { setType((yyvsp[-1].sym),(yyvsp[-2].integer));}
#line 1439 "y.tab.c"
    break;

  case 10: /* GidList: GidList ',' Gid  */
#line 87 "exprtree.y"
                          {(yyval.sym)=(yyvsp[-2].sym);}
#line 1445 "y.tab.c"
    break;

  case 11: /* GidList: Gid  */
#line 88 "exprtree.y"
              {(yyval.sym)=(yyvsp[0].sym);}
#line 1451 "y.tab.c"
    break;

  case 12: /* Gid: ID  */
#line 92 "exprtree.y"
         {(yyval.sym)=GInstallVar((yyvsp[0].no)->varname,voidtype,1);}
#line 1457 "y.tab.c"
    break;

  case 13: /* Gid: ID '[' NUM ']'  */
#line 93 "exprtree.y"
                     {(yyval.sym)=GInstallVar((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].no)->val);}
#line 1463 "y.tab.c"
    break;

  case 14: /* Gid: ID '(' ParamList ')'  */
#line 94 "exprtree.y"
                           {(yyval.sym)=GInstallFn((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].param));}
#line 1469 "y.tab.c"
    break;

  case 20: /* ParamList: ParamList ',' Param  */
#line 120 "exprtree.y"
                                {(yyval.param)=(yyvsp[-2].param); createParamList((yyvsp[0].param));}
#line 1475 "y.tab.c"
    break;

  case 21: /* ParamList: Param  */
#line 121 "exprtree.y"
                  {(yyval.param)=(yyvsp[0].param);PCurr=(yyvsp[0].param);}
#line 1481 "y.tab.c"
    break;

  case 22: /* ParamList: %empty  */
#line 122 "exprtree.y"
            {}
#line 1487 "y.tab.c"
    break;

  case 23: /* Param: Type ID  */
#line 125 "exprtree.y"
                {(yyval.param)=createParams((yyvsp[-1].integer),(yyvsp[0].no)->varname);}
#line 1493 "y.tab.c"
    break;

  case 24: /* Type: INT  */
#line 129 "exprtree.y"
           {(yyval.integer) = inttype;}
#line 1499 "y.tab.c"
    break;

  case 25: /* Type: STR  */
#line 130 "exprtree.y"
           {(yyval.integer) = strtype;}
#line 1505 "y.tab.c"
    break;

  case 33: /* Body: Body Stmt  */
#line 149 "exprtree.y"
                 {(yyval.no) = makeConnectorNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1511 "y.tab.c"
    break;

  case 34: /* Body: Stmt  */
#line 150 "exprtree.y"
             {(yyval.no) = (yyvsp[0].no);}
#line 1517 "y.tab.c"
    break;

  case 35: /* Stmt: InputStmt  */
#line 153 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1523 "y.tab.c"
    break;

  case 36: /* Stmt: OutputStmt  */
#line 154 "exprtree.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1529 "y.tab.c"
    break;

  case 37: /* Stmt: AsgStmt  */
#line 155 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1535 "y.tab.c"
    break;

  case 38: /* Stmt: IfStmt  */
#line 156 "exprtree.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1541 "y.tab.c"
    break;

  case 39: /* Stmt: WhileStmt  */
#line 157 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1547 "y.tab.c"
    break;

  case 40: /* Stmt: BreakStmt  */
#line 158 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1553 "y.tab.c"
    break;

  case 41: /* Stmt: ContinueStmt  */
#line 159 "exprtree.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1559 "y.tab.c"
    break;

  case 42: /* InputStmt: READ '(' ID ')' ';'  */
#line 161 "exprtree.y"
                                {setGentry((yyvsp[-2].no));
                                (yyval.no) = makeSingleNode(READ,(yyvsp[-2].no));
                                }
#line 1567 "y.tab.c"
    break;

  case 43: /* InputStmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 164 "exprtree.y"
                                             { setArrayNode((yyvsp[-5].no),(yyvsp[-3].no));
                                            (yyval.no) = makeSingleNode(READ,(yyvsp[-5].no));
                                            }
#line 1575 "y.tab.c"
    break;

  case 44: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 168 "exprtree.y"
                                    {(yyval.no) = makeSingleNode(WRITE,(yyvsp[-2].no));}
#line 1581 "y.tab.c"
    break;

  case 45: /* AsgStmt: ID EQUAL expr ';'  */
#line 170 "exprtree.y"
                            {setGentry((yyvsp[-3].no)); 
                              (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));
                              }
#line 1589 "y.tab.c"
    break;

  case 46: /* AsgStmt: ID '[' expr ']' EQUAL expr ';'  */
#line 173 "exprtree.y"
                                         { setArrayNode((yyvsp[-6].no),(yyvsp[-4].no));
                                          (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-1].no));
                                        }
#line 1597 "y.tab.c"
    break;

  case 47: /* IfStmt: IF '(' expr ')' THEN Body ELSE Body ENDIF ';'  */
#line 178 "exprtree.y"
                                                       {(yyval.no) = makeTriplets(IF,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1603 "y.tab.c"
    break;

  case 48: /* IfStmt: IF '(' expr ')' THEN Body ENDIF ';'  */
#line 179 "exprtree.y"
                                            {(yyval.no) = makeTriplets(IF,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1609 "y.tab.c"
    break;

  case 49: /* WhileStmt: WHILE '(' expr ')' DO Body ENDWHILE ';'  */
#line 182 "exprtree.y"
                                                    {(yyval.no) = makeTriplets(WHILE,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1615 "y.tab.c"
    break;

  case 50: /* BreakStmt: BREAK ';'  */
#line 185 "exprtree.y"
                      {(yyval.no) = makeNoChildNode(BREAK);}
#line 1621 "y.tab.c"
    break;

  case 51: /* ContinueStmt: CONTINUE ';'  */
#line 188 "exprtree.y"
                            {(yyval.no) = makeNoChildNode(CONTINUE);}
#line 1627 "y.tab.c"
    break;

  case 52: /* expr: expr PLUS expr  */
#line 191 "exprtree.y"
                       {(yyval.no) = makeOperatorNode(PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1633 "y.tab.c"
    break;

  case 53: /* expr: expr MINUS expr  */
#line 192 "exprtree.y"
                      {(yyval.no) = makeOperatorNode(MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1639 "y.tab.c"
    break;

  case 54: /* expr: expr MUL expr  */
#line 193 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1645 "y.tab.c"
    break;

  case 55: /* expr: expr DIV expr  */
#line 194 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1651 "y.tab.c"
    break;

  case 56: /* expr: expr MOD expr  */
#line 195 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1657 "y.tab.c"
    break;

  case 57: /* expr: expr LT expr  */
#line 196 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1663 "y.tab.c"
    break;

  case 58: /* expr: expr GT expr  */
#line 197 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1669 "y.tab.c"
    break;

  case 59: /* expr: expr LE expr  */
#line 198 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1675 "y.tab.c"
    break;

  case 60: /* expr: expr GE expr  */
#line 199 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1681 "y.tab.c"
    break;

  case 61: /* expr: expr NE expr  */
#line 200 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(NE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1687 "y.tab.c"
    break;

  case 62: /* expr: expr EQ expr  */
#line 201 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(EQ,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1693 "y.tab.c"
    break;

  case 63: /* expr: '(' expr ')'  */
#line 202 "exprtree.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 1699 "y.tab.c"
    break;

  case 64: /* expr: NUM  */
#line 203 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 1705 "y.tab.c"
    break;

  case 65: /* expr: STRCON  */
#line 204 "exprtree.y"
           {(yyval.no) = (yyvsp[0].no);}
#line 1711 "y.tab.c"
    break;

  case 66: /* expr: ID  */
#line 205 "exprtree.y"
       {setGentry((yyvsp[0].no));(yyval.no) = (yyvsp[0].no);}
#line 1717 "y.tab.c"
    break;

  case 67: /* expr: ID '[' expr ']'  */
#line 206 "exprtree.y"
                   {setArrayNode((yyvsp[-3].no),(yyvsp[-1].no));(yyval.no)=(yyvsp[-3].no);}
#line 1723 "y.tab.c"
    break;


#line 1727 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 215 "exprtree.y"


int yyerror(char const *s)
{
    printf("yyerror: %s\n",s);
}


int main(int argc, char* argv[]) {

  if(argc>1){
    
    FILE *fp = fopen(argv[1], "r");
    if(fp)
      yyin = fp;
    
  }   
  

  yyparse();

 return 0;
}

