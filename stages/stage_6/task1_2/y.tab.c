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
    ENDTYPE = 297,                 /* ENDTYPE  */
    INIT = 298,                    /* INIT  */
    NUL = 299                      /* NUL  */
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
#define INIT 298
#define NUL 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exprtree.y"

 struct tnode *no;
 struct Typetable *type;
 struct Fieldlist *flist;
 struct Gsymbol *gsym;
 struct Lsymbol *lsym;  
 struct Paramstruct *param;

#line 234 "y.tab.c"

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
  YYSYMBOL_INIT = 43,                      /* INIT  */
  YYSYMBOL_NUL = 44,                       /* NUL  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_Program = 55,                   /* Program  */
  YYSYMBOL_TypeDefBlock = 56,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 57,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 58,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 59,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 60,                 /* FieldDecl  */
  YYSYMBOL_GDeclBlock = 61,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 62,                 /* GDeclList  */
  YYSYMBOL_GDecl = 63,                     /* GDecl  */
  YYSYMBOL_GidList = 64,                   /* GidList  */
  YYSYMBOL_Gid = 65,                       /* Gid  */
  YYSYMBOL_MainBlock = 66,                 /* MainBlock  */
  YYSYMBOL_FDefBlock = 67,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 68,                      /* Fdef  */
  YYSYMBOL_ParamList = 69,                 /* ParamList  */
  YYSYMBOL_Param = 70,                     /* Param  */
  YYSYMBOL_Type = 71,                      /* Type  */
  YYSYMBOL_LDeclBlock = 72,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 73,                  /* LDecList  */
  YYSYMBOL_LDecl = 74,                     /* LDecl  */
  YYSYMBOL_IdList = 75,                    /* IdList  */
  YYSYMBOL_Body = 76,                      /* Body  */
  YYSYMBOL_Stmt = 77,                      /* Stmt  */
  YYSYMBOL_FreeStmt = 78,                  /* FreeStmt  */
  YYSYMBOL_InputStmt = 79,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 80,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 81,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 82,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 83,                 /* WhileStmt  */
  YYSYMBOL_BreakStmt = 84,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 85,              /* ContinueStmt  */
  YYSYMBOL_ReturnStmt = 86,                /* ReturnStmt  */
  YYSYMBOL_expr = 87,                      /* expr  */
  YYSYMBOL_ArgList = 88,                   /* ArgList  */
  YYSYMBOL_Field = 89                      /* Field  */
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
#define YYLAST   526

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      51,    52,     2,     2,    48,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    43,    43,    57,    58,    61,    62,    65,    68,    69,
      72,    80,    82,    85,    86,    89,    94,    95,    99,   100,
     101,   108,   130,   132,   135,   159,   160,   161,   164,   168,
     169,   170,   174,   176,   179,   180,   183,   186,   187,   190,
     192,   195,   196,   197,   198,   199,   200,   201,   203,   208,
     211,   221,   224,   227,   230,   233,   236,   239,   244,   248,
     253,   256,   257,   260,   263,   266,   270,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     303,   304,   306,   307
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
  "INIT", "NUL", "'{'", "'}'", "';'", "','", "'['", "']'", "'('", "')'",
  "'.'", "$accept", "Program", "TypeDefBlock", "TypeDefList", "TypeDef",
  "FieldDeclList", "FieldDecl", "GDeclBlock", "GDeclList", "GDecl",
  "GidList", "Gid", "MainBlock", "FDefBlock", "Fdef", "ParamList", "Param",
  "Type", "LDeclBlock", "LDecList", "LDecl", "IdList", "Body", "Stmt",
  "FreeStmt", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt",
  "BreakStmt", "ContinueStmt", "ReturnStmt", "expr", "ArgList", "Field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,    10,    62,    34,    30,   -10,   -89,   -89,    50,   -89,
      50,   -89,   -89,   -89,   -89,   -89,     2,   -89,    74,    53,
      44,   -89,    85,   -89,   -89,   -44,   -17,   -89,    43,   -89,
     -89,    87,   -89,   -89,    56,   102,    50,   -89,    74,    68,
      69,   -89,    71,   -36,   -89,   109,   -89,    81,    50,   -89,
      50,   -89,   -89,    78,    22,   -89,   104,    92,    50,   128,
     104,   126,    48,   -89,   -89,   130,   -89,    54,   -89,   -89,
     442,   -89,   -89,   131,   106,   107,   -13,   108,   112,    96,
     113,   199,   114,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   155,     6,   442,   -89,   153,   199,   179,   199,
     154,   199,   199,   -89,   -89,   -89,   199,   -45,   -89,   -89,
     199,   294,   115,   156,   132,   198,   164,   170,    20,    39,
      89,   129,   142,   322,   240,   -89,   124,   148,    31,   199,
      55,   183,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   -89,    57,    65,   -89,   143,
     348,   -89,   135,   199,   136,   149,   150,   146,   147,   -89,
     181,   200,   194,   247,   -89,   400,    36,   -89,    31,    31,
     -89,   -89,   -89,   491,   491,   491,   491,   491,   491,   499,
     409,   168,   171,   165,   -89,   -89,   287,   -89,   -89,   -89,
     177,   178,   199,   -89,   -89,   -89,   199,   -89,   -89,   -89,
     180,   174,   -89,   -89,   374,   430,   461,   400,   -89,   182,
     -89,   -89,   184,   187,   -89,   473,   -89,   -89,   189,   -89
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
       0,     0,     0,    39,    48,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    82,     0,    84,    83,    89,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,     0,     0,    21,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,    86,    91,     0,    81,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    79,
      78,     0,     0,     0,    60,    24,     0,    51,    53,    54,
       0,     0,     0,    40,    40,    85,     0,    87,    49,    50,
       0,     0,    57,    59,     0,     0,     0,    90,    58,     0,
      56,    40,     0,     0,    52,     0,    62,    63,     0,    61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   223,   -89,   217,   -89,   -89,   224,
     -89,   201,   -89,   -89,   -89,   193,   206,     9,   197,   -89,
     196,   -89,   -69,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   166,   -88,   -89,   -70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    20,    21,     9,    16,    17,
      26,    27,    29,    19,    30,    43,    44,    45,    59,    62,
      63,    67,    70,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   111,   166,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    98,    94,     4,   129,    35,   130,    36,   100,   120,
     123,   124,    50,   126,   127,    13,    51,    18,   128,    22,
     115,     1,   131,     4,    93,    18,   119,   150,    31,    22,
      37,    38,    11,    23,    14,    15,    99,   134,   135,   136,
     100,   163,   165,   147,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    13,   105,   116,
     106,    13,     7,    13,     8,   186,    13,    61,   107,   153,
      50,    61,   154,   100,    57,    10,    14,    15,    39,    68,
      14,    15,    14,    15,   196,    28,    15,    25,   197,   108,
      32,   155,   116,   132,   133,   134,   135,   136,    34,   109,
      40,    72,    73,    41,   204,    42,   110,   164,   207,   181,
     100,   137,   138,   139,   140,   141,   142,   182,   116,    47,
      48,    49,    52,    56,   205,   206,   143,   144,   132,   133,
     134,   135,   136,    53,    58,    93,    93,    60,    64,    66,
      71,   156,   215,   103,    95,    93,   137,   138,   139,   140,
     141,   142,   132,   133,   134,   135,   136,    96,    97,   101,
     104,   143,   144,   102,   114,   113,   118,   125,   116,   146,
     137,   138,   139,   140,   141,   142,   161,   151,   148,   152,
     157,   185,   105,   187,   106,   143,   144,   132,   133,   134,
     135,   136,   107,   158,   183,   192,   188,   189,   190,   191,
     162,   105,   105,   106,   106,   137,   138,   139,   140,   141,
     142,   107,   107,   108,   194,   198,   193,   200,   199,   121,
     143,   144,   122,   109,   202,   203,   209,   208,    12,   214,
     110,   216,   108,   108,   217,   167,   219,    33,   149,    46,
      24,    54,   109,   109,   132,   133,   134,   135,   136,   110,
     110,   132,   133,   134,   135,   136,    55,    65,    69,     0,
     117,     0,   137,   138,   139,   140,   141,   142,     0,   137,
     138,   139,   140,   141,   142,     0,     0,   143,   144,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,     0,
     160,   132,   133,   134,   135,   136,     0,   195,   132,   133,
     134,   135,   136,     0,     0,     0,     0,     0,     0,   137,
     138,   139,   140,   141,   142,     0,   137,   138,   139,   140,
     141,   142,     0,     0,   143,   144,   132,   133,   134,   135,
     136,   143,   144,     0,     0,     0,     0,   201,     0,     0,
       0,   145,     0,     0,   137,   138,   139,   140,   141,   142,
       0,     0,   132,   133,   134,   135,   136,     0,     0,   143,
     144,     0,     0,     0,     0,     0,     0,     0,     0,   159,
     137,   138,   139,   140,   141,   142,     0,     0,   132,   133,
     134,   135,   136,     0,     0,   143,   144,     0,     0,     0,
       0,     0,     0,     0,     0,   184,   137,   138,   139,   140,
     141,   142,     0,     0,   132,   133,   134,   135,   136,     0,
       0,   143,   144,   132,   133,   134,   135,   136,     0,     0,
       0,   210,   137,   138,   139,   140,   141,   142,     0,     0,
       0,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,    74,    75,    76,     0,    77,   143,   211,   212,    78,
       0,     0,     0,    74,    75,    76,     0,    77,    79,    80,
       0,    78,     0,     0,     0,     0,     0,     0,     0,    82,
      79,    80,    74,    75,    76,     0,    77,     0,    81,     0,
      78,    82,   213,     0,    74,    75,    76,     0,    77,    79,
      80,   218,    78,     0,     0,   132,   133,   134,   135,   136,
      82,    79,    80,   132,   133,   134,   135,   136,     0,     0,
       0,     0,    82,    -1,    -1,    -1,    -1,    -1,    -1,     0,
       0,   137,   138,   139,   140,   141,   142
};

static const yytype_int16 yycheck[] =
{
      70,    14,    71,    13,    49,    49,    51,    51,    53,    97,
      98,    99,    48,   101,   102,    13,    52,     8,   106,    10,
      14,    41,   110,    13,    94,    16,    96,   115,    19,    20,
      47,    48,    42,    31,    32,    33,    49,     6,     7,     8,
      53,   129,   130,   113,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    13,     3,    53,
       5,    13,     0,    13,    30,   153,    13,    58,    13,    49,
      48,    62,    52,    53,    52,    45,    32,    33,    35,    31,
      32,    33,    32,    33,    48,    32,    33,    13,    52,    34,
      46,    52,    53,     4,     5,     6,     7,     8,    13,    44,
      13,    47,    48,    47,   192,     3,    51,    52,   196,    52,
      53,    22,    23,    24,    25,    26,    27,    52,    53,    51,
      51,    50,    13,    45,   193,   194,    37,    38,     4,     5,
       6,     7,     8,    52,    30,   205,   206,    45,    10,    13,
      10,    52,   211,    47,    13,   215,    22,    23,    24,    25,
      26,    27,     4,     5,     6,     7,     8,    51,    51,    51,
      47,    37,    38,    51,     9,    51,    13,    13,    53,    13,
      22,    23,    24,    25,    26,    27,    52,    13,    46,     9,
      51,    46,     3,    47,     5,    37,    38,     4,     5,     6,
       7,     8,    13,    51,    51,    14,    47,    47,    52,    52,
      52,     3,     3,     5,     5,    22,    23,    24,    25,    26,
      27,    13,    13,    34,    20,    47,    16,    52,    47,    40,
      37,    38,    43,    44,    47,    47,    52,    47,     5,    47,
      51,    47,    34,    34,    47,    52,    47,    20,    40,    38,
      16,    48,    44,    44,     4,     5,     6,     7,     8,    51,
      51,     4,     5,     6,     7,     8,    50,    60,    62,    -1,
      94,    -1,    22,    23,    24,    25,    26,    27,    -1,    22,
      23,    24,    25,    26,    27,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      50,     4,     5,     6,     7,     8,    -1,    50,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    -1,    22,    23,    24,    25,
      26,    27,    -1,    -1,    37,    38,     4,     5,     6,     7,
       8,    37,    38,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    47,    -1,    -1,    22,    23,    24,    25,    26,    27,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      22,    23,    24,    25,    26,    27,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    22,    23,    24,    25,
      26,    27,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    37,    38,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    47,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    37,    38,    -1,
      -1,    11,    12,    13,    -1,    15,    37,    17,    18,    19,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    28,    29,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      28,    29,    11,    12,    13,    -1,    15,    -1,    36,    -1,
      19,    39,    21,    -1,    11,    12,    13,    -1,    15,    28,
      29,    18,    19,    -1,    -1,     4,     5,     6,     7,     8,
      39,    28,    29,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    -1,
      -1,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    55,    56,    13,    57,    58,     0,    30,    61,
      45,    42,    58,    13,    32,    33,    62,    63,    71,    67,
      59,    60,    71,    31,    63,    13,    64,    65,    32,    66,
      68,    71,    46,    60,    13,    49,    51,    47,    48,    35,
      13,    47,     3,    69,    70,    71,    65,    51,    51,    50,
      48,    52,    13,    52,    69,    70,    45,    52,    30,    72,
      45,    71,    73,    74,    10,    72,    13,    75,    31,    74,
      76,    10,    47,    48,    11,    12,    13,    15,    19,    28,
      29,    36,    39,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    89,    76,    13,    51,    51,    14,    49,
      53,    51,    51,    47,    47,     3,     5,    13,    34,    44,
      51,    87,    89,    51,     9,    14,    53,    86,    13,    89,
      87,    40,    43,    87,    87,    13,    87,    87,    87,    49,
      51,    87,     4,     5,     6,     7,     8,    22,    23,    24,
      25,    26,    27,    37,    38,    47,    13,    89,    46,    40,
      87,    13,     9,    49,    52,    52,    52,    51,    51,    47,
      50,    52,    52,    87,    52,    87,    88,    52,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    52,    52,    51,    47,    46,    87,    47,    47,    47,
      52,    52,    14,    16,    20,    50,    48,    52,    47,    47,
      52,    50,    47,    47,    87,    76,    76,    87,    47,    52,
      47,    17,    18,    21,    47,    76,    47,    47,    18,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    61,    61,    62,    62,    63,    64,    64,    65,    65,
      65,    66,    67,    67,    68,    69,    69,    69,    70,    71,
      71,    71,    72,    72,    73,    73,    74,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    79,    80,    81,    81,    81,    81,    81,
      81,    82,    82,    83,    84,    85,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     0,     2,     1,     4,     2,     1,
       3,     3,     0,     2,     1,     3,     3,     1,     1,     4,
       4,    11,     2,     0,    12,     3,     1,     0,     2,     1,
       1,     1,     3,     0,     2,     1,     3,     3,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     5,     8,     5,     5,     4,     7,     6,     6,     6,
       4,    10,     8,     8,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     1,     1,     1,     4,     3,     4,     1,     1,
       3,     1,     3,     3
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
#line 43 "exprtree.y"
                                                      {
          //code($3);
          //evaluate($3)
          //test($3)
          printTypeTable();
          printGSymbolTable();
          exit(0);
          }
#line 1509 "y.tab.c"
    break;

  case 7: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 65 "exprtree.y"
                                   {TInstall((yyvsp[-3].no)->varname,(yyvsp[-1].flist));}
#line 1515 "y.tab.c"
    break;

  case 8: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 68 "exprtree.y"
                                        {(yyval.flist) = (yyvsp[-1].flist); attachField((yyvsp[0].flist));}
#line 1521 "y.tab.c"
    break;

  case 9: /* FieldDeclList: FieldDecl  */
#line 69 "exprtree.y"
                          {(yyval.flist) = (yyvsp[0].flist); Fcurr=(yyvsp[0].flist);Fstart=(yyvsp[0].flist);}
#line 1527 "y.tab.c"
    break;

  case 10: /* FieldDecl: Type ID ';'  */
#line 72 "exprtree.y"
                        {(yyval.flist) = createField((yyvsp[-1].no)->varname,(yyvsp[-2].type));}
#line 1533 "y.tab.c"
    break;

  case 15: /* GDecl: Type GidList ';'  */
#line 89 "exprtree.y"
                         {checkType((yyvsp[-2].type));setGType((yyvsp[-1].gsym),(yyvsp[-2].type));}
#line 1539 "y.tab.c"
    break;

  case 16: /* GidList: GidList ',' Gid  */
#line 94 "exprtree.y"
                          {(yyval.gsym)=(yyvsp[-2].gsym);}
#line 1545 "y.tab.c"
    break;

  case 17: /* GidList: Gid  */
#line 95 "exprtree.y"
              {(yyval.gsym)=(yyvsp[0].gsym);}
#line 1551 "y.tab.c"
    break;

  case 18: /* Gid: ID  */
#line 99 "exprtree.y"
         {(yyval.gsym)=GInstallVar((yyvsp[0].no)->varname,voidtype,1);}
#line 1557 "y.tab.c"
    break;

  case 19: /* Gid: ID '[' NUM ']'  */
#line 100 "exprtree.y"
                     {(yyval.gsym)=GInstallVar((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].no)->val);}
#line 1563 "y.tab.c"
    break;

  case 20: /* Gid: ID '(' ParamList ')'  */
#line 101 "exprtree.y"
                           {(yyval.gsym)=GInstallFn((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].param));}
#line 1569 "y.tab.c"
    break;

  case 21: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 108 "exprtree.y"
                                                                        {
            (yyvsp[-3].no) = makeConnectorNode((yyvsp[-3].no),(yyvsp[-2].no));  //Attaching the return statement
            checkMain((yyvsp[-2].no)->left->type);
            codeFunction((yyvsp[-3].no),NULL);       //Generating code
            printLSymbolTable("main"); //Printing the local symbol table
            deallocateLST();     //deallocating the Local Symbol Table
            deallocateAST((yyvsp[-3].no));  //deallocating the AST
          }
#line 1582 "y.tab.c"
    break;

  case 24: /* Fdef: Type ID '(' ParamList ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 135 "exprtree.y"
                                                                             {

        checkType((yyvsp[-11].type));

        (yyvsp[-3].no) = makeConnectorNode((yyvsp[-3].no),(yyvsp[-2].no));  //Attaching the return statement
        checkFn((yyvsp[-11].type),(yyvsp[-2].no)->left->type,(yyvsp[-10].no)->varname,(yyvsp[-8].param));  //to check definition with declaration
        //addParamstoLST($4);   //Adding the parameters to LST
        codeFunction((yyvsp[-3].no),(yyvsp[-10].no)->varname);       //Generating code
        printLSymbolTable((yyvsp[-10].no)->varname); //Printing the local symbol table
        deallocateLST();     //deallocating the Local Symbol Table
        deallocateAST((yyvsp[-3].no));  //deallocating the AST
      }
#line 1599 "y.tab.c"
    break;

  case 25: /* ParamList: ParamList ',' Param  */
#line 159 "exprtree.y"
                                {(yyval.param)=(yyvsp[-2].param); createParamList((yyvsp[0].param));}
#line 1605 "y.tab.c"
    break;

  case 26: /* ParamList: Param  */
#line 160 "exprtree.y"
                  {(yyval.param)=(yyvsp[0].param);PCurr=(yyvsp[0].param);}
#line 1611 "y.tab.c"
    break;

  case 27: /* ParamList: %empty  */
#line 161 "exprtree.y"
            {(yyval.param)=NULL;}
#line 1617 "y.tab.c"
    break;

  case 28: /* Param: Type ID  */
#line 164 "exprtree.y"
                {checkType((yyvsp[-1].type));(yyval.param)=createParams((yyvsp[-1].type),(yyvsp[0].no)->varname);}
#line 1623 "y.tab.c"
    break;

  case 29: /* Type: INT  */
#line 168 "exprtree.y"
           {(yyval.type) = inttype;}
#line 1629 "y.tab.c"
    break;

  case 30: /* Type: STR  */
#line 169 "exprtree.y"
           {(yyval.type) = strtype;}
#line 1635 "y.tab.c"
    break;

  case 31: /* Type: ID  */
#line 170 "exprtree.y"
           {checkInvalidTypes((yyvsp[0].no));(yyval.type) = TLookup((yyvsp[0].no)->varname);}
#line 1641 "y.tab.c"
    break;

  case 36: /* LDecl: Type IdList ';'  */
#line 183 "exprtree.y"
                       {checkType((yyvsp[-2].type));setLType((yyvsp[-1].lsym),(yyvsp[-2].type));}
#line 1647 "y.tab.c"
    break;

  case 37: /* IdList: IdList ',' ID  */
#line 186 "exprtree.y"
                        {(yyval.lsym)=(yyvsp[-2].lsym); LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1653 "y.tab.c"
    break;

  case 38: /* IdList: ID  */
#line 187 "exprtree.y"
             {(yyval.lsym)=LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1659 "y.tab.c"
    break;

  case 39: /* Body: Body Stmt  */
#line 190 "exprtree.y"
                    {(yyval.no) = makeConnectorNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1665 "y.tab.c"
    break;

  case 40: /* Body: %empty  */
#line 192 "exprtree.y"
           {(yyval.no) = NULL;}
#line 1671 "y.tab.c"
    break;

  case 41: /* Stmt: InputStmt  */
#line 195 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1677 "y.tab.c"
    break;

  case 42: /* Stmt: OutputStmt  */
#line 196 "exprtree.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1683 "y.tab.c"
    break;

  case 43: /* Stmt: AsgStmt  */
#line 197 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1689 "y.tab.c"
    break;

  case 44: /* Stmt: IfStmt  */
#line 198 "exprtree.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1695 "y.tab.c"
    break;

  case 45: /* Stmt: WhileStmt  */
#line 199 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1701 "y.tab.c"
    break;

  case 46: /* Stmt: BreakStmt  */
#line 200 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1707 "y.tab.c"
    break;

  case 47: /* Stmt: ContinueStmt  */
#line 201 "exprtree.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1713 "y.tab.c"
    break;

  case 48: /* Stmt: FreeStmt  */
#line 203 "exprtree.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1719 "y.tab.c"
    break;

  case 49: /* FreeStmt: FREE '(' ID ')' ';'  */
#line 208 "exprtree.y"
                               { setEntry((yyvsp[-2].no)); 
                                 (yyval.no)=makeSingleNode(FREE,(yyvsp[-2].no));
                                 }
#line 1727 "y.tab.c"
    break;

  case 50: /* FreeStmt: FREE '(' Field ')' ';'  */
#line 211 "exprtree.y"
                                  { (yyval.no)=makeSingleNode(FREE,(yyvsp[-2].no));}
#line 1733 "y.tab.c"
    break;

  case 51: /* InputStmt: READ '(' ID ')' ';'  */
#line 221 "exprtree.y"
                                {setEntry((yyvsp[-2].no));
                                (yyval.no) = makeSingleNode(READ,(yyvsp[-2].no));
                                }
#line 1741 "y.tab.c"
    break;

  case 52: /* InputStmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 224 "exprtree.y"
                                             { setArrayNode((yyvsp[-5].no),(yyvsp[-3].no));
                                            (yyval.no) = makeSingleNode(READ,(yyvsp[-5].no));
                                            }
#line 1749 "y.tab.c"
    break;

  case 53: /* InputStmt: READ '(' Field ')' ';'  */
#line 227 "exprtree.y"
                                    { (yyval.no)=makeSingleNode(READ,(yyvsp[-2].no));}
#line 1755 "y.tab.c"
    break;

  case 54: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 230 "exprtree.y"
                                    {(yyval.no) = makeSingleNode(WRITE,(yyvsp[-2].no));}
#line 1761 "y.tab.c"
    break;

  case 55: /* AsgStmt: ID EQUAL expr ';'  */
#line 233 "exprtree.y"
                            {setEntry((yyvsp[-3].no)); 
                              (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));
                              }
#line 1769 "y.tab.c"
    break;

  case 56: /* AsgStmt: ID '[' expr ']' EQUAL expr ';'  */
#line 236 "exprtree.y"
                                         { setArrayNode((yyvsp[-6].no),(yyvsp[-4].no));
                                          (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-1].no));
                                        }
#line 1777 "y.tab.c"
    break;

  case 57: /* AsgStmt: ID EQUAL ALLOC '(' ')' ';'  */
#line 239 "exprtree.y"
                                    {setEntry((yyvsp[-5].no));
                                        (yyvsp[-3].no)=makeNoChildNode(ALLOC);
                                        (yyvsp[-3].no)->type=nulltype;
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1787 "y.tab.c"
    break;

  case 58: /* AsgStmt: Field EQUAL ALLOC '(' ')' ';'  */
#line 244 "exprtree.y"
                                         {(yyvsp[-3].no)=makeNoChildNode(ALLOC);
                                                (yyvsp[-3].no)->type=nulltype;
                                                (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1796 "y.tab.c"
    break;

  case 59: /* AsgStmt: ID EQUAL INIT '(' ')' ';'  */
#line 248 "exprtree.y"
                                    {setEntry((yyvsp[-5].no));
                                        (yyvsp[-3].no)=makeNoChildNode(INIT);
                                        (yyvsp[-3].no)->type=inttype;   //initialize returns integer value
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1806 "y.tab.c"
    break;

  case 60: /* AsgStmt: Field EQUAL expr ';'  */
#line 253 "exprtree.y"
                               { (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1812 "y.tab.c"
    break;

  case 61: /* IfStmt: IF '(' expr ')' THEN Body ELSE Body ENDIF ';'  */
#line 256 "exprtree.y"
                                                       {(yyval.no) = makeTriplets(IF,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 1818 "y.tab.c"
    break;

  case 62: /* IfStmt: IF '(' expr ')' THEN Body ENDIF ';'  */
#line 257 "exprtree.y"
                                            {(yyval.no) = makeTriplets(IF,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1824 "y.tab.c"
    break;

  case 63: /* WhileStmt: WHILE '(' expr ')' DO Body ENDWHILE ';'  */
#line 260 "exprtree.y"
                                                    {(yyval.no) = makeTriplets(WHILE,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 1830 "y.tab.c"
    break;

  case 64: /* BreakStmt: BREAK ';'  */
#line 263 "exprtree.y"
                      {(yyval.no) = makeNoChildNode(BREAK);}
#line 1836 "y.tab.c"
    break;

  case 65: /* ContinueStmt: CONTINUE ';'  */
#line 266 "exprtree.y"
                            {(yyval.no) = makeNoChildNode(CONTINUE);}
#line 1842 "y.tab.c"
    break;

  case 66: /* ReturnStmt: RET expr ';'  */
#line 270 "exprtree.y"
                          {
//                            checkReturnType($2->type);
                            (yyval.no) = makeSingleNode(RET,(yyvsp[-1].no));
                        }
#line 1851 "y.tab.c"
    break;

  case 67: /* expr: expr PLUS expr  */
#line 278 "exprtree.y"
                       {(yyval.no) = makeOperatorNode(PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1857 "y.tab.c"
    break;

  case 68: /* expr: expr MINUS expr  */
#line 279 "exprtree.y"
                      {(yyval.no) = makeOperatorNode(MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1863 "y.tab.c"
    break;

  case 69: /* expr: expr MUL expr  */
#line 280 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1869 "y.tab.c"
    break;

  case 70: /* expr: expr DIV expr  */
#line 281 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1875 "y.tab.c"
    break;

  case 71: /* expr: expr MOD expr  */
#line 282 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1881 "y.tab.c"
    break;

  case 72: /* expr: expr LT expr  */
#line 283 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1887 "y.tab.c"
    break;

  case 73: /* expr: expr GT expr  */
#line 284 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1893 "y.tab.c"
    break;

  case 74: /* expr: expr LE expr  */
#line 285 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1899 "y.tab.c"
    break;

  case 75: /* expr: expr GE expr  */
#line 286 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1905 "y.tab.c"
    break;

  case 76: /* expr: expr NE expr  */
#line 287 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(NE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1911 "y.tab.c"
    break;

  case 77: /* expr: expr EQ expr  */
#line 288 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(EQ,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1917 "y.tab.c"
    break;

  case 78: /* expr: expr OR expr  */
#line 289 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(OR,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1923 "y.tab.c"
    break;

  case 79: /* expr: expr AND expr  */
#line 290 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(AND,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1929 "y.tab.c"
    break;

  case 80: /* expr: MINUS expr  */
#line 291 "exprtree.y"
               {(yyval.no) = makeSingleNode(MINUS,(yyvsp[0].no));}
#line 1935 "y.tab.c"
    break;

  case 81: /* expr: '(' expr ')'  */
#line 292 "exprtree.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 1941 "y.tab.c"
    break;

  case 82: /* expr: NUM  */
#line 293 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 1947 "y.tab.c"
    break;

  case 83: /* expr: STRCON  */
#line 294 "exprtree.y"
           {(yyval.no) = (yyvsp[0].no);}
#line 1953 "y.tab.c"
    break;

  case 84: /* expr: ID  */
#line 295 "exprtree.y"
       {setEntry((yyvsp[0].no));(yyval.no) = (yyvsp[0].no);}
#line 1959 "y.tab.c"
    break;

  case 85: /* expr: ID '[' expr ']'  */
#line 296 "exprtree.y"
                   {setArrayNode((yyvsp[-3].no),(yyvsp[-1].no));(yyval.no)=(yyvsp[-3].no);}
#line 1965 "y.tab.c"
    break;

  case 86: /* expr: ID '(' ')'  */
#line 297 "exprtree.y"
              {(yyval.no)=makeFnNode((yyvsp[-2].no)->varname,NULL);}
#line 1971 "y.tab.c"
    break;

  case 87: /* expr: ID '(' ArgList ')'  */
#line 298 "exprtree.y"
                       {(yyval.no)=makeFnNode((yyvsp[-3].no)->varname,(yyvsp[-1].no));}
#line 1977 "y.tab.c"
    break;

  case 88: /* expr: Field  */
#line 299 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 1983 "y.tab.c"
    break;

  case 89: /* expr: NUL  */
#line 300 "exprtree.y"
        {(yyval.no) = makeNullNode();}
#line 1989 "y.tab.c"
    break;

  case 90: /* ArgList: ArgList ',' expr  */
#line 303 "exprtree.y"
                           {attachArg((yyval.no),(yyvsp[0].no));(yyval.no)=(yyvsp[0].no);}
#line 1995 "y.tab.c"
    break;

  case 91: /* ArgList: expr  */
#line 304 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 2001 "y.tab.c"
    break;

  case 92: /* Field: ID '.' ID  */
#line 306 "exprtree.y"
                  {setField((yyvsp[-2].no),(yyvsp[0].no)); (yyval.no)=(yyvsp[-2].no);}
#line 2007 "y.tab.c"
    break;

  case 93: /* Field: Field '.' ID  */
#line 307 "exprtree.y"
                     {setField((yyvsp[-2].no),(yyvsp[0].no)); (yyval.no)=(yyvsp[-2].no);}
#line 2013 "y.tab.c"
    break;


#line 2017 "y.tab.c"

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

#line 312 "exprtree.y"


int yyerror(char const *s)
{
    extern int yylineno;
    printf("yyerror: %s at line %d\n",s,yylineno);
}


int main(int argc, char* argv[]) {

  if(argc>1){
    
    FILE *fp = fopen(argv[1], "r");
    if(fp)
      yyin = fp;
    
  }   

  //Creating type table with default entries
  TypeTableCreate();

  yyparse();

 return 0;
}

