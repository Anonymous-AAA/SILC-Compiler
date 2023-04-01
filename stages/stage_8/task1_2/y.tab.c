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
#define YYLAST   649

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  296

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
       0,    45,    45,    60,    61,    64,    65,    68,    71,    77,
      78,    81,    82,    85,    88,    89,    92,    96,    97,   104,
     105,   108,   109,   112,   115,   116,   119,   127,   129,   132,
     133,   136,   141,   142,   146,   147,   148,   155,   168,   169,
     172,   191,   192,   193,   196,   200,   201,   202,   206,   207,
     210,   211,   214,   217,   218,   221,   222,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   236,   239,   241,   243,
     250,   253,   256,   259,   262,   265,   268,   273,   277,   282,
     284,   294,   307,   308,   311,   314,   317,   320,   322,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   355,   356,   358,   359,   368,   376,   383,
     384,   385,   392,   393
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

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,    -5,    10,   -28,   -23,     6,  -103,  -103,    11,    31,
      -6,  -103,  -103,    46,    -8,  -103,    49,    -6,  -103,  -103,
    -103,  -103,    45,  -103,   123,   126,  -103,  -103,   134,    90,
    -103,   156,    80,  -103,  -103,    56,  -103,  -103,    -6,  -103,
    -103,    50,    83,  -103,   141,  -103,  -103,   167,  -103,    -6,
      63,  -103,    -6,   185,  -103,   156,   145,   152,  -103,   102,
    -103,   214,  -103,  -103,   -22,  -103,   222,   178,  -103,   180,
      -6,  -103,  -103,   226,    17,  -103,    -6,  -103,  -103,   188,
      62,   187,  -103,    -6,  -103,   211,   191,    73,    -6,   234,
     211,   203,   245,   140,  -103,  -103,   249,  -103,  -103,    97,
    -103,  -103,   486,  -103,  -103,   247,   208,   209,    -3,   210,
     212,   215,   223,   333,   213,   225,   221,   206,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,   269,   -13,
     486,  -103,    -9,   333,   319,   333,   268,   333,   333,  -103,
    -103,  -103,   333,    42,  -103,  -103,   232,   333,   374,   238,
    -103,    -7,  -103,    19,   270,   229,   320,   271,   290,   105,
     -47,   224,   246,   262,   263,   398,   120,  -103,   248,   283,
     190,     9,   333,   287,   306,   289,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,  -103,
     315,   106,   118,   121,   139,  -103,  -103,   274,   275,   433,
    -103,   250,   277,   333,   280,   281,   284,   285,   324,  -103,
     288,   326,   323,  -103,   576,   158,   179,   292,   293,  -103,
     190,   190,  -103,  -103,  -103,   616,   616,   616,   616,   616,
     616,   622,   582,   294,   296,   297,   298,   301,   300,   331,
    -103,  -103,  -103,   186,  -103,  -103,   303,   304,   305,   333,
    -103,  -103,  -103,   333,  -103,    12,    18,   104,  -103,  -103,
    -103,  -103,   311,   310,   316,  -103,  -103,   322,   439,   467,
     527,   576,  -103,   165,  -103,   169,  -103,   177,  -103,   329,
     332,  -103,  -103,  -103,   335,   336,  -103,  -103,  -103,  -103,
    -103,   546,  -103,  -103,   337,  -103
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      20,     0,     0,     4,     0,     0,    22,     1,     0,    28,
       0,    19,    21,     9,     0,     6,     0,     0,    39,    47,
      45,    46,     0,    25,     0,     0,     3,     5,     0,     0,
      30,     0,     0,    23,    24,     0,    10,    12,     0,    27,
      29,    34,     0,    33,    45,     2,    38,     0,    26,     0,
       0,    18,    43,     0,    31,     0,     0,     0,    11,     0,
      15,     0,     7,    17,     0,    42,     0,     0,    32,     0,
      43,     8,    14,     0,     0,    36,     0,    44,    35,     0,
       0,     0,    13,    43,    41,    49,     0,     0,     0,     0,
      49,     0,     0,     0,    51,    56,     0,    16,    54,     0,
      48,    50,     0,    56,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    65,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     0,     0,    85,
      86,   104,     0,   106,   105,   111,     0,     0,     0,   110,
     112,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,     0,   117,    37,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,   108,   114,     0,     0,   115,   117,   103,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   101,   100,   116,     0,     0,     0,     0,     0,     0,
      79,    40,    70,     0,    72,    73,     0,     0,     0,     0,
      56,    56,   109,     0,   107,     0,     0,     0,    66,    67,
      69,    68,     0,     0,     0,    76,    78,     0,     0,     0,
       0,   113,   122,     0,   121,     0,   123,     0,    77,     0,
       0,    80,    75,    56,     0,     0,   119,   118,   120,    81,
      71,     0,    83,    84,     0,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,  -103,   359,  -103,  -103,  -103,  -103,  -103,
     328,  -103,  -103,  -103,   380,  -103,   370,  -103,  -103,   364,
    -103,   339,  -103,  -103,    16,   -50,   334,    82,   317,  -103,
     302,  -103,  -101,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,   278,   -97,   -37,  -102,  -103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    14,    15,    38,    16,    49,    58,    59,
      60,    50,     3,     5,     6,    22,    23,    18,    29,    30,
      42,    43,    45,    32,    46,    64,    65,    66,    89,    93,
      94,    99,   102,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   214,   215,   149,   150
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,   156,   130,     1,   159,    13,   191,    19,     4,   204,
       7,   134,   141,   157,   142,   141,   148,   142,     8,     4,
      80,   141,   143,   142,    13,   143,    20,    21,   129,    10,
     160,   143,   193,    87,    75,    76,   161,   165,   166,    26,
     168,   169,   117,   144,   117,   170,   144,   157,    11,   192,
     175,   194,   144,   145,    51,   135,   145,   136,    19,   199,
     146,    17,   145,   146,   147,   213,    63,   147,   272,   146,
     117,    82,    83,   147,   274,   216,    19,    20,    21,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    24,    19,    25,    20,    21,   171,    33,    31,
     172,    28,   173,    19,    24,    52,   243,   141,    53,   142,
      48,    31,    44,    21,    47,    19,    62,   143,    86,    76,
      47,    39,    20,    21,   176,   177,   178,   179,   180,    91,
      76,    61,    47,    71,    20,    21,    35,    54,   144,    36,
      55,    73,   181,   182,   183,   184,   185,   186,   145,   269,
     270,   104,   268,    19,   105,   146,   271,   187,   188,   147,
     276,   202,   234,   203,    37,   136,   136,   129,   129,    41,
      92,   100,    20,    21,   235,    92,    56,   236,   157,   210,
      57,   136,   291,   176,   177,   178,   179,   180,    67,   129,
     176,   177,   178,   179,   180,   237,   178,   179,   180,   157,
      69,   181,   182,   183,   184,   185,   186,    70,   181,   182,
     183,   184,   185,   186,   252,   253,   187,   188,   273,   275,
     277,   286,   253,   187,   188,   287,   253,    74,   176,   177,
     178,   179,   180,   288,   253,    77,    79,    78,   254,    81,
      85,    88,    83,    90,    95,   264,   181,   182,   183,   184,
     185,   186,   176,   177,   178,   179,   180,    97,    98,   103,
     131,   187,   188,   132,   133,   137,   154,   138,   151,   139,
     181,   182,   183,   184,   185,   186,   153,   140,   155,   152,
     205,   167,   196,   195,   200,   187,   188,   176,   177,   178,
     179,   180,   174,   176,   177,   178,   179,   180,   190,   201,
     217,   206,   249,   241,   211,   181,   182,   183,   184,   185,
     186,   181,   182,   183,   184,   185,   186,   207,   208,   218,
     187,   188,   141,   141,   142,   142,   187,   188,   233,   238,
     239,   242,   143,   143,   244,   245,   141,   248,   142,   212,
     246,   247,   250,   251,   263,   219,   143,   255,   256,   257,
     258,   259,   260,   144,   144,   261,   262,   265,   266,   162,
     197,   267,   163,   145,   145,   278,   279,   144,   164,   198,
     146,   146,   280,    27,   147,   147,   281,   145,   176,   177,
     178,   179,   180,   289,   146,    12,   290,    72,   147,   292,
     293,   295,    34,    40,    68,   101,   181,   182,   183,   184,
     185,   186,   176,   177,   178,   179,   180,    96,   158,     0,
      84,   187,   188,     0,     0,     0,     0,     0,     0,     0,
     181,   182,   183,   184,   185,   186,     0,     0,   189,     0,
       0,     0,     0,     0,     0,   187,   188,   176,   177,   178,
     179,   180,     0,   176,   177,   178,   179,   180,     0,     0,
       0,     0,   209,     0,     0,   181,   182,   183,   184,   185,
     186,   181,   182,   183,   184,   185,   186,     0,     0,     0,
     187,   188,     0,     0,     0,     0,   187,   188,   106,   107,
     108,     0,   109,     0,   283,   284,   110,   240,     0,     0,
       0,     0,     0,   282,     0,   111,   112,   106,   107,   108,
       0,   109,     0,     0,     0,   110,   114,     0,     0,     0,
       0,     0,   115,     0,   111,   112,     0,   116,   117,     0,
       0,     0,   113,     0,     0,   114,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,   116,   117,   106,   107,
     108,     0,   109,     0,     0,     0,   110,     0,   285,     0,
       0,     0,     0,     0,     0,   111,   112,   106,   107,   108,
       0,   109,     0,     0,   294,   110,   114,     0,     0,     0,
       0,     0,   115,     0,   111,   112,     0,   116,   117,     0,
     176,   177,   178,   179,   180,   114,   176,   177,   178,   179,
     180,   115,     0,     0,     0,     0,   116,   117,   181,   182,
     183,   184,   185,   186,   181,   182,   183,   184,   185,   186,
       0,     0,     0,   187,   188,     0,     0,     0,     0,   187,
     176,   177,   178,   179,   180,     0,   176,   177,   178,   179,
     180,     0,     0,     0,     0,     0,     0,     0,    -1,    -1,
      -1,    -1,    -1,    -1,   181,   182,   183,   184,   185,   186
};

static const yytype_int16 yycheck[] =
{
     102,    14,   103,    41,    13,    13,    13,    13,    13,    56,
       0,    14,     3,    60,     5,     3,   113,     5,    46,    13,
      70,     3,    13,     5,    13,    13,    32,    33,   130,    52,
     132,    13,    13,    83,    56,    57,   133,   134,   135,    47,
     137,   138,    51,    34,    51,   142,    34,    60,    42,   151,
     147,   153,    34,    44,    38,    58,    44,    60,    13,   156,
      51,    30,    44,    51,    55,    56,    50,    55,    56,    51,
      51,    54,    55,    55,    56,   172,    13,    32,    33,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    10,    13,    48,    32,    33,    55,    53,    17,
      58,    52,    60,    13,    22,    55,   203,     3,    58,     5,
      54,    29,    32,    33,    32,    13,    53,    13,    56,    57,
      38,    31,    32,    33,     4,     5,     6,     7,     8,    56,
      57,    49,    50,    31,    32,    33,    13,    54,    34,    13,
      57,    59,    22,    23,    24,    25,    26,    27,    44,   250,
     251,    54,   249,    13,    57,    51,   253,    37,    38,    55,
      56,    56,    56,    58,    30,    60,    60,   269,   270,    13,
      88,    31,    32,    33,    56,    93,    35,    56,    60,    59,
      13,    60,   283,     4,     5,     6,     7,     8,     3,   291,
       4,     5,     6,     7,     8,    56,     6,     7,     8,    60,
      55,    22,    23,    24,    25,    26,    27,    55,    22,    23,
      24,    25,    26,    27,    56,    57,    37,    38,   255,   256,
     257,    56,    57,    37,    38,    56,    57,    13,     4,     5,
       6,     7,     8,    56,    57,    13,    56,    59,    59,    13,
      52,    30,    55,    52,    10,    59,    22,    23,    24,    25,
      26,    27,     4,     5,     6,     7,     8,    54,    13,    10,
      13,    37,    38,    55,    55,    55,    60,    55,    55,    54,
      22,    23,    24,    25,    26,    27,    55,    54,     9,    54,
      56,    13,    53,    13,    13,    37,    38,     4,     5,     6,
       7,     8,    60,     4,     5,     6,     7,     8,    60,     9,
      13,    55,    14,    53,    56,    22,    23,    24,    25,    26,
      27,    22,    23,    24,    25,    26,    27,    55,    55,    13,
      37,    38,     3,     3,     5,     5,    37,    38,    13,    55,
      55,    54,    13,    13,    54,    54,     3,    13,     5,    56,
      56,    56,    16,    20,    13,    56,    13,    55,    55,    55,
      54,    54,    54,    34,    34,    54,    56,    54,    54,    40,
      40,    56,    43,    44,    44,    54,    56,    34,    49,    49,
      51,    51,    56,    14,    55,    55,    54,    44,     4,     5,
       6,     7,     8,    54,    51,     5,    54,    59,    55,    54,
      54,    54,    22,    29,    55,    93,    22,    23,    24,    25,
      26,    27,     4,     5,     6,     7,     8,    90,   130,    -1,
      76,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,     4,     5,     6,
       7,     8,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    22,    23,    24,    25,    26,
      27,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    37,    38,    11,    12,
      13,    -1,    15,    -1,    17,    18,    19,    54,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    28,    29,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,    19,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    28,    29,    -1,    50,    51,    -1,
      -1,    -1,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    51,    11,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    11,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    28,    29,    -1,    50,    51,    -1,
       4,     5,     6,     7,     8,    39,     4,     5,     6,     7,
       8,    45,    -1,    -1,    -1,    -1,    50,    51,    22,    23,
      24,    25,    26,    27,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    37,
       4,     5,     6,     7,     8,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    62,    73,    13,    74,    75,     0,    46,    63,
      52,    42,    75,    13,    64,    65,    67,    30,    78,    13,
      32,    33,    76,    77,    88,    48,    47,    65,    52,    79,
      80,    88,    84,    53,    77,    13,    13,    30,    66,    31,
      80,    13,    81,    82,    32,    83,    85,    88,    54,    68,
      72,    85,    55,    58,    54,    57,    35,    13,    69,    70,
      71,    88,    53,    85,    86,    87,    88,     3,    82,    55,
      55,    31,    71,    88,    13,    56,    57,    13,    59,    56,
      86,    13,    54,    55,    87,    52,    56,    86,    30,    89,
      52,    56,    88,    90,    91,    10,    89,    54,    13,    92,
      31,    91,    93,    10,    54,    57,    11,    12,    13,    15,
      19,    28,    29,    36,    39,    45,    50,    51,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   107,
      93,    13,    55,    55,    14,    58,    60,    55,    55,    54,
      54,     3,     5,    13,    34,    44,    51,    55,   105,   107,
     108,    55,    54,    55,    60,     9,    14,    60,   104,    13,
     107,   105,    40,    43,    49,   105,   105,    13,   105,   105,
     105,    55,    58,    60,    60,   105,     4,     5,     6,     7,
       8,    22,    23,    24,    25,    26,    27,    37,    38,    54,
      60,    13,   107,    13,   107,    13,    53,    40,    49,   105,
      13,     9,    56,    58,    56,    56,    55,    55,    55,    54,
      59,    56,    56,    56,   105,   106,   105,    13,    13,    56,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,    13,    56,    56,    56,    56,    55,    55,
      54,    53,    54,   105,    54,    54,    56,    56,    13,    14,
      16,    20,    56,    57,    59,    55,    55,    55,    54,    54,
      54,    54,    56,    13,    59,    54,    54,    56,   105,    93,
      93,   105,    56,   106,    56,   106,    56,   106,    54,    56,
      56,    54,    54,    17,    18,    21,    56,    56,    56,    54,
      54,    93,    54,    54,    18,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    66,    67,
      67,    68,    68,    69,    70,    70,    71,    72,    72,    73,
      73,    74,    74,    75,    76,    76,    77,    78,    78,    79,
      79,    80,    81,    81,    82,    82,    82,    83,    84,    84,
      85,    86,    86,    86,    87,    88,    88,    88,    89,    89,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    99,    99,   100,   101,   102,   103,   104,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   107,   108,   108,
     108,   108,   108,   108
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     0,     2,     1,     5,     4,     1,
       3,     2,     0,     3,     2,     1,     6,     2,     1,     3,
       0,     2,     1,     4,     2,     1,     3,     3,     0,     2,
       1,     3,     3,     1,     1,     4,     4,    11,     2,     0,
      12,     3,     1,     0,     2,     1,     1,     1,     3,     0,
       2,     1,     3,     3,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     8,     5,     5,     4,     7,     6,     6,     6,     4,
       7,     7,    10,     8,     8,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     4,     3,     4,
       1,     1,     1,     3,     1,     3,     3,     3,     6,     6,
       6,     5,     5,     5
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
          printTypeTable();
          printGSymbolTable();
          printClassTable();
          exit(0);
          }
#line 1608 "y.tab.c"
    break;

  case 3: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 60 "exprtree.y"
                                            {Ccurr=NULL;}
#line 1614 "y.tab.c"
    break;

  case 8: /* ClassDecl: DECL Fieldlists MethodDecl ENDDECL  */
#line 71 "exprtree.y"
                                               {
                        addInheritedMethods();
                        //printClassTable();
                }
#line 1623 "y.tab.c"
    break;

  case 9: /* Cname: ID  */
#line 77 "exprtree.y"
            {(yyval.class) = CInstall((yyvsp[0].no)->varname,NULL);}
#line 1629 "y.tab.c"
    break;

  case 10: /* Cname: ID EXTENDS ID  */
#line 78 "exprtree.y"
                      {(yyval.class) = CInstall((yyvsp[-2].no)->varname,(yyvsp[0].no)->varname);}
#line 1635 "y.tab.c"
    break;

  case 13: /* Fld: Type ID ';'  */
#line 85 "exprtree.y"
                  {Class_Finstall(Ccurr,(yyvsp[-2].type)->name,(yyvsp[-1].no)->varname);}
#line 1641 "y.tab.c"
    break;

  case 16: /* MDecl: Type ID '(' ParamList ')' ';'  */
#line 92 "exprtree.y"
                                      {Class_Minstall(Ccurr,(yyvsp[-4].no)->varname,(yyvsp[-5].type),(yyvsp[-2].param));}
#line 1647 "y.tab.c"
    break;

  case 23: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 112 "exprtree.y"
                                   {TInstall((yyvsp[-3].no)->varname,(yyvsp[-1].flist));}
#line 1653 "y.tab.c"
    break;

  case 24: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 115 "exprtree.y"
                                        {(yyval.flist) = (yyvsp[-1].flist); attachField((yyvsp[0].flist));}
#line 1659 "y.tab.c"
    break;

  case 25: /* FieldDeclList: FieldDecl  */
#line 116 "exprtree.y"
                          {(yyval.flist) = (yyvsp[0].flist); Fcurr=(yyvsp[0].flist);Fstart=(yyvsp[0].flist);}
#line 1665 "y.tab.c"
    break;

  case 26: /* FieldDecl: Type ID ';'  */
#line 119 "exprtree.y"
                        {(yyval.flist) = createField((yyvsp[-1].no)->varname,(yyvsp[-2].type));}
#line 1671 "y.tab.c"
    break;

  case 31: /* GDecl: Type GidList ';'  */
#line 136 "exprtree.y"
                         {checkTypeAndCtype((yyvsp[-2].type));setGType((yyvsp[-1].gsym),(yyvsp[-2].type));}
#line 1677 "y.tab.c"
    break;

  case 32: /* GidList: GidList ',' Gid  */
#line 141 "exprtree.y"
                          {(yyval.gsym)=(yyvsp[-2].gsym);}
#line 1683 "y.tab.c"
    break;

  case 33: /* GidList: Gid  */
#line 142 "exprtree.y"
              {(yyval.gsym)=(yyvsp[0].gsym);}
#line 1689 "y.tab.c"
    break;

  case 34: /* Gid: ID  */
#line 146 "exprtree.y"
         {(yyval.gsym)=GInstallVar((yyvsp[0].no)->varname,voidtype,1);}
#line 1695 "y.tab.c"
    break;

  case 35: /* Gid: ID '[' NUM ']'  */
#line 147 "exprtree.y"
                     {(yyval.gsym)=GInstallVar((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].no)->val);}
#line 1701 "y.tab.c"
    break;

  case 36: /* Gid: ID '(' ParamList ')'  */
#line 148 "exprtree.y"
                           {(yyval.gsym)=GInstallFn((yyvsp[-3].no)->varname,voidtype,(yyvsp[-1].param));}
#line 1707 "y.tab.c"
    break;

  case 37: /* MainBlock: INT MAIN '(' ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 155 "exprtree.y"
                                                                        {
            (yyvsp[-3].no) = makeConnectorNode((yyvsp[-3].no),(yyvsp[-2].no));  //Attaching the return statement
            checkMain((yyvsp[-2].no)->left->type);
            codeFunction((yyvsp[-3].no),NULL);       //Generating code
            //printLSymbolTable("main"); //Printing the local symbol table
            deallocateLST();     //deallocating the Local Symbol Table
            deallocateAST((yyvsp[-3].no));  //deallocating the AST
          }
#line 1720 "y.tab.c"
    break;

  case 40: /* Fdef: Type ID '(' ParamList ')' '{' LDeclBlock BEG Body ReturnStmt END '}'  */
#line 172 "exprtree.y"
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
#line 1742 "y.tab.c"
    break;

  case 41: /* ParamList: ParamList ',' Param  */
#line 191 "exprtree.y"
                                {(yyval.param)=(yyvsp[0].param); createParamList((yyvsp[-2].param),(yyvsp[0].param));}
#line 1748 "y.tab.c"
    break;

  case 42: /* ParamList: Param  */
#line 192 "exprtree.y"
                  {(yyval.param)=(yyvsp[0].param);}
#line 1754 "y.tab.c"
    break;

  case 43: /* ParamList: %empty  */
#line 193 "exprtree.y"
            {(yyval.param)=NULL;}
#line 1760 "y.tab.c"
    break;

  case 44: /* Param: Type ID  */
#line 196 "exprtree.y"
                {checkType((yyvsp[-1].type));(yyval.param)=createParams((yyvsp[-1].type),(yyvsp[0].no)->varname);}
#line 1766 "y.tab.c"
    break;

  case 45: /* Type: INT  */
#line 200 "exprtree.y"
           {(yyval.type) = inttype;}
#line 1772 "y.tab.c"
    break;

  case 46: /* Type: STR  */
#line 201 "exprtree.y"
           {(yyval.type) = strtype;}
#line 1778 "y.tab.c"
    break;

  case 47: /* Type: ID  */
#line 202 "exprtree.y"
           {checkInvalidTypes((yyvsp[0].no));(yyval.type) = TLookup((yyvsp[0].no)->varname);}
#line 1784 "y.tab.c"
    break;

  case 48: /* LDeclBlock: DECL LDecList ENDDECL  */
#line 206 "exprtree.y"
                                    {if(Ccurr){LInstallSelf(Ccurr);}}
#line 1790 "y.tab.c"
    break;

  case 49: /* LDeclBlock: %empty  */
#line 207 "exprtree.y"
              {if(Ccurr){LInstallSelf(Ccurr);}}
#line 1796 "y.tab.c"
    break;

  case 52: /* LDecl: Type IdList ';'  */
#line 214 "exprtree.y"
                       {checkType((yyvsp[-2].type));setLType((yyvsp[-1].lsym),(yyvsp[-2].type));}
#line 1802 "y.tab.c"
    break;

  case 53: /* IdList: IdList ',' ID  */
#line 217 "exprtree.y"
                        {(yyval.lsym)=(yyvsp[-2].lsym); LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1808 "y.tab.c"
    break;

  case 54: /* IdList: ID  */
#line 218 "exprtree.y"
             {(yyval.lsym)=LInstallVar((yyvsp[0].no)->varname,voidtype,FALSE);}
#line 1814 "y.tab.c"
    break;

  case 55: /* Body: Body Stmt  */
#line 221 "exprtree.y"
                    {(yyval.no) = makeConnectorNode((yyvsp[-1].no),(yyvsp[0].no));}
#line 1820 "y.tab.c"
    break;

  case 56: /* Body: %empty  */
#line 222 "exprtree.y"
           {(yyval.no) = NULL;}
#line 1826 "y.tab.c"
    break;

  case 57: /* Stmt: InputStmt  */
#line 225 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1832 "y.tab.c"
    break;

  case 58: /* Stmt: OutputStmt  */
#line 226 "exprtree.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 1838 "y.tab.c"
    break;

  case 59: /* Stmt: AsgStmt  */
#line 227 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 1844 "y.tab.c"
    break;

  case 60: /* Stmt: IfStmt  */
#line 228 "exprtree.y"
              {(yyval.no) = (yyvsp[0].no);}
#line 1850 "y.tab.c"
    break;

  case 61: /* Stmt: WhileStmt  */
#line 229 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1856 "y.tab.c"
    break;

  case 62: /* Stmt: BreakStmt  */
#line 230 "exprtree.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1862 "y.tab.c"
    break;

  case 63: /* Stmt: ContinueStmt  */
#line 231 "exprtree.y"
                    {(yyval.no) = (yyvsp[0].no);}
#line 1868 "y.tab.c"
    break;

  case 64: /* Stmt: BreakPointStmt  */
#line 232 "exprtree.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1874 "y.tab.c"
    break;

  case 65: /* Stmt: FreeStmt  */
#line 233 "exprtree.y"
                {(yyval.no) = (yyvsp[0].no);}
#line 1880 "y.tab.c"
    break;

  case 66: /* FreeStmt: FREE '(' ID ')' ';'  */
#line 236 "exprtree.y"
                               { setEntry((yyvsp[-2].no)); 
                                 (yyval.no)=makeSingleNode(FREE,(yyvsp[-2].no));
                                 }
#line 1888 "y.tab.c"
    break;

  case 67: /* FreeStmt: FREE '(' Field ')' ';'  */
#line 239 "exprtree.y"
                                 { (yyval.no)=makeSingleNode(FREE,(yyvsp[-2].no));}
#line 1894 "y.tab.c"
    break;

  case 68: /* FreeStmt: DELETE '(' Field ')' ';'  */
#line 241 "exprtree.y"
                                  { (yyval.no)=makeSingleNode(DELETE,(yyvsp[-2].no));}
#line 1900 "y.tab.c"
    break;

  case 69: /* FreeStmt: DELETE '(' ID ')' ';'  */
#line 243 "exprtree.y"
                               { setEntry((yyvsp[-2].no)); 
                                 (yyval.no)=makeSingleNode(DELETE,(yyvsp[-2].no));

                                 }
#line 1909 "y.tab.c"
    break;

  case 70: /* InputStmt: READ '(' ID ')' ';'  */
#line 250 "exprtree.y"
                                {setEntry((yyvsp[-2].no));
                                (yyval.no) = makeSingleNode(READ,(yyvsp[-2].no));
                                }
#line 1917 "y.tab.c"
    break;

  case 71: /* InputStmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 253 "exprtree.y"
                                             { setArrayNode((yyvsp[-5].no),(yyvsp[-3].no));
                                            (yyval.no) = makeSingleNode(READ,(yyvsp[-5].no));
                                            }
#line 1925 "y.tab.c"
    break;

  case 72: /* InputStmt: READ '(' Field ')' ';'  */
#line 256 "exprtree.y"
                                    { (yyval.no)=makeSingleNode(READ,(yyvsp[-2].no));}
#line 1931 "y.tab.c"
    break;

  case 73: /* OutputStmt: WRITE '(' expr ')' ';'  */
#line 259 "exprtree.y"
                                    {(yyval.no) = makeSingleNode(WRITE,(yyvsp[-2].no));}
#line 1937 "y.tab.c"
    break;

  case 74: /* AsgStmt: ID EQUAL expr ';'  */
#line 262 "exprtree.y"
                            {setEntry((yyvsp[-3].no)); 
                              (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));
                              }
#line 1945 "y.tab.c"
    break;

  case 75: /* AsgStmt: ID '[' expr ']' EQUAL expr ';'  */
#line 265 "exprtree.y"
                                         { setArrayNode((yyvsp[-6].no),(yyvsp[-4].no));
                                          (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-1].no));
                                        }
#line 1953 "y.tab.c"
    break;

  case 76: /* AsgStmt: ID EQUAL ALLOC '(' ')' ';'  */
#line 268 "exprtree.y"
                                    {setEntry((yyvsp[-5].no));
                                        (yyvsp[-3].no)=makeNoChildNode(ALLOC);
                                        (yyvsp[-3].no)->type=nulltype;
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1963 "y.tab.c"
    break;

  case 77: /* AsgStmt: Field EQUAL ALLOC '(' ')' ';'  */
#line 273 "exprtree.y"
                                         {(yyvsp[-3].no)=makeNoChildNode(ALLOC);
                                                (yyvsp[-3].no)->type=nulltype;
                                                (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1972 "y.tab.c"
    break;

  case 78: /* AsgStmt: ID EQUAL INIT '(' ')' ';'  */
#line 277 "exprtree.y"
                                    {setEntry((yyvsp[-5].no));
                                        (yyvsp[-3].no)=makeNoChildNode(INIT);
                                        (yyvsp[-3].no)->type=inttype;   //initialize returns integer value
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-5].no),(yyvsp[-3].no));
                                        }
#line 1982 "y.tab.c"
    break;

  case 79: /* AsgStmt: Field EQUAL expr ';'  */
#line 282 "exprtree.y"
                               { (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1988 "y.tab.c"
    break;

  case 80: /* AsgStmt: ID EQUAL NEW '(' ID ')' ';'  */
#line 284 "exprtree.y"
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
#line 2003 "y.tab.c"
    break;

  case 81: /* AsgStmt: Field EQUAL NEW '(' ID ')' ';'  */
#line 294 "exprtree.y"
                                        {
                                        if(CLookup((yyvsp[-2].no)->varname)==NULL){
                                                printf("Error : Undefined class '%s' in new statement\n",(yyvsp[-2].no)->varname);
                                                exit(1);
                                        }
                                        (yyvsp[-4].no)=makeNoChildNode(NEW);
                                        (yyvsp[-4].no)->type=nulltype;
                                        (yyval.no) = makeOperatorNode(EQUAL,(yyvsp[-6].no),(yyvsp[-4].no));
                                        }
#line 2017 "y.tab.c"
    break;

  case 82: /* IfStmt: IF '(' expr ')' THEN Body ELSE Body ENDIF ';'  */
#line 307 "exprtree.y"
                                                       {(yyval.no) = makeTriplets(IF,(yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no));}
#line 2023 "y.tab.c"
    break;

  case 83: /* IfStmt: IF '(' expr ')' THEN Body ENDIF ';'  */
#line 308 "exprtree.y"
                                            {(yyval.no) = makeTriplets(IF,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 2029 "y.tab.c"
    break;

  case 84: /* WhileStmt: WHILE '(' expr ')' DO Body ENDWHILE ';'  */
#line 311 "exprtree.y"
                                                    {(yyval.no) = makeTriplets(WHILE,(yyvsp[-5].no),(yyvsp[-2].no),NULL);}
#line 2035 "y.tab.c"
    break;

  case 85: /* BreakStmt: BREAK ';'  */
#line 314 "exprtree.y"
                      {(yyval.no) = makeNoChildNode(BREAK);}
#line 2041 "y.tab.c"
    break;

  case 86: /* ContinueStmt: CONTINUE ';'  */
#line 317 "exprtree.y"
                            {(yyval.no) = makeNoChildNode(CONTINUE);}
#line 2047 "y.tab.c"
    break;

  case 87: /* BreakPointStmt: BRKP ';'  */
#line 320 "exprtree.y"
                          {(yyval.no) = makeNoChildNode(BRKP);}
#line 2053 "y.tab.c"
    break;

  case 88: /* ReturnStmt: RET expr ';'  */
#line 322 "exprtree.y"
                          {
                            (yyval.no) = makeSingleNode(RET,(yyvsp[-1].no));
                        }
#line 2061 "y.tab.c"
    break;

  case 89: /* expr: expr PLUS expr  */
#line 329 "exprtree.y"
                       {(yyval.no) = makeOperatorNode(PLUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2067 "y.tab.c"
    break;

  case 90: /* expr: expr MINUS expr  */
#line 330 "exprtree.y"
                      {(yyval.no) = makeOperatorNode(MINUS,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2073 "y.tab.c"
    break;

  case 91: /* expr: expr MUL expr  */
#line 331 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MUL,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2079 "y.tab.c"
    break;

  case 92: /* expr: expr DIV expr  */
#line 332 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(DIV,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2085 "y.tab.c"
    break;

  case 93: /* expr: expr MOD expr  */
#line 333 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(MOD,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2091 "y.tab.c"
    break;

  case 94: /* expr: expr LT expr  */
#line 334 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2097 "y.tab.c"
    break;

  case 95: /* expr: expr GT expr  */
#line 335 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GT,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2103 "y.tab.c"
    break;

  case 96: /* expr: expr LE expr  */
#line 336 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(LE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2109 "y.tab.c"
    break;

  case 97: /* expr: expr GE expr  */
#line 337 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(GE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2115 "y.tab.c"
    break;

  case 98: /* expr: expr NE expr  */
#line 338 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(NE,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2121 "y.tab.c"
    break;

  case 99: /* expr: expr EQ expr  */
#line 339 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(EQ,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2127 "y.tab.c"
    break;

  case 100: /* expr: expr OR expr  */
#line 340 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(OR,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2133 "y.tab.c"
    break;

  case 101: /* expr: expr AND expr  */
#line 341 "exprtree.y"
                  {(yyval.no) = makeOperatorNode(AND,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2139 "y.tab.c"
    break;

  case 102: /* expr: MINUS expr  */
#line 342 "exprtree.y"
               {(yyval.no) = makeSingleNode(MINUS,(yyvsp[0].no));}
#line 2145 "y.tab.c"
    break;

  case 103: /* expr: '(' expr ')'  */
#line 343 "exprtree.y"
                  {(yyval.no) = (yyvsp[-1].no);}
#line 2151 "y.tab.c"
    break;

  case 104: /* expr: NUM  */
#line 344 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2157 "y.tab.c"
    break;

  case 105: /* expr: STRCON  */
#line 345 "exprtree.y"
           {(yyval.no) = (yyvsp[0].no);}
#line 2163 "y.tab.c"
    break;

  case 106: /* expr: ID  */
#line 346 "exprtree.y"
       {setEntry((yyvsp[0].no));(yyval.no) = (yyvsp[0].no);}
#line 2169 "y.tab.c"
    break;

  case 107: /* expr: ID '[' expr ']'  */
#line 347 "exprtree.y"
                   {setArrayNode((yyvsp[-3].no),(yyvsp[-1].no));(yyval.no)=(yyvsp[-3].no);}
#line 2175 "y.tab.c"
    break;

  case 108: /* expr: ID '(' ')'  */
#line 348 "exprtree.y"
              {(yyval.no)=makeFnNode((yyvsp[-2].no)->varname,NULL);}
#line 2181 "y.tab.c"
    break;

  case 109: /* expr: ID '(' ArgList ')'  */
#line 349 "exprtree.y"
                       {(yyval.no)=makeFnNode((yyvsp[-3].no)->varname,(yyvsp[-1].no));}
#line 2187 "y.tab.c"
    break;

  case 110: /* expr: Field  */
#line 350 "exprtree.y"
          {(yyval.no) = (yyvsp[0].no);}
#line 2193 "y.tab.c"
    break;

  case 111: /* expr: NUL  */
#line 351 "exprtree.y"
        {(yyval.no) = makeNullNode();}
#line 2199 "y.tab.c"
    break;

  case 112: /* expr: FieldFunction  */
#line 352 "exprtree.y"
                  {(yyval.no) = (yyvsp[0].no);}
#line 2205 "y.tab.c"
    break;

  case 113: /* ArgList: ArgList ',' expr  */
#line 355 "exprtree.y"
                           {attachArg((yyval.no),(yyvsp[0].no));(yyval.no)=(yyvsp[0].no);}
#line 2211 "y.tab.c"
    break;

  case 114: /* ArgList: expr  */
#line 356 "exprtree.y"
               {(yyval.no) = (yyvsp[0].no);}
#line 2217 "y.tab.c"
    break;

  case 115: /* Field: ID '.' ID  */
#line 358 "exprtree.y"
                  {setField((yyvsp[-2].no),(yyvsp[0].no)); (yyval.no)=(yyvsp[-2].no);}
#line 2223 "y.tab.c"
    break;

  case 116: /* Field: Field '.' ID  */
#line 359 "exprtree.y"
                     {
                       // if($1->nodetype==SELF){

                       //  printf("Error : Member fields are private to the class (%s)\n",$3->varname);
                       //  exit(1);

                       // }
                        setField((yyvsp[-2].no),(yyvsp[0].no)); 
                        (yyval.no)=(yyvsp[-2].no);}
#line 2237 "y.tab.c"
    break;

  case 117: /* Field: SELF '.' ID  */
#line 368 "exprtree.y"
                    {if(Ccurr==NULL){
                        printf("Error : 'self' can only occur inside methods\n");
                        exit(1);
                        }
                     (yyvsp[-2].no)=makeNoChildNode(SELF);setField((yyvsp[-2].no),(yyvsp[0].no));(yyval.no)=(yyvsp[-2].no);
                     }
#line 2248 "y.tab.c"
    break;

  case 118: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 376 "exprtree.y"
                                            {
                        if(Ccurr==NULL){
                                printf("Error : 'self' can only occur inside methods\n");
                                exit(1);
                        }
                        (yyvsp[-5].no)=makeNoChildNode(SELF);setMethodNode((yyvsp[-5].no),(yyvsp[-3].no)->varname,(yyvsp[-1].no));(yyval.no)=(yyvsp[-5].no);
                }
#line 2260 "y.tab.c"
    break;

  case 119: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 383 "exprtree.y"
                                          {setMethodNode((yyvsp[-5].no),(yyvsp[-3].no)->varname,(yyvsp[-1].no));(yyval.no)=(yyvsp[-5].no);}
#line 2266 "y.tab.c"
    break;

  case 120: /* FieldFunction: Field '.' ID '(' ArgList ')'  */
#line 384 "exprtree.y"
                                             {setMethodNode((yyvsp[-5].no),(yyvsp[-3].no)->varname,(yyvsp[-1].no));(yyval.no)=(yyvsp[-5].no);}
#line 2272 "y.tab.c"
    break;

  case 121: /* FieldFunction: SELF '.' ID '(' ')'  */
#line 385 "exprtree.y"
                                    {
                        if(Ccurr==NULL){
                                printf("Error : 'self' can only occur inside methods\n");
                                exit(1);
                        }
                        (yyvsp[-4].no)=makeNoChildNode(SELF);setMethodNode((yyvsp[-4].no),(yyvsp[-2].no)->varname,NULL);(yyval.no)=(yyvsp[-4].no);
                }
#line 2284 "y.tab.c"
    break;

  case 122: /* FieldFunction: ID '.' ID '(' ')'  */
#line 392 "exprtree.y"
                                  {setMethodNode((yyvsp[-4].no),(yyvsp[-2].no)->varname,NULL);(yyval.no)=(yyvsp[-4].no);}
#line 2290 "y.tab.c"
    break;

  case 123: /* FieldFunction: Field '.' ID '(' ')'  */
#line 393 "exprtree.y"
                                     {setMethodNode((yyvsp[-4].no),(yyvsp[-2].no)->varname,NULL);(yyval.no)=(yyvsp[-4].no);}
#line 2296 "y.tab.c"
    break;


#line 2300 "y.tab.c"

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

#line 398 "exprtree.y"


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

