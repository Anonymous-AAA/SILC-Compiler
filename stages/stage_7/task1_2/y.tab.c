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
    NUL = 299,                     /* NUL  */
    BRKP = 300,                    /* BRKP  */
    CLASS = 301,                   /* CLASS  */
    ENDCLASS = 302,                /* ENDCLASS  */
    EXTENDS = 303,                 /* EXTENDS  */
    NEW = 304,                     /* NEW  */
    DELETE = 305,                  /* DELETE  */
    SELF = 306                     /* SELF  */
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
#define BRKP 300
#define CLASS 301
#define ENDCLASS 302
#define EXTENDS 303
#define NEW 304
#define DELETE 305
#define SELF 306

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
 struct Classtable *class;

#line 249 "y.tab.c"

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
  YYSYMBOL_BRKP = 45,                      /* BRKP  */
  YYSYMBOL_CLASS = 46,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 47,                  /* ENDCLASS  */
  YYSYMBOL_EXTENDS = 48,                   /* EXTENDS  */
  YYSYMBOL_NEW = 49,                       /* NEW  */
  YYSYMBOL_DELETE = 50,                    /* DELETE  */
  YYSYMBOL_SELF = 51,                      /* SELF  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* ';'  */
  YYSYMBOL_55_ = 55,                       /* '('  */
  YYSYMBOL_56_ = 56,                       /* ')'  */
  YYSYMBOL_57_ = 57,                       /* ','  */
  YYSYMBOL_58_ = 58,                       /* '['  */
  YYSYMBOL_59_ = 59,                       /* ']'  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_Program = 62,                   /* Program  */
  YYSYMBOL_ClassDefBlock = 63,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 64,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 65,                  /* ClassDef  */
  YYSYMBOL_ClassDecl = 66,                 /* ClassDecl  */
  YYSYMBOL_Cname = 67,                     /* Cname  */
  YYSYMBOL_Fieldlists = 68,                /* Fieldlists  */
  YYSYMBOL_Fld = 69,                       /* Fld  */
  YYSYMBOL_MethodDecl = 70,                /* MethodDecl  */
  YYSYMBOL_MDecl = 71,                     /* MDecl  */
  YYSYMBOL_MethodDefns = 72,               /* MethodDefns  */
  YYSYMBOL_TypeDefBlock = 73,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 74,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 75,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 76,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 77,                 /* FieldDecl  */
  YYSYMBOL_GDeclBlock = 78,                /* GDeclBlock  */
  YYSYMBOL_GDeclList = 79,                 /* GDeclList  */
  YYSYMBOL_GDecl = 80,                     /* GDecl  */
  YYSYMBOL_GidList = 81,                   /* GidList  */
  YYSYMBOL_Gid = 82,                       /* Gid  */
  YYSYMBOL_MainBlock = 83,                 /* MainBlock  */
  YYSYMBOL_FDefBlock = 84,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 85,                      /* Fdef  */
  YYSYMBOL_ParamList = 86,                 /* ParamList  */
  YYSYMBOL_Param = 87,                     /* Param  */
  YYSYMBOL_Type = 88,                      /* Type  */
  YYSYMBOL_LDeclBlock = 89,                /* LDeclBlock  */
  YYSYMBOL_LDecList = 90,                  /* LDecList  */
  YYSYMBOL_LDecl = 91,                     /* LDecl  */
  YYSYMBOL_IdList = 92,                    /* IdList  */
  YYSYMBOL_Body = 93,                      /* Body  */
  YYSYMBOL_Stmt = 94,                      /* Stmt  */
  YYSYMBOL_FreeStmt = 95,                  /* FreeStmt  */
  YYSYMBOL_InputStmt = 96,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 97,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 98,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 99,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 100,                /* WhileStmt  */
  YYSYMBOL_BreakStmt = 101,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 102,             /* ContinueStmt  */
  YYSYMBOL_BreakPointStmt = 103,           /* BreakPointStmt  */
  YYSYMBOL_ReturnStmt = 104,               /* ReturnStmt  */
  YYSYMBOL_expr = 105,                     /* expr  */
  YYSYMBOL_ArgList = 106,                  /* ArgList  */
  YYSYMBOL_Field = 107,                    /* Field  */
  YYSYMBOL_FieldFunction = 108             /* FieldFunction  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   614

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      55,    56,     2,     2,    57,     2,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    60,    61,    64,    65,    68,    71,    74,
      78,    79,    82,    85,    86,    89,    93,    94,   101,   102,
     105,   106,   109,   112,   113,   116,   124,   126,   129,   130,
     133,   138,   139,   143,   144,   145,   152,   165,   166,   169,
     188,   189,   190,   193,   197,   198,   199,   203,   204,   207,
     208,   211,   214,   215,   218,   219,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   233,   236,   238,   240,   247,
     250,   253,   256,   259,   262,   265,   270,   274,   279,   281,
     291,   304,   305,   308,   311,   314,   317,   319,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   352,   353,   355,   356,   365,   373,   380,   381,
     382,   389,   390
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
  "INIT", "NUL", "BRKP", "CLASS", "ENDCLASS", "EXTENDS", "NEW", "DELETE",
  "SELF", "'{'", "'}'", "';'", "'('", "')'", "','", "'['", "']'", "'.'",
  "$accept", "Program", "ClassDefBlock", "ClassDefList", "ClassDef",
  "ClassDecl", "Cname", "Fieldlists", "Fld", "MethodDecl", "MDecl",
  "MethodDefns", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "GDeclBlock", "GDeclList", "GDecl", "GidList", "Gid",
  "MainBlock", "FDefBlock", "Fdef", "ParamList", "Param", "Type",
  "LDeclBlock", "LDecList", "LDecl", "IdList", "Body", "Stmt", "FreeStmt",
  "InputStmt", "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt", "BreakStmt",
  "ContinueStmt", "BreakPointStmt", "ReturnStmt", "expr", "ArgList",
  "Field", "FieldFunction", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,    -5,    10,   -28,   -23,     6,  -101,  -101,    11,    24,
      -6,  -101,  -101,  -101,    -8,  -101,    14,    -6,  -101,  -101,
    -101,  -101,    45,  -101,    48,  -101,  -101,    41,   140,  -101,
      95,   148,  -101,  -101,    40,  -101,    -6,  -101,  -101,    96,
     182,  -101,    75,  -101,  -101,   103,  -101,    -6,   165,  -101,
      -6,   130,  -101,    95,   115,   133,  -101,   194,  -101,   208,
    -101,  -101,   -22,  -101,   209,   137,  -101,   144,    -6,  -101,
    -101,   252,    67,  -101,    -6,  -101,  -101,   162,   163,   211,
    -101,    -6,  -101,   237,   216,   185,    -6,   259,   237,   222,
     264,   202,  -101,  -101,   268,  -101,  -101,   183,  -101,  -101,
     467,  -101,  -101,   266,   226,   227,    -3,   228,   229,   238,
     244,   333,   245,   247,   262,   239,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,   293,   -13,   467,  -101,
      -9,   333,   319,   333,   290,   333,   333,  -101,  -101,  -101,
     333,    60,  -101,  -101,   258,   333,   374,   269,  -101,    -7,
    -101,    19,   306,   275,   320,   317,   322,    81,   -47,   224,
     279,   280,   282,   398,   120,  -101,   248,   283,   157,     9,
     333,   327,   328,   289,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,  -101,   329,    16,
      76,   106,   139,  -101,  -101,   288,   292,   433,  -101,   291,
     294,   333,   295,   296,   299,   300,   338,  -101,   343,   336,
     341,  -101,   541,   187,   179,   303,   310,  -101,   157,   157,
    -101,  -101,  -101,   581,   581,   581,   581,   581,   581,   587,
     547,   311,   318,   331,   332,   335,   334,   360,  -101,  -101,
    -101,   186,  -101,  -101,   337,   339,   351,   333,  -101,  -101,
    -101,   333,  -101,    12,    18,   104,  -101,  -101,  -101,  -101,
     340,   352,   353,  -101,  -101,   356,   439,    84,   486,   541,
    -101,   201,  -101,   203,  -101,   207,  -101,   359,   361,  -101,
    -101,  -101,   362,   363,  -101,  -101,  -101,  -101,  -101,   511,
    -101,  -101,   364,  -101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      19,     0,     0,     4,     0,     0,    21,     1,     0,    27,
       0,    18,    20,     9,     0,     6,     0,     0,    38,    46,
      44,    45,     0,    24,     0,     3,     5,     0,     0,    29,
       0,     0,    22,    23,     0,    11,     0,    26,    28,    33,
       0,    32,    44,     2,    37,     0,    25,     0,     0,    17,
      42,     0,    30,     0,     0,     0,    10,     0,    14,     0,
       7,    16,     0,    41,     0,     0,    31,     0,    42,     8,
      13,     0,     0,    35,     0,    43,    34,     0,     0,     0,
      12,    42,    40,    48,     0,     0,     0,     0,    48,     0,
       0,     0,    50,    55,     0,    15,    53,     0,    47,    49,
       0,    55,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    64,    56,    57,
      58,    59,    60,    61,    62,    63,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    84,    85,   103,
       0,   105,   104,   110,     0,     0,     0,   109,   111,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,   116,    36,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,   107,   113,     0,     0,   114,   116,   102,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   100,
      99,   115,     0,     0,     0,     0,     0,     0,    78,    39,
      69,     0,    71,    72,     0,     0,     0,     0,    55,    55,
     108,     0,   106,     0,     0,     0,    65,    66,    68,    67,
       0,     0,     0,    75,    77,     0,     0,     0,     0,   112,
     121,     0,   120,     0,   122,     0,    76,     0,     0,    79,
      74,    55,     0,     0,   118,   117,   119,    80,    70,     0,
      82,    83,     0,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,   369,  -101,  -101,  -101,  -101,  -101,
     330,  -101,  -101,  -101,   371,  -101,   370,  -101,  -101,   367,
    -101,   366,  -101,  -101,    56,   -48,   355,    83,   326,  -101,
     342,  -101,   -99,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,   298,   -95,   -78,  -100,  -101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    14,    15,    36,    16,    47,    56,    57,
      58,    48,     3,     5,     6,    22,    23,    18,    28,    29,
      40,    41,    43,    31,    44,    62,    63,    64,    87,    91,
      92,    97,   100,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   212,   213,   147,   148
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,   154,   128,     1,   157,    13,   189,    19,     4,   202,
       7,   132,   139,   155,   140,   139,   146,   140,     8,     4,
      78,   139,   141,   140,    13,   141,    20,    21,   127,    10,
     158,   141,   191,    85,    73,    74,   159,   163,   164,    25,
     166,   167,   115,   142,   115,   168,   142,   155,    11,   190,
     173,   192,   142,   143,    17,   133,   143,   134,    19,   197,
     144,    34,   143,   144,   145,   211,    27,   145,   270,   144,
     115,    35,   232,   145,   272,   214,   134,    20,    21,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    49,    24,    46,   104,   105,   106,    32,   107,
      30,   281,   282,   108,    61,    24,   241,   139,    39,   140,
      54,    30,   109,   110,    45,   169,    55,   141,   170,    45,
     171,    80,    81,   112,   174,   175,   176,   177,   178,   113,
      59,    45,   233,    65,   114,   115,   155,   200,   142,   201,
      71,   134,   179,   180,   181,   182,   183,   184,   143,   267,
     268,    50,   266,    19,    51,   144,   269,   185,   186,   145,
     274,    19,   234,   176,   177,   178,   134,   127,   127,    90,
      67,    37,    20,    21,    90,   271,   273,   275,    19,   208,
      42,    21,   289,   174,   175,   176,   177,   178,    68,   127,
     174,   175,   176,   177,   178,   235,    76,    20,    21,   155,
      77,   179,   180,   181,   182,   183,   184,    19,   179,   180,
     181,   182,   183,   184,    83,    19,   185,   186,    60,    84,
      74,    72,    75,   185,   186,    69,    20,    21,   174,   175,
     176,   177,   178,    98,    20,    21,    52,   102,   252,    53,
     103,    89,    74,   250,   251,   262,   179,   180,   181,   182,
     183,   184,   174,   175,   176,   177,   178,   284,   251,   285,
     251,   185,   186,   286,   251,    79,    81,    86,    88,    93,
     179,   180,   181,   182,   183,   184,    95,    96,   101,   129,
     203,   130,   131,   135,   136,   185,   186,   174,   175,   176,
     177,   178,   137,   174,   175,   176,   177,   178,   138,   152,
     149,   150,   153,   165,   209,   179,   180,   181,   182,   183,
     184,   179,   180,   181,   182,   183,   184,   151,   172,   193,
     185,   186,   139,   139,   140,   140,   185,   186,   194,   188,
     198,   199,   141,   141,   204,   205,   139,   206,   140,   210,
     215,   216,   231,   236,   239,   217,   141,   237,   240,   242,
     243,   246,   248,   142,   142,   244,   245,   247,   253,   160,
     195,   249,   161,   143,   143,   254,   255,   142,   162,   196,
     144,   144,   256,   261,   145,   145,    12,   143,   174,   175,
     176,   177,   178,    26,   144,   257,   258,    70,   145,   259,
     260,   263,    33,   264,   276,    38,   179,   180,   181,   182,
     183,   184,   174,   175,   176,   177,   178,   265,   277,   278,
     279,   185,   186,   287,    94,   288,   290,   291,   293,    66,
     179,   180,   181,   182,   183,   184,   156,     0,   187,    82,
       0,     0,     0,    99,     0,   185,   186,   174,   175,   176,
     177,   178,     0,   174,   175,   176,   177,   178,     0,     0,
       0,     0,   207,     0,     0,   179,   180,   181,   182,   183,
     184,   179,   180,   181,   182,   183,   184,     0,     0,     0,
     185,   186,     0,     0,     0,     0,   185,   186,   104,   105,
     106,     0,   107,     0,     0,     0,   108,   238,     0,     0,
       0,     0,     0,   280,     0,   109,   110,   104,   105,   106,
       0,   107,     0,   111,     0,   108,   112,   283,     0,     0,
       0,     0,   113,     0,   109,   110,     0,   114,   115,     0,
       0,     0,   104,   105,   106,   112,   107,     0,     0,   292,
     108,   113,     0,     0,     0,     0,   114,   115,     0,   109,
     110,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     112,   174,   175,   176,   177,   178,   113,     0,     0,     0,
       0,   114,   115,   179,   180,   181,   182,   183,   184,   179,
     180,   181,   182,   183,   184,     0,     0,     0,   185,   186,
       0,     0,     0,     0,   185,   174,   175,   176,   177,   178,
       0,   174,   175,   176,   177,   178,     0,     0,     0,     0,
       0,     0,     0,    -1,    -1,    -1,    -1,    -1,    -1,   179,
     180,   181,   182,   183,   184
};

static const yytype_int16 yycheck[] =
{
     100,    14,   101,    41,    13,    13,    13,    13,    13,    56,
       0,    14,     3,    60,     5,     3,   111,     5,    46,    13,
      68,     3,    13,     5,    13,    13,    32,    33,   128,    52,
     130,    13,    13,    81,    56,    57,   131,   132,   133,    47,
     135,   136,    51,    34,    51,   140,    34,    60,    42,   149,
     145,   151,    34,    44,    30,    58,    44,    60,    13,   154,
      51,    13,    44,    51,    55,    56,    52,    55,    56,    51,
      51,    30,    56,    55,    56,   170,    60,    32,    33,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    36,    10,    54,    11,    12,    13,    53,    15,
      17,    17,    18,    19,    48,    22,   201,     3,    13,     5,
      35,    28,    28,    29,    31,    55,    13,    13,    58,    36,
      60,    54,    55,    39,     4,     5,     6,     7,     8,    45,
      47,    48,    56,     3,    50,    51,    60,    56,    34,    58,
      57,    60,    22,    23,    24,    25,    26,    27,    44,   248,
     249,    55,   247,    13,    58,    51,   251,    37,    38,    55,
      56,    13,    56,     6,     7,     8,    60,   267,   268,    86,
      55,    31,    32,    33,    91,   253,   254,   255,    13,    59,
      32,    33,   281,     4,     5,     6,     7,     8,    55,   289,
       4,     5,     6,     7,     8,    56,    59,    32,    33,    60,
      56,    22,    23,    24,    25,    26,    27,    13,    22,    23,
      24,    25,    26,    27,    52,    13,    37,    38,    53,    56,
      57,    13,    13,    37,    38,    31,    32,    33,     4,     5,
       6,     7,     8,    31,    32,    33,    54,    54,    59,    57,
      57,    56,    57,    56,    57,    59,    22,    23,    24,    25,
      26,    27,     4,     5,     6,     7,     8,    56,    57,    56,
      57,    37,    38,    56,    57,    13,    55,    30,    52,    10,
      22,    23,    24,    25,    26,    27,    54,    13,    10,    13,
      56,    55,    55,    55,    55,    37,    38,     4,     5,     6,
       7,     8,    54,     4,     5,     6,     7,     8,    54,    60,
      55,    54,     9,    13,    56,    22,    23,    24,    25,    26,
      27,    22,    23,    24,    25,    26,    27,    55,    60,    13,
      37,    38,     3,     3,     5,     5,    37,    38,    53,    60,
      13,     9,    13,    13,    55,    55,     3,    55,     5,    56,
      13,    13,    13,    55,    53,    56,    13,    55,    54,    54,
      54,    13,    16,    34,    34,    56,    56,    14,    55,    40,
      40,    20,    43,    44,    44,    55,    55,    34,    49,    49,
      51,    51,    54,    13,    55,    55,     5,    44,     4,     5,
       6,     7,     8,    14,    51,    54,    54,    57,    55,    54,
      56,    54,    22,    54,    54,    28,    22,    23,    24,    25,
      26,    27,     4,     5,     6,     7,     8,    56,    56,    56,
      54,    37,    38,    54,    88,    54,    54,    54,    54,    53,
      22,    23,    24,    25,    26,    27,   128,    -1,    54,    74,
      -1,    -1,    -1,    91,    -1,    37,    38,     4,     5,     6,
       7,     8,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    22,    23,    24,    25,    26,
      27,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    37,    38,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    54,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    28,    29,    11,    12,    13,
      -1,    15,    -1,    36,    -1,    19,    39,    21,    -1,    -1,
      -1,    -1,    45,    -1,    28,    29,    -1,    50,    51,    -1,
      -1,    -1,    11,    12,    13,    39,    15,    -1,    -1,    18,
      19,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,    28,
      29,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      39,     4,     5,     6,     7,     8,    45,    -1,    -1,    -1,
      -1,    50,    51,    22,    23,    24,    25,    26,    27,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    37,     4,     5,     6,     7,     8,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    22,
      23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    62,    73,    13,    74,    75,     0,    46,    63,
      52,    42,    75,    13,    64,    65,    67,    30,    78,    13,
      32,    33,    76,    77,    88,    47,    65,    52,    79,    80,
      88,    84,    53,    77,    13,    30,    66,    31,    80,    13,
      81,    82,    32,    83,    85,    88,    54,    68,    72,    85,
      55,    58,    54,    57,    35,    13,    69,    70,    71,    88,
      53,    85,    86,    87,    88,     3,    82,    55,    55,    31,
      71,    88,    13,    56,    57,    13,    59,    56,    86,    13,
      54,    55,    87,    52,    56,    86,    30,    89,    52,    56,
      88,    90,    91,    10,    89,    54,    13,    92,    31,    91,
      93,    10,    54,    57,    11,    12,    13,    15,    19,    28,
      29,    36,    39,    45,    50,    51,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   107,    93,    13,
      55,    55,    14,    58,    60,    55,    55,    54,    54,     3,
       5,    13,    34,    44,    51,    55,   105,   107,   108,    55,
      54,    55,    60,     9,    14,    60,   104,    13,   107,   105,
      40,    43,    49,   105,   105,    13,   105,   105,   105,    55,
      58,    60,    60,   105,     4,     5,     6,     7,     8,    22,
      23,    24,    25,    26,    27,    37,    38,    54,    60,    13,
     107,    13,   107,    13,    53,    40,    49,   105,    13,     9,
      56,    58,    56,    56,    55,    55,    55,    54,    59,    56,
      56,    56,   105,   106,   105,    13,    13,    56,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,    13,    56,    56,    56,    56,    55,    55,    54,    53,
      54,   105,    54,    54,    56,    56,    13,    14,    16,    20,
      56,    57,    59,    55,    55,    55,    54,    54,    54,    54,
      56,    13,    59,    54,    54,    56,   105,    93,    93,   105,
      56,   106,    56,   106,    56,   106,    54,    56,    56,    54,
      54,    17,    18,    21,    56,    56,    56,    54,    54,    93,
      54,    54,    18,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    66,    67,
      68,    68,    69,    70,    70,    71,    72,    72,    73,    73,
      74,    74,    75,    76,    76,    77,    78,    78,    79,    79,
      80,    81,    81,    82,    82,    82,    83,    84,    84,    85,
      86,    86,    86,    87,    88,    88,    88,    89,    89,    90,
      90,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    96,
      96,    96,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   101,   102,   103,   104,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   107,   108,   108,   108,
     108,   108,   108
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     0,     2,     1,     5,     4,     1,
       2,     0,     3,     2,     1,     6,     2,     1,     3,     0,
       2,     1,     4,     2,     1,     3,     3,     0,     2,     1,
       3,     3,     1,     1,     4,     4,    11,     2,     0,    12,
       3,     1,     0,     2,     1,     1,     1,     3,     0,     2,
       1,     3,     3,     1,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     5,     5,
       8,     5,     5,     4,     7,     6,     6,     6,     4,     7,
       7,    10,     8,     8,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     1,     1,     4,     3,     4,     1,
       1,     1,     3,     1,     3,     3,     3,     6,     6,     6,
       5,     5,     5
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
  case 2: /* Program: TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock  */
#line 45 "exprtree.y"
                                                                    {
          //code($3);
          //evaluate($3)
          //test($3)
          //printTypeTable();
          //printGSymbolTable();
          //printClassTable();
          exit(0);
          }
#line 1602 "y.tab.c"
    break;

  case 3: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 60 "exprtree.y"
                                            {Ccurr=NULL;}
#line 1608 "y.tab.c"
    break;

  case 9: /* Cname: ID  */
#line 74 "exprtree.y"
            {(yyval.class) = CInstall((yyvsp[0].no)->varname,NULL);}
#line 1614 "y.tab.c"
    break;

  case 12: /* Fld: Type ID ';'  */
#line 82 "exprtree.y"
                  {Class_Finstall(Ccurr,(yyvsp[-2].type)->name,(yyvsp[-1].no)->varname);}
#line 1620 "y.tab.c"
    break;

  case 15: /* MDecl: Type ID '(' ParamList ')' ';'  */
#line 89 "exprtree.y"
                                      {Class_Minstall(Ccurr,(yyvsp[-4].no)->varname,(yyvsp[-5].type),(yyvsp[-2].param));}
#line 1626 "y.tab.c"
    break;

  case 22: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 109 "exprtree.y"
                                   {TInstall((yyvsp[-3].no)->varname,(yyvsp[-1].flist));}
#line 1632 "y.tab.c"
    break;

  case 23: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 112 "exprtree.y"
                                        {(yyval.flist) = (yyvsp[-1].flist); attachField((yyvsp[0].flist));}
#line 1638 "y.tab.c"
    break;

  case 24: /* FieldDeclList: FieldDecl  */
#line 113 "exprtree.y"
                          {(yyval.flist) = (yyvsp[0].flist); Fcurr=(yyvsp[0].flist);Fstart=(yyvsp[0].flist);}
#line 1644 "y.tab.c"
    break;

  case 25: /* FieldDecl: Type ID ';'  */
#line 116 "exprtree.y"
                        {(yyval.flist) = createField((yyvsp[-1].no)->varname,(yyvsp[-2].type));}
#line 1650 "y.tab.c"
    break;

  case 30: /* GDecl: Type GidList ';'  */
#line 133 "exprtree.y"
                         {checkTypeAndCtype((yyvsp[-2].type));setGType((yyvsp[-1].gsym),(yyvsp[-2].type));}
#line 1656 "y.tab.c"
    break;

  case 31: /* GidList: GidList ',' Gid  */
#line 138 "exprtree.y"
                          {(yyval.gsym)=(yyvsp[-2].gsym);}
#line 1662 "y.tab.c"
    break;

  case 32: /* GidList: Gid  */
#line 139 "exprtree.y"
              {(yyval.gsym)=(yyvsp[0].gsym);}
#line 1668 "y.tab.c"
    break;

  case 33: /* Gid: ID  */
#line 143 "exprtree.y"
         {(yyval.gsym)=GInstallVar((yyvsp[0].no)->varname,voidtype,1);}
#line 1674 "y.tab.c"
    break;

  case 34: /* Gid: ID '[' NUM ']'  */
#line 144 "exprtree.y"
                     {(yyval.gsym)=GInstallVar((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].no)->val);}
#line 1680 "y.tab.c"
    break;

  case 35: /* Gid: ID '(' ParamList ')'  */
#line 145 "exprtree.y"
                           {(yyval.gsym)=GInstallFn((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].param));}
#line 1686 "y.tab.c"
    break;

  case 36: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 152 "exprtree.y"
                                                                        {
            (yyvsp[-3].no) = makeConnectorNode((yyvsp[-3].no),(yyvsp[-2].no));  //Attaching the return statement
            checkMain((yyvsp[-2].no)->left->type);
            codeFunction((yyvsp[-3].no),NULL);       //Generating code
            //printLSymbolTable("main"); //Printing the local symbol table
            deallocateLST();     //deallocating the Local Symbol Table
            deallocateAST((yyvsp[-3].no));  //deallocating the AST
          }
#line 1699 "y.tab.c"
    break;

  case 39: /* Fdef: Type ID '(' ParamList ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 169 "exprtree.y"
                                                                             {

        checkType((yyvsp[-11].type));

        (yyvsp[-3].no) = makeConnectorNode((yyvsp[-3].no),(yyvsp[-2].no));  //Attaching the return statement
        
        if(Ccurr)  //if inside class checkMethod
        checkMethod((yyvsp[-11].type),(yyvsp[-2].no)->left->type,(yyvsp[-10].no)->varname,(yyvsp[-8].param));  //to check definition with declaration
        else
        checkFn((yyvsp[-11].type),(yyvsp[-2].no)->left->type,(yyvsp[-10].no)->varname,(yyvsp[-8].param));  //to check definition with declaration

        //test($9);
        codeFunction((yyvsp[-3].no),(yyvsp[-10].no)->varname);       //Generating code
        //printLSymbolTable($2->varname); //Printing the local symbol table
        deallocateLST();     //deallocating the Local Symbol Table
        deallocateAST((yyvsp[-3].no));  //deallocating the AST
      }
#line 1721 "y.tab.c"
    break;

  case 40: /* ParamList: ParamList ',' Param  */
#line 188 "exprtree.y"
                                {(yyval.param)=(yyvsp[0].param); createParamList((yyvsp[-2].param),(yyvsp[0].param));}
#line 1727 "y.tab.c"
    break;

  case 41: /* ParamList: Param  */
#line 189 "exprtree.y"
                  {(yyval.param)=(yyvsp[0].param);}
#line 1733 "y.tab.c"
    break;

  case 42: /* ParamList: %empty  */
#line 190 "exprtree.y"
            {(yyval.param)=NULL;}
#line 1739 "y.tab.c"
    break;

  case 43: /* Param: Type ID  */
#line 193 "exprtree.y"
                {checkType((yyvsp[-1].type));(yyval.param)=createParams((yyvsp[-1].type),(yyvsp[0].no)->varname);}
#line 1745 "y.tab.c"
    break;

  case 44: /* Type: INT  */
#line 197 "exprtree.y"
           {(yyval.type) = inttype;}
#line 1751 "y.tab.c"
    break;

  case 45: /* Type: STR  */
#line 198 "exprtree.y"
           {(yyval.type) = strtype;}
#line 1757 "y.tab.c"
    break;

  case 46: /* Type: ID  */
#line 199 "exprtree.y"
           {checkInvalidTypes((yyvsp[0].no));(yyval.type) = TLookup((yyvsp[0].no)->varname);}
#line 1763 "y.tab.c"
    break;

  case 47: /* LDeclBlock: DECL LDecList ENDDECL  */
#line 203 "exprtree.y"
                                    {if(Ccurr){LInstallSelf(Ccurr);}}
#line 1769 "y.tab.c"
    break;

  case 48: /* LDeclBlock: %empty  */
#line 204 "exprtree.y"
              {if(Ccurr){LInstallSelf(Ccurr);}}
#line 1775 "y.tab.c"
    break;

  case 51: /* LDecl: Type IdList ';'  */
#line 211 "exprtree.y"
                       {checkType((yyvsp[-2].type));setLType((yyvsp[-1].lsym),(yyvsp[-2].type));}
#line 1781 "y.tab.c"
    break;

  case 52: /* IdList: IdList ',' ID  */
#line 214 "exprtree.y"
                        {(yyval.lsym)=(yyvsp[-2].lsym); LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1787 "y.tab.c"
    break;

  case 53: /* IdList: ID  */
#line 215 "exprtree.y"
             {(yyval.lsym)=LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1793 "y.tab.c"
    break;

  case 54: /* Body: Body Stmt  */
#line 218 "exprtree.y"
                    {(yyval.no) = makeConnectorNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1799 "y.tab.c"
    break;

  case 55: /* Body: %empty  */
#line 219 "exprtree.y"
           {(yyval.no) = NULL;}
#line 1805 "y.tab.c"
    break;

  case 56: /* Stmt: InputStmt  */
#line 222 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1811 "y.tab.c"
    break;

  case 57: /* Stmt: OutputStmt  */
#line 223 "exprtree.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1817 "y.tab.c"
    break;

  case 58: /* Stmt: AsgStmt  */
#line 224 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1823 "y.tab.c"
    break;

  case 59: /* Stmt: IfStmt  */
#line 225 "exprtree.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1829 "y.tab.c"
    break;

  case 60: /* Stmt: WhileStmt  */
#line 226 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1835 "y.tab.c"
    break;

  case 61: /* Stmt: BreakStmt  */
#line 227 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1841 "y.tab.c"
    break;

  case 62: /* Stmt: ContinueStmt  */
#line 228 "exprtree.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1847 "y.tab.c"
    break;

  case 63: /* Stmt: BreakPointStmt  */
#line 229 "exprtree.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1853 "y.tab.c"
    break;

  case 64: /* Stmt: FreeStmt  */
#line 230 "exprtree.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1859 "y.tab.c"
    break;

  case 65: /* FreeStmt: FREE '(' ID ')' ';'  */
#line 233 "exprtree.y"
                               { setEntry((yyvsp[-2].no)); 
                                 (yyval.no)=makeSingleNode(FREE,(yyvsp[-2].no));
                                 }
#line 1867 "y.tab.c"
    break;

  case 66: /* FreeStmt: FREE '(' Field ')' ';'  */
#line 236 "exprtree.y"
                                 { (yyval.no)=makeSingleNode(FREE,(yyvsp[-2].no));}
#line 1873 "y.tab.c"
    break;

  case 67: /* FreeStmt: DELETE '(' Field ')' ';'  */
#line 238 "exprtree.y"
                                  { (yyval.no)=makeSingleNode(DELETE,(yyvsp[-2].no));}
#line 1879 "y.tab.c"
    break;

  case 68: /* FreeStmt: DELETE '(' ID ')' ';'  */
#line 240 "exprtree.y"
                               { setEntry((yyvsp[-2].no)); 
                                 (yyval.no)=makeSingleNode(DELETE,(yyvsp[-2].no));

                                 }
#line 1888 "y.tab.c"
    break;

  case 69: /* InputStmt: READ '(' ID ')' ';'  */
#line 247 "exprtree.y"
                                {setEntry((yyvsp[-2].no));
                                (yyval.no) = makeSingleNode(READ,(yyvsp[-2].no));
                                }
#line 1896 "y.tab.c"
    break;

  case 70: /* InputStmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 250 "exprtree.y"
                                             { setArrayNode((yyvsp[-5].no),(yyvsp[-3].no));
                                            (yyval.no) = makeSingleNode(READ,(yyvsp[-5].no));
                                            }
#line 1904 "y.tab.c"
    break;

  case 71: /* InputStmt: READ '(' Field ')' ';'  */
#line 253 "exprtree.y"
                                    { (yyval.no)=makeSingleNode(READ,(yyvsp[-2].no));}
#line 1910 "y.tab.c"
    break;

  case 72: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 256 "exprtree.y"
                                    {(yyval.no) = makeSingleNode(WRITE,(yyvsp[-2].no));}
#line 1916 "y.tab.c"
    break;

  case 73: /* AsgStmt: ID EQUAL expr ';'  */
#line 259 "exprtree.y"
                            {setEntry((yyvsp[-3].no)); 
                              (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));
                              }
#line 1924 "y.tab.c"
    break;

  case 74: /* AsgStmt: ID '[' expr ']' EQUAL expr ';'  */
#line 262 "exprtree.y"
                                         { setArrayNode((yyvsp[-6].no),(yyvsp[-4].no));
                                          (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-1].no));
                                        }
#line 1932 "y.tab.c"
    break;

  case 75: /* AsgStmt: ID EQUAL ALLOC '(' ')' ';'  */
#line 265 "exprtree.y"
                                    {setEntry((yyvsp[-5].no));
                                        (yyvsp[-3].no)=makeNoChildNode(ALLOC);
                                        (yyvsp[-3].no)->type=nulltype;
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1942 "y.tab.c"
    break;

  case 76: /* AsgStmt: Field EQUAL ALLOC '(' ')' ';'  */
#line 270 "exprtree.y"
                                         {(yyvsp[-3].no)=makeNoChildNode(ALLOC);
                                                (yyvsp[-3].no)->type=nulltype;
                                                (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1951 "y.tab.c"
    break;

  case 77: /* AsgStmt: ID EQUAL INIT '(' ')' ';'  */
#line 274 "exprtree.y"
                                    {setEntry((yyvsp[-5].no));
                                        (yyvsp[-3].no)=makeNoChildNode(INIT);
                                        (yyvsp[-3].no)->type=inttype;   //initialize returns integer value
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1961 "y.tab.c"
    break;

  case 78: /* AsgStmt: Field EQUAL expr ';'  */
#line 279 "exprtree.y"
                               { (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1967 "y.tab.c"
    break;

  case 79: /* AsgStmt: ID EQUAL NEW '(' ID ')' ';'  */
#line 281 "exprtree.y"
                                     {
                                        if(CLookup((yyvsp[-2].no)->varname)==NULL){
                                                printf("Error : Undefined class '%s' in new statement\n",(yyvsp[-2].no)->varname);
                                                exit(1);
                                        }
                                        setEntry((yyvsp[-6].no));
                                        (yyvsp[-4].no)=makeNoChildNode(NEW);
                                        (yyvsp[-4].no)->type=nulltype;
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-4].no));
                                        }
#line 1982 "y.tab.c"
    break;

  case 80: /* AsgStmt: Field EQUAL NEW '(' ID ')' ';'  */
#line 291 "exprtree.y"
                                        {
                                        if(CLookup((yyvsp[-2].no)->varname)==NULL){
                                                printf("Error : Undefined class '%s' in new statement\n",(yyvsp[-2].no)->varname);
                                                exit(1);
                                        }
                                        (yyvsp[-4].no)=makeNoChildNode(NEW);
                                        (yyvsp[-4].no)->type=nulltype;
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-4].no));
                                        }
#line 1996 "y.tab.c"
    break;

  case 81: /* IfStmt: IF '(' expr ')' THEN Body ELSE Body ENDIF ';'  */
#line 304 "exprtree.y"
                                                       {(yyval.no) = makeTriplets(IF,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2002 "y.tab.c"
    break;

  case 82: /* IfStmt: IF '(' expr ')' THEN Body ENDIF ';'  */
#line 305 "exprtree.y"
                                            {(yyval.no) = makeTriplets(IF,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 2008 "y.tab.c"
    break;

  case 83: /* WhileStmt: WHILE '(' expr ')' DO Body ENDWHILE ';'  */
#line 308 "exprtree.y"
                                                    {(yyval.no) = makeTriplets(WHILE,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 2014 "y.tab.c"
    break;

  case 84: /* BreakStmt: BREAK ';'  */
#line 311 "exprtree.y"
                      {(yyval.no) = makeNoChildNode(BREAK);}
#line 2020 "y.tab.c"
    break;

  case 85: /* ContinueStmt: CONTINUE ';'  */
#line 314 "exprtree.y"
                            {(yyval.no) = makeNoChildNode(CONTINUE);}
#line 2026 "y.tab.c"
    break;

  case 86: /* BreakPointStmt: BRKP ';'  */
#line 317 "exprtree.y"
                          {(yyval.no) = makeNoChildNode(BRKP);}
#line 2032 "y.tab.c"
    break;

  case 87: /* ReturnStmt: RET expr ';'  */
#line 319 "exprtree.y"
                          {
                            (yyval.no) = makeSingleNode(RET,(yyvsp[-1].no));
                        }
#line 2040 "y.tab.c"
    break;

  case 88: /* expr: expr PLUS expr  */
#line 326 "exprtree.y"
                       {(yyval.no) = makeOperatorNode(PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2046 "y.tab.c"
    break;

  case 89: /* expr: expr MINUS expr  */
#line 327 "exprtree.y"
                      {(yyval.no) = makeOperatorNode(MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2052 "y.tab.c"
    break;

  case 90: /* expr: expr MUL expr  */
#line 328 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2058 "y.tab.c"
    break;

  case 91: /* expr: expr DIV expr  */
#line 329 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2064 "y.tab.c"
    break;

  case 92: /* expr: expr MOD expr  */
#line 330 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2070 "y.tab.c"
    break;

  case 93: /* expr: expr LT expr  */
#line 331 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2076 "y.tab.c"
    break;

  case 94: /* expr: expr GT expr  */
#line 332 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2082 "y.tab.c"
    break;

  case 95: /* expr: expr LE expr  */
#line 333 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2088 "y.tab.c"
    break;

  case 96: /* expr: expr GE expr  */
#line 334 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2094 "y.tab.c"
    break;

  case 97: /* expr: expr NE expr  */
#line 335 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(NE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2100 "y.tab.c"
    break;

  case 98: /* expr: expr EQ expr  */
#line 336 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(EQ,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2106 "y.tab.c"
    break;

  case 99: /* expr: expr OR expr  */
#line 337 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(OR,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2112 "y.tab.c"
    break;

  case 100: /* expr: expr AND expr  */
#line 338 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(AND,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2118 "y.tab.c"
    break;

  case 101: /* expr: MINUS expr  */
#line 339 "exprtree.y"
               {(yyval.no) = makeSingleNode(MINUS,(yyvsp[0].no));}
#line 2124 "y.tab.c"
    break;

  case 102: /* expr: '(' expr ')'  */
#line 340 "exprtree.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2130 "y.tab.c"
    break;

  case 103: /* expr: NUM  */
#line 341 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2136 "y.tab.c"
    break;

  case 104: /* expr: STRCON  */
#line 342 "exprtree.y"
           {(yyval.no) = (yyvsp[0].no);}
#line 2142 "y.tab.c"
    break;

  case 105: /* expr: ID  */
#line 343 "exprtree.y"
       {setEntry((yyvsp[0].no));(yyval.no) = (yyvsp[0].no);}
#line 2148 "y.tab.c"
    break;

  case 106: /* expr: ID '[' expr ']'  */
#line 344 "exprtree.y"
                   {setArrayNode((yyvsp[-3].no),(yyvsp[-1].no));(yyval.no)=(yyvsp[-3].no);}
#line 2154 "y.tab.c"
    break;

  case 107: /* expr: ID '(' ')'  */
#line 345 "exprtree.y"
              {(yyval.no)=makeFnNode((yyvsp[-2].no)->varname,NULL);}
#line 2160 "y.tab.c"
    break;

  case 108: /* expr: ID '(' ArgList ')'  */
#line 346 "exprtree.y"
                       {(yyval.no)=makeFnNode((yyvsp[-3].no)->varname,(yyvsp[-1].no));}
#line 2166 "y.tab.c"
    break;

  case 109: /* expr: Field  */
#line 347 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2172 "y.tab.c"
    break;

  case 110: /* expr: NUL  */
#line 348 "exprtree.y"
        {(yyval.no) = makeNullNode();}
#line 2178 "y.tab.c"
    break;

  case 111: /* expr: FieldFunction  */
#line 349 "exprtree.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 2184 "y.tab.c"
    break;

  case 112: /* ArgList: ArgList ',' expr  */
#line 352 "exprtree.y"
                           {attachArg((yyval.no),(yyvsp[0].no));(yyval.no)=(yyvsp[0].no);}
#line 2190 "y.tab.c"
    break;

  case 113: /* ArgList: expr  */
#line 353 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 2196 "y.tab.c"
    break;

  case 114: /* Field: ID '.' ID  */
#line 355 "exprtree.y"
                  {setField((yyvsp[-2].no),(yyvsp[0].no)); (yyval.no)=(yyvsp[-2].no);}
#line 2202 "y.tab.c"
    break;

  case 115: /* Field: Field '.' ID  */
#line 356 "exprtree.y"
                     {
                       // if($1->nodetype==SELF){

                       //  printf("Error : Member fields are private to the class (%s)\n",$3->varname);
                       //  exit(1);

                       // }
                        setField((yyvsp[-2].no),(yyvsp[0].no)); 
                        (yyval.no)=(yyvsp[-2].no);}
#line 2216 "y.tab.c"
    break;

  case 116: /* Field: SELF '.' ID  */
#line 365 "exprtree.y"
                    {if(Ccurr==NULL){
                        printf("Error : 'self' can only occur inside methods\n");
                        exit(1);
                        }
                     (yyvsp[-2].no)=makeNoChildNode(SELF);setField((yyvsp[-2].no),(yyvsp[0].no));(yyval.no)=(yyvsp[-2].no);
                     }
#line 2227 "y.tab.c"
    break;

  case 117: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 373 "exprtree.y"
                                            {
                        if(Ccurr==NULL){
                                printf("Error : 'self' can only occur inside methods\n");
                                exit(1);
                        }
                        (yyvsp[-5].no)=makeNoChildNode(SELF);setMethodNode((yyvsp[-5].no),(yyvsp[-3].no)->varname,(yyvsp[-1].no));(yyval.no)=(yyvsp[-5].no);
                }
#line 2239 "y.tab.c"
    break;

  case 118: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 380 "exprtree.y"
                                          {setMethodNode((yyvsp[-5].no),(yyvsp[-3].no)->varname,(yyvsp[-1].no));(yyval.no)=(yyvsp[-5].no);}
#line 2245 "y.tab.c"
    break;

  case 119: /* FieldFunction: Field '.' ID '(' ArgList ')'  */
#line 381 "exprtree.y"
                                             {setMethodNode((yyvsp[-5].no),(yyvsp[-3].no)->varname,(yyvsp[-1].no));(yyval.no)=(yyvsp[-5].no);}
#line 2251 "y.tab.c"
    break;

  case 120: /* FieldFunction: SELF '.' ID '(' ')'  */
#line 382 "exprtree.y"
                                    {
                        if(Ccurr==NULL){
                                printf("Error : 'self' can only occur inside methods\n");
                                exit(1);
                        }
                        (yyvsp[-4].no)=makeNoChildNode(SELF);setMethodNode((yyvsp[-4].no),(yyvsp[-2].no)->varname,NULL);(yyval.no)=(yyvsp[-4].no);
                }
#line 2263 "y.tab.c"
    break;

  case 121: /* FieldFunction: ID '.' ID '(' ')'  */
#line 389 "exprtree.y"
                                  {setMethodNode((yyvsp[-4].no),(yyvsp[-2].no)->varname,NULL);(yyval.no)=(yyvsp[-4].no);}
#line 2269 "y.tab.c"
    break;

  case 122: /* FieldFunction: Field '.' ID '(' ')'  */
#line 390 "exprtree.y"
                                     {setMethodNode((yyvsp[-4].no),(yyvsp[-2].no)->varname,NULL);(yyval.no)=(yyvsp[-4].no);}
#line 2275 "y.tab.c"
    break;


#line 2279 "y.tab.c"

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

#line 395 "exprtree.y"


int yyerror(char const *s)
{
    extern int yylineno;
    printf("Error: %s at line %d\n",s,yylineno);
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

