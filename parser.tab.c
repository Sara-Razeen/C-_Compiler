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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex();
extern FILE* yyin;
extern int line_no;
int error_count = 0;
void yyerror(const char *s);
const char* pending_custom_msg = NULL;
FILE *token_table;
void print_token(const char *type, const char *value);

#line 85 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_HEADER_INCLUDE = 3,             /* HEADER_INCLUDE  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_USING = 8,                      /* USING  */
  YYSYMBOL_NAMESPACE = 9,                  /* NAMESPACE  */
  YYSYMBOL_STD = 10,                       /* STD  */
  YYSYMBOL_COUT = 11,                      /* COUT  */
  YYSYMBOL_ENDL = 12,                      /* ENDL  */
  YYSYMBOL_MAIN = 13,                      /* MAIN  */
  YYSYMBOL_CIN = 14,                       /* CIN  */
  YYSYMBOL_EQ = 15,                        /* EQ  */
  YYSYMBOL_ASSIGN = 16,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 17,                 /* SEMICOLON  */
  YYSYMBOL_LBRACE = 18,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 19,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 20,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 21,                    /* RPAREN  */
  YYSYMBOL_SHIFTLEFT = 22,                 /* SHIFTLEFT  */
  YYSYMBOL_DOUBLE_QUOTE = 23,              /* DOUBLE_QUOTE  */
  YYSYMBOL_COMMA = 24,                     /* COMMA  */
  YYSYMBOL_CHAR = 25,                      /* CHAR  */
  YYSYMBOL_FLOAT = 26,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 27,                    /* DOUBLE  */
  YYSYMBOL_BOOL = 28,                      /* BOOL  */
  YYSYMBOL_VOID = 29,                      /* VOID  */
  YYSYMBOL_STRING = 30,                    /* STRING  */
  YYSYMBOL_TRUE = 31,                      /* TRUE  */
  YYSYMBOL_FALSE = 32,                     /* FALSE  */
  YYSYMBOL_LBRACKET = 33,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 34,                  /* RBRACKET  */
  YYSYMBOL_NUMBER = 35,                    /* NUMBER  */
  YYSYMBOL_FLOAT_NUM = 36,                 /* FLOAT_NUM  */
  YYSYMBOL_ID = 37,                        /* ID  */
  YYSYMBOL_STRING_LITERAL = 38,            /* STRING_LITERAL  */
  YYSYMBOL_CONSTANT = 39,                  /* CONSTANT  */
  YYSYMBOL_CHAR_LITERAL = 40,              /* CHAR_LITERAL  */
  YYSYMBOL_LE = 41,                        /* LE  */
  YYSYMBOL_GE = 42,                        /* GE  */
  YYSYMBOL_AND = 43,                       /* AND  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_SHIFTRIGHT = 45,                /* SHIFTRIGHT  */
  YYSYMBOL_ADD_ASSIGN = 46,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 47,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 48,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 49,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 50,                /* MOD_ASSIGN  */
  YYSYMBOL_INC = 51,                       /* INC  */
  YYSYMBOL_DEC = 52,                       /* DEC  */
  YYSYMBOL_NE = 53,                        /* NE  */
  YYSYMBOL_FOR = 54,                       /* FOR  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_BREAK = 57,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 59,                    /* SWITCH  */
  YYSYMBOL_CASE = 60,                      /* CASE  */
  YYSYMBOL_DEFAULT = 61,                   /* DEFAULT  */
  YYSYMBOL_COLON = 62,                     /* COLON  */
  YYSYMBOL_CLASS = 63,                     /* CLASS  */
  YYSYMBOL_PUBLIC = 64,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 65,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 66,                 /* PROTECTED  */
  YYSYMBOL_THIS = 67,                      /* THIS  */
  YYSYMBOL_CONST = 68,                     /* CONST  */
  YYSYMBOL_VIRTUAL = 69,                   /* VIRTUAL  */
  YYSYMBOL_TRY = 70,                       /* TRY  */
  YYSYMBOL_CATCH = 71,                     /* CATCH  */
  YYSYMBOL_THROW = 72,                     /* THROW  */
  YYSYMBOL_FUNC_CALL = 73,                 /* FUNC_CALL  */
  YYSYMBOL_UMINUS = 74,                    /* UMINUS  */
  YYSYMBOL_75_ = 75,                       /* '|'  */
  YYSYMBOL_76_ = 76,                       /* '^'  */
  YYSYMBOL_77_ = 77,                       /* '&'  */
  YYSYMBOL_78_ = 78,                       /* '<'  */
  YYSYMBOL_79_ = 79,                       /* '>'  */
  YYSYMBOL_80_ = 80,                       /* '+'  */
  YYSYMBOL_81_ = 81,                       /* '-'  */
  YYSYMBOL_82_ = 82,                       /* '*'  */
  YYSYMBOL_83_ = 83,                       /* '/'  */
  YYSYMBOL_84_ = 84,                       /* '%'  */
  YYSYMBOL_SHIFTRIGH = 85,                 /* SHIFTRIGH  */
  YYSYMBOL_86_ = 86,                       /* '!'  */
  YYSYMBOL_87_ = 87,                       /* '~'  */
  YYSYMBOL_88_ = 88,                       /* '.'  */
  YYSYMBOL_89_ = 89,                       /* '?'  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_program = 92,                   /* program  */
  YYSYMBOL_function_defs = 93,             /* function_defs  */
  YYSYMBOL_includes = 94,                  /* includes  */
  YYSYMBOL_declaration_stmt = 95,          /* declaration_stmt  */
  YYSYMBOL_id_list = 96,                   /* id_list  */
  YYSYMBOL_type_specifier = 97,            /* type_specifier  */
  YYSYMBOL_main_func = 98,                 /* main_func  */
  YYSYMBOL_expr_stmt = 99,                 /* expr_stmt  */
  YYSYMBOL_selection_stmt = 100,           /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 101,           /* iteration_stmt  */
  YYSYMBOL_jump_stmt = 102,                /* jump_stmt  */
  YYSYMBOL_compound_stmt = 103,            /* compound_stmt  */
  YYSYMBOL_stmts = 104,                    /* stmts  */
  YYSYMBOL_stmt = 105,                     /* stmt  */
  YYSYMBOL_number_list = 106,              /* number_list  */
  YYSYMBOL_function_call = 107,            /* function_call  */
  YYSYMBOL_arg_list = 108,                 /* arg_list  */
  YYSYMBOL_decl = 109,                     /* decl  */
  YYSYMBOL_expr = 110,                     /* expr  */
  YYSYMBOL_input_variable = 111,           /* input_variable  */
  YYSYMBOL_input_list = 112,               /* input_list  */
  YYSYMBOL_input_stmt = 113,               /* input_stmt  */
  YYSYMBOL_output_expr = 114,              /* output_expr  */
  YYSYMBOL_output_list = 115,              /* output_list  */
  YYSYMBOL_output_stmt = 116,              /* output_stmt  */
  YYSYMBOL_try_catch_stmt = 117,           /* try_catch_stmt  */
  YYSYMBOL_throw_stmt = 118,               /* throw_stmt  */
  YYSYMBOL_for_init = 119,                 /* for_init  */
  YYSYMBOL_if_stmt = 120,                  /* if_stmt  */
  YYSYMBOL_loop_stmt = 121,                /* loop_stmt  */
  YYSYMBOL_switch_stmt = 122,              /* switch_stmt  */
  YYSYMBOL_case_blocks = 123,              /* case_blocks  */
  YYSYMBOL_case_block = 124,               /* case_block  */
  YYSYMBOL_default_block_opt = 125,        /* default_block_opt  */
  YYSYMBOL_control_stmt = 126,             /* control_stmt  */
  YYSYMBOL_function_decl = 127,            /* function_decl  */
  YYSYMBOL_function_def = 128,             /* function_def  */
  YYSYMBOL_param_list = 129,               /* param_list  */
  YYSYMBOL_param = 130,                    /* param  */
  YYSYMBOL_class_defs = 131,               /* class_defs  */
  YYSYMBOL_class_def = 132,                /* class_def  */
  YYSYMBOL_inheritance = 133,              /* inheritance  */
  YYSYMBOL_access_specifier_list = 134,    /* access_specifier_list  */
  YYSYMBOL_class_members = 135,            /* class_members  */
  YYSYMBOL_class_member = 136,             /* class_member  */
  YYSYMBOL_member_declarations = 137,      /* member_declarations  */
  YYSYMBOL_member_declaration = 138,       /* member_declaration  */
  YYSYMBOL_access_specifier = 139,         /* access_specifier  */
  YYSYMBOL_inheritance_specifier = 140,    /* inheritance_specifier  */
  YYSYMBOL_class_member_list = 141,        /* class_member_list  */
  YYSYMBOL_member_stmt = 142,              /* member_stmt  */
  YYSYMBOL_return_stmt = 143,              /* return_stmt  */
  YYSYMBOL_return_expr = 144               /* return_expr  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  369
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  660

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
       2,     2,     2,    86,     2,     2,     2,    84,    77,     2,
       2,     2,    82,    80,     2,    81,    88,    83,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,     2,
      78,     2,    79,    89,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    75,     2,    87,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      85
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    61,    61,    71,    72,    73,    77,    78,    91,    92,
      93,    94,    95,    96,   101,   102,   103,   104,   105,   106,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   128,
     129,   130,   131,   132,   136,   137,   141,   142,   146,   147,
     148,   152,   153,   154,   155,   159,   160,   164,   165,   166,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   191,   192,   193,   194,
     195,   196,   199,   200,   204,   205,   210,   211,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   364,   365,   366,   367,   371,
     372,   376,   377,   378,   379,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   399,   400,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   417,   418,   419,
     420,   421,   425,   430,   431,   436,   437,   438,   439,   440,
     441,   444,   445,   448,   449,   450,   451,   452,   453,   454,
     459,   460,   461,   464,   465,   466,   467,   468,   469,   470,
     471,   474,   475,   476,   477,   480,   481,   482,   483,   484,
     485,   486,   487,   492,   495,   496,   497,   498,   499,   500,
     504,   505,   506,   510,   511,   515,   516,   517,   521,   522,
     525,   526,   532,   533,   537,   538,   539,   540,   541,   542,
     543,   544,   549,   550,   554,   555,   556,   561,   562,   567,
     568,   569,   570,   571,   572,   576,   577,   581,   582,   586,
     587,   591,   592,   593,   594,   595,   596,   600,   601,   605,
     606,   607,   608,   609,   613,   614,   615,   619,   620,   621,
     625,   626,   627,   628,   632,   633,   641,   642,   644,   649
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
  "\"end of file\"", "error", "\"invalid token\"", "HEADER_INCLUDE",
  "INT", "IF", "ELSE", "RETURN", "USING", "NAMESPACE", "STD", "COUT",
  "ENDL", "MAIN", "CIN", "EQ", "ASSIGN", "SEMICOLON", "LBRACE", "RBRACE",
  "LPAREN", "RPAREN", "SHIFTLEFT", "DOUBLE_QUOTE", "COMMA", "CHAR",
  "FLOAT", "DOUBLE", "BOOL", "VOID", "STRING", "TRUE", "FALSE", "LBRACKET",
  "RBRACKET", "NUMBER", "FLOAT_NUM", "ID", "STRING_LITERAL", "CONSTANT",
  "CHAR_LITERAL", "LE", "GE", "AND", "OR", "SHIFTRIGHT", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "INC", "DEC",
  "NE", "FOR", "WHILE", "DO", "BREAK", "CONTINUE", "SWITCH", "CASE",
  "DEFAULT", "COLON", "CLASS", "PUBLIC", "PRIVATE", "PROTECTED", "THIS",
  "CONST", "VIRTUAL", "TRY", "CATCH", "THROW", "FUNC_CALL", "UMINUS",
  "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "SHIFTRIGH", "'!'", "'~'", "'.'", "'?'", "':'", "$accept", "program",
  "function_defs", "includes", "declaration_stmt", "id_list",
  "type_specifier", "main_func", "expr_stmt", "selection_stmt",
  "iteration_stmt", "jump_stmt", "compound_stmt", "stmts", "stmt",
  "number_list", "function_call", "arg_list", "decl", "expr",
  "input_variable", "input_list", "input_stmt", "output_expr",
  "output_list", "output_stmt", "try_catch_stmt", "throw_stmt", "for_init",
  "if_stmt", "loop_stmt", "switch_stmt", "case_blocks", "case_block",
  "default_block_opt", "control_stmt", "function_decl", "function_def",
  "param_list", "param", "class_defs", "class_def", "inheritance",
  "access_specifier_list", "class_members", "class_member",
  "member_declarations", "member_declaration", "access_specifier",
  "inheritance_specifier", "class_member_list", "member_stmt",
  "return_stmt", "return_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-579)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-341)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -579,    15,   124,  -579,  -579,    31,   185,     5,  -579,    75,
      43,   426,  -579,  -579,    -2,   165,  -579,  -579,  -579,  -579,
    -579,  -579,  -579,   445,   107,  -579,  -579,  -579,   186,    18,
     200,  -579,    13,  -579,  -579,  -579,   338,   445,  -579,   168,
     178,   182,   279,  5032,   781,  -579,  -579,  -579,  -579,   270,
    -579,  -579,  -579,   122,  -579,   291,    73,  -579,  -579,  -579,
     303,   354,   445,   128,  -579,  -579,  -579,  -579,   781,   445,
     157,  2744,  -579,  -579,  5045,  -579,   290,   437,  -579,    36,
     195,   273,  -579,  -579,  -579,   196,  -579,  -579,   546,  -579,
     197,  -579,  -579,   781,  -579,   799,  -579,  -579,   357,  -579,
    1025,  -579,  2715,  -579,   447,  -579,  -579,  -579,    38,   445,
     352,  -579,    73,   535,   314,  -579,  -579,  -579,   385,   202,
     199,  2644,   114,  -579,    30,  -579,  -579,  2715,   206,   208,
     216,   219,   432,  -579,  -579,   344,  -579,  -579,  2748,  2786,
     305,   329,  2273,   350,   489,   362,   379,  2815,   404,  2715,
    2819,  2857,  2890,  2928,  -579,   497,  -579,  -579,  -579,  -579,
    -579,  1103,  -579,  -579,  -579,  4286,  -579,  -579,  -579,  -579,
    -579,  -579,  -579,  -579,  -579,  -579,   298,   383,  4726,  -579,
    -579,   447,  -579,  -579,   816,   414,  2961,  -579,   361,  -579,
     511,  -579,  -579,  -579,   475,   485,  -579,  2999,   385,  -579,
    4301,   598,  -579,   647,  -579,   220,  4371,  -579,   425,  -579,
     714,   514,  -579,   427,  -579,   431,   484,  3032,  2677,  3070,
    3103,  3141,  3174,  3212,   385,   103,   385,   103,  -579,   275,
    -579,  3245,   385,  1181,   443,  -579,  -579,  -579,  -579,  -579,
    3283,   530,   563,   564,  -579,   441,  4386,   385,  4726,   385,
    4726,   385,   103,   385,   103,   524,  -579,  -579,  3316,  -579,
    3354,  3387,  3425,  3458,  3496,  3529,  -579,  -579,  3567,  3600,
    3638,  3671,  3709,  3742,  3780,  3813,  3851,  3884,  3922,   565,
    3955,   596,  2715,  -579,    36,   456,    45,   518,   353,  4456,
     622,   605,   392,  -579,  3993,  -579,   248,  -579,   385,   528,
    -579,  -579,  -579,  -579,  -579,  2715,  -579,  -579,  -579,   266,
    -579,  -579,  -579,   624,   268,  -579,   -21,  -579,   108,  -579,
    -579,    86,  -579,    22,  -579,  4026,  -579,   111,  -579,  -579,
     240,  -579,   245,  -579,   246,  -579,   257,   604,  -579,   626,
     385,  4726,  -579,   483,   385,  4726,   385,  4726,   385,  4726,
     385,  4726,   385,  4726,   385,   614,   625,  4726,   629,   385,
     543,   385,  1259,   648,   385,   613,   654,  -579,   659,   660,
     364,  -579,  4064,  -579,   385,  4946,   385,   509,   385,   494,
     385,   494,   385,  4811,   385,  4796,   385,  4726,   385,  4946,
     385,  4881,   385,  4894,   385,  4964,   385,   494,   385,   494,
     385,   100,   385,   100,   385,   103,   385,   103,   385,   103,
     654,  -579,   385,   184,  -579,  4726,  -579,    74,  -579,  -579,
    2677,  -579,   645,   661,  4097,   651,   385,   335,  4471,   664,
     684,   146,  -579,  2351,  4541,  2677,  2715,  -579,  -579,  -579,
     732,  2715,   681,  -579,  -579,   685,  -579,   720,   706,   690,
     283,   385,   444,  4726,   691,   287,  -579,   632,   692,   288,
    -579,   710,   712,   635,   702,   295,   715,   703,  -579,   729,
    -579,  4135,  -579,  2429,   385,    23,  2715,  -579,   428,   711,
     721,  -579,  2886,  -579,  4168,  -579,   532,   718,  -579,   623,
    4726,   726,  -579,  -579,   731,   743,  -579,   746,   385,  1337,
     765,  -579,  4556,  4626,  -579,   315,  -579,  4641,   750,  -579,
    -579,  -579,   782,  -579,   786,  -579,  -579,   795,  -579,   796,
    -579,  -579,   797,  -579,   804,  -579,  -579,  -579,  -579,   805,
    -579,   806,  -579,   812,  2715,   385,   628,   385,  1025,  -579,
    -579,   365,  4711,  -579,     8,   813,   814,   811,   616,   385,
    4726,   596,  -579,   116,  -579,  -579,   718,  -579,   385,   827,
    1415,  2507,  -579,  -579,  -579,  -579,  -579,   803,  -579,  -579,
    -579,  -579,  -579,  -579,  -579,  -579,  -579,  4726,  -579,  4206,
    1493,  -579,  4239,   822,  -579,   817,    28,  -579,  -579,  -579,
     447,   447,   826,   831,   819,   415,    12,   845,  -579,   821,
     385,   698,  -579,   385,   713,  -579,   794,  -579,   807,  -579,
     838,  -579,  -579,   447,  -579,  -579,   851,   430,  1571,  -579,
     132,  -579,  -579,  2585,  -579,   643,   869,  1649,  -579,  -579,
    -579,  2999,  -579,  1727,  -579,  1805,  -579,   385,  1025,  -579,
    -579,  -579,   385,   947,   385,  1883,   783,  -579,   385,  -579,
    1961,  2039,   461,  -579,  -579,  -579,  2117,   827,  2195,   845
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       7,     0,     0,     1,     6,     0,     0,     0,   328,     5,
       0,     0,   327,   332,     0,     0,    23,    21,    22,    24,
      26,    25,    27,     0,     0,     5,     4,     3,     0,     0,
       0,    30,     0,    20,    28,   319,     0,     2,   334,     0,
       0,     0,     0,     0,     0,   336,   357,   358,   359,     0,
     333,   340,    31,     0,   320,     0,     0,   354,   355,   356,
       0,     0,     0,     0,   350,   351,   339,   342,     0,     0,
       0,   338,   348,   335,     0,    32,     0,     0,   321,     0,
       0,     0,   322,   331,   329,     0,   352,   353,     0,   365,
       0,   351,   363,   341,   361,     0,   337,   347,     0,    33,
       0,    29,     0,   313,     0,   315,   326,   324,     0,   325,
       0,   349,     0,     0,     0,   362,   360,   330,     0,     0,
       0,     0,     0,   139,     0,    35,    46,     0,     0,     0,
       0,     0,   140,   135,   136,   134,   138,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    50,    51,    52,    53,
      54,     0,    48,   142,    56,     0,    63,    61,    64,    65,
      57,    58,    59,    60,    62,   140,   134,     0,    76,   316,
     312,     0,   314,   323,     0,     0,     0,     8,     0,    13,
       0,   149,   150,   104,     0,     0,   263,     0,   368,    44,
     369,     0,   242,     0,   222,     0,     0,   108,     0,   112,
       0,     0,   116,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   155,   158,   156,   273,     0,
     281,     0,   285,     0,     0,   310,    41,   311,    42,   294,
       0,     0,     0,     0,   250,     0,     0,   159,   151,   160,
     152,   161,   153,   162,   154,    14,    45,    47,     0,    34,
       0,     0,     0,     0,     0,     0,   147,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   317,     0,     0,     0,   135,   134,    15,
       0,     0,    17,   105,     0,    78,     0,   100,   264,     0,
      43,   367,   366,   243,   230,     0,   231,   226,   227,   225,
     229,   228,   233,   237,     0,   223,   215,   219,     0,   141,
     109,     0,    82,     0,   113,     0,    85,     0,   101,   117,
       0,    88,     0,   121,     0,    91,     0,     0,    97,     0,
     205,   199,    75,     0,   206,   200,   207,   201,   208,   202,
     209,   203,   210,   204,   274,   140,     0,   254,     0,   282,
       0,   286,     0,     0,   295,     0,   145,   146,     0,     0,
       0,   252,     0,     8,   179,   173,   197,   192,   183,   177,
     184,   178,   187,   185,   188,   186,   198,   193,   180,   174,
     195,   190,   196,   191,   194,   189,   181,   175,   182,   176,
     168,   163,   169,   164,   170,   165,   171,   166,   172,   167,
     143,   144,   212,     0,   318,    77,   315,     0,   312,   314,
       0,     9,     0,    16,     0,     0,   106,     0,    15,     0,
       0,     0,   265,     0,     0,     0,     0,   240,   241,   238,
       0,     0,     0,   224,   221,     0,   110,     0,     0,     0,
       0,   114,     0,    15,     0,     0,   118,     0,     0,     0,
     122,     0,     0,     0,     0,     0,     0,     0,    74,     0,
     275,     0,   283,     0,   287,     0,     0,   296,     0,     0,
       0,   251,     0,   213,     0,   312,     0,     0,    10,   135,
      18,     0,   107,    80,     0,     0,   125,    16,   266,     0,
      36,   232,    76,     0,   245,     0,   236,     0,   217,   220,
     111,    83,     0,   127,     0,   115,    86,     0,   129,    16,
     119,    89,     0,   131,     0,    94,    95,   123,    92,     0,
     133,     0,    98,     0,     0,   276,     0,   284,     0,    38,
     288,     0,     0,   297,     0,     0,     0,    27,     0,   214,
     211,    74,    72,     0,    19,   124,     0,    81,   267,    46,
       0,     0,   234,   235,   246,   239,   216,     0,   126,    84,
     128,    87,   130,    90,   132,    93,    99,   253,   277,     0,
       0,   289,     0,     0,   298,     0,     0,   301,   102,   103,
       0,     0,     0,     0,     0,     0,     0,    45,    37,     0,
     278,     0,    45,   290,     0,    40,     0,   299,     0,   300,
       0,   249,   248,     0,    12,    73,     0,     0,     0,   262,
       0,   218,   279,     0,   291,     0,     0,     0,   293,   247,
      96,     0,   260,     0,   268,     0,   261,   280,     0,    39,
     292,   272,   304,     0,   306,     0,     0,   258,   269,   259,
       0,     0,     0,   257,    45,   266,     0,   256,     0,   255
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -579,  -579,   850,  -579,   -57,   119,     2,  -579,  -579,  -579,
    -579,  -579,   -76,  -229,  -140,   321,  -198,   -96,  -579,  -101,
     433,  -579,  -579,   439,  -579,  -579,  -579,  -579,  -579,  -578,
    -579,  -579,  -579,   296,  -579,  -579,    24,    -3,  -105,   776,
    -579,  -579,  -579,   820,   839,  -579,  -579,    63,   -33,  -579,
    -579,   800,  -579,  -579
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    11,     2,   154,   114,   155,    25,   156,   157,
     158,   159,   160,   161,   162,   553,   163,   343,   164,   165,
     317,   318,   166,   313,   314,   167,   168,   169,   358,   170,
     171,   172,   586,   587,   610,   173,    64,    65,    81,    82,
       9,    12,    30,    42,    43,    66,    71,    67,    44,    49,
      93,    94,   174,   201
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,   178,   234,   105,   362,   312,   177,   185,    27,   584,
      68,    89,   441,    24,    52,     3,    28,   617,   619,    45,
     200,   257,     8,   449,   540,    34,   206,  -302,   179,   607,
     618,   204,   182,    53,    27,    26,    89,   225,   227,    24,
       6,    68,   636,   367,    13,    63,    70,  -307,   246,   248,
     250,   252,   254,   103,   100,   180,   100,   450,    80,    87,
      29,    26,   418,   100,    85,    91,    87,   442,   585,  -302,
      90,    24,   245,    70,    78,   205,    63,    33,   541,   285,
      14,   411,    46,    47,    48,   289,    86,   446,   585,   608,
      91,   485,   100,    86,    79,    90,   299,  -325,    16,    17,
      18,    19,    20,    21,   104,   283,   181,    72,    35,   443,
      22,    80,   454,   181,    80,   202,   341,   178,   345,   347,
     349,   351,   353,    75,   447,   444,   448,     4,   357,    35,
     360,    92,     5,   634,    97,   593,   203,   617,    10,   365,
     594,    23,   181,    76,    36,   265,   455,   496,   265,    34,
     635,   266,   267,   445,   266,   267,   115,   375,    35,   377,
     379,   381,   383,   385,   387,    88,    31,   389,   391,   393,
     395,   397,   399,   401,   403,   405,   407,   409,    32,   413,
     497,   415,   276,   277,   278,   483,    80,    38,   279,   280,
    -340,   279,   280,   428,    95,     7,   106,    35,    35,   258,
     196,    50,   -20,   193,   434,  -338,   260,   207,   416,   209,
     419,  -340,  -340,  -340,  -340,  -340,  -340,   212,    51,   197,
     214,   315,   257,  -340,   453,   261,   262,   263,   264,   265,
      57,   356,   107,   110,   113,   266,   267,   268,   195,   194,
      58,   456,   312,   208,    59,   210,   458,   460,   211,   429,
      39,    40,    41,   213,  -340,  -340,   215,   316,   464,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   438,
     560,   289,   279,   280,   484,   457,   354,   461,   462,    33,
     459,   463,   430,   431,   513,   439,   435,   123,   518,   523,
     440,    99,   465,   500,   108,   127,   530,   109,    60,   436,
      16,    17,    18,    19,    20,   355,   228,    73,   100,   580,
     133,   134,   135,   136,   217,   137,   564,   514,   218,   178,
      83,   519,   524,   490,   486,   229,   138,   139,    77,   531,
     230,   189,   565,   539,   502,   503,   492,  -230,   190,    54,
     507,   182,   146,    23,   219,   220,   221,   222,   223,   231,
    -135,   235,   -67,    54,    55,   150,   151,  -135,    56,   -67,
     217,   152,   153,   239,   218,   481,   581,   236,    55,   217,
     536,    84,   184,   420,   117,   542,  -135,  -135,  -135,  -135,
    -135,   -27,   240,   550,   482,   582,  -135,  -135,  -135,   633,
     219,   220,   221,   222,   223,   290,   291,   643,   645,   219,
     220,   221,   222,   223,   281,   244,   650,   282,   424,   651,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
     257,   598,   100,  -135,  -135,   425,   320,   658,   329,   543,
      15,   196,   333,   577,   616,   286,   191,   192,   109,   594,
     257,   321,   322,   330,   331,   515,   544,   334,   335,    33,
     631,    16,    17,    18,    19,    20,    21,   102,   323,  -135,
     332,   516,   655,    22,   336,   100,  -135,   241,   -67,   216,
      16,    17,    18,    19,    20,    21,   293,   417,   601,   656,
     109,   604,    22,   639,   548,  -135,  -135,  -135,  -135,  -135,
     237,   294,   295,   257,    23,  -135,  -135,  -135,   363,   -14,
     337,   338,   297,   257,   468,   257,   238,   282,   296,   190,
     257,   257,   370,    23,   611,   612,   260,   339,   257,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   432,
     646,   328,  -135,  -135,   255,   -67,    54,   629,   190,   265,
     372,   373,   -67,   258,   472,   266,   267,    54,   292,   433,
     260,   186,   187,   551,   265,    56,   282,   188,   258,   -14,
     266,   267,    55,   111,   473,   260,   112,   366,   188,   261,
     262,   263,   264,   265,   274,   275,   276,   277,   278,   266,
     267,   268,   279,   280,   261,   262,   263,   264,   265,   274,
     275,   276,   277,   278,   266,   267,   268,   279,   280,   301,
     368,   369,   410,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   414,   477,   302,   279,   280,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   258,   578,
     470,   279,   280,   520,   478,   260,   527,   591,   422,   423,
     -70,   437,   466,   258,   640,   579,   471,   -70,   303,   521,
     260,   -25,   528,   592,   261,   262,   263,   264,   265,   304,
     641,   467,   469,   487,   266,   267,   268,   305,   476,   261,
     262,   263,   264,   265,   218,   479,   480,   306,   488,   266,
     267,   268,   307,   308,   309,   310,   491,   311,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   494,   622,
     495,   279,   280,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   258,   624,   324,   279,   280,   508,   623,
     260,   510,   316,   511,   512,   517,   522,   525,   258,   526,
     325,   326,   532,   504,   625,   260,   529,   533,   -14,   261,
     262,   263,   264,   265,   505,   534,   545,   327,   555,   266,
     267,   268,   305,   552,   261,   262,   263,   264,   265,   546,
     554,   556,   306,   557,   266,   267,   268,   307,   308,   309,
     310,   561,   311,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   567,   432,    33,   279,   280,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   258,   568,
      54,   279,   280,   569,   652,   260,    16,    17,    18,    19,
      20,    21,   570,   571,   572,    55,   111,    78,    22,    56,
      33,   573,   574,   575,   261,   262,   263,   264,   265,   576,
     588,   589,   590,   596,   266,   267,   268,   284,   599,   605,
    -325,    16,    17,    18,    19,    20,    21,   613,   614,    23,
      69,   620,   606,    22,   615,   621,   626,   628,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   630,   627,
     642,   279,   280,   119,   120,    37,   121,   595,   509,   506,
     122,   123,   609,   124,    23,   183,   125,   100,   -49,   127,
      74,    96,     0,   116,   128,   129,   130,   131,    20,   132,
       0,     0,     0,     0,   133,   134,   135,   136,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,     0,   140,   141,   142,   143,   144,   145,   -49,
     -49,     0,     0,     0,     0,     0,   146,   147,     0,   148,
       0,   149,     0,     0,     0,     0,     0,     0,   118,   150,
     151,   119,   120,     0,   121,   152,   153,     0,   122,   123,
       0,   124,     0,     0,   125,   100,  -303,   127,     0,     0,
       0,     0,   128,   129,   130,   131,    20,   132,     0,     0,
       0,     0,   133,   134,   135,   136,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,   140,   141,   142,   143,   144,   145,  -303,  -303,     0,
       0,     0,     0,     0,   146,   147,     0,   148,     0,   149,
       0,     0,     0,     0,     0,     0,   118,   150,   151,   119,
     120,     0,   121,   152,   153,     0,   122,   123,     0,   124,
       0,     0,   125,   100,   126,   127,     0,     0,     0,     0,
     128,   129,   130,   131,    20,   132,     0,     0,     0,     0,
     133,   134,   135,   136,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,     0,   140,
     141,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,   148,     0,   149,     0,     0,
       0,     0,     0,     0,   118,   150,   151,   119,   120,     0,
     121,   152,   153,     0,   122,   123,     0,   124,     0,     0,
     125,   100,   256,   127,     0,     0,     0,     0,   128,   129,
     130,   131,    20,   132,     0,     0,     0,     0,   133,   134,
     135,   136,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,     0,   140,   141,   142,
     143,   144,   145,     0,     0,     0,     0,     0,     0,     0,
     146,   147,     0,   148,     0,   149,     0,     0,     0,     0,
       0,     0,   361,   150,   151,   119,   120,     0,   121,   152,
     153,     0,   122,   123,     0,   124,     0,     0,   125,   100,
     126,   127,     0,     0,     0,     0,   128,   129,   130,   131,
      20,   132,     0,     0,     0,     0,   133,   134,   135,   136,
       0,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,     0,   140,   141,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,     0,   146,   147,
       0,   148,     0,   149,     0,     0,     0,     0,     0,     0,
     474,   150,   151,   119,   120,     0,   121,   152,   153,     0,
     122,   123,     0,   124,     0,     0,   125,   100,   475,   127,
       0,     0,     0,     0,   128,   129,   130,   131,    20,   132,
       0,     0,     0,     0,   133,   134,   135,   136,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,     0,   140,   141,   142,   143,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,   148,
       0,   149,     0,     0,     0,     0,     0,     0,   558,   150,
     151,   119,   120,     0,   121,   152,   153,     0,   122,   123,
       0,   124,     0,     0,   125,   100,   559,   127,     0,     0,
       0,     0,   128,   129,   130,   131,    20,   132,     0,     0,
       0,     0,   133,   134,   135,   136,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,   140,   141,   142,   143,   144,   145,     0,     0,     0,
       0,     0,     0,     0,   146,   147,     0,   148,     0,   149,
       0,     0,     0,     0,     0,     0,   118,   150,   151,   119,
     120,     0,   121,   152,   153,     0,   122,   123,     0,   124,
       0,     0,   125,   100,   597,   127,     0,     0,     0,     0,
     128,   129,   130,   131,    20,   132,     0,     0,     0,     0,
     133,   134,   135,   136,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,     0,   140,
     141,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,   148,     0,   149,     0,     0,
       0,     0,     0,     0,   118,   150,   151,   119,   120,     0,
     121,   152,   153,     0,   122,   123,     0,   124,     0,     0,
     125,   100,   602,   127,     0,     0,     0,     0,   128,   129,
     130,   131,    20,   132,     0,     0,     0,     0,   133,   134,
     135,   136,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,     0,   140,   141,   142,
     143,   144,   145,     0,     0,     0,     0,     0,     0,     0,
     146,   147,     0,   148,     0,   149,     0,     0,     0,     0,
       0,     0,   118,   150,   151,   119,   120,     0,   121,   152,
     153,     0,   122,   123,     0,   124,     0,     0,   125,   100,
     632,   127,     0,     0,     0,     0,   128,   129,   130,   131,
      20,   132,     0,     0,     0,     0,   133,   134,   135,   136,
       0,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,     0,   140,   141,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,     0,   146,   147,
       0,   148,     0,   149,     0,     0,     0,     0,     0,     0,
     644,   150,   151,   119,   120,     0,   121,   152,   153,     0,
     122,   123,     0,   124,     0,     0,   125,   100,   -49,   127,
       0,     0,     0,     0,   128,   129,   130,   131,    20,   132,
       0,     0,     0,     0,   133,   134,   135,   136,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,     0,   140,   141,   142,   143,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,   148,
       0,   149,     0,     0,     0,     0,     0,     0,   118,   150,
     151,   119,   120,     0,   121,   152,   153,     0,   122,   123,
       0,   124,     0,     0,   125,   100,   647,   127,     0,     0,
       0,     0,   128,   129,   130,   131,    20,   132,     0,     0,
       0,     0,   133,   134,   135,   136,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,   140,   141,   142,   143,   144,   145,     0,     0,     0,
       0,     0,     0,     0,   146,   147,     0,   148,     0,   149,
       0,     0,     0,     0,     0,     0,   648,   150,   151,   119,
     120,     0,   121,   152,   153,     0,   122,   123,     0,   124,
       0,     0,   125,   100,   649,   127,     0,     0,     0,     0,
     128,   129,   130,   131,    20,   132,     0,     0,     0,     0,
     133,   134,   135,   136,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,     0,   140,
     141,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,   148,     0,   149,     0,     0,
       0,     0,     0,     0,   118,   150,   151,   119,   120,     0,
     121,   152,   153,     0,   122,   123,     0,   124,     0,     0,
     125,   100,  -305,   127,     0,     0,     0,     0,   128,   129,
     130,   131,    20,   132,     0,     0,     0,     0,   133,   134,
     135,   136,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,     0,   140,   141,   142,
     143,   144,   145,     0,     0,     0,     0,     0,     0,     0,
     146,   147,     0,   148,     0,   149,     0,     0,     0,     0,
       0,     0,   118,   150,   151,   119,   120,     0,   121,   152,
     153,     0,   122,   123,     0,   124,     0,     0,   125,   100,
     653,   127,     0,     0,     0,     0,   128,   129,   130,   131,
      20,   132,     0,     0,     0,     0,   133,   134,   135,   136,
       0,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,     0,   140,   141,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,     0,   146,   147,
       0,   148,     0,   149,     0,     0,     0,     0,     0,     0,
     118,   150,   151,   119,   120,     0,   121,   152,   153,     0,
     122,   123,     0,   124,     0,     0,   125,   100,   654,   127,
       0,     0,     0,     0,   128,   129,   130,   131,    20,   132,
       0,     0,     0,     0,   133,   134,   135,   136,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,     0,   140,   141,   142,   143,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,   148,
       0,   149,     0,     0,     0,     0,     0,     0,   558,   150,
     151,   119,   120,     0,   121,   152,   153,     0,   122,   123,
       0,   124,     0,     0,   125,   100,   657,   127,     0,     0,
       0,     0,   128,   129,   130,   131,    20,   132,     0,     0,
       0,     0,   133,   134,   135,   136,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,   140,   141,   142,   143,   144,   145,     0,     0,     0,
       0,     0,     0,     0,   146,   147,     0,   148,     0,   149,
       0,     0,     0,     0,     0,     0,   118,   150,   151,   119,
     120,     0,   121,   152,   153,     0,   122,   123,     0,   124,
       0,     0,   125,   100,   659,   127,     0,     0,     0,     0,
     128,   129,   130,   131,    20,   132,     0,     0,     0,     0,
     133,   134,   135,   136,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,     0,   140,
     141,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,   148,     0,   149,     0,     0,
       0,     0,     0,     0,   232,   150,   151,   119,   120,     0,
     121,   152,   153,     0,   122,   123,     0,   124,     0,     0,
     125,   233,     0,   127,     0,     0,     0,     0,   128,   129,
     130,   131,    20,   132,     0,     0,     0,     0,   133,   134,
     135,   136,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,     0,   140,   141,   142,
     143,   144,   145,     0,     0,     0,     0,     0,     0,     0,
     146,   147,     0,   148,     0,   149,     0,     0,     0,     0,
       0,     0,   498,   150,   151,   119,   120,     0,   121,   152,
     153,     0,   122,   123,     0,   124,     0,     0,   125,   499,
       0,   127,     0,     0,     0,     0,   128,   129,   130,   131,
      20,   132,     0,     0,     0,     0,   133,   134,   135,   136,
       0,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,     0,   140,   141,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,     0,   146,   147,
       0,   148,     0,   149,     0,     0,     0,     0,     0,     0,
     537,   150,   151,   119,   120,     0,   121,   152,   153,     0,
     122,   123,     0,   124,     0,     0,   125,   538,     0,   127,
       0,     0,     0,     0,   128,   129,   130,   131,    20,   132,
       0,     0,     0,     0,   133,   134,   135,   136,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,     0,   140,   141,   142,   143,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,   148,
       0,   149,     0,     0,     0,     0,     0,     0,   118,   150,
     151,   119,   120,     0,   121,   152,   153,     0,   122,   123,
       0,   124,     0,     0,   125,   100,     0,   127,     0,     0,
       0,     0,   128,   129,   130,   131,    20,   132,     0,     0,
       0,     0,   133,   134,   135,   136,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,   140,   141,   142,   143,   144,   145,     0,     0,     0,
       0,     0,     0,     0,   146,   147,     0,   148,     0,   149,
       0,     0,     0,     0,     0,     0,   637,   150,   151,   119,
     120,     0,   121,   152,   153,     0,   122,   123,     0,   124,
       0,     0,   125,   638,     0,   127,     0,     0,     0,     0,
     128,   129,   130,   131,    20,   132,     0,     0,     0,     0,
     133,   134,   135,   136,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,     0,   140,
     141,   142,   143,   144,   145,   198,     0,     0,     0,     0,
       0,     0,   146,   147,     0,   148,   123,   149,     0,     0,
       0,   199,     0,     0,   127,   150,   151,     0,     0,     0,
       0,   152,   153,     0,   175,     0,     0,     0,   118,   133,
     134,   176,   136,     0,   137,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,   138,   139,   127,   342,     0,
       0,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,   146,   133,   134,   176,   136,   118,   137,     0,     0,
       0,     0,     0,     0,   150,   151,     0,   123,   138,   139,
     152,   153,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,   146,   175,     0,     0,    33,   224,
     133,   134,   176,   136,     0,   137,     0,   150,   151,     0,
     123,     0,     0,   152,   153,     0,   138,   139,   127,    16,
      17,    18,    19,    20,    21,     0,     0,     0,   175,     0,
       0,    22,   146,   133,   134,   176,   136,   226,   137,     0,
       0,     0,     0,     0,     0,   150,   151,     0,   123,   138,
     139,   152,   153,     0,     0,     0,   127,     0,    39,    40,
      41,     0,    23,    69,     0,   146,   175,     0,     0,   242,
     247,   133,   134,   176,   136,     0,   137,     0,   150,   151,
       0,   123,     0,     0,   152,   153,     0,   138,   139,   127,
      16,    17,    18,    19,    20,   243,     0,     0,     0,   175,
       0,     0,    22,   146,   133,   134,   176,   136,   249,   137,
       0,     0,     0,     0,     0,     0,   150,   151,     0,   123,
     138,   139,   152,   153,     0,     0,     0,   127,     0,     0,
       0,     0,     0,    23,     0,     0,   146,   175,     0,     0,
      33,   251,   133,   134,   176,   136,     0,   137,     0,   150,
     151,     0,   123,     0,     0,   152,   153,     0,   138,   139,
     127,    16,    17,    18,    19,    20,    21,     0,     0,     0,
     175,     0,     0,   547,   146,   133,   134,   176,   136,   253,
     137,     0,     0,     0,     0,     0,     0,   150,   151,     0,
     123,   138,   139,   152,   153,     0,     0,     0,   127,     0,
       0,     0,     0,     0,    23,     0,     0,   146,   175,     0,
       0,     0,   118,   133,   134,   176,   136,     0,   137,     0,
     150,   151,     0,   123,     0,     0,   152,   153,     0,   138,
     139,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,   146,   287,   134,   288,   136,
     298,   137,     0,     0,     0,     0,     0,     0,   150,   151,
       0,   123,   138,   139,   152,   153,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   175,
       0,     0,     0,   340,   133,   134,   176,   136,     0,   137,
       0,   150,   151,     0,   123,     0,     0,   152,   153,     0,
     138,   139,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,   146,   133,   134,   176,
     136,   344,   137,     0,     0,     0,     0,     0,     0,   150,
     151,     0,   123,   138,   139,   152,   153,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     175,     0,     0,     0,   346,   133,   134,   176,   136,     0,
     137,     0,   150,   151,     0,   123,     0,     0,   152,   153,
       0,   138,   139,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,   146,   133,   134,
     176,   136,   348,   137,     0,     0,     0,     0,     0,     0,
     150,   151,     0,   123,   138,   139,   152,   153,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
     146,   175,     0,     0,     0,   350,   133,   134,   176,   136,
       0,   137,     0,   150,   151,     0,   123,     0,     0,   152,
     153,     0,   138,   139,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,     0,     0,     0,   146,   133,
     134,   176,   136,   352,   137,     0,     0,     0,     0,     0,
       0,   150,   151,     0,   123,   138,   139,   152,   153,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   175,     0,     0,     0,   359,   133,   134,   176,
     136,     0,   137,     0,   150,   151,     0,   123,     0,     0,
     152,   153,     0,   138,   139,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,     0,   146,
     133,   134,   176,   136,   364,   137,     0,     0,     0,     0,
       0,     0,   150,   151,     0,   123,   138,   139,   152,   153,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   175,     0,     0,     0,   374,   133,   134,
     176,   136,     0,   137,     0,   150,   151,     0,   123,     0,
       0,   152,   153,     0,   138,   139,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,     0,     0,     0,
     146,   133,   134,   176,   136,   376,   137,     0,     0,     0,
       0,     0,     0,   150,   151,     0,   123,   138,   139,   152,
     153,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,   146,   175,     0,     0,     0,   378,   133,
     134,   176,   136,     0,   137,     0,   150,   151,     0,   123,
       0,     0,   152,   153,     0,   138,   139,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,   146,   133,   134,   176,   136,   380,   137,     0,     0,
       0,     0,     0,     0,   150,   151,     0,   123,   138,   139,
     152,   153,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,   146,   175,     0,     0,     0,   382,
     133,   134,   176,   136,     0,   137,     0,   150,   151,     0,
     123,     0,     0,   152,   153,     0,   138,   139,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,   146,   133,   134,   176,   136,   384,   137,     0,
       0,     0,     0,     0,     0,   150,   151,     0,   123,   138,
     139,   152,   153,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     0,   146,   175,     0,     0,     0,
     386,   133,   134,   176,   136,     0,   137,     0,   150,   151,
       0,   123,     0,     0,   152,   153,     0,   138,   139,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,   146,   133,   134,   176,   136,   388,   137,
       0,     0,     0,     0,     0,     0,   150,   151,     0,   123,
     138,   139,   152,   153,     0,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,   146,   175,     0,     0,
       0,   390,   133,   134,   176,   136,     0,   137,     0,   150,
     151,     0,   123,     0,     0,   152,   153,     0,   138,   139,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,   146,   133,   134,   176,   136,   392,
     137,     0,     0,     0,     0,     0,     0,   150,   151,     0,
     123,   138,   139,   152,   153,     0,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   175,     0,
       0,     0,   394,   133,   134,   176,   136,     0,   137,     0,
     150,   151,     0,   123,     0,     0,   152,   153,     0,   138,
     139,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,   146,   133,   134,   176,   136,
     396,   137,     0,     0,     0,     0,     0,     0,   150,   151,
       0,   123,   138,   139,   152,   153,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   175,
       0,     0,     0,   398,   133,   134,   176,   136,     0,   137,
       0,   150,   151,     0,   123,     0,     0,   152,   153,     0,
     138,   139,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,   146,   133,   134,   176,
     136,   400,   137,     0,     0,     0,     0,     0,     0,   150,
     151,     0,   123,   138,   139,   152,   153,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     175,     0,     0,     0,   402,   133,   134,   176,   136,     0,
     137,     0,   150,   151,     0,   123,     0,     0,   152,   153,
       0,   138,   139,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,   146,   133,   134,
     176,   136,   404,   137,     0,     0,     0,     0,     0,     0,
     150,   151,     0,   123,   138,   139,   152,   153,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
     146,   175,     0,     0,     0,   406,   133,   134,   176,   136,
       0,   137,     0,   150,   151,     0,   123,     0,     0,   152,
     153,     0,   138,   139,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,     0,     0,     0,   146,   133,
     134,   176,   136,   408,   137,     0,     0,     0,     0,     0,
       0,   150,   151,     0,   123,   138,   139,   152,   153,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   175,     0,     0,     0,   412,   133,   134,   176,
     136,     0,   137,     0,   150,   151,     0,   123,     0,     0,
     152,   153,     0,   138,   139,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,     0,   146,
     133,   134,   176,   136,   426,   137,     0,     0,     0,     0,
       0,     0,   150,   151,     0,   123,   138,   139,   152,   153,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   175,     0,     0,     0,   451,   427,   134,
     176,   136,     0,   137,     0,   150,   151,     0,   123,     0,
       0,   152,   153,     0,   138,   139,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,     0,     0,     0,
     146,   452,   134,   176,   136,   118,   137,     0,     0,     0,
       0,     0,     0,   150,   151,     0,   123,   138,   139,   152,
     153,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,   146,   175,     0,     0,     0,   118,   287,
     134,   176,   136,     0,   137,     0,   150,   151,     0,   123,
       0,     0,   152,   153,     0,   138,   139,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,   146,   489,   134,   176,   136,   535,   137,     0,     0,
       0,     0,     0,     0,   150,   151,     0,   123,   138,   139,
     152,   153,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,   146,   175,     0,     0,     0,   549,
     133,   134,   176,   136,     0,   137,     0,   150,   151,     0,
     123,     0,     0,   152,   153,     0,   138,   139,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,   146,   133,   134,   176,   136,   600,   137,     0,
       0,     0,     0,     0,     0,   150,   151,     0,   123,   138,
     139,   152,   153,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     0,   146,   175,     0,     0,     0,
     603,   133,   134,   176,   136,     0,   137,     0,   150,   151,
       0,   123,     0,     0,   152,   153,     0,   138,   139,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,   146,   133,   134,   176,   136,     0,   137,
       0,     0,     0,     0,     0,     0,   150,   151,     0,     0,
     138,   139,   152,   153,     0,     0,     0,     0,     0,     0,
       0,   258,     0,   259,     0,     0,   146,     0,   260,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   300,   150,
     151,     0,     0,   260,     0,   152,   153,   261,   262,   263,
     264,   265,     0,     0,     0,     0,     0,   266,   267,   268,
       0,     0,   261,   262,   263,   264,   265,     0,     0,     0,
       0,     0,   266,   267,   268,     0,     0,     0,     0,     0,
       0,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   279,   280,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   258,     0,     0,   279,
     280,     0,   319,   260,     0,     0,     0,     0,     0,     0,
       0,   258,     0,   371,     0,     0,     0,     0,   260,     0,
       0,     0,   261,   262,   263,   264,   265,     0,     0,     0,
       0,     0,   266,   267,   268,     0,     0,   261,   262,   263,
     264,   265,     0,     0,     0,     0,     0,   266,   267,   268,
       0,     0,     0,     0,     0,     0,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   279,
     280,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   258,     0,   421,   279,   280,     0,     0,   260,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   493,     0,
       0,     0,     0,   260,     0,     0,     0,   261,   262,   263,
     264,   265,     0,     0,     0,     0,     0,   266,   267,   268,
       0,     0,   261,   262,   263,   264,   265,     0,     0,     0,
       0,     0,   266,   267,   268,     0,     0,     0,     0,     0,
       0,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   279,   280,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   258,     0,     0,   279,
     280,     0,   501,   260,     0,     0,     0,     0,     0,     0,
       0,   258,     0,     0,     0,     0,     0,   562,   260,     0,
       0,     0,   261,   262,   263,   264,   265,     0,     0,     0,
       0,     0,   266,   267,   268,     0,     0,   261,   262,   263,
     264,   265,     0,     0,     0,     0,     0,   266,   267,   268,
       0,     0,     0,     0,     0,     0,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   279,
     280,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   258,     0,     0,   279,   280,     0,     0,   260,     0,
       0,     0,     0,     0,     0,     0,   258,     0,     0,     0,
     563,     0,     0,   260,     0,     0,     0,   261,   262,   263,
     264,   265,     0,     0,     0,   566,     0,   266,   267,   268,
       0,     0,   261,   262,   263,   264,   265,     0,     0,     0,
       0,     0,   266,   267,   268,     0,     0,     0,     0,     0,
       0,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   279,   280,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   258,     0,     0,   279,
     280,     0,   583,   260,     0,     0,     0,     0,     0,     0,
       0,   258,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,   261,   262,   263,   264,   265,     0,     0,     0,
       0,     0,   266,   267,   268,     0,     0,   261,   262,   263,
     264,   265,     0,     0,     0,     0,     0,   266,   267,   268,
       0,     0,     0,     0,     0,     0,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   279,
     280,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   258,     0,     0,   279,   280,     0,     0,   260,     0,
       0,     0,     0,     0,     0,     0,   258,     0,     0,     0,
       0,     0,     0,   260,     0,     0,     0,   261,   262,   263,
       0,   265,     0,     0,     0,     0,     0,   266,   267,   268,
       0,     0,   261,   262,     0,     0,   265,     0,     0,     0,
       0,     0,   266,   267,   268,     0,     0,     0,     0,     0,
       0,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   279,   280,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   258,     0,     0,   279,
     280,     0,     0,   260,     0,     0,     0,     0,     0,   258,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,   261,   262,     0,     0,   265,     0,     0,     0,
       0,     0,   266,   267,   268,   261,   262,     0,     0,   265,
       0,     0,     0,     0,     0,   266,   267,   268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,     0,   260,   279,
     280,   271,   272,   273,   274,   275,   276,   277,   278,   258,
       0,     0,   279,   280,     0,     0,   260,   261,   262,     0,
       0,   265,     0,     0,     0,     0,     0,   266,   267,     0,
       0,     0,     0,     0,     0,   261,   262,     0,     0,   265,
       0,     0,     0,     0,     0,   266,   267,   268,     0,     0,
       0,     0,     0,     0,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   279,   280,    33,     0,     0,     0,
       0,     0,   272,   273,   274,   275,   276,   277,   278,    33,
       0,    61,   279,   280,     0,     0,     0,    16,    17,    18,
      19,    20,    21,     0,    98,     0,     0,     0,     0,    22,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,     0,
      23,    62,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,    23,    62
};

static const yytype_int16 yycheck[] =
{
      76,   102,   142,    79,   233,   203,   102,   112,    11,     1,
      43,    68,    33,    11,     1,     0,    18,     5,   596,     1,
     121,   161,    17,     1,     1,    23,   127,    19,   104,     1,
      18,     1,   108,    20,    37,    11,    93,   138,   139,    37,
       9,    74,   620,   241,     1,    43,    44,    19,   149,   150,
     151,   152,   153,    17,    18,    17,    18,    35,    56,    62,
      62,    37,    17,    18,    62,    68,    69,    88,    60,    61,
      68,    69,   148,    71,     1,    45,    74,     4,    55,   184,
      37,   279,    64,    65,    66,   186,    62,     1,    60,    61,
      93,    17,    18,    69,    21,    93,   197,    24,    25,    26,
      27,    28,    29,    30,    68,   181,    68,    44,     1,     1,
      37,   109,     1,    68,   112,     1,   217,   218,   219,   220,
     221,   222,   223,     1,    38,    17,    40,     3,   229,     1,
     231,    68,     8,     1,    71,    19,    22,     5,    63,   240,
      24,    68,    68,    21,    37,    45,    35,     1,    45,   147,
      18,    51,    52,    45,    51,    52,    93,   258,     1,   260,
     261,   262,   263,   264,   265,    37,     1,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,    13,   280,
      34,   282,    82,    83,    84,     1,   184,     1,    88,    89,
       4,    88,    89,   294,    37,    10,     1,     1,     1,    15,
       1,     1,    37,     1,   305,    19,    22,     1,   284,     1,
     286,    25,    26,    27,    28,    29,    30,     1,    18,    20,
       1,     1,   362,    37,   325,    41,    42,    43,    44,    45,
      62,   229,    37,    37,    37,    51,    52,    53,   119,    37,
      62,     1,   440,    37,    62,    37,     1,     1,   129,     1,
      64,    65,    66,    37,    68,    69,    37,    37,     1,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     1,
     499,   372,    88,    89,    90,    35,     1,    31,    32,     4,
      35,    35,    34,    35,     1,    17,    20,    12,     1,     1,
      22,     1,    35,   433,    21,    20,     1,    24,    19,    33,
      25,    26,    27,    28,    29,    30,     1,    37,    18,   538,
      35,    36,    37,    38,    16,    40,     1,    34,    20,   420,
      17,    34,    34,   424,   420,    20,    51,    52,    37,    34,
       1,    17,    17,   473,   435,   436,     1,    22,    24,     1,
     441,   417,    67,    68,    46,    47,    48,    49,    50,    20,
      15,     1,    17,     1,    16,    80,    81,    22,    20,    24,
      16,    86,    87,     1,    20,     1,     1,    17,    16,    16,
     471,    17,    20,    20,    17,   476,    41,    42,    43,    44,
      45,    37,    20,   484,    20,    20,    51,    52,    53,   618,
      46,    47,    48,    49,    50,    34,    35,   626,   627,    46,
      47,    48,    49,    50,    21,     1,   635,    24,    16,   638,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     560,   561,    18,    88,    89,    33,     1,   656,     1,     1,
       4,     1,     1,   534,    19,    21,    51,    52,    24,    24,
     580,    16,    17,    16,    17,     1,    18,    16,    17,     4,
      20,    25,    26,    27,    28,    29,    30,    20,    33,    15,
      33,    17,     1,    37,    33,    18,    22,    88,    24,    37,
      25,    26,    27,    28,    29,    30,     1,    21,   579,    18,
      24,   582,    37,   623,   482,    41,    42,    43,    44,    45,
       1,    16,    17,   633,    68,    51,    52,    53,    55,    24,
      16,    17,    17,   643,    21,   645,    17,    24,    33,    24,
     650,   651,    71,    68,   590,   591,    22,    33,   658,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     1,
     631,    17,    88,    89,    37,    17,     1,   613,    24,    45,
      16,    17,    24,    15,     1,    51,    52,     1,    37,    21,
      22,    16,    17,    21,    45,    20,    24,    33,    15,    24,
      51,    52,    16,    17,    21,    22,    20,    37,    33,    41,
      42,    43,    44,    45,    80,    81,    82,    83,    84,    51,
      52,    53,    88,    89,    41,    42,    43,    44,    45,    80,
      81,    82,    83,    84,    51,    52,    53,    88,    89,     1,
      37,    37,    37,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    17,     1,    17,    88,    89,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    15,     1,
       1,    88,    89,     1,    21,    22,     1,    21,    16,    34,
      17,    17,    38,    15,     1,    17,    17,    24,     1,    17,
      22,    37,    17,    37,    41,    42,    43,    44,    45,    12,
      17,    35,    37,    18,    51,    52,    53,    20,    20,    41,
      42,    43,    44,    45,    20,    16,    16,    30,    17,    51,
      52,    53,    35,    36,    37,    38,    35,    40,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    34,     1,
      16,    88,    89,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    15,     1,     1,    88,    89,    37,    21,
      22,     1,    37,    17,    34,    34,    34,    17,    15,    17,
      16,    17,    17,     1,    21,    22,    34,    34,    24,    41,
      42,    43,    44,    45,    12,    16,    35,    33,    17,    51,
      52,    53,    20,    35,    41,    42,    43,    44,    45,    38,
      34,    18,    30,    17,    51,    52,    53,    35,    36,    37,
      38,     6,    40,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    33,     1,     4,    88,    89,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    15,    17,
       1,    88,    89,    17,    21,    22,    25,    26,    27,    28,
      29,    30,    17,    17,    17,    16,    17,     1,    37,    20,
       4,    17,    17,    17,    41,    42,    43,    44,    45,    17,
      17,    17,    21,     6,    51,    52,    53,    21,    35,    17,
      24,    25,    26,    27,    28,    29,    30,    21,    17,    68,
      69,     6,    35,    37,    35,    34,    62,    19,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    17,    62,
       1,    88,    89,     4,     5,    25,     7,   556,   445,   440,
      11,    12,   586,    14,    68,   109,    17,    18,    19,    20,
      51,    71,    -1,    93,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,     1,    80,
      81,     4,     5,    -1,     7,    86,    87,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    80,    81,     4,
       5,    -1,     7,    86,    87,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    80,    81,     4,     5,    -1,
       7,    86,    87,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    80,    81,     4,     5,    -1,     7,    86,
      87,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    80,    81,     4,     5,    -1,     7,    86,    87,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,     1,    80,
      81,     4,     5,    -1,     7,    86,    87,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    80,    81,     4,
       5,    -1,     7,    86,    87,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    80,    81,     4,     5,    -1,
       7,    86,    87,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    80,    81,     4,     5,    -1,     7,    86,
      87,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    80,    81,     4,     5,    -1,     7,    86,    87,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,     1,    80,
      81,     4,     5,    -1,     7,    86,    87,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    80,    81,     4,
       5,    -1,     7,    86,    87,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    80,    81,     4,     5,    -1,
       7,    86,    87,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    80,    81,     4,     5,    -1,     7,    86,
      87,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    80,    81,     4,     5,    -1,     7,    86,    87,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,     1,    80,
      81,     4,     5,    -1,     7,    86,    87,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    80,    81,     4,
       5,    -1,     7,    86,    87,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    80,    81,     4,     5,    -1,
       7,    86,    87,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    80,    81,     4,     5,    -1,     7,    86,
      87,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    80,    81,     4,     5,    -1,     7,    86,    87,    -1,
      11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,     1,    80,
      81,     4,     5,    -1,     7,    86,    87,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    80,    81,     4,
       5,    -1,     7,    86,    87,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    12,    72,    -1,    -1,
      -1,    17,    -1,    -1,    20,    80,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    30,    -1,    -1,    -1,     1,    35,
      36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    51,    52,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    67,    35,    36,    37,    38,     1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    12,    51,    52,
      86,    87,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    30,    -1,    -1,     4,     1,
      35,    36,    37,    38,    -1,    40,    -1,    80,    81,    -1,
      12,    -1,    -1,    86,    87,    -1,    51,    52,    20,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    30,    -1,
      -1,    37,    67,    35,    36,    37,    38,     1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    12,    51,
      52,    86,    87,    -1,    -1,    -1,    20,    -1,    64,    65,
      66,    -1,    68,    69,    -1,    67,    30,    -1,    -1,     4,
       1,    35,    36,    37,    38,    -1,    40,    -1,    80,    81,
      -1,    12,    -1,    -1,    86,    87,    -1,    51,    52,    20,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    30,
      -1,    -1,    37,    67,    35,    36,    37,    38,     1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    12,
      51,    52,    86,    87,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    67,    30,    -1,    -1,
       4,     1,    35,    36,    37,    38,    -1,    40,    -1,    80,
      81,    -1,    12,    -1,    -1,    86,    87,    -1,    51,    52,
      20,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      30,    -1,    -1,    37,    67,    35,    36,    37,    38,     1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      12,    51,    52,    86,    87,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    67,    30,    -1,
      -1,    -1,     1,    35,    36,    37,    38,    -1,    40,    -1,
      80,    81,    -1,    12,    -1,    -1,    86,    87,    -1,    51,
      52,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    67,    35,    36,    37,    38,
       1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    12,    51,    52,    86,    87,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    30,
      -1,    -1,    -1,     1,    35,    36,    37,    38,    -1,    40,
      -1,    80,    81,    -1,    12,    -1,    -1,    86,    87,    -1,
      51,    52,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    67,    35,    36,    37,
      38,     1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    12,    51,    52,    86,    87,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      30,    -1,    -1,    -1,     1,    35,    36,    37,    38,    -1,
      40,    -1,    80,    81,    -1,    12,    -1,    -1,    86,    87,
      -1,    51,    52,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    67,    35,    36,
      37,    38,     1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    12,    51,    52,    86,    87,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    30,    -1,    -1,    -1,     1,    35,    36,    37,    38,
      -1,    40,    -1,    80,    81,    -1,    12,    -1,    -1,    86,
      87,    -1,    51,    52,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    67,    35,
      36,    37,    38,     1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    12,    51,    52,    86,    87,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    30,    -1,    -1,    -1,     1,    35,    36,    37,
      38,    -1,    40,    -1,    80,    81,    -1,    12,    -1,    -1,
      86,    87,    -1,    51,    52,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    67,
      35,    36,    37,    38,     1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    12,    51,    52,    86,    87,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    30,    -1,    -1,    -1,     1,    35,    36,
      37,    38,    -1,    40,    -1,    80,    81,    -1,    12,    -1,
      -1,    86,    87,    -1,    51,    52,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      67,    35,    36,    37,    38,     1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    12,    51,    52,    86,
      87,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    30,    -1,    -1,    -1,     1,    35,
      36,    37,    38,    -1,    40,    -1,    80,    81,    -1,    12,
      -1,    -1,    86,    87,    -1,    51,    52,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    67,    35,    36,    37,    38,     1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    12,    51,    52,
      86,    87,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    30,    -1,    -1,    -1,     1,
      35,    36,    37,    38,    -1,    40,    -1,    80,    81,    -1,
      12,    -1,    -1,    86,    87,    -1,    51,    52,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    67,    35,    36,    37,    38,     1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    12,    51,
      52,    86,    87,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    30,    -1,    -1,    -1,
       1,    35,    36,    37,    38,    -1,    40,    -1,    80,    81,
      -1,    12,    -1,    -1,    86,    87,    -1,    51,    52,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    67,    35,    36,    37,    38,     1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    12,
      51,    52,    86,    87,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    30,    -1,    -1,
      -1,     1,    35,    36,    37,    38,    -1,    40,    -1,    80,
      81,    -1,    12,    -1,    -1,    86,    87,    -1,    51,    52,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    67,    35,    36,    37,    38,     1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      12,    51,    52,    86,    87,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    30,    -1,
      -1,    -1,     1,    35,    36,    37,    38,    -1,    40,    -1,
      80,    81,    -1,    12,    -1,    -1,    86,    87,    -1,    51,
      52,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    67,    35,    36,    37,    38,
       1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    12,    51,    52,    86,    87,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    30,
      -1,    -1,    -1,     1,    35,    36,    37,    38,    -1,    40,
      -1,    80,    81,    -1,    12,    -1,    -1,    86,    87,    -1,
      51,    52,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    67,    35,    36,    37,
      38,     1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    12,    51,    52,    86,    87,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      30,    -1,    -1,    -1,     1,    35,    36,    37,    38,    -1,
      40,    -1,    80,    81,    -1,    12,    -1,    -1,    86,    87,
      -1,    51,    52,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    67,    35,    36,
      37,    38,     1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    12,    51,    52,    86,    87,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    30,    -1,    -1,    -1,     1,    35,    36,    37,    38,
      -1,    40,    -1,    80,    81,    -1,    12,    -1,    -1,    86,
      87,    -1,    51,    52,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    67,    35,
      36,    37,    38,     1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    12,    51,    52,    86,    87,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    30,    -1,    -1,    -1,     1,    35,    36,    37,
      38,    -1,    40,    -1,    80,    81,    -1,    12,    -1,    -1,
      86,    87,    -1,    51,    52,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    67,
      35,    36,    37,    38,     1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    12,    51,    52,    86,    87,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    30,    -1,    -1,    -1,     1,    35,    36,
      37,    38,    -1,    40,    -1,    80,    81,    -1,    12,    -1,
      -1,    86,    87,    -1,    51,    52,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      67,    35,    36,    37,    38,     1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    12,    51,    52,    86,
      87,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    30,    -1,    -1,    -1,     1,    35,
      36,    37,    38,    -1,    40,    -1,    80,    81,    -1,    12,
      -1,    -1,    86,    87,    -1,    51,    52,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    67,    35,    36,    37,    38,     1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    12,    51,    52,
      86,    87,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    30,    -1,    -1,    -1,     1,
      35,    36,    37,    38,    -1,    40,    -1,    80,    81,    -1,
      12,    -1,    -1,    86,    87,    -1,    51,    52,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    67,    35,    36,    37,    38,     1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    12,    51,
      52,    86,    87,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    30,    -1,    -1,    -1,
       1,    35,    36,    37,    38,    -1,    40,    -1,    80,    81,
      -1,    12,    -1,    -1,    86,    87,    -1,    51,    52,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    67,    35,    36,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      51,    52,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    17,    -1,    -1,    67,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,    80,
      81,    -1,    -1,    22,    -1,    86,    87,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    88,    89,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    15,    -1,    -1,    88,
      89,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    17,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    88,
      89,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    15,    -1,    17,    88,    89,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    88,    89,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    15,    -1,    -1,    88,
      89,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    88,
      89,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    15,    -1,    -1,    88,    89,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      34,    -1,    -1,    22,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    34,    -1,    51,    52,    53,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    88,    89,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    15,    -1,    -1,    88,
      89,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    88,
      89,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    15,    -1,    -1,    88,    89,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    41,    42,    43,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    88,    89,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    15,    -1,    -1,    88,
      89,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    41,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    22,    88,
      89,    77,    78,    79,    80,    81,    82,    83,    84,    15,
      -1,    -1,    88,    89,    -1,    -1,    22,    41,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    88,    89,     4,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,     4,
      -1,    19,    88,    89,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    -1,    19,    -1,    -1,    -1,    -1,    37,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    -1,    68,    69
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    92,    94,     0,     3,     8,     9,    10,    17,   131,
      63,    93,   132,     1,    37,     4,    25,    26,    27,    28,
      29,    30,    37,    68,    97,    98,   127,   128,    18,    62,
     133,     1,    13,     4,    97,     1,    37,    93,     1,    64,
      65,    66,   134,   135,   139,     1,    64,    65,    66,   140,
       1,    18,     1,    20,     1,    16,    20,    62,    62,    62,
      19,    19,    69,    97,   127,   128,   136,   138,   139,    69,
      97,   137,   138,    37,   135,     1,    21,    37,     1,    21,
      97,   129,   130,    17,    17,    97,   127,   128,    37,    95,
      97,   128,   138,   141,   142,    37,   134,   138,    19,     1,
      18,   103,    20,    17,    68,   103,     1,    37,    21,    24,
      37,    17,    20,    37,    96,   138,   142,    17,     1,     4,
       5,     7,    11,    12,    14,    17,    19,    20,    25,    26,
      27,    28,    30,    35,    36,    37,    38,    40,    51,    52,
      54,    55,    56,    57,    58,    59,    67,    68,    70,    72,
      80,    81,    86,    87,    95,    97,    99,   100,   101,   102,
     103,   104,   105,   107,   109,   110,   113,   116,   117,   118,
     120,   121,   122,   126,   143,    30,    37,   108,   110,   103,
      17,    68,   103,   130,    20,   129,    16,    17,    33,    17,
      24,    51,    52,     1,    37,    96,     1,    20,     1,    17,
     110,   144,     1,    22,     1,    45,   110,     1,    37,     1,
      37,    96,     1,    37,     1,    37,    37,    16,    20,    46,
      47,    48,    49,    50,     1,   110,     1,   110,     1,    20,
       1,    20,     1,    18,   105,     1,    17,     1,    17,     1,
      20,    88,     4,    30,     1,   103,   110,     1,   110,     1,
     110,     1,   110,     1,   110,    37,    19,   105,    15,    17,
      22,    41,    42,    43,    44,    45,    51,    52,    53,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    88,
      89,    21,    24,   103,    21,   129,    21,    35,    37,   110,
      34,    35,    37,     1,    16,    17,    33,    17,     1,   110,
      17,     1,    17,     1,    12,    20,    30,    35,    36,    37,
      38,    40,   107,   114,   115,     1,    37,   111,   112,    21,
       1,    16,    17,    33,     1,    16,    17,    33,    17,     1,
      16,    17,    33,     1,    16,    17,    33,    16,    17,    33,
       1,   110,    21,   108,     1,   110,     1,   110,     1,   110,
       1,   110,     1,   110,     1,    30,    97,   110,   119,     1,
     110,     1,   104,    55,     1,   110,    37,   107,    37,    37,
      71,    17,    16,    17,     1,   110,     1,   110,     1,   110,
       1,   110,     1,   110,     1,   110,     1,   110,     1,   110,
       1,   110,     1,   110,     1,   110,     1,   110,     1,   110,
       1,   110,     1,   110,     1,   110,     1,   110,     1,   110,
      37,   107,     1,   110,    17,   110,   103,    21,    17,   103,
      20,    17,    16,    34,    16,    33,     1,    35,   110,     1,
      34,    35,     1,    21,   110,    20,    33,    17,     1,    17,
      22,    33,    88,     1,    17,    45,     1,    38,    40,     1,
      35,     1,    35,   110,     1,    35,     1,    35,     1,    35,
       1,    31,    32,    35,     1,    35,    38,    35,    21,    37,
       1,    17,     1,    21,     1,    19,    20,     1,    21,    16,
      16,     1,    20,     1,    90,    17,   108,    18,    17,    35,
     110,    35,     1,    17,    34,    16,     1,    34,     1,    18,
     105,    21,   110,   110,     1,    12,   114,   110,    37,   111,
       1,    17,    34,     1,    34,     1,    17,    34,     1,    34,
       1,    17,    34,     1,    34,    17,    17,     1,    17,    34,
       1,    34,    17,    34,    16,     1,   110,     1,    18,   105,
       1,    55,   110,     1,    18,    35,    38,    37,    97,     1,
     110,    21,    35,   106,    34,    17,    18,    17,     1,    19,
     104,     6,    21,    34,     1,    17,    34,    33,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   110,     1,    17,
     104,     1,    20,    21,     1,    60,   123,   124,    17,    17,
      21,    21,    37,    19,    24,   106,     6,    19,   105,    35,
       1,   110,    19,     1,   110,    17,    35,     1,    61,   124,
     125,   103,   103,    21,    17,    35,    19,     5,    18,   120,
       6,    34,     1,    21,     1,    21,    62,    62,    19,   103,
      17,    20,    19,   104,     1,    18,   120,     1,    18,   105,
       1,    17,     1,   104,     1,   104,   110,    19,     1,    19,
     104,   104,    21,    19,    19,     1,    18,    19,   104,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   101,   101,
     101,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,    96,    96,    96,    96,
      96,    96,   106,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   111,   111,   112,
     112,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   118,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   123,   124,   124,   125,   125,   125,   126,   126,
     126,   126,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   130,   130,   130,   131,   131,   132,
     132,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   136,   137,   137,   138,
     138,   138,   138,   138,   139,   139,   139,   140,   140,   140,
     141,   141,   141,   141,   142,   142,   143,   143,   143,   144
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     9,     2,     2,     0,     2,     0,     3,     5,
       6,     3,     9,     3,     1,     3,     4,     3,     5,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       2,     3,     4,     5,     2,     1,     5,     7,     5,     9,
       7,     2,     2,     3,     2,     3,     2,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       5,     6,     1,     3,     4,     3,     1,     3,     3,     1,
       5,     6,     3,     5,     6,     3,     5,     6,     3,     5,
       6,     3,     5,     6,     5,     5,     9,     3,     5,     6,
       3,     3,     6,     6,     2,     3,     4,     5,     2,     3,
       4,     5,     2,     3,     4,     5,     2,     3,     4,     5,
       2,     3,     4,     5,     6,     5,     6,     5,     6,     5,
       6,     5,     6,     5,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     4,     5,     1,     4,     3,     6,     1,
       3,     4,     2,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     3,     1,     4,     6,
       4,     4,     2,     3,     4,     5,     6,     8,     7,     7,
       2,     4,     3,     4,     1,     7,     6,    11,    10,    10,
       9,     9,     8,     2,     3,     4,     5,     6,     9,    10,
      11,     7,     9,     2,     3,     4,     5,     6,     7,     8,
       9,     2,     3,     4,     5,     2,     3,     4,     5,     6,
       7,     8,     9,     8,     2,     3,     4,     5,     6,     7,
       2,     1,     0,     4,     4,     3,     3,     0,     2,     2,
       2,     2,     6,     5,     6,     5,     6,     7,     8,     2,
       3,     4,     1,     3,     2,     0,     2,     2,     0,     6,
       7,     6,     2,     4,     4,     3,     2,     3,     0,     2,
       0,     2,     1,     6,     7,     6,     6,     2,     1,     3,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     3,     3,     2,     1
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
  case 30: /* main_func: INT error  */
#line 129 "parser.y"
                { yyerror("Missing 'main' after 'int'"); }
#line 2569 "parser.tab.c"
    break;

  case 31: /* main_func: INT MAIN error  */
#line 130 "parser.y"
                     { yyerror("Missing '(' after 'main'"); }
#line 2575 "parser.tab.c"
    break;

  case 32: /* main_func: INT MAIN LPAREN error  */
#line 131 "parser.y"
                            { yyerror("Missing ')' after '('"); }
#line 2581 "parser.tab.c"
    break;

  case 33: /* main_func: INT MAIN LPAREN RPAREN error  */
#line 132 "parser.y"
                                   { yyerror("Missing '{' to start main"); }
#line 2587 "parser.tab.c"
    break;

  case 104: /* decl: INT error  */
#line 243 "parser.y"
                { yyerror("Missing identifier after 'int'"); }
#line 2593 "parser.tab.c"
    break;

  case 105: /* decl: INT ID error  */
#line 244 "parser.y"
                   { yyerror("Expected ';' or '=' after variable name"); }
#line 2599 "parser.tab.c"
    break;

  case 106: /* decl: INT ID ASSIGN error  */
#line 245 "parser.y"
                          { yyerror("Missing value after '='"); }
#line 2605 "parser.tab.c"
    break;

  case 107: /* decl: INT ID ASSIGN NUMBER error  */
#line 246 "parser.y"
                                 { yyerror("Missing ';' after initialization"); }
#line 2611 "parser.tab.c"
    break;

  case 108: /* decl: CHAR error  */
#line 247 "parser.y"
                 { yyerror("Missing identifier after 'char'"); }
#line 2617 "parser.tab.c"
    break;

  case 109: /* decl: CHAR ID error  */
#line 248 "parser.y"
                    { yyerror("Expected ';' or '=' after variable name"); }
#line 2623 "parser.tab.c"
    break;

  case 110: /* decl: CHAR ID ASSIGN error  */
#line 249 "parser.y"
                           { yyerror("Missing value after '=' in char"); }
#line 2629 "parser.tab.c"
    break;

  case 111: /* decl: CHAR ID ASSIGN STRING_LITERAL error  */
#line 250 "parser.y"
                                          { yyerror("Missing ';' after initialization"); }
#line 2635 "parser.tab.c"
    break;

  case 112: /* decl: FLOAT error  */
#line 251 "parser.y"
                  { yyerror("Missing identifier after 'float'"); }
#line 2641 "parser.tab.c"
    break;

  case 113: /* decl: FLOAT ID error  */
#line 252 "parser.y"
                     { yyerror("Expected ';' or '=' after variable name"); }
#line 2647 "parser.tab.c"
    break;

  case 114: /* decl: FLOAT ID ASSIGN error  */
#line 253 "parser.y"
                            { yyerror("Missing value after '=' in float"); }
#line 2653 "parser.tab.c"
    break;

  case 115: /* decl: FLOAT ID ASSIGN NUMBER error  */
#line 254 "parser.y"
                                   { yyerror("Missing ';' after initialization"); }
#line 2659 "parser.tab.c"
    break;

  case 116: /* decl: DOUBLE error  */
#line 255 "parser.y"
                   { yyerror("Missing identifier after 'double'"); }
#line 2665 "parser.tab.c"
    break;

  case 117: /* decl: DOUBLE ID error  */
#line 256 "parser.y"
                      { yyerror("Expected ';' or '=' after variable name"); }
#line 2671 "parser.tab.c"
    break;

  case 118: /* decl: DOUBLE ID ASSIGN error  */
#line 257 "parser.y"
                             { yyerror("Missing value after '=' in double"); }
#line 2677 "parser.tab.c"
    break;

  case 119: /* decl: DOUBLE ID ASSIGN NUMBER error  */
#line 258 "parser.y"
                                    { yyerror("Missing ';' after initialization"); }
#line 2683 "parser.tab.c"
    break;

  case 120: /* decl: BOOL error  */
#line 259 "parser.y"
                 { yyerror("Missing identifier after 'bool'"); }
#line 2689 "parser.tab.c"
    break;

  case 121: /* decl: BOOL ID error  */
#line 260 "parser.y"
                    { yyerror("Expected ';' or '=' after variable name"); }
#line 2695 "parser.tab.c"
    break;

  case 122: /* decl: BOOL ID ASSIGN error  */
#line 261 "parser.y"
                           { yyerror("Missing value after '=' in bool"); }
#line 2701 "parser.tab.c"
    break;

  case 123: /* decl: BOOL ID ASSIGN NUMBER error  */
#line 262 "parser.y"
                                  { yyerror("Missing ';' after initialization"); }
#line 2707 "parser.tab.c"
    break;

  case 124: /* decl: INT ID LBRACKET error RBRACKET SEMICOLON  */
#line 263 "parser.y"
                                               { yyerror("Missing size in int array declaration"); }
#line 2713 "parser.tab.c"
    break;

  case 125: /* decl: INT ID LBRACKET NUMBER error  */
#line 264 "parser.y"
                                   { yyerror("Missing ']' in int array declaration"); }
#line 2719 "parser.tab.c"
    break;

  case 126: /* decl: CHAR ID LBRACKET error RBRACKET SEMICOLON  */
#line 265 "parser.y"
                                                { yyerror("Missing size in char array declaration"); }
#line 2725 "parser.tab.c"
    break;

  case 127: /* decl: CHAR ID LBRACKET NUMBER error  */
#line 266 "parser.y"
                                    { yyerror("Missing ']' in char array declaration"); }
#line 2731 "parser.tab.c"
    break;

  case 128: /* decl: FLOAT ID LBRACKET error RBRACKET SEMICOLON  */
#line 267 "parser.y"
                                                 { yyerror("Missing size in float array declaration"); }
#line 2737 "parser.tab.c"
    break;

  case 129: /* decl: FLOAT ID LBRACKET NUMBER error  */
#line 268 "parser.y"
                                     { yyerror("Missing ']' in float array declaration"); }
#line 2743 "parser.tab.c"
    break;

  case 130: /* decl: DOUBLE ID LBRACKET error RBRACKET SEMICOLON  */
#line 269 "parser.y"
                                                  { yyerror("Missing size in double array declaration"); }
#line 2749 "parser.tab.c"
    break;

  case 131: /* decl: DOUBLE ID LBRACKET NUMBER error  */
#line 270 "parser.y"
                                      { yyerror("Missing ']' in double array declaration"); }
#line 2755 "parser.tab.c"
    break;

  case 132: /* decl: BOOL ID LBRACKET error RBRACKET SEMICOLON  */
#line 271 "parser.y"
                                                { yyerror("Missing size in bool array declaration"); }
#line 2761 "parser.tab.c"
    break;

  case 133: /* decl: BOOL ID LBRACKET NUMBER error  */
#line 272 "parser.y"
                                    { yyerror("Missing ']' in bool array declaration"); }
#line 2767 "parser.tab.c"
    break;

  case 149: /* expr: error INC  */
#line 292 "parser.y"
                { yyerror("Missing variable before '++'"); }
#line 2773 "parser.tab.c"
    break;

  case 150: /* expr: error DEC  */
#line 293 "parser.y"
                { yyerror("Missing variable before '--'"); }
#line 2779 "parser.tab.c"
    break;

  case 157: /* expr: INC error  */
#line 300 "parser.y"
                { yyerror("Missing variable after '++'"); }
#line 2785 "parser.tab.c"
    break;

  case 158: /* expr: DEC error  */
#line 301 "parser.y"
                { yyerror("Missing variable after '--'"); }
#line 2791 "parser.tab.c"
    break;

  case 159: /* expr: '+' error  */
#line 302 "parser.y"
                { yyerror("Missing operand after '+'"); }
#line 2797 "parser.tab.c"
    break;

  case 160: /* expr: '-' error  */
#line 303 "parser.y"
                { yyerror("Missing operand after '-'"); }
#line 2803 "parser.tab.c"
    break;

  case 161: /* expr: '!' error  */
#line 304 "parser.y"
                { yyerror("Missing operand after '!'"); }
#line 2809 "parser.tab.c"
    break;

  case 162: /* expr: '~' error  */
#line 305 "parser.y"
                { yyerror("Missing operand after '~'"); }
#line 2815 "parser.tab.c"
    break;

  case 168: /* expr: expr '+' error  */
#line 311 "parser.y"
                     { yyerror("Missing operand after '+'"); }
#line 2821 "parser.tab.c"
    break;

  case 169: /* expr: expr '-' error  */
#line 312 "parser.y"
                     { yyerror("Missing operand after '-'"); }
#line 2827 "parser.tab.c"
    break;

  case 170: /* expr: expr '*' error  */
#line 313 "parser.y"
                     { yyerror("Missing operand after '*'"); }
#line 2833 "parser.tab.c"
    break;

  case 171: /* expr: expr '/' error  */
#line 314 "parser.y"
                     { yyerror("Missing operand after '/'"); }
#line 2839 "parser.tab.c"
    break;

  case 172: /* expr: expr '%' error  */
#line 315 "parser.y"
                     { yyerror("Missing operand after '%'"); }
#line 2845 "parser.tab.c"
    break;

  case 179: /* expr: expr EQ error  */
#line 322 "parser.y"
                    { yyerror("Missing operand after '=='"); }
#line 2851 "parser.tab.c"
    break;

  case 180: /* expr: expr NE error  */
#line 323 "parser.y"
                    { yyerror("Missing operand after '!='"); }
#line 2857 "parser.tab.c"
    break;

  case 181: /* expr: expr '<' error  */
#line 324 "parser.y"
                     { yyerror("Missing operand after '<'"); }
#line 2863 "parser.tab.c"
    break;

  case 182: /* expr: expr '>' error  */
#line 325 "parser.y"
                     { yyerror("Missing operand after '>'"); }
#line 2869 "parser.tab.c"
    break;

  case 183: /* expr: expr LE error  */
#line 326 "parser.y"
                    { yyerror("Missing operand after '<='"); }
#line 2875 "parser.tab.c"
    break;

  case 184: /* expr: expr GE error  */
#line 327 "parser.y"
                    { yyerror("Missing operand after '>='"); }
#line 2881 "parser.tab.c"
    break;

  case 187: /* expr: expr AND error  */
#line 330 "parser.y"
                     { yyerror("Missing operand after '&&'"); }
#line 2887 "parser.tab.c"
    break;

  case 188: /* expr: expr OR error  */
#line 331 "parser.y"
                    { yyerror("Missing operand after '||'"); }
#line 2893 "parser.tab.c"
    break;

  case 194: /* expr: expr '&' error  */
#line 337 "parser.y"
                     { yyerror("Missing operand after '&'"); }
#line 2899 "parser.tab.c"
    break;

  case 195: /* expr: expr '|' error  */
#line 338 "parser.y"
                     { yyerror("Missing operand after '|'"); }
#line 2905 "parser.tab.c"
    break;

  case 196: /* expr: expr '^' error  */
#line 339 "parser.y"
                     { yyerror("Missing operand after '^'"); }
#line 2911 "parser.tab.c"
    break;

  case 197: /* expr: expr SHIFTLEFT error  */
#line 340 "parser.y"
                           { yyerror("Missing operand after '<<'"); }
#line 2917 "parser.tab.c"
    break;

  case 198: /* expr: expr SHIFTRIGHT error  */
#line 341 "parser.y"
                            { yyerror("Missing operand after '>>'"); }
#line 2923 "parser.tab.c"
    break;

  case 205: /* expr: ID ASSIGN error  */
#line 348 "parser.y"
                      { yyerror("Missing expression after '='"); }
#line 2929 "parser.tab.c"
    break;

  case 206: /* expr: ID ADD_ASSIGN error  */
#line 349 "parser.y"
                          { yyerror("Missing expression after '+='"); }
#line 2935 "parser.tab.c"
    break;

  case 207: /* expr: ID SUB_ASSIGN error  */
#line 350 "parser.y"
                          { yyerror("Missing expression after '-='"); }
#line 2941 "parser.tab.c"
    break;

  case 208: /* expr: ID MUL_ASSIGN error  */
#line 351 "parser.y"
                          { yyerror("Missing expression after '*='"); }
#line 2947 "parser.tab.c"
    break;

  case 209: /* expr: ID DIV_ASSIGN error  */
#line 352 "parser.y"
                          { yyerror("Missing expression after '/='"); }
#line 2953 "parser.tab.c"
    break;

  case 210: /* expr: ID MOD_ASSIGN error  */
#line 353 "parser.y"
                          { yyerror("Missing expression after '%='"); }
#line 2959 "parser.tab.c"
    break;

  case 212: /* expr: expr '?' error  */
#line 355 "parser.y"
                     { yyerror("Missing middle expression in ternary operator"); }
#line 2965 "parser.tab.c"
    break;

  case 213: /* expr: expr '?' expr error  */
#line 356 "parser.y"
                          { yyerror("Missing ':' in ternary operator"); }
#line 2971 "parser.tab.c"
    break;

  case 214: /* expr: expr '?' expr ':' error  */
#line 357 "parser.y"
                              { yyerror("Missing third expression in ternary operator"); }
#line 2977 "parser.tab.c"
    break;

  case 222: /* input_stmt: CIN error  */
#line 377 "parser.y"
                { yyerror("Missing '>>' after cin"); }
#line 2983 "parser.tab.c"
    break;

  case 223: /* input_stmt: CIN SHIFTRIGHT error  */
#line 378 "parser.y"
                           { yyerror("Missing variable after '>>'"); }
#line 2989 "parser.tab.c"
    break;

  case 224: /* input_stmt: CIN SHIFTRIGHT input_list error  */
#line 379 "parser.y"
                                      { yyerror("Missing semicolon"); }
#line 2995 "parser.tab.c"
    break;

  case 241: /* output_stmt: COUT SHIFTLEFT output_list error  */
#line 407 "parser.y"
                                       {yyerror("Missing '<<' or ';' after expression");}
#line 3001 "parser.tab.c"
    break;

  case 242: /* output_stmt: COUT error  */
#line 408 "parser.y"
                 { yyerror("Invalid output statement"); }
#line 3007 "parser.tab.c"
    break;

  case 243: /* output_stmt: COUT SHIFTLEFT error  */
#line 409 "parser.y"
                           { yyerror("Missing expression after '<<'"); }
#line 3013 "parser.tab.c"
    break;

  case 244: /* output_stmt: COUT SHIFTLEFT output_list error  */
#line 410 "parser.y"
                                       { yyerror("Missing '<<' or ';' after expression"); }
#line 3019 "parser.tab.c"
    break;

  case 245: /* output_stmt: COUT SHIFTLEFT output_list SHIFTLEFT error  */
#line 411 "parser.y"
                                                 { yyerror("Missing expression or 'endl' after '<<'"); }
#line 3025 "parser.tab.c"
    break;

  case 246: /* output_stmt: COUT SHIFTLEFT output_list SHIFTLEFT ENDL error  */
#line 412 "parser.y"
                                                      { yyerror("Missing ';' after 'endl'"); }
#line 3031 "parser.tab.c"
    break;

  case 250: /* try_catch_stmt: TRY error  */
#line 420 "parser.y"
                { yyerror("Malformed try block"); }
#line 3037 "parser.tab.c"
    break;

  case 251: /* try_catch_stmt: TRY compound_stmt CATCH error  */
#line 421 "parser.y"
                                    { yyerror("Malformed catch block"); }
#line 3043 "parser.tab.c"
    break;

  case 263: /* if_stmt: IF error  */
#line 448 "parser.y"
               { yyerror("Syntax Error: Missing '(' after 'if'"); }
#line 3049 "parser.tab.c"
    break;

  case 264: /* if_stmt: IF LPAREN error  */
#line 449 "parser.y"
                      { yyerror("Syntax Error: Missing condition inside 'if'"); }
#line 3055 "parser.tab.c"
    break;

  case 265: /* if_stmt: IF LPAREN expr error  */
#line 450 "parser.y"
                           { yyerror("Syntax Error: Missing ')' after condition in 'if'"); }
#line 3061 "parser.tab.c"
    break;

  case 266: /* if_stmt: IF LPAREN expr RPAREN error  */
#line 451 "parser.y"
                                  { yyerror("Syntax Error: Missing '{' to start 'if' block"); }
#line 3067 "parser.tab.c"
    break;

  case 267: /* if_stmt: IF LPAREN expr RPAREN LBRACE error  */
#line 452 "parser.y"
                                         { yyerror("Syntax Error: Invalid statements inside 'if' block"); }
#line 3073 "parser.tab.c"
    break;

  case 268: /* if_stmt: IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE error  */
#line 453 "parser.y"
                                                           { yyerror("Syntax Error: Missing '{' or 'if' after 'else'"); }
#line 3079 "parser.tab.c"
    break;

  case 269: /* if_stmt: IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE LBRACE error  */
#line 454 "parser.y"
                                                                  { yyerror("Syntax Error: Invalid statements inside 'else' block"); }
#line 3085 "parser.tab.c"
    break;

  case 273: /* loop_stmt: FOR error  */
#line 464 "parser.y"
                { yyerror("Missing '(' after 'for'"); }
#line 3091 "parser.tab.c"
    break;

  case 274: /* loop_stmt: FOR LPAREN error  */
#line 465 "parser.y"
                       { yyerror("Missing initialization expression or declaration in 'for'"); }
#line 3097 "parser.tab.c"
    break;

  case 275: /* loop_stmt: FOR LPAREN for_init error  */
#line 466 "parser.y"
                                { yyerror("Missing ';' after initialization in 'for'"); }
#line 3103 "parser.tab.c"
    break;

  case 276: /* loop_stmt: FOR LPAREN for_init SEMICOLON error  */
#line 467 "parser.y"
                                          { yyerror("Missing condition expression in 'for'"); }
#line 3109 "parser.tab.c"
    break;

  case 277: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr error  */
#line 468 "parser.y"
                                               { yyerror("Missing ';' after condition in 'for'"); }
#line 3115 "parser.tab.c"
    break;

  case 278: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr SEMICOLON error  */
#line 469 "parser.y"
                                                         { yyerror("Missing increment expression in 'for'"); }
#line 3121 "parser.tab.c"
    break;

  case 279: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr SEMICOLON expr error  */
#line 470 "parser.y"
                                                              { yyerror("Missing ')' after 'for' expressions"); }
#line 3127 "parser.tab.c"
    break;

  case 280: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr SEMICOLON expr RPAREN error  */
#line 471 "parser.y"
                                                                     { yyerror("Missing '{' after 'for' loop"); }
#line 3133 "parser.tab.c"
    break;

  case 281: /* loop_stmt: WHILE error  */
#line 474 "parser.y"
                  { yyerror("Missing '(' after 'while'"); }
#line 3139 "parser.tab.c"
    break;

  case 282: /* loop_stmt: WHILE LPAREN error  */
#line 475 "parser.y"
                         { yyerror("Missing condition inside 'while'"); }
#line 3145 "parser.tab.c"
    break;

  case 283: /* loop_stmt: WHILE LPAREN expr error  */
#line 476 "parser.y"
                              { yyerror("Missing ')' after 'while' condition"); }
#line 3151 "parser.tab.c"
    break;

  case 284: /* loop_stmt: WHILE LPAREN expr RPAREN error  */
#line 477 "parser.y"
                                     { yyerror("Missing '{' after 'while' condition"); }
#line 3157 "parser.tab.c"
    break;

  case 285: /* loop_stmt: DO error  */
#line 480 "parser.y"
               { yyerror("Missing '{' after 'do'"); }
#line 3163 "parser.tab.c"
    break;

  case 286: /* loop_stmt: DO LBRACE error  */
#line 481 "parser.y"
                      { yyerror("Missing statements inside 'do'"); }
#line 3169 "parser.tab.c"
    break;

  case 287: /* loop_stmt: DO LBRACE stmts error  */
#line 482 "parser.y"
                            { yyerror("Missing '}' after 'do' block"); }
#line 3175 "parser.tab.c"
    break;

  case 288: /* loop_stmt: DO LBRACE stmts RBRACE error  */
#line 483 "parser.y"
                                   { yyerror("Missing 'while' after 'do' block"); }
#line 3181 "parser.tab.c"
    break;

  case 289: /* loop_stmt: DO LBRACE stmts RBRACE WHILE error  */
#line 484 "parser.y"
                                         { yyerror("Missing '(' after 'while' in 'do-while'"); }
#line 3187 "parser.tab.c"
    break;

  case 290: /* loop_stmt: DO LBRACE stmts RBRACE WHILE LPAREN error  */
#line 485 "parser.y"
                                                { yyerror("Missing condition inside 'do-while'"); }
#line 3193 "parser.tab.c"
    break;

  case 291: /* loop_stmt: DO LBRACE stmts RBRACE WHILE LPAREN expr error  */
#line 486 "parser.y"
                                                     { yyerror("Missing ')' after 'do-while' condition"); }
#line 3199 "parser.tab.c"
    break;

  case 292: /* loop_stmt: DO LBRACE stmts RBRACE WHILE LPAREN expr RPAREN error  */
#line 487 "parser.y"
                                                            { yyerror("Missing ';' after 'do-while'"); }
#line 3205 "parser.tab.c"
    break;

  case 294: /* switch_stmt: SWITCH error  */
#line 495 "parser.y"
                   { yyerror("Missing '(' after 'switch'"); }
#line 3211 "parser.tab.c"
    break;

  case 295: /* switch_stmt: SWITCH LPAREN error  */
#line 496 "parser.y"
                          { yyerror("Missing expression inside 'switch'"); }
#line 3217 "parser.tab.c"
    break;

  case 296: /* switch_stmt: SWITCH LPAREN expr error  */
#line 497 "parser.y"
                               { yyerror("Missing ')' after switch condition"); }
#line 3223 "parser.tab.c"
    break;

  case 297: /* switch_stmt: SWITCH LPAREN expr RPAREN error  */
#line 498 "parser.y"
                                      { yyerror("Missing '{' to start switch body"); }
#line 3229 "parser.tab.c"
    break;

  case 298: /* switch_stmt: SWITCH LPAREN expr RPAREN LBRACE error  */
#line 499 "parser.y"
                                             { yyerror("Invalid or missing case/default blocks inside switch"); }
#line 3235 "parser.tab.c"
    break;

  case 299: /* switch_stmt: SWITCH LPAREN expr RPAREN LBRACE case_blocks error  */
#line 500 "parser.y"
                                                         { yyerror("Missing default block or closing '}' in switch"); }
#line 3241 "parser.tab.c"
    break;

  case 304: /* case_block: CASE NUMBER COLON error  */
#line 511 "parser.y"
                              { yyerror("Missing statements inside case block"); }
#line 3247 "parser.tab.c"
    break;

  case 306: /* default_block_opt: DEFAULT COLON error  */
#line 516 "parser.y"
                          { yyerror("Missing statements inside default block"); }
#line 3253 "parser.tab.c"
    break;

  case 310: /* control_stmt: BREAK error  */
#line 525 "parser.y"
                  { yyerror("Missing ';' after 'break'"); }
#line 3259 "parser.tab.c"
    break;

  case 311: /* control_stmt: CONTINUE error  */
#line 526 "parser.y"
                     { yyerror("Missing ';' after 'continue'"); }
#line 3265 "parser.tab.c"
    break;

  case 319: /* function_def: type_specifier error  */
#line 542 "parser.y"
                           { yyerror("Missing function name"); }
#line 3271 "parser.tab.c"
    break;

  case 320: /* function_def: type_specifier ID error  */
#line 543 "parser.y"
                              { yyerror("Missing '(' after function name"); }
#line 3277 "parser.tab.c"
    break;

  case 321: /* function_def: type_specifier ID LPAREN error  */
#line 544 "parser.y"
                                     { yyerror("Bad parameter list"); }
#line 3283 "parser.tab.c"
    break;

  case 326: /* param: type_specifier error  */
#line 556 "parser.y"
                           { yyerror("Missing parameter name"); }
#line 3289 "parser.tab.c"
    break;

  case 332: /* class_def: CLASS error  */
#line 570 "parser.y"
                  { yyerror("Missing class name after 'class'"); }
#line 3295 "parser.tab.c"
    break;

  case 333: /* class_def: CLASS ID inheritance error  */
#line 571 "parser.y"
                                 { yyerror("Missing '{' after class declaration with inheritance"); }
#line 3301 "parser.tab.c"
    break;

  case 334: /* class_def: CLASS ID LBRACE error  */
#line 572 "parser.y"
                            { yyerror("Invalid class body"); }
#line 3307 "parser.tab.c"
    break;

  case 336: /* inheritance: COLON error  */
#line 577 "parser.y"
                  { yyerror("Invalid inheritance syntax"); }
#line 3313 "parser.tab.c"
    break;

  case 367: /* return_stmt: RETURN return_expr error  */
#line 643 "parser.y"
        { yyerror("Missing ';' after return value"); }
#line 3319 "parser.tab.c"
    break;

  case 368: /* return_stmt: RETURN error  */
#line 645 "parser.y"
        { yyerror("Missing return value after 'return'"); }
#line 3325 "parser.tab.c"
    break;


#line 3329 "parser.tab.c"

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

#line 653 "parser.y"


void print_token(const char *type, const char *value) {
    if (token_table) {
        fprintf(token_table, "| %-20s | %-10d | %-20s |\n", type, line_no, value);
    }
}


void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s\n", line_no, s);
    if (pending_custom_msg != NULL) {
        fprintf(stderr, "Details: %s\n", pending_custom_msg);
        pending_custom_msg = NULL;
    }
    error_count++;
}


int main(int argc, char **argv) {
    pending_custom_msg = NULL;
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("File open failed");
            return 1;
        }
    }

    // Open token table output file
    token_table = fopen("token_table.txt", "w");
    if (!token_table) {
        perror("Could not open token_table.txt");
        return 1;
    }

      fprintf(token_table, "+----------------------+------------+----------------------+\n");
    fprintf(token_table, "| %-20s | %-10s | %-20s |\n", "Token", "Type", "Line");
    fprintf(token_table, "+----------------------+------------+----------------------+\n");

    // Start parsing the file
    yyparse();
    fprintf(token_table, "+----------------------+------------+----------------------+\n");
    // Close the token table file
    fclose(token_table);

    return 0;
}
