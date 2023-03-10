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
    MAIN = 290,                    /* MAIN  */
    RET = 291,                     /* RET  */
    AND = 292,                     /* AND  */
    OR = 293,                      /* OR  */
    FREE = 294,                    /* FREE  */
    ALLOC = 295,                   /* ALLOC  */
    TYPE = 296,                    /* TYPE  */
    ENDTYPE = 297                  /* ENDTYPE  */
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
#define RET 291
#define AND 292
#define OR 293
#define FREE 294
#define ALLOC 295
#define TYPE 296
#define ENDTYPE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exprtree.y"

 struct tnode *no;
 int integer;
 struct Gsymbol *gsym;
 struct Lsymbol *lsym;  
 struct Paramstruct *param;

#line 229 "y.tab.c"

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
  YYSYMBOL_RET = 36,                       /* RET  */
  YYSYMBOL_AND = 37,                       /* AND  */
  YYSYMBOL_OR = 38,                        /* OR  */
  YYSYMBOL_FREE = 39,                      /* FREE  */
  YYSYMBOL_ALLOC = 40,                     /* ALLOC  */
  YYSYMBOL_TYPE = 41,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 42,                   /* ENDTYPE  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_Program = 53,                   /* Program  */
  YYSYMBOL_TypeDefBlock = 54,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 55,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 56,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 57,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 58,                 /* FieldDecl  */
  YYSYMBOL_GDeclBlock = 59,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 60,                 /* GDeclList  */
  YYSYMBOL_GDecl = 61,                     /* GDecl  */
  YYSYMBOL_GidList = 62,                   /* GidList  */
  YYSYMBOL_Gid = 63,                       /* Gid  */
  YYSYMBOL_MainBlock = 64,                 /* MainBlock  */
  YYSYMBOL_FDefBlock = 65,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 66,                      /* Fdef  */
  YYSYMBOL_ParamList = 67,                 /* ParamList  */
  YYSYMBOL_Param = 68,                     /* Param  */
  YYSYMBOL_Type = 69,                      /* Type  */
  YYSYMBOL_LDeclBlock = 70,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 71,                  /* LDecList  */
  YYSYMBOL_LDecl = 72,                     /* LDecl  */
  YYSYMBOL_IdList = 73,                    /* IdList  */
  YYSYMBOL_Body = 74,                      /* Body  */
  YYSYMBOL_Stmt = 75,                      /* Stmt  */
  YYSYMBOL_FreeStmt = 76,                  /* FreeStmt  */
  YYSYMBOL_AllocStmt = 77,                 /* AllocStmt  */
  YYSYMBOL_InputStmt = 78,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 79,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 80,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 81,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 82,                 /* WhileStmt  */
  YYSYMBOL_BreakStmt = 83,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 84,              /* ContinueStmt  */
  YYSYMBOL_ReturnStmt = 85,                /* ReturnStmt  */
  YYSYMBOL_expr = 86,                      /* expr  */
  YYSYMBOL_ArgList = 87,                   /* ArgList  */
  YYSYMBOL_Field = 88                      /* Field  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   445

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      49,    50,     2,     2,    46,     2,    51,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    41,    41,    54,    55,    58,    59,    62,    65,    66,
      69,    77,    79,    82,    83,    86,    91,    92,    96,    97,
      98,   105,   127,   129,   132,   154,   155,   156,   159,   163,
     164,   165,   169,   171,   174,   175,   178,   181,   182,   185,
     187,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     202,   203,   206,   207,   210,   213,   216,   219,   221,   224,
     229,   230,   233,   236,   239,   243,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   275,   276,
     278,   279
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
  "STRCON", "MAIN", "RET", "AND", "OR", "FREE", "ALLOC", "TYPE", "ENDTYPE",
  "'{'", "'}'", "';'", "','", "'['", "']'", "'('", "')'", "'.'", "$accept",
  "Program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid",
  "MainBlock", "FDefBlock", "Fdef", "ParamList", "Param", "Type",
  "LDeclBlock", "LDecList", "LDecl", "IdList", "Body", "Stmt", "FreeStmt",
  "AllocStmt", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt",
  "BreakStmt", "ContinueStmt", "ReturnStmt", "expr", "ArgList", "Field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,     6,    21,    -4,    -6,    -7,   -88,   -88,    66,   -88,
      66,   -88,   -88,   -88,   -88,   -88,    52,   -88,    44,    83,
      45,   -88,    49,   -88,   -88,   -39,    62,   -88,    47,   -88,
     -88,    67,   -88,   -88,    58,    94,    66,   -88,    44,    69,
      79,   -88,    53,   -18,   -88,   125,   -88,   107,    66,   -88,
      66,   -88,   -88,   123,    17,   -88,   140,   129,    66,   166,
     140,   170,    55,   -88,   -88,   184,   -88,    81,   -88,   -88,
     156,   -88,   -88,   180,   153,   154,   -11,   155,   164,   177,
     178,    68,   176,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   217,   -13,   156,   -88,   206,    68,    26,
      68,   214,    68,    68,   -88,   -88,   -88,    68,   -42,   -88,
      68,   245,   179,   215,   185,   198,   226,   231,   -33,    95,
      87,   197,   272,   183,   -88,   127,   136,   115,    68,    56,
     174,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,   -88,    97,   105,   -88,   205,   -88,
     211,    68,   212,   220,   221,   223,   -88,   242,   265,   264,
     210,   -88,   320,    24,   -88,   115,   115,   -88,   -88,   -88,
     391,   391,   391,   391,   391,   391,   418,   344,   241,   243,
     239,   -88,   237,   -88,   -88,   -88,   246,    68,   -88,   -88,
     -88,    68,   -88,   -88,   -88,   247,   255,   -88,   296,   361,
     373,   320,   -88,   248,   -88,   -88,   261,   262,   -88,   392,
     -88,   -88,   263,   -88
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,    12,     0,     0,     6,     1,     0,    23,
       0,     3,     5,    31,    29,    30,     0,    14,     0,     0,
       0,     9,     0,    11,    13,    18,     0,    17,    29,     2,
      22,     0,     7,     8,     0,     0,    27,    15,     0,     0,
       0,    10,     0,     0,    26,     0,    16,     0,    27,    19,
       0,    20,    28,     0,     0,    25,    33,     0,     0,     0,
      33,     0,     0,    35,    40,     0,    38,     0,    32,    34,
       0,    40,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    49,    48,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    81,     0,    83,    82,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    21,     0,    91,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,    85,    89,     0,    80,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    78,    77,     0,     0,
       0,    24,     0,    54,    56,    57,     0,     0,    40,    40,
      84,     0,    86,    50,    51,     0,     0,    52,     0,     0,
       0,    88,    53,     0,    59,    40,     0,     0,    55,     0,
      61,    62,     0,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   -88,   282,   -88,   291,   -88,   -88,   297,
     -88,   274,   -88,   -88,   -88,   266,   279,    14,   256,   -88,
     253,   -88,   -69,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   235,   -87,   -88,   -70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    20,    21,     9,    16,    17,
      26,    27,    29,    19,    30,    43,    44,    45,    59,    62,
      63,    67,    70,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,   111,   163,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,   115,    95,    99,     1,   128,     4,   129,    35,   101,
      36,   120,   122,   123,   151,   125,   126,   152,   101,     4,
     127,     7,    18,   130,    22,    94,     8,   119,    50,   106,
      18,   107,    51,    31,    22,    11,   100,    10,   116,   108,
     101,   160,   162,   146,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,    25,    13,   106,
     109,   107,    34,    50,   182,    13,   121,    57,    13,   108,
     191,   106,    61,   107,   192,   110,    61,    14,    15,    13,
      40,   108,    39,    23,    14,    15,    68,    14,    15,    32,
     109,   131,   132,   133,   134,   135,    13,    42,    14,    15,
     198,    49,   109,    41,   201,   110,   161,    37,    38,   136,
     137,   138,   139,   140,   141,    28,    15,   110,    47,   199,
     200,   133,   134,   135,   142,   143,    72,    73,    48,    94,
      94,   131,   132,   133,   134,   135,   209,   154,    52,    94,
     131,   132,   133,   134,   135,   153,   116,   178,   101,   136,
     137,   138,   139,   140,   141,   179,   116,    53,   136,   137,
     138,   139,   140,   141,   142,   143,    56,    74,    75,    76,
      58,    77,    60,   142,   143,    78,    64,   158,   131,   132,
     133,   134,   135,    66,    79,    80,   159,   131,   132,   133,
     134,   135,    81,    96,    71,    82,   136,   137,   138,   139,
     140,   141,    97,    98,   102,   136,   137,   138,   139,   140,
     141,   142,   143,   103,   131,   132,   133,   134,   135,   118,
     142,   143,   104,   105,   164,   113,   114,   124,   145,   147,
     116,   157,   136,   137,   138,   139,   140,   141,   148,   149,
     150,   131,   132,   133,   134,   135,   155,   142,   143,   131,
     132,   133,   134,   135,   180,   181,   187,   183,   190,   136,
     137,   138,   139,   140,   141,   184,   185,   136,   137,   138,
     139,   140,   141,   186,   142,   143,   131,   132,   133,   134,
     135,   188,   142,   143,   189,   196,   193,    12,   194,   195,
     144,   197,   202,   208,   136,   137,   138,   139,   140,   141,
     131,   132,   133,   134,   135,   203,   210,   211,   213,   142,
     143,    33,    46,    24,    54,    69,    65,   156,   136,   137,
     138,   139,   140,   141,   131,   132,   133,   134,   135,    55,
     117,     0,     0,   142,   143,     0,     0,     0,     0,     0,
       0,   204,   136,   137,   138,   139,   140,   141,   131,   132,
     133,   134,   135,     0,     0,     0,     0,   142,   143,     0,
       0,     0,     0,     0,     0,     0,   136,   137,   138,   139,
     140,   141,    74,    75,    76,     0,    77,     0,   205,   206,
      78,   142,     0,     0,    74,    75,    76,     0,    77,    79,
      80,     0,    78,     0,   207,   131,   132,   133,   134,   135,
      82,    79,    80,    74,    75,    76,     0,    77,     0,     0,
     212,    78,    82,    -1,    -1,    -1,    -1,    -1,    -1,     0,
      79,    80,   131,   132,   133,   134,   135,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   137,   138,   139,   140,   141
};

static const yytype_int16 yycheck[] =
{
      70,    14,    71,    14,    41,    47,    13,    49,    47,    51,
      49,    98,    99,   100,    47,   102,   103,    50,    51,    13,
     107,     0,     8,   110,    10,    95,    30,    97,    46,     3,
      16,     5,    50,    19,    20,    42,    47,    43,    51,    13,
      51,   128,   129,   113,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    13,    13,     3,
      34,     5,    13,    46,   151,    13,    40,    50,    13,    13,
      46,     3,    58,     5,    50,    49,    62,    32,    33,    13,
      13,    13,    35,    31,    32,    33,    31,    32,    33,    44,
      34,     4,     5,     6,     7,     8,    13,     3,    32,    33,
     187,    48,    34,    45,   191,    49,    50,    45,    46,    22,
      23,    24,    25,    26,    27,    32,    33,    49,    49,   188,
     189,     6,     7,     8,    37,    38,    45,    46,    49,   199,
     200,     4,     5,     6,     7,     8,   205,    50,    13,   209,
       4,     5,     6,     7,     8,    50,    51,    50,    51,    22,
      23,    24,    25,    26,    27,    50,    51,    50,    22,    23,
      24,    25,    26,    27,    37,    38,    43,    11,    12,    13,
      30,    15,    43,    37,    38,    19,    10,    50,     4,     5,
       6,     7,     8,    13,    28,    29,    50,     4,     5,     6,
       7,     8,    36,    13,    10,    39,    22,    23,    24,    25,
      26,    27,    49,    49,    49,    22,    23,    24,    25,    26,
      27,    37,    38,    49,     4,     5,     6,     7,     8,    13,
      37,    38,    45,    45,    50,    49,     9,    13,    13,    44,
      51,    48,    22,    23,    24,    25,    26,    27,    40,    13,
       9,     4,     5,     6,     7,     8,    49,    37,    38,     4,
       5,     6,     7,     8,    49,    44,    14,    45,    48,    22,
      23,    24,    25,    26,    27,    45,    45,    22,    23,    24,
      25,    26,    27,    50,    37,    38,     4,     5,     6,     7,
       8,    16,    37,    38,    20,    48,    45,     5,    45,    50,
      45,    45,    45,    45,    22,    23,    24,    25,    26,    27,
       4,     5,     6,     7,     8,    50,    45,    45,    45,    37,
      38,    20,    38,    16,    48,    62,    60,    45,    22,    23,
      24,    25,    26,    27,     4,     5,     6,     7,     8,    50,
      95,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    22,    23,    24,    25,    26,    27,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    11,    12,    13,    -1,    15,    -1,    17,    18,
      19,    37,    -1,    -1,    11,    12,    13,    -1,    15,    28,
      29,    -1,    19,    -1,    21,     4,     5,     6,     7,     8,
      39,    28,    29,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    39,    22,    23,    24,    25,    26,    27,    -1,
      28,    29,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    53,    54,    13,    55,    56,     0,    30,    59,
      43,    42,    56,    13,    32,    33,    60,    61,    69,    65,
      57,    58,    69,    31,    61,    13,    62,    63,    32,    64,
      66,    69,    44,    58,    13,    47,    49,    45,    46,    35,
      13,    45,     3,    67,    68,    69,    63,    49,    49,    48,
      46,    50,    13,    50,    67,    68,    43,    50,    30,    70,
      43,    69,    71,    72,    10,    70,    13,    73,    31,    72,
      74,    10,    45,    46,    11,    12,    13,    15,    19,    28,
      29,    36,    39,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    88,    74,    13,    49,    49,    14,
      47,    51,    49,    49,    45,    45,     3,     5,    13,    34,
      49,    86,    88,    49,     9,    14,    51,    85,    13,    88,
      86,    40,    86,    86,    13,    86,    86,    86,    47,    49,
      86,     4,     5,     6,     7,     8,    22,    23,    24,    25,
      26,    27,    37,    38,    45,    13,    88,    44,    40,    13,
       9,    47,    50,    50,    50,    49,    45,    48,    50,    50,
      86,    50,    86,    87,    50,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    50,    50,
      49,    44,    86,    45,    45,    45,    50,    14,    16,    20,
      48,    46,    50,    45,    45,    50,    48,    45,    86,    74,
      74,    86,    45,    50,    45,    17,    18,    21,    45,    74,
      45,    45,    18,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    62,    62,    63,    63,
      63,    64,    65,    65,    66,    67,    67,    67,    68,    69,
      69,    69,    70,    70,    71,    71,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    79,    80,    80,
      81,    81,    82,    83,    84,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      88,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     0,     2,     1,     4,     2,     1,
       3,     3,     0,     2,     1,     3,     3,     1,     1,     4,
       4,    11,     2,     0,    12,     3,     1,     0,     2,     1,
       1,     1,     3,     0,     2,     1,     3,     3,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     6,     6,     5,     8,     5,     5,     4,     7,
      10,     8,     8,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     1,     4,     3,     4,     1,     3,     1,
       3,     3
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
  case 2: /* Program: TypeDefBlock GDeclBlock FDefBlock MainBlock  */
#line 41 "exprtree.y"
                                                      {
          //code($3);
          //evaluate($3)
          //test($3)
          //printGSymbolTable();
          exit(0);
          }
#line 1486 "y.tab.c"
    break;

  case 15: /* GDecl: Type GidList ';'  */
#line 86 "exprtree.y"
                         { setGType((yyvsp[-1].gsym),(yyvsp[-2].integer));}
#line 1492 "y.tab.c"
    break;

  case 16: /* GidList: GidList ',' Gid  */
#line 91 "exprtree.y"
                          {(yyval.gsym)=(yyvsp[-2].gsym);}
#line 1498 "y.tab.c"
    break;

  case 17: /* GidList: Gid  */
#line 92 "exprtree.y"
              {(yyval.gsym)=(yyvsp[0].gsym);}
#line 1504 "y.tab.c"
    break;

  case 18: /* Gid: ID  */
#line 96 "exprtree.y"
         {(yyval.gsym)=GInstallVar((yyvsp[0].no)->varname,voidtype,1);}
#line 1510 "y.tab.c"
    break;

  case 19: /* Gid: ID '[' NUM ']'  */
#line 97 "exprtree.y"
                     {(yyval.gsym)=GInstallVar((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].no)->val);}
#line 1516 "y.tab.c"
    break;

  case 20: /* Gid: ID '(' ParamList ')'  */
#line 98 "exprtree.y"
                           {(yyval.gsym)=GInstallFn((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].param));}
#line 1522 "y.tab.c"
    break;

  case 21: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 105 "exprtree.y"
                                                                        {
            (yyvsp[-3].no) = makeConnectorNode((yyvsp[-3].no),(yyvsp[-2].no));  //Attaching the return statement
            checkMain((yyvsp[-2].no)->left->type);
            codeFunction((yyvsp[-3].no),NULL);       //Generating code
           // printLSymbolTable("main"); //Printing the local symbol table
            deallocateLST();     //deallocating the Local Symbol Table
            deallocateAST((yyvsp[-3].no));  //deallocating the AST
          }
#line 1535 "y.tab.c"
    break;

  case 24: /* Fdef: Type ID '(' ParamList ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 132 "exprtree.y"
                                                                             {

        (yyvsp[-3].no) = makeConnectorNode((yyvsp[-3].no),(yyvsp[-2].no));  //Attaching the return statement
        checkFn((yyvsp[-11].integer),(yyvsp[-2].no)->left->type,(yyvsp[-10].no)->varname,(yyvsp[-8].param));  //to check definition with declaration
        //addParamstoLST($4);   //Adding the parameters to LST
        codeFunction((yyvsp[-3].no),(yyvsp[-10].no)->varname);       //Generating code
        //printLSymbolTable($2->varname); //Printing the local symbol table
        deallocateLST();     //deallocating the Local Symbol Table
        deallocateAST((yyvsp[-3].no));  //deallocating the AST
      }
#line 1550 "y.tab.c"
    break;

  case 25: /* ParamList: ParamList ',' Param  */
#line 154 "exprtree.y"
                                {(yyval.param)=(yyvsp[-2].param); createParamList((yyvsp[0].param));}
#line 1556 "y.tab.c"
    break;

  case 26: /* ParamList: Param  */
#line 155 "exprtree.y"
                  {(yyval.param)=(yyvsp[0].param);PCurr=(yyvsp[0].param);}
#line 1562 "y.tab.c"
    break;

  case 27: /* ParamList: %empty  */
#line 156 "exprtree.y"
            {(yyval.param)=NULL;}
#line 1568 "y.tab.c"
    break;

  case 28: /* Param: Type ID  */
#line 159 "exprtree.y"
                {(yyval.param)=createParams((yyvsp[-1].integer),(yyvsp[0].no)->varname);}
#line 1574 "y.tab.c"
    break;

  case 29: /* Type: INT  */
#line 163 "exprtree.y"
           {(yyval.integer) = inttype;}
#line 1580 "y.tab.c"
    break;

  case 30: /* Type: STR  */
#line 164 "exprtree.y"
           {(yyval.integer) = strtype;}
#line 1586 "y.tab.c"
    break;

  case 36: /* LDecl: Type IdList ';'  */
#line 178 "exprtree.y"
                       { setLType((yyvsp[-1].lsym),(yyvsp[-2].integer));}
#line 1592 "y.tab.c"
    break;

  case 37: /* IdList: IdList ',' ID  */
#line 181 "exprtree.y"
                        {(yyval.lsym)=(yyvsp[-2].lsym); LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1598 "y.tab.c"
    break;

  case 38: /* IdList: ID  */
#line 182 "exprtree.y"
             {(yyval.lsym)=LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1604 "y.tab.c"
    break;

  case 39: /* Body: Body Stmt  */
#line 185 "exprtree.y"
                    {(yyval.no) = makeConnectorNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1610 "y.tab.c"
    break;

  case 40: /* Body: %empty  */
#line 187 "exprtree.y"
           {(yyval.no) = NULL;}
#line 1616 "y.tab.c"
    break;

  case 41: /* Stmt: InputStmt  */
#line 190 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1622 "y.tab.c"
    break;

  case 42: /* Stmt: OutputStmt  */
#line 191 "exprtree.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1628 "y.tab.c"
    break;

  case 43: /* Stmt: AsgStmt  */
#line 192 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1634 "y.tab.c"
    break;

  case 44: /* Stmt: IfStmt  */
#line 193 "exprtree.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1640 "y.tab.c"
    break;

  case 45: /* Stmt: WhileStmt  */
#line 194 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1646 "y.tab.c"
    break;

  case 46: /* Stmt: BreakStmt  */
#line 195 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1652 "y.tab.c"
    break;

  case 47: /* Stmt: ContinueStmt  */
#line 196 "exprtree.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1658 "y.tab.c"
    break;

  case 54: /* InputStmt: READ '(' ID ')' ';'  */
#line 210 "exprtree.y"
                                {setEntry((yyvsp[-2].no));
                                (yyval.no) = makeSingleNode(READ,(yyvsp[-2].no));
                                }
#line 1666 "y.tab.c"
    break;

  case 55: /* InputStmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 213 "exprtree.y"
                                             { setArrayNode((yyvsp[-5].no),(yyvsp[-3].no));
                                            (yyval.no) = makeSingleNode(READ,(yyvsp[-5].no));
                                            }
#line 1674 "y.tab.c"
    break;

  case 57: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 219 "exprtree.y"
                                    {(yyval.no) = makeSingleNode(WRITE,(yyvsp[-2].no));}
#line 1680 "y.tab.c"
    break;

  case 58: /* AsgStmt: ID EQUAL expr ';'  */
#line 221 "exprtree.y"
                            {setEntry((yyvsp[-3].no)); 
                              (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));
                              }
#line 1688 "y.tab.c"
    break;

  case 59: /* AsgStmt: ID '[' expr ']' EQUAL expr ';'  */
#line 224 "exprtree.y"
                                         { setArrayNode((yyvsp[-6].no),(yyvsp[-4].no));
                                          (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-1].no));
                                        }
#line 1696 "y.tab.c"
    break;

  case 60: /* IfStmt: IF '(' expr ')' THEN Body ELSE Body ENDIF ';'  */
#line 229 "exprtree.y"
                                                       {(yyval.no) = makeTriplets(IF,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1702 "y.tab.c"
    break;

  case 61: /* IfStmt: IF '(' expr ')' THEN Body ENDIF ';'  */
#line 230 "exprtree.y"
                                            {(yyval.no) = makeTriplets(IF,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1708 "y.tab.c"
    break;

  case 62: /* WhileStmt: WHILE '(' expr ')' DO Body ENDWHILE ';'  */
#line 233 "exprtree.y"
                                                    {(yyval.no) = makeTriplets(WHILE,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1714 "y.tab.c"
    break;

  case 63: /* BreakStmt: BREAK ';'  */
#line 236 "exprtree.y"
                      {(yyval.no) = makeNoChildNode(BREAK);}
#line 1720 "y.tab.c"
    break;

  case 64: /* ContinueStmt: CONTINUE ';'  */
#line 239 "exprtree.y"
                            {(yyval.no) = makeNoChildNode(CONTINUE);}
#line 1726 "y.tab.c"
    break;

  case 65: /* ReturnStmt: RET expr ';'  */
#line 243 "exprtree.y"
                          {
//                            checkReturnType($2->type);
                            (yyval.no) = makeSingleNode(RET,(yyvsp[-1].no));
                        }
#line 1735 "y.tab.c"
    break;

  case 66: /* expr: expr PLUS expr  */
#line 251 "exprtree.y"
                       {(yyval.no) = makeOperatorNode(PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1741 "y.tab.c"
    break;

  case 67: /* expr: expr MINUS expr  */
#line 252 "exprtree.y"
                      {(yyval.no) = makeOperatorNode(MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1747 "y.tab.c"
    break;

  case 68: /* expr: expr MUL expr  */
#line 253 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1753 "y.tab.c"
    break;

  case 69: /* expr: expr DIV expr  */
#line 254 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1759 "y.tab.c"
    break;

  case 70: /* expr: expr MOD expr  */
#line 255 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1765 "y.tab.c"
    break;

  case 71: /* expr: expr LT expr  */
#line 256 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1771 "y.tab.c"
    break;

  case 72: /* expr: expr GT expr  */
#line 257 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1777 "y.tab.c"
    break;

  case 73: /* expr: expr LE expr  */
#line 258 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1783 "y.tab.c"
    break;

  case 74: /* expr: expr GE expr  */
#line 259 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1789 "y.tab.c"
    break;

  case 75: /* expr: expr NE expr  */
#line 260 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(NE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1795 "y.tab.c"
    break;

  case 76: /* expr: expr EQ expr  */
#line 261 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(EQ,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1801 "y.tab.c"
    break;

  case 77: /* expr: expr OR expr  */
#line 262 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(OR,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1807 "y.tab.c"
    break;

  case 78: /* expr: expr AND expr  */
#line 263 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(AND,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1813 "y.tab.c"
    break;

  case 79: /* expr: MINUS expr  */
#line 264 "exprtree.y"
               {(yyval.no) = makeSingleNode(MINUS,(yyvsp[0].no));}
#line 1819 "y.tab.c"
    break;

  case 80: /* expr: '(' expr ')'  */
#line 265 "exprtree.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 1825 "y.tab.c"
    break;

  case 81: /* expr: NUM  */
#line 266 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 1831 "y.tab.c"
    break;

  case 82: /* expr: STRCON  */
#line 267 "exprtree.y"
           {(yyval.no) = (yyvsp[0].no);}
#line 1837 "y.tab.c"
    break;

  case 83: /* expr: ID  */
#line 268 "exprtree.y"
       {setEntry((yyvsp[0].no));(yyval.no) = (yyvsp[0].no);}
#line 1843 "y.tab.c"
    break;

  case 84: /* expr: ID '[' expr ']'  */
#line 269 "exprtree.y"
                   {setArrayNode((yyvsp[-3].no),(yyvsp[-1].no));(yyval.no)=(yyvsp[-3].no);}
#line 1849 "y.tab.c"
    break;

  case 85: /* expr: ID '(' ')'  */
#line 270 "exprtree.y"
              {(yyval.no)=makeFnNode((yyvsp[-2].no)->varname,NULL);}
#line 1855 "y.tab.c"
    break;

  case 86: /* expr: ID '(' ArgList ')'  */
#line 271 "exprtree.y"
                       {(yyval.no)=makeFnNode((yyvsp[-3].no)->varname,(yyvsp[-1].no));}
#line 1861 "y.tab.c"
    break;

  case 88: /* ArgList: ArgList ',' expr  */
#line 275 "exprtree.y"
                           {attachArg((yyval.no),(yyvsp[0].no));(yyval.no)=(yyvsp[0].no);}
#line 1867 "y.tab.c"
    break;

  case 89: /* ArgList: expr  */
#line 276 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1873 "y.tab.c"
    break;


#line 1877 "y.tab.c"

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

#line 284 "exprtree.y"


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

