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
  YYSYMBOL_PREPROCESSOR_DEFINE = 4,        /* PREPROCESSOR_DEFINE  */
  YYSYMBOL_PREPROCESSOR_IFDEF = 5,         /* PREPROCESSOR_IFDEF  */
  YYSYMBOL_PREPROCESSOR_ENDIF = 6,         /* PREPROCESSOR_ENDIF  */
  YYSYMBOL_PREPROCESSOR_IFNDEF = 7,        /* PREPROCESSOR_IFNDEF  */
  YYSYMBOL_PREPROCESSOR_ELSE = 8,          /* PREPROCESSOR_ELSE  */
  YYSYMBOL_PREPROCESSOR_UNDEF = 9,         /* PREPROCESSOR_UNDEF  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_USING = 14,                     /* USING  */
  YYSYMBOL_NAMESPACE = 15,                 /* NAMESPACE  */
  YYSYMBOL_STD = 16,                       /* STD  */
  YYSYMBOL_COUT = 17,                      /* COUT  */
  YYSYMBOL_ENDL = 18,                      /* ENDL  */
  YYSYMBOL_MAIN = 19,                      /* MAIN  */
  YYSYMBOL_CIN = 20,                       /* CIN  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_ASSIGN = 22,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 23,                 /* SEMICOLON  */
  YYSYMBOL_LBRACE = 24,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 25,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 26,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 27,                    /* RPAREN  */
  YYSYMBOL_SHIFTLEFT = 28,                 /* SHIFTLEFT  */
  YYSYMBOL_DOUBLE_QUOTE = 29,              /* DOUBLE_QUOTE  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_CHAR = 31,                      /* CHAR  */
  YYSYMBOL_FLOAT = 32,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_BOOL = 34,                      /* BOOL  */
  YYSYMBOL_VOID = 35,                      /* VOID  */
  YYSYMBOL_STRING = 36,                    /* STRING  */
  YYSYMBOL_TRUE = 37,                      /* TRUE  */
  YYSYMBOL_FALSE = 38,                     /* FALSE  */
  YYSYMBOL_LBRACKET = 39,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 40,                  /* RBRACKET  */
  YYSYMBOL_NUMBER = 41,                    /* NUMBER  */
  YYSYMBOL_FLOAT_NUM = 42,                 /* FLOAT_NUM  */
  YYSYMBOL_ID = 43,                        /* ID  */
  YYSYMBOL_STRING_LITERAL = 44,            /* STRING_LITERAL  */
  YYSYMBOL_CONSTANT = 45,                  /* CONSTANT  */
  YYSYMBOL_CHAR_LITERAL = 46,              /* CHAR_LITERAL  */
  YYSYMBOL_LE = 47,                        /* LE  */
  YYSYMBOL_GE = 48,                        /* GE  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_OR = 50,                        /* OR  */
  YYSYMBOL_SHIFTRIGHT = 51,                /* SHIFTRIGHT  */
  YYSYMBOL_ADD_ASSIGN = 52,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 53,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 54,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 55,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 56,                /* MOD_ASSIGN  */
  YYSYMBOL_INC = 57,                       /* INC  */
  YYSYMBOL_DEC = 58,                       /* DEC  */
  YYSYMBOL_NE = 59,                        /* NE  */
  YYSYMBOL_FOR = 60,                       /* FOR  */
  YYSYMBOL_WHILE = 61,                     /* WHILE  */
  YYSYMBOL_DO = 62,                        /* DO  */
  YYSYMBOL_BREAK = 63,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 64,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 65,                    /* SWITCH  */
  YYSYMBOL_CASE = 66,                      /* CASE  */
  YYSYMBOL_DEFAULT = 67,                   /* DEFAULT  */
  YYSYMBOL_COLON = 68,                     /* COLON  */
  YYSYMBOL_CLASS = 69,                     /* CLASS  */
  YYSYMBOL_PUBLIC = 70,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 71,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 72,                 /* PROTECTED  */
  YYSYMBOL_THIS = 73,                      /* THIS  */
  YYSYMBOL_CONST = 74,                     /* CONST  */
  YYSYMBOL_VIRTUAL = 75,                   /* VIRTUAL  */
  YYSYMBOL_TRY = 76,                       /* TRY  */
  YYSYMBOL_CATCH = 77,                     /* CATCH  */
  YYSYMBOL_THROW = 78,                     /* THROW  */
  YYSYMBOL_FUNC_CALL = 79,                 /* FUNC_CALL  */
  YYSYMBOL_UMINUS = 80,                    /* UMINUS  */
  YYSYMBOL_81_ = 81,                       /* '|'  */
  YYSYMBOL_82_ = 82,                       /* '^'  */
  YYSYMBOL_83_ = 83,                       /* '&'  */
  YYSYMBOL_84_ = 84,                       /* '<'  */
  YYSYMBOL_85_ = 85,                       /* '>'  */
  YYSYMBOL_86_ = 86,                       /* '+'  */
  YYSYMBOL_87_ = 87,                       /* '-'  */
  YYSYMBOL_88_ = 88,                       /* '*'  */
  YYSYMBOL_89_ = 89,                       /* '/'  */
  YYSYMBOL_90_ = 90,                       /* '%'  */
  YYSYMBOL_SHIFTRIGH = 91,                 /* SHIFTRIGH  */
  YYSYMBOL_92_ = 92,                       /* '!'  */
  YYSYMBOL_93_ = 93,                       /* '~'  */
  YYSYMBOL_94_ = 94,                       /* '.'  */
  YYSYMBOL_95_ = 95,                       /* '?'  */
  YYSYMBOL_96_ = 96,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 97,                  /* $accept  */
  YYSYMBOL_program = 98,                   /* program  */
  YYSYMBOL_preprocessor_list = 99,         /* preprocessor_list  */
  YYSYMBOL_preprocessor_directive = 100,   /* preprocessor_directive  */
  YYSYMBOL_function_defs = 101,            /* function_defs  */
  YYSYMBOL_includes = 102,                 /* includes  */
  YYSYMBOL_declarations = 103,             /* declarations  */
  YYSYMBOL_declaration = 104,              /* declaration  */
  YYSYMBOL_declaration_stmt = 105,         /* declaration_stmt  */
  YYSYMBOL_id_list = 106,                  /* id_list  */
  YYSYMBOL_type_specifier = 107,           /* type_specifier  */
  YYSYMBOL_main_func = 108,                /* main_func  */
  YYSYMBOL_expr_stmt = 109,                /* expr_stmt  */
  YYSYMBOL_selection_stmt = 110,           /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 111,           /* iteration_stmt  */
  YYSYMBOL_jump_stmt = 112,                /* jump_stmt  */
  YYSYMBOL_compound_stmt = 113,            /* compound_stmt  */
  YYSYMBOL_stmts = 114,                    /* stmts  */
  YYSYMBOL_stmt = 115,                     /* stmt  */
  YYSYMBOL_number_list = 116,              /* number_list  */
  YYSYMBOL_function_call = 117,            /* function_call  */
  YYSYMBOL_arg_list = 118,                 /* arg_list  */
  YYSYMBOL_decl = 119,                     /* decl  */
  YYSYMBOL_expr = 120,                     /* expr  */
  YYSYMBOL_input_variable = 121,           /* input_variable  */
  YYSYMBOL_input_list = 122,               /* input_list  */
  YYSYMBOL_input_stmt = 123,               /* input_stmt  */
  YYSYMBOL_output_expr = 124,              /* output_expr  */
  YYSYMBOL_output_list = 125,              /* output_list  */
  YYSYMBOL_output_stmt = 126,              /* output_stmt  */
  YYSYMBOL_try_catch_stmt = 127,           /* try_catch_stmt  */
  YYSYMBOL_throw_stmt = 128,               /* throw_stmt  */
  YYSYMBOL_for_init = 129,                 /* for_init  */
  YYSYMBOL_if_stmt = 130,                  /* if_stmt  */
  YYSYMBOL_loop_stmt = 131,                /* loop_stmt  */
  YYSYMBOL_switch_stmt = 132,              /* switch_stmt  */
  YYSYMBOL_case_blocks = 133,              /* case_blocks  */
  YYSYMBOL_case_block = 134,               /* case_block  */
  YYSYMBOL_default_block_opt = 135,        /* default_block_opt  */
  YYSYMBOL_control_stmt = 136,             /* control_stmt  */
  YYSYMBOL_function_decl = 137,            /* function_decl  */
  YYSYMBOL_function_def = 138,             /* function_def  */
  YYSYMBOL_param_list = 139,               /* param_list  */
  YYSYMBOL_param = 140,                    /* param  */
  YYSYMBOL_class_defs = 141,               /* class_defs  */
  YYSYMBOL_class_def = 142,                /* class_def  */
  YYSYMBOL_inheritance = 143,              /* inheritance  */
  YYSYMBOL_access_specifier_list = 144,    /* access_specifier_list  */
  YYSYMBOL_class_members = 145,            /* class_members  */
  YYSYMBOL_class_member = 146,             /* class_member  */
  YYSYMBOL_member_declarations = 147,      /* member_declarations  */
  YYSYMBOL_member_declaration = 148,       /* member_declaration  */
  YYSYMBOL_access_specifier = 149,         /* access_specifier  */
  YYSYMBOL_inheritance_specifier = 150,    /* inheritance_specifier  */
  YYSYMBOL_class_member_list = 151,        /* class_member_list  */
  YYSYMBOL_member_stmt = 152,              /* member_stmt  */
  YYSYMBOL_constructor_def = 153,          /* constructor_def  */
  YYSYMBOL_destructor_def = 154,           /* destructor_def  */
  YYSYMBOL_return_stmt = 155,              /* return_stmt  */
  YYSYMBOL_return_expr = 156               /* return_expr  */
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
#define YYLAST   6196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  389
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  706

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   336


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
       2,     2,     2,    92,     2,     2,     2,    90,    83,     2,
       2,     2,    88,    86,     2,    87,    94,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    96,     2,
      84,     2,    85,    95,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    81,     2,    93,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    71,    73,    79,    80,    81,    82,    83,
      84,    89,    90,    91,    95,    96,   100,   101,   105,   109,
     110,   111,   112,   113,   114,   119,   120,   121,   122,   123,
     124,   125,   126,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   149,   150,   151,   152,   153,   157,   158,
     162,   163,   167,   168,   169,   173,   174,   175,   176,   180,
     181,   185,   186,   187,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     213,   214,   218,   219,   224,   225,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   381,   382,   383,
     384,   388,   389,   393,   394,   395,   396,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   416,   417,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   434,
     435,   436,   437,   438,   442,   447,   448,   453,   454,   455,
     456,   457,   458,   461,   462,   465,   466,   467,   468,   469,
     470,   471,   476,   477,   478,   481,   482,   483,   484,   485,
     486,   487,   488,   491,   492,   493,   494,   497,   498,   499,
     500,   501,   502,   503,   504,   509,   512,   513,   514,   515,
     516,   517,   521,   522,   523,   527,   528,   532,   533,   534,
     538,   539,   542,   543,   549,   550,   554,   555,   556,   557,
     558,   559,   560,   561,   566,   567,   571,   572,   573,   578,
     579,   584,   585,   586,   587,   588,   589,   593,   594,   598,
     599,   603,   604,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   621,   622,   626,   627,   628,   629,   630,
     631,   632,   636,   637,   638,   642,   643,   644,   648,   649,
     650,   651,   655,   656,   660,   664,   667,   668,   670,   675
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
  "PREPROCESSOR_DEFINE", "PREPROCESSOR_IFDEF", "PREPROCESSOR_ENDIF",
  "PREPROCESSOR_IFNDEF", "PREPROCESSOR_ELSE", "PREPROCESSOR_UNDEF", "INT",
  "IF", "ELSE", "RETURN", "USING", "NAMESPACE", "STD", "COUT", "ENDL",
  "MAIN", "CIN", "EQ", "ASSIGN", "SEMICOLON", "LBRACE", "RBRACE", "LPAREN",
  "RPAREN", "SHIFTLEFT", "DOUBLE_QUOTE", "COMMA", "CHAR", "FLOAT",
  "DOUBLE", "BOOL", "VOID", "STRING", "TRUE", "FALSE", "LBRACKET",
  "RBRACKET", "NUMBER", "FLOAT_NUM", "ID", "STRING_LITERAL", "CONSTANT",
  "CHAR_LITERAL", "LE", "GE", "AND", "OR", "SHIFTRIGHT", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "INC", "DEC",
  "NE", "FOR", "WHILE", "DO", "BREAK", "CONTINUE", "SWITCH", "CASE",
  "DEFAULT", "COLON", "CLASS", "PUBLIC", "PRIVATE", "PROTECTED", "THIS",
  "CONST", "VIRTUAL", "TRY", "CATCH", "THROW", "FUNC_CALL", "UMINUS",
  "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "SHIFTRIGH", "'!'", "'~'", "'.'", "'?'", "':'", "$accept", "program",
  "preprocessor_list", "preprocessor_directive", "function_defs",
  "includes", "declarations", "declaration", "declaration_stmt", "id_list",
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
  "constructor_def", "destructor_def", "return_stmt", "return_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-376)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-353)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -376,    25,   122,  -376,  -376,   856,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  2961,  -376,    73,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,   454,  -376,   -37,   204,    94,   138,  -376,
     266,  -376,  -376,   856,   454,   254,   133,  3014,  -376,  -376,
     -20,    11,    17,  -376,  -376,  -376,   283,   108,   271,  -376,
     106,  -376,   444,   454,  -376,   284,   325,   331,   424,  5304,
      37,  -376,  -376,  -376,  -376,   395,  -376,  -376,  -376,   183,
    -376,   422,  2761,  -376,  -376,  -376,   452,   489,   544,   296,
     434,    18,  -376,  -376,  -376,  -376,    37,  -376,  -376,   454,
     539,    32,  5371,  -376,  -376,  5355,  -376,   413,   561,  -376,
       4,    33,   250,  -376,  -376,  -376,  2891,   551,    34,  -376,
    -376,   593,   491,  -376,    36,  -376,  -376,    37,  -376,   627,
     529,  -376,  -376,   639,  -376,   981,  -376,  2891,  -376,   644,
    -376,  -376,  -376,   195,   454,   506,  -376,  2891,  -376,  -376,
    -376,   686,  -376,  -376,  2944,  2997,   575,  3050,  3103,  3156,
    3209,  3262,  3315,  -376,   499,  5851,   645,  -376,   571,   643,
    -376,  2761,   386,    -8,  -376,  -376,   649,  -376,    80,   323,
    2785,   345,    31,  -376,  -376,    83,    85,    86,   134,   116,
    2729,   365,   374,  2325,   384,   396,   389,  3067,   483,  2891,
    -376,   190,  -376,  -376,  -376,  -376,  -376,  1065,  -376,  -376,
    5410,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
     611,  -376,  -376,   644,  -376,  -376,  -376,  -376,  5426,  3368,
    2838,  3421,  3474,  3527,  3580,  3633,   506,   217,   506,   217,
     629,   506,  6089,   506,  5851,   506,  5851,   506,   217,   506,
     217,   506,   217,   644,  2891,  3686,  3739,  3792,  3845,  3898,
    3951,  4004,  -376,  -376,  4057,  4110,  4163,  4216,  4269,  4322,
    4375,  4428,  4481,  4534,  4587,   634,  4640,   651,  6122,   644,
     613,  4693,  -376,   606,  -376,   652,   644,  -376,   168,   317,
    -376,  4746,   506,  -376,  5496,   468,  -376,   560,  -376,   257,
    -376,   349,  -376,   405,   372,  -376,   472,  -376,   481,   527,
    -376,  2732,  -376,  4799,   506,  1149,   646,  -376,  -376,  -376,
    -376,  -376,  4852,   653,   670,  -376,   648,  5511,   610,  -376,
    -376,  -376,   703,  -376,  -376,   506,  5851,  -376,   615,   506,
    5851,   506,  5851,   506,  5851,   506,  5851,   506,  5851,   704,
    -376,  -376,  5851,   506,  2871,   506,   599,   506,   353,   506,
     353,   506,  5936,   506,  5921,   506,  5851,   506,  2871,   506,
    6006,   506,  6019,   506,  6089,   506,   353,   506,   353,   506,
    2756,   506,  2756,   506,   217,   506,   217,   506,   217,   704,
    -376,   506,     8,   635,     4,   621,  -376,   222,   406,  2324,
    5581,   709,   692,   249,  -376,  -376,  4905,  -376,   301,  -376,
     506,   166,  -376,  -376,  -376,  -376,  -376,  2891,  -376,  -376,
    -376,   -13,  -376,  -376,  -376,   710,   269,  -376,   -31,  -376,
     180,  -376,     6,  -376,   198,  -376,  4958,  -376,   258,  -376,
    -376,   304,  -376,   320,  -376,   297,  -376,   321,   690,  -376,
     696,   506,   193,   197,  5851,   492,   506,   526,   506,  1233,
     719,   506,   541,   724,   725,   425,  -376,  5011,  -376,  -376,
    -376,  -376,  5064,  -376,  -376,  -376,   239,  -376,  -376,  2838,
    -376,   728,   726,  5117,   707,   506,   373,  5596,   713,   732,
     165,  -376,  2409,  5666,  2838,  2891,  -376,  -376,  -376,   742,
    2891,   718,  -376,  -376,   720,  -376,   761,   741,   729,   285,
     506,   451,  5851,   735,   293,  -376,   542,   736,   342,  -376,
     754,   756,   557,   747,   343,   776,   760,   779,  -376,  5170,
    -376,  2493,   506,    13,  2891,  -376,   520,   774,   772,  -376,
    3120,   506,  5851,  -376,   625,   778,  -376,   537,  5851,   780,
    -376,  -376,   798,   801,  -376,   799,   506,  1317,   815,  -376,
    5681,  5751,  -376,   336,  -376,  5766,   789,  -376,  -376,  -376,
     806,  -376,   809,  -376,  -376,   811,  -376,   812,  -376,  -376,
     817,  -376,   818,  -376,  -376,  -376,  -376,   819,  -376,   820,
    -376,   827,  2891,   506,   616,   506,   981,  -376,  -376,   445,
    5836,  -376,   145,   828,   829,   826,   104,   703,  -376,   -14,
    -376,  -376,   778,  -376,   506,   846,  1401,  2577,  -376,  -376,
    -376,  -376,  -376,   825,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  5851,  -376,  5223,  1485,  -376,  5276,   844,
    -376,   831,   163,  -376,  -376,  -376,   644,   644,   841,   858,
     842,   453,   381,   857,  -376,   845,   506,   633,  -376,   506,
     708,  -376,   814,  -376,   816,  -376,   863,  -376,  -376,   644,
    -376,  -376,   867,   479,  1569,  -376,   594,  -376,  -376,  2661,
    -376,   558,   813,  1653,  -376,  -376,  -376,  4746,  -376,  1737,
    -376,  1821,  -376,   506,   981,  -376,  -376,  -376,   506,   897,
     506,  1905,   723,  -376,   506,  -376,  1989,  2073,   524,  -376,
    -376,  -376,  2157,   846,  2241,   857
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      15,     0,     3,     1,    14,    17,     5,     6,     7,     8,
       9,    10,     4,     0,    33,     0,    36,    34,    35,    37,
      39,    38,    40,     0,    16,     0,     0,    41,     0,    42,
       0,    18,     3,    17,   340,    13,     0,     0,   339,   344,
       0,     0,     0,    13,    12,    11,     0,     0,     0,    44,
       0,   331,     0,     2,   346,     0,     0,     0,     0,     0,
       0,   348,   375,   376,   377,     0,   345,   352,    45,     0,
     332,     0,     0,   372,   373,   374,     0,     0,    40,     0,
       0,     0,   366,   367,   351,   354,     0,   369,   368,     0,
       0,     0,   350,   364,   347,     0,    46,     0,     0,   333,
       0,     0,     0,   334,   343,   341,     0,     0,     0,   370,
     371,     0,     0,   383,     0,   367,   381,   353,   379,     0,
       0,   349,   363,     0,    47,     0,    43,     0,   325,     0,
     327,   338,   336,     0,   337,     0,   147,     0,   148,   143,
     144,   142,   146,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   150,     0,    84,     0,   331,     0,     0,
     365,     0,     0,     0,   380,   378,     0,   342,     0,     0,
       0,     0,     0,    49,    60,     0,     0,     0,     0,   148,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,     0,    64,    65,    66,    67,    68,     0,    62,    70,
       0,    77,    75,    78,    79,    71,    72,    73,    74,    76,
       0,   328,   324,     0,   326,   335,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   167,   170,   168,
       0,   160,   156,   171,   163,   172,   164,   159,   155,   173,
     165,   174,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    24,     0,     0,   112,     0,     0,
     275,     0,   388,    58,   389,     0,   254,     0,   234,     0,
     116,     0,   120,     0,     0,   124,     0,   128,     0,     0,
     285,     0,   293,     0,   297,     0,     0,   322,    55,   323,
      56,   306,     0,    33,    38,   262,     0,     0,    25,    59,
      61,    48,     0,   329,   149,   217,   211,    83,     0,   218,
     212,   219,   213,   220,   214,   221,   215,   222,   216,   153,
     154,   384,    85,   191,   185,   209,   204,   195,   189,   196,
     190,   199,   197,   200,   198,   210,   205,   192,   186,   207,
     202,   208,   203,   206,   201,   193,   187,   194,   188,   180,
     175,   181,   176,   182,   177,   183,   178,   184,   179,   151,
     152,   224,     0,     0,     0,     0,   359,     0,   143,   142,
      26,     0,     0,    29,   385,   113,     0,    86,     0,   108,
     276,     0,    57,   387,   386,   255,   242,     0,   243,   238,
     239,   237,   241,   240,   245,   249,     0,   235,   227,   231,
       0,   117,     0,    90,     0,   121,     0,    93,     0,   109,
     125,     0,    96,     0,   129,     0,    99,     0,     0,   105,
       0,   286,   148,     0,   266,     0,   294,     0,   298,     0,
       0,   307,     0,     0,     0,     0,   264,     0,    19,   330,
      82,   225,     0,   360,   361,   327,     0,   324,   326,     0,
      20,     0,    28,     0,     0,   114,     0,    26,     0,     0,
       0,   277,     0,     0,     0,     0,   252,   253,   250,     0,
       0,     0,   236,   233,     0,   118,     0,     0,     0,     0,
     122,     0,    26,     0,     0,   126,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,   287,     0,
     295,     0,   299,     0,     0,   308,     0,     0,     0,   263,
       0,   226,   223,   324,     0,     0,    21,   143,    30,     0,
     115,    88,     0,     0,   133,    28,   278,     0,    50,   244,
      84,     0,   257,     0,   248,     0,   229,   232,   119,    91,
       0,   135,     0,   123,    94,     0,   137,    28,   127,    97,
       0,   139,     0,   102,   103,   131,   100,     0,   141,     0,
     106,     0,     0,   288,     0,   296,     0,    52,   300,     0,
       0,   309,     0,     0,     0,    40,     0,    82,    80,     0,
      32,   132,     0,    89,   279,    60,     0,     0,   246,   247,
     258,   251,   228,     0,   134,    92,   136,    95,   138,    98,
     140,   101,   107,   265,   289,     0,     0,   301,     0,     0,
     310,     0,     0,   313,   110,   111,     0,     0,     0,     0,
       0,     0,     0,    59,    51,     0,   290,     0,    59,   302,
       0,    54,     0,   311,     0,   312,     0,   261,   260,     0,
      23,    81,     0,     0,     0,   274,     0,   230,   291,     0,
     303,     0,     0,     0,   305,   259,   104,     0,   272,     0,
     280,     0,   273,   292,     0,    53,   304,   284,   316,     0,
     318,     0,     0,   270,   281,   271,     0,     0,     0,   269,
      59,   278,     0,   268,     0,   267
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -376,  -376,   860,  -376,   850,  -376,   861,  -376,   156,   111,
     149,  -376,  -376,  -376,  -376,  -376,   -80,  -304,  -173,   295,
    -225,  -104,  -376,  -106,   401,  -376,  -376,   414,  -376,  -376,
    -376,  -376,  -376,  -375,  -376,  -376,  -376,   270,  -376,  -376,
      48,   148,  -158,   770,  -376,  -376,  -376,   821,   849,  -376,
    -376,   140,    41,  -376,  -376,   792,  -376,  -376,  -376,  -376
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     5,    12,    37,     2,    13,    24,   190,   163,
     191,    43,   192,   193,   194,   195,   196,   197,   198,   599,
     153,   328,   199,   200,   419,   420,   201,   415,   416,   202,
     203,   204,   445,   205,   206,   207,   632,   633,   656,   208,
      82,    83,   102,   103,    35,    38,    48,    58,    59,    84,
      92,    85,    60,    65,   117,   118,    87,    88,   209,   285
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     155,   449,   154,   270,    46,   340,    28,   495,   490,   461,
     306,   639,    49,   484,   588,   274,   640,   126,    51,    51,
     130,   155,   275,   210,   320,     3,   485,   128,   125,   245,
      50,   218,   288,    51,   131,   157,   246,    51,   227,   229,
     380,   232,   234,   236,   238,   240,   242,    14,    47,   211,
     496,    29,   497,   214,   -33,   247,   248,   249,   250,   251,
      52,   112,   414,   491,   284,   252,   253,   254,    16,    17,
      18,    19,    20,    21,   589,   120,   132,   158,   129,   162,
      78,   277,   289,   317,   290,    44,   292,   295,    26,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   -33,
      86,    44,   265,   266,   462,    29,    29,    68,   316,    61,
     385,    23,    89,   326,   155,   330,   332,   334,   336,   338,
      29,    29,    29,   278,    29,     4,   291,   109,   293,   296,
      90,   637,    69,   323,    39,   297,    86,   109,   342,   344,
     346,   348,   350,   352,   354,   356,   630,   638,   358,   360,
     362,   364,   366,   368,   370,   372,   374,   376,   378,   299,
     382,    31,    25,   341,   653,   390,   544,   481,   -33,   395,
    -314,   -36,    27,   -34,   -35,   401,    40,   298,    62,    63,
      64,   492,    29,    25,    96,    45,    42,   245,  -319,   386,
     396,   397,    29,   482,   246,   444,   394,   447,   -25,   498,
      93,    45,    42,   493,   -38,   545,   452,   398,    81,    91,
      97,   631,  -314,   247,   248,   249,   250,   251,   212,   125,
      30,   101,   -37,   252,   253,   254,   116,   110,   108,   631,
     654,   494,   122,   318,   115,   114,   -38,   110,    42,   499,
     517,    91,   113,   606,    81,   467,   125,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   164,   417,   503,
     265,   266,   533,   125,   414,   115,   114,   665,   251,   213,
     487,   473,    66,   113,   252,   253,   320,   133,    29,   279,
     134,   -38,   626,   101,    54,    29,   561,   294,   474,    32,
     477,   682,   488,  -352,   566,    67,   213,   489,   509,   504,
     418,   483,   478,   464,   465,   505,    14,   468,  -350,   548,
     101,   265,   266,   213,  -352,  -352,  -352,  -352,  -352,  -352,
     502,   507,   513,    36,   280,   562,  -352,    16,    17,    18,
      19,    20,    21,   567,   510,   511,    27,   610,   512,    22,
     399,   479,   480,   571,   578,   506,   286,   275,   587,   281,
     421,   390,    73,    55,    56,    57,   532,  -352,  -352,   611,
     679,   508,   514,   155,  -242,   534,   300,   538,   689,   691,
      23,   422,   423,   287,   540,   302,  -352,   696,   550,   551,
     697,   246,   572,   579,   555,   307,   214,    70,   424,   107,
     311,   301,   663,    74,  -143,   429,   -27,   309,   704,    75,
     303,  -143,   275,   -27,   251,   664,   425,   308,   271,   272,
     252,   253,    72,   584,   124,   312,   -25,   101,   590,   310,
    -143,  -143,  -143,  -143,  -143,   273,   529,   426,   427,   -27,
    -143,  -143,  -143,   320,   644,   -25,   -27,   125,    94,   260,
     261,   262,   263,   264,   428,    70,   627,   265,   266,    76,
     443,   530,   563,   320,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,    14,    98,    71,  -143,  -143,   403,
      72,   628,  -143,   430,   564,   104,   623,   111,   662,  -143,
     280,   -27,   434,   640,   315,    16,    17,    18,    19,    20,
      21,   404,    70,   518,   431,   432,   685,    22,  -143,  -143,
    -143,  -143,  -143,   435,   436,   677,   320,   125,  -143,  -143,
    -143,   433,   105,    71,   160,   519,   320,   161,   320,   647,
     437,   591,   650,   320,   320,   701,   243,   520,    23,   244,
      70,   320,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,   525,   568,   592,  -143,  -143,   245,   702,   438,
     439,    71,   160,   521,   246,    72,   657,   658,   575,   686,
     -31,   405,   245,   216,   217,   569,   440,   -31,   526,   246,
     106,   692,    70,   247,   248,   249,   250,   251,   406,   675,
     576,   687,   119,   252,   253,   254,   407,   127,   247,   248,
     249,   250,   251,    71,   156,   680,   408,   268,   252,   253,
     254,   409,   410,   411,   412,   663,   413,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   624,   681,   159,
     265,   266,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   457,   458,   668,   265,   266,   245,   322,   625,
     387,   244,   460,   134,   246,   244,   391,   392,   466,   273,
     251,   134,   597,   166,   245,   244,   252,   253,   463,   125,
     669,   246,   167,   247,   248,   249,   250,   251,   125,   230,
     269,   267,   339,   252,   253,   254,   276,   379,   383,   596,
     247,   248,   249,   250,   251,   260,   261,   262,   263,   264,
     252,   253,   254,   265,   266,   393,   453,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   450,   219,   670,
     265,   266,   220,   454,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   481,   455,   459,   265,   266,   245,
     220,   471,   472,   486,   515,   671,   246,   516,   221,   222,
     223,   224,   225,   552,   245,   524,   527,   528,   539,   536,
     698,   246,   535,   542,   543,   247,   248,   249,   250,   251,
     553,   556,   558,   418,   559,   252,   253,   254,   407,   560,
     247,   248,   249,   250,   251,   565,   570,   573,   408,   574,
     252,   253,   254,   409,   410,   411,   412,   577,   413,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   580,
     581,   582,   265,   266,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   688,   593,   594,   265,   266,   598,
     600,   601,   603,   168,   169,   602,   170,   607,   613,   614,
     171,   136,   615,   172,   616,   617,   173,   125,   -63,   137,
     618,   619,   620,   621,   175,   176,   177,   178,    20,   179,
     622,   634,   635,   636,   139,   140,   180,   142,   642,   143,
       6,     7,     8,     9,    10,    11,   645,   651,   659,   666,
     144,   145,   652,   181,   182,   183,   184,   185,   186,   -63,
     -63,   660,   672,   661,   673,   667,   146,   187,   674,   188,
     676,   189,    33,    53,    34,   557,   147,   641,   135,   148,
     149,   150,   655,   554,   215,   151,   152,   168,   169,   165,
     170,     0,     0,   121,   171,   136,    95,   172,     0,     0,
     173,   125,  -315,   137,     0,     0,     0,     0,   175,   176,
     177,   178,    20,   179,     0,     0,     0,     0,   139,   140,
     180,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,   181,   182,   183,
     184,   185,   186,  -315,  -315,     0,     0,     0,     0,     0,
     146,   187,     0,   188,     0,   189,     0,     0,     0,     0,
     147,     0,   135,   148,   149,   150,     0,     0,     0,   151,
     152,   168,   169,     0,   170,     0,     0,     0,   171,   136,
       0,   172,     0,     0,   173,   125,   174,   137,     0,     0,
       0,     0,   175,   176,   177,   178,    20,   179,     0,     0,
       0,     0,   139,   140,   180,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,   181,   182,   183,   184,   185,   186,     0,     0,     0,
       0,     0,     0,     0,   146,   187,     0,   188,     0,   189,
       0,     0,     0,     0,   147,     0,   135,   148,   149,   150,
       0,     0,     0,   151,   152,   168,   169,     0,   170,     0,
       0,     0,   171,   136,     0,   172,     0,     0,   173,   125,
     319,   137,     0,     0,     0,     0,   175,   176,   177,   178,
      20,   179,     0,     0,     0,     0,   139,   140,   180,   142,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,     0,   181,   182,   183,   184,   185,
     186,     0,     0,     0,     0,     0,     0,     0,   146,   187,
       0,   188,     0,   189,     0,     0,     0,     0,   147,     0,
     448,   148,   149,   150,     0,     0,     0,   151,   152,   168,
     169,     0,   170,     0,     0,     0,   171,   136,     0,   172,
       0,     0,   173,   125,   174,   137,     0,     0,     0,     0,
     175,   176,   177,   178,    20,   179,     0,     0,     0,     0,
     139,   140,   180,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,   181,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,   146,   187,     0,   188,     0,   189,     0,     0,
       0,     0,   147,     0,   522,   148,   149,   150,     0,     0,
       0,   151,   152,   168,   169,     0,   170,     0,     0,     0,
     171,   136,     0,   172,     0,     0,   173,   125,   523,   137,
       0,     0,     0,     0,   175,   176,   177,   178,    20,   179,
       0,     0,     0,     0,   139,   140,   180,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,   146,   187,     0,   188,
       0,   189,     0,     0,     0,     0,   147,     0,   604,   148,
     149,   150,     0,     0,     0,   151,   152,   168,   169,     0,
     170,     0,     0,     0,   171,   136,     0,   172,     0,     0,
     173,   125,   605,   137,     0,     0,     0,     0,   175,   176,
     177,   178,    20,   179,     0,     0,     0,     0,   139,   140,
     180,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,   181,   182,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
     146,   187,     0,   188,     0,   189,     0,     0,     0,     0,
     147,     0,   135,   148,   149,   150,     0,     0,     0,   151,
     152,   168,   169,     0,   170,     0,     0,     0,   171,   136,
       0,   172,     0,     0,   173,   125,   643,   137,     0,     0,
       0,     0,   175,   176,   177,   178,    20,   179,     0,     0,
       0,     0,   139,   140,   180,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,   181,   182,   183,   184,   185,   186,     0,     0,     0,
       0,     0,     0,     0,   146,   187,     0,   188,     0,   189,
       0,     0,     0,     0,   147,     0,   135,   148,   149,   150,
       0,     0,     0,   151,   152,   168,   169,     0,   170,     0,
       0,     0,   171,   136,     0,   172,     0,     0,   173,   125,
     648,   137,     0,     0,     0,     0,   175,   176,   177,   178,
      20,   179,     0,     0,     0,     0,   139,   140,   180,   142,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,     0,   181,   182,   183,   184,   185,
     186,     0,     0,     0,     0,     0,     0,     0,   146,   187,
       0,   188,     0,   189,     0,     0,     0,     0,   147,     0,
     135,   148,   149,   150,     0,     0,     0,   151,   152,   168,
     169,     0,   170,     0,     0,     0,   171,   136,     0,   172,
       0,     0,   173,   125,   678,   137,     0,     0,     0,     0,
     175,   176,   177,   178,    20,   179,     0,     0,     0,     0,
     139,   140,   180,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,   181,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,   146,   187,     0,   188,     0,   189,     0,     0,
       0,     0,   147,     0,   690,   148,   149,   150,     0,     0,
       0,   151,   152,   168,   169,     0,   170,     0,     0,     0,
     171,   136,     0,   172,     0,     0,   173,   125,   -63,   137,
       0,     0,     0,     0,   175,   176,   177,   178,    20,   179,
       0,     0,     0,     0,   139,   140,   180,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,   146,   187,     0,   188,
       0,   189,     0,     0,     0,     0,   147,     0,   135,   148,
     149,   150,     0,     0,     0,   151,   152,   168,   169,     0,
     170,     0,     0,     0,   171,   136,     0,   172,     0,     0,
     173,   125,   693,   137,     0,     0,     0,     0,   175,   176,
     177,   178,    20,   179,     0,     0,     0,     0,   139,   140,
     180,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,   181,   182,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
     146,   187,     0,   188,     0,   189,     0,     0,     0,     0,
     147,     0,   694,   148,   149,   150,     0,     0,     0,   151,
     152,   168,   169,     0,   170,     0,     0,     0,   171,   136,
       0,   172,     0,     0,   173,   125,   695,   137,     0,     0,
       0,     0,   175,   176,   177,   178,    20,   179,     0,     0,
       0,     0,   139,   140,   180,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,   181,   182,   183,   184,   185,   186,     0,     0,     0,
       0,     0,     0,     0,   146,   187,     0,   188,     0,   189,
       0,     0,     0,     0,   147,     0,   135,   148,   149,   150,
       0,     0,     0,   151,   152,   168,   169,     0,   170,     0,
       0,     0,   171,   136,     0,   172,     0,     0,   173,   125,
    -317,   137,     0,     0,     0,     0,   175,   176,   177,   178,
      20,   179,     0,     0,     0,     0,   139,   140,   180,   142,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,     0,   181,   182,   183,   184,   185,
     186,     0,     0,     0,     0,     0,     0,     0,   146,   187,
       0,   188,     0,   189,     0,     0,     0,     0,   147,     0,
     135,   148,   149,   150,     0,     0,     0,   151,   152,   168,
     169,     0,   170,     0,     0,     0,   171,   136,     0,   172,
       0,     0,   173,   125,   699,   137,     0,     0,     0,     0,
     175,   176,   177,   178,    20,   179,     0,     0,     0,     0,
     139,   140,   180,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,   181,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,   146,   187,     0,   188,     0,   189,     0,     0,
       0,     0,   147,     0,   135,   148,   149,   150,     0,     0,
       0,   151,   152,   168,   169,     0,   170,     0,     0,     0,
     171,   136,     0,   172,     0,     0,   173,   125,   700,   137,
       0,     0,     0,     0,   175,   176,   177,   178,    20,   179,
       0,     0,     0,     0,   139,   140,   180,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,   146,   187,     0,   188,
       0,   189,     0,     0,     0,     0,   147,     0,   604,   148,
     149,   150,     0,     0,     0,   151,   152,   168,   169,     0,
     170,     0,     0,     0,   171,   136,     0,   172,     0,     0,
     173,   125,   703,   137,     0,     0,     0,     0,   175,   176,
     177,   178,    20,   179,     0,     0,     0,     0,   139,   140,
     180,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,   181,   182,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
     146,   187,     0,   188,     0,   189,     0,     0,     0,     0,
     147,     0,   135,   148,   149,   150,     0,     0,     0,   151,
     152,   168,   169,     0,   170,     0,     0,     0,   171,   136,
       0,   172,     0,     0,   173,   125,   705,   137,     0,     0,
       0,     0,   175,   176,   177,   178,    20,   179,     0,     0,
       0,     0,   139,   140,   180,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,   181,   182,   183,   184,   185,   186,     0,     0,     0,
       0,     0,     0,     0,   146,   187,     0,   188,     0,   189,
       0,     0,     0,     0,   147,     0,   304,   148,   149,   150,
       0,     0,     0,   151,   152,   168,   169,     0,   170,     0,
       0,     0,   171,   136,     0,   172,   219,     0,   173,   305,
     469,   137,     0,     0,     0,     0,   175,   176,   177,   178,
      20,   179,     0,     0,     0,     0,   139,   140,   180,   142,
       0,   143,     0,     0,     0,     0,   221,   222,   223,   224,
     225,     0,   144,   145,     0,   181,   182,   183,   184,   185,
     186,     0,     0,     0,     0,     0,     0,     0,   146,   187,
       0,   188,     0,   189,     0,     0,     0,     0,   147,     0,
     546,   148,   149,   150,     0,     0,     0,   151,   152,   168,
     169,     0,   170,     0,     0,     0,   171,   136,     0,   172,
       0,     0,   173,   547,     0,   137,     0,     0,     0,     0,
     175,   176,   177,   178,    20,   179,     0,     0,     0,     0,
     139,   140,   180,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,   181,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,   146,   187,     0,   188,     0,   189,     0,     0,
       0,     0,   147,     0,   585,   148,   149,   150,     0,     0,
       0,   151,   152,   168,   169,     0,   170,     0,     0,     0,
     171,   136,     0,   172,     0,     0,   173,   586,     0,   137,
       0,     0,     0,     0,   175,   176,   177,   178,    20,   179,
       0,     0,     0,     0,   139,   140,   180,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,   146,   187,     0,   188,
       0,   189,     0,     0,     0,     0,   147,     0,   135,   148,
     149,   150,     0,     0,     0,   151,   152,   168,   169,     0,
     170,     0,     0,     0,   171,   136,     0,   172,     0,     0,
     173,   125,     0,   137,     0,     0,     0,     0,   175,   176,
     177,   178,    20,   179,     0,     0,     0,     0,   139,   140,
     180,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,   181,   182,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
     146,   187,     0,   188,     0,   189,     0,     0,     0,     0,
     147,     0,   683,   148,   149,   150,     0,     0,     0,   151,
     152,   168,   169,     0,   170,     0,     0,     0,   171,   136,
       0,   172,     0,     0,   173,   684,     0,   137,     0,     0,
       0,     0,   175,   176,   177,   178,    20,   179,     0,     0,
       0,     0,   139,   140,   180,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,   181,   182,   183,   184,   185,   186,     0,     0,     0,
       0,     0,     0,   441,   146,   187,     0,   188,     0,   189,
       0,     0,    14,     0,   147,     0,     0,   148,   149,   150,
     136,   219,     0,   151,   152,   220,     0,     0,   137,     0,
       0,     0,    99,    16,    17,    18,    19,    20,   442,     0,
       0,    14,   -40,   139,   140,   180,   142,     0,   143,     0,
       0,   221,   222,   223,   224,   225,   282,     0,   100,   144,
     145,  -337,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,   136,    22,   146,    23,   251,   283,     0,
       0,   137,     0,   252,   253,   147,     0,   -40,   148,   149,
     150,   138,     0,     0,   151,   152,   139,   140,   141,   142,
       0,   143,     0,     0,     0,    23,     0,     0,     0,   135,
       0,     0,   144,   145,   262,   263,   264,     0,     0,     0,
     265,   266,     0,     0,     0,     0,   136,     0,   146,     0,
       0,     0,     0,     0,   137,   327,     0,     0,   147,     0,
       0,   148,   149,   150,   138,     0,     0,   151,   152,   139,
     140,   141,   142,     0,   143,     0,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   144,   145,     0,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   146,     0,     0,     0,     0,     0,   137,   247,   248,
       0,   147,   251,     0,   148,   149,   150,   138,   252,   253,
     151,   152,   139,   140,   141,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,   226,     0,     0,   144,   145,
       0,     0,     0,     0,     0,   258,   259,   260,   261,   262,
     263,   264,   136,     0,   146,   265,   266,     0,     0,     0,
     137,    14,     0,     0,   147,    15,     0,   148,   149,   150,
     138,     0,     0,   151,   152,   139,   140,   141,   142,     0,
     143,     0,    16,    17,    18,    19,    20,    21,   228,     0,
       0,   144,   145,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,     0,   146,     0,     0,
       0,     0,     0,   137,    41,     0,     0,   147,     0,     0,
     148,   149,   150,   138,     0,    23,   151,   152,   139,   140,
     141,   142,     0,   143,     0,    16,    17,    18,    19,    20,
      21,   231,     0,     0,   144,   145,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
     146,     0,     0,     0,     0,     0,   137,   313,     0,     0,
     147,     0,     0,   148,   149,   150,   138,     0,    23,   151,
     152,   139,   140,   141,   142,     0,   143,     0,    16,    17,
      18,    19,    20,   314,   233,     0,     0,   144,   145,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,   146,     0,     0,     0,     0,     0,   137,
      14,     0,     0,   147,     0,     0,   148,   149,   150,   138,
       0,    23,   151,   152,   139,   140,   141,   142,     0,   143,
       0,    16,    17,    18,    19,    20,    21,   235,     0,     0,
     144,   145,     0,   595,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,   146,     0,     0,     0,
       0,     0,   137,     0,     0,     0,   147,     0,     0,   148,
     149,   150,   138,     0,    23,   151,   152,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,     0,
     237,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   136,     0,   146,
       0,     0,     0,     0,     0,   137,     0,     0,     0,   147,
       0,     0,   148,   149,   150,   138,     0,     0,   151,   152,
     139,   140,   141,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,   146,     0,     0,     0,     0,     0,   137,     0,
       0,     0,   147,     0,     0,   148,   149,   150,   138,     0,
       0,   151,   152,   139,   140,   141,   142,     0,   143,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,     0,   146,     0,     0,     0,     0,
       0,   137,     0,     0,     0,   147,     0,     0,   148,   149,
     150,   138,     0,     0,   151,   152,   139,   140,   141,   142,
       0,   143,     0,     0,     0,     0,     0,     0,     0,   325,
       0,     0,   144,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,     0,   146,     0,
       0,     0,     0,     0,   137,     0,     0,     0,   147,     0,
       0,   148,   149,   150,   138,     0,     0,   151,   152,   139,
     140,   141,   142,     0,   143,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   146,     0,     0,     0,     0,     0,   137,     0,     0,
       0,   147,     0,     0,   148,   149,   150,   138,     0,     0,
     151,   152,   139,   140,   141,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,   331,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   146,     0,     0,     0,     0,     0,
     137,     0,     0,     0,   147,     0,     0,   148,   149,   150,
     138,     0,     0,   151,   152,   139,   140,   141,   142,     0,
     143,     0,     0,     0,     0,     0,     0,     0,   333,     0,
       0,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,     0,   146,     0,     0,
       0,     0,     0,   137,     0,     0,     0,   147,     0,     0,
     148,   149,   150,   138,     0,     0,   151,   152,   139,   140,
     141,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,   335,     0,     0,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
     146,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     147,     0,     0,   148,   149,   150,   138,     0,     0,   151,
     152,   139,   140,   141,   142,     0,   143,     0,     0,     0,
       0,     0,     0,     0,   337,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,   146,     0,     0,     0,     0,     0,   137,
       0,     0,     0,   147,     0,     0,   148,   149,   150,   138,
       0,     0,   151,   152,   139,   140,   141,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,   343,     0,     0,
     144,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,   146,     0,     0,     0,
       0,     0,   137,     0,     0,     0,   147,     0,     0,   148,
     149,   150,   138,     0,     0,   151,   152,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,     0,
     345,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   136,     0,   146,
       0,     0,     0,     0,     0,   137,     0,     0,     0,   147,
       0,     0,   148,   149,   150,   138,     0,     0,   151,   152,
     139,   140,   141,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,   146,     0,     0,     0,     0,     0,   137,     0,
       0,     0,   147,     0,     0,   148,   149,   150,   138,     0,
       0,   151,   152,   139,   140,   141,   142,     0,   143,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,     0,   146,     0,     0,     0,     0,
       0,   137,     0,     0,     0,   147,     0,     0,   148,   149,
     150,   138,     0,     0,   151,   152,   139,   140,   141,   142,
       0,   143,     0,     0,     0,     0,     0,     0,     0,   351,
       0,     0,   144,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,     0,   146,     0,
       0,     0,     0,     0,   137,     0,     0,     0,   147,     0,
       0,   148,   149,   150,   138,     0,     0,   151,   152,   139,
     140,   141,   142,     0,   143,     0,     0,     0,     0,     0,
       0,     0,   353,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   146,     0,     0,     0,     0,     0,   137,     0,     0,
       0,   147,     0,     0,   148,   149,   150,   138,     0,     0,
     151,   152,   139,   140,   141,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,   355,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   146,     0,     0,     0,     0,     0,
     137,     0,     0,     0,   147,     0,     0,   148,   149,   150,
     138,     0,     0,   151,   152,   139,   140,   141,   142,     0,
     143,     0,     0,     0,     0,     0,     0,     0,   357,     0,
       0,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,     0,   146,     0,     0,
       0,     0,     0,   137,     0,     0,     0,   147,     0,     0,
     148,   149,   150,   138,     0,     0,   151,   152,   139,   140,
     141,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,   359,     0,     0,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
     146,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     147,     0,     0,   148,   149,   150,   138,     0,     0,   151,
     152,   139,   140,   141,   142,     0,   143,     0,     0,     0,
       0,     0,     0,     0,   361,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,   146,     0,     0,     0,     0,     0,   137,
       0,     0,     0,   147,     0,     0,   148,   149,   150,   138,
       0,     0,   151,   152,   139,   140,   141,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,   363,     0,     0,
     144,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,   146,     0,     0,     0,
       0,     0,   137,     0,     0,     0,   147,     0,     0,   148,
     149,   150,   138,     0,     0,   151,   152,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,     0,
     365,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   136,     0,   146,
       0,     0,     0,     0,     0,   137,     0,     0,     0,   147,
       0,     0,   148,   149,   150,   138,     0,     0,   151,   152,
     139,   140,   141,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,   146,     0,     0,     0,     0,     0,   137,     0,
       0,     0,   147,     0,     0,   148,   149,   150,   138,     0,
       0,   151,   152,   139,   140,   141,   142,     0,   143,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,     0,   146,     0,     0,     0,     0,
       0,   137,     0,     0,     0,   147,     0,     0,   148,   149,
     150,   138,     0,     0,   151,   152,   139,   140,   141,   142,
       0,   143,     0,     0,     0,     0,     0,     0,     0,   371,
       0,     0,   144,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,     0,   146,     0,
       0,     0,     0,     0,   137,     0,     0,     0,   147,     0,
       0,   148,   149,   150,   138,     0,     0,   151,   152,   139,
     140,   141,   142,     0,   143,     0,     0,     0,     0,     0,
       0,     0,   373,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   146,     0,     0,     0,     0,     0,   137,     0,     0,
       0,   147,     0,     0,   148,   149,   150,   138,     0,     0,
     151,   152,   139,   140,   141,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,   375,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   146,     0,     0,     0,     0,     0,
     137,     0,     0,     0,   147,     0,     0,   148,   149,   150,
     138,     0,     0,   151,   152,   139,   140,   141,   142,     0,
     143,     0,     0,     0,     0,     0,     0,     0,   377,     0,
       0,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,     0,   146,     0,     0,
       0,     0,     0,   137,     0,     0,     0,   147,     0,     0,
     148,   149,   150,   138,     0,     0,   151,   152,   139,   140,
     141,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,   381,     0,     0,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
     146,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     147,     0,     0,   148,   149,   150,   138,     0,     0,   151,
     152,   139,   140,   141,   142,     0,   143,     0,     0,     0,
       0,     0,     0,     0,   135,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,   146,     0,     0,     0,     0,     0,   137,
       0,     0,     0,   147,     0,     0,   148,   149,   150,   138,
       0,     0,   151,   152,   388,   140,   389,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,   400,     0,     0,
     144,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,   146,     0,     0,     0,
       0,     0,   137,     0,     0,     0,   147,     0,     0,   148,
     149,   150,   138,     0,     0,   151,   152,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,     0,
     446,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   136,     0,   146,
       0,     0,     0,     0,     0,   137,     0,     0,     0,   147,
       0,     0,   148,   149,   150,   138,     0,     0,   151,   152,
     139,   140,   141,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,   451,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,   146,     0,     0,     0,     0,     0,   137,     0,
       0,     0,   147,     0,     0,   148,   149,   150,   138,     0,
       0,   151,   152,   139,   140,   141,   142,     0,   143,     0,
       0,     0,     0,     0,     0,     0,   475,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,     0,   146,     0,     0,     0,     0,
       0,   137,     0,     0,     0,   147,     0,     0,   148,   149,
     150,   138,     0,     0,   151,   152,   476,   140,   141,   142,
       0,   143,     0,     0,     0,     0,     0,     0,     0,   500,
       0,     0,   144,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,     0,   146,     0,
       0,     0,     0,     0,   137,     0,     0,     0,   147,     0,
       0,   148,   149,   150,   138,     0,     0,   151,   152,   501,
     140,   141,   142,     0,   143,     0,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   146,     0,     0,     0,     0,     0,   137,     0,     0,
       0,   147,     0,     0,   148,   149,   150,   138,     0,     0,
     151,   152,   388,   140,   141,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,   531,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   146,     0,     0,     0,     0,     0,
     137,     0,     0,     0,   147,     0,     0,   148,   149,   150,
     138,     0,     0,   151,   152,   139,   140,   141,   142,     0,
     143,     0,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,     0,   146,     0,     0,
       0,     0,     0,   137,     0,     0,     0,   147,     0,     0,
     148,   149,   150,   138,     0,     0,   151,   152,   537,   140,
     141,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,   583,     0,     0,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
     146,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     147,     0,     0,   148,   149,   150,   138,     0,     0,   151,
     152,   139,   140,   141,   142,     0,   143,     0,     0,     0,
       0,     0,     0,     0,   646,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,   146,     0,     0,     0,     0,     0,   137,
       0,     0,     0,   147,     0,     0,   148,   149,   150,   138,
       0,     0,   151,   152,   139,   140,   141,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,   649,     0,     0,
     144,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,   146,     0,     0,     0,
       0,     0,   137,     0,     0,     0,   147,     0,     0,   148,
     149,   150,   138,     0,    14,   151,   152,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,   144,   145,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,    78,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,     0,   148,   149,   150,    14,     0,     0,   151,   152,
       0,     0,     0,     0,    55,    56,    57,     0,    23,    79,
     123,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,    80,    78,     0,
       0,     0,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,     0,    23,
      79,   245,     0,   321,     0,     0,     0,     0,   246,     0,
       0,    55,    56,    57,     0,    23,    89,   245,    80,     0,
       0,     0,     0,   324,   246,     0,     0,   247,   248,   249,
     250,   251,     0,     0,    90,     0,     0,   252,   253,   254,
       0,     0,     0,   247,   248,   249,   250,   251,     0,     0,
       0,     0,     0,   252,   253,   254,     0,     0,     0,     0,
       0,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,     0,     0,     0,   265,   266,     0,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   245,     0,   402,
     265,   266,     0,     0,   246,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   456,     0,     0,     0,     0,   246,
       0,     0,     0,   247,   248,   249,   250,   251,     0,     0,
       0,     0,     0,   252,   253,   254,     0,     0,   247,   248,
     249,   250,   251,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,     0,     0,     0,     0,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,     0,     0,     0,
     265,   266,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   245,     0,   470,   265,   266,     0,     0,   246,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   541,
       0,     0,     0,     0,   246,     0,     0,     0,   247,   248,
     249,   250,   251,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,   247,   248,   249,   250,   251,     0,     0,
       0,     0,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,     0,     0,     0,   265,   266,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   245,     0,     0,
     265,   266,     0,   549,   246,     0,     0,     0,     0,     0,
       0,     0,   245,     0,     0,     0,     0,     0,   608,   246,
       0,     0,     0,   247,   248,   249,   250,   251,     0,     0,
       0,     0,     0,   252,   253,   254,     0,     0,   247,   248,
     249,   250,   251,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,     0,     0,     0,     0,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,     0,     0,     0,
     265,   266,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   245,     0,     0,   265,   266,     0,     0,   246,
       0,     0,     0,     0,     0,     0,     0,   245,     0,     0,
       0,   609,     0,     0,   246,     0,     0,     0,   247,   248,
     249,   250,   251,     0,     0,     0,   612,     0,   252,   253,
     254,     0,     0,   247,   248,   249,   250,   251,     0,     0,
       0,     0,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,     0,     0,     0,   265,   266,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   245,     0,     0,
     265,   266,     0,   629,   246,     0,     0,     0,     0,     0,
       0,     0,   245,     0,     0,     0,     0,     0,     0,   246,
       0,     0,     0,   247,   248,   249,   250,   251,     0,     0,
       0,     0,     0,   252,   253,   254,     0,     0,   247,   248,
     249,   250,   251,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,     0,     0,     0,     0,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,     0,     0,     0,
     265,   266,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   245,     0,     0,   265,   266,     0,     0,   246,
       0,     0,     0,     0,     0,     0,     0,   245,     0,     0,
       0,     0,     0,     0,   246,     0,     0,     0,   247,   248,
     249,     0,   251,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,   247,   248,     0,     0,   251,     0,     0,
       0,     0,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,     0,     0,     0,   265,   266,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   245,     0,     0,
     265,   266,     0,     0,   246,     0,     0,     0,     0,     0,
     245,     0,     0,     0,     0,     0,     0,   246,     0,     0,
       0,     0,     0,   247,   248,     0,     0,   251,     0,     0,
       0,     0,     0,   252,   253,   254,   247,   248,     0,     0,
     251,     0,     0,     0,     0,     0,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,     0,     0,     0,
     265,   266,   257,   258,   259,   260,   261,   262,   263,   264,
     245,     0,     0,   265,   266,     0,     0,   246,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,   247,   248,     0,     0,
     251,     0,     0,     0,     0,     0,   252,   253,   254,   384,
       0,     0,  -337,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,   258,   259,   260,   261,   262,   263,   264,
       0,     0,     0,   265,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23
};

static const yytype_int16 yycheck[] =
{
     106,   305,   106,   161,    24,   230,    43,     1,    39,     1,
     183,    25,     1,    26,     1,    23,    30,    97,     1,     1,
     100,   127,    30,   127,   197,     0,    39,    23,    24,    21,
      19,   137,     1,     1,     1,     1,    28,     1,   144,   145,
     265,   147,   148,   149,   150,   151,   152,    10,    68,   129,
      44,    88,    46,   133,    43,    47,    48,    49,    50,    51,
      43,    43,   287,    94,   170,    57,    58,    59,    31,    32,
      33,    34,    35,    36,    61,    43,    43,    43,    74,    43,
      43,     1,    51,   189,     1,    37,     1,     1,    15,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    88,
      59,    53,    94,    95,    96,    88,    88,     1,   188,     1,
     268,    74,    75,   219,   220,   221,   222,   223,   224,   225,
      88,    88,    88,    43,    88,     3,    43,    79,    43,    43,
      93,    27,    26,   213,     1,     1,    95,    89,   244,   245,
     246,   247,   248,   249,   250,   251,     1,    43,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    43,
     266,    23,    13,   243,     1,   271,     1,     1,    88,     1,
      25,    88,    23,    88,    88,   281,    43,    43,    70,    71,
      72,     1,    88,    34,     1,    37,    37,    21,    25,   269,
      22,    23,    88,    27,    28,   301,   276,   303,    30,     1,
      60,    53,    53,    23,    88,    40,   312,    39,    59,    60,
      27,    66,    67,    47,    48,    49,    50,    51,    23,    24,
      16,    72,    88,    57,    58,    59,    86,    79,    79,    66,
      67,    51,    92,    43,    86,    86,    43,    89,    89,    41,
      43,    92,    86,   547,    95,    23,    24,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   117,     1,     1,
      94,    95,    23,    24,   489,   117,   117,   642,    51,    74,
       1,    22,     1,   117,    57,    58,   449,    27,    88,   168,
      30,    88,   586,   134,     1,    88,     1,   176,    39,    23,
     396,   666,    23,    10,     1,    24,    74,    28,     1,    41,
      43,   407,     1,   383,   384,     1,    10,   387,    25,   482,
     161,    94,    95,    74,    31,    32,    33,    34,    35,    36,
     426,     1,     1,    69,     1,    40,    43,    31,    32,    33,
      34,    35,    36,    40,    37,    38,   187,     1,    41,    43,
      23,    40,    41,     1,     1,    41,     1,    30,   521,    26,
       1,   457,    68,    70,    71,    72,   462,    74,    75,    23,
     664,    41,    41,   469,    28,   469,     1,   473,   672,   673,
      74,    22,    23,    28,     1,     1,    93,   681,   484,   485,
     684,    28,    40,    40,   490,     1,   466,     1,    39,    93,
       1,    26,    11,    68,    21,    23,    23,     1,   702,    68,
      26,    28,    30,    30,    51,    24,     1,    23,    22,    23,
      57,    58,    26,   519,     1,    26,    30,   268,   524,    23,
      47,    48,    49,    50,    51,    39,     1,    22,    23,    23,
      57,    58,    59,   606,   607,    30,    30,    24,    43,    86,
      87,    88,    89,    90,    39,     1,     1,    94,    95,    25,
     301,    26,     1,   626,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    10,    43,    22,    94,    95,     1,
      26,    26,    21,     1,    23,    23,   582,    43,    25,    28,
       1,    30,     1,    30,     1,    31,    32,    33,    34,    35,
      36,    23,     1,     1,    22,    23,   669,    43,    47,    48,
      49,    50,    51,    22,    23,    26,   679,    24,    57,    58,
      59,    39,    23,    22,    23,    23,   689,    26,   691,   625,
      39,     1,   628,   696,   697,     1,    27,     1,    74,    30,
       1,   704,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     1,     1,    24,    94,    95,    21,    24,    22,
      23,    22,    23,    27,    28,    26,   636,   637,     1,     1,
      23,     1,    21,    57,    58,    23,    39,    30,    27,    28,
      26,   677,     1,    47,    48,    49,    50,    51,    18,   659,
      23,    23,    43,    57,    58,    59,    26,    26,    47,    48,
      49,    50,    51,    22,    43,     1,    36,    26,    57,    58,
      59,    41,    42,    43,    44,    11,    46,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     1,    24,    26,
      94,    95,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    22,    23,     1,    94,    95,    21,    27,    23,
      27,    30,    27,    30,    28,    30,    40,    41,    27,    39,
      51,    30,    27,    26,    21,    30,    57,    58,    23,    24,
      27,    28,    23,    47,    48,    49,    50,    51,    24,    94,
      27,    26,    43,    57,    58,    59,    27,    43,    27,   530,
      47,    48,    49,    50,    51,    86,    87,    88,    89,    90,
      57,    58,    59,    94,    95,    43,    43,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    61,    22,     1,
      94,    95,    26,    43,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    77,    23,    94,    95,    21,
      26,    22,    40,    23,    44,    27,    28,    41,    52,    53,
      54,    55,    56,     1,    21,    26,    22,    22,    41,    23,
      27,    28,    24,    40,    22,    47,    48,    49,    50,    51,
      18,    43,     1,    43,    23,    57,    58,    59,    26,    40,
      47,    48,    49,    50,    51,    40,    40,    23,    36,    23,
      57,    58,    59,    41,    42,    43,    44,    40,    46,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    23,
      40,    22,    94,    95,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    41,    44,    94,    95,    41,
      40,    23,    23,    10,    11,    24,    13,    12,    39,    23,
      17,    18,    23,    20,    23,    23,    23,    24,    25,    26,
      23,    23,    23,    23,    31,    32,    33,    34,    35,    36,
      23,    23,    23,    27,    41,    42,    43,    44,    12,    46,
       4,     5,     6,     7,     8,     9,    41,    23,    27,    12,
      57,    58,    41,    60,    61,    62,    63,    64,    65,    66,
      67,    23,    68,    41,    68,    40,    73,    74,    25,    76,
      23,    78,    32,    43,    33,   494,    83,   602,     1,    86,
      87,    88,   632,   489,   134,    92,    93,    10,    11,   117,
      13,    -1,    -1,    92,    17,    18,    67,    20,    -1,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,     1,    86,    87,    88,    -1,    -1,    -1,    92,
      93,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,     1,    86,    87,    88,
      -1,    -1,    -1,    92,    93,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
       1,    86,    87,    88,    -1,    -1,    -1,    92,    93,    10,
      11,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,     1,    86,    87,    88,    -1,    -1,
      -1,    92,    93,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,     1,    86,
      87,    88,    -1,    -1,    -1,    92,    93,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,     1,    86,    87,    88,    -1,    -1,    -1,    92,
      93,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,     1,    86,    87,    88,
      -1,    -1,    -1,    92,    93,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
       1,    86,    87,    88,    -1,    -1,    -1,    92,    93,    10,
      11,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,     1,    86,    87,    88,    -1,    -1,
      -1,    92,    93,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,     1,    86,
      87,    88,    -1,    -1,    -1,    92,    93,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,     1,    86,    87,    88,    -1,    -1,    -1,    92,
      93,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,     1,    86,    87,    88,
      -1,    -1,    -1,    92,    93,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
       1,    86,    87,    88,    -1,    -1,    -1,    92,    93,    10,
      11,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,     1,    86,    87,    88,    -1,    -1,
      -1,    92,    93,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,     1,    86,
      87,    88,    -1,    -1,    -1,    92,    93,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,     1,    86,    87,    88,    -1,    -1,    -1,    92,
      93,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,     1,    86,    87,    88,
      -1,    -1,    -1,    92,    93,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    18,    -1,    20,    22,    -1,    23,    24,
      26,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    -1,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
       1,    86,    87,    88,    -1,    -1,    -1,    92,    93,    10,
      11,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,     1,    86,    87,    88,    -1,    -1,
      -1,    92,    93,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,     1,    86,
      87,    88,    -1,    -1,    -1,    92,    93,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      23,    24,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,     1,    86,    87,    88,    -1,    -1,    -1,    92,
      93,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    23,    24,    -1,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    10,    -1,    83,    -1,    -1,    86,    87,    88,
      18,    22,    -1,    92,    93,    26,    -1,    -1,    26,    -1,
      -1,    -1,     1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    10,    43,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    52,    53,    54,    55,    56,     1,    -1,    27,    57,
      58,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    18,    43,    73,    74,    51,    23,    -1,
      -1,    26,    -1,    57,    58,    83,    -1,    88,    86,    87,
      88,    36,    -1,    -1,    92,    93,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    74,    -1,    -1,    -1,     1,
      -1,    -1,    57,    58,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    36,    -1,    -1,    92,    93,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    47,    48,
      -1,    83,    51,    -1,    86,    87,    88,    36,    57,    58,
      92,    93,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    18,    -1,    73,    94,    95,    -1,    -1,    -1,
      26,    10,    -1,    -1,    83,    14,    -1,    86,    87,    88,
      36,    -1,    -1,    92,    93,    41,    42,    43,    44,    -1,
      46,    -1,    31,    32,    33,    34,    35,    36,     1,    -1,
      -1,    57,    58,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    26,    10,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    36,    -1,    74,    92,    93,    41,    42,
      43,    44,    -1,    46,    -1,    31,    32,    33,    34,    35,
      36,     1,    -1,    -1,    57,    58,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    26,    10,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    36,    -1,    74,    92,
      93,    41,    42,    43,    44,    -1,    46,    -1,    31,    32,
      33,    34,    35,    36,     1,    -1,    -1,    57,    58,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,
      10,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,
      -1,    74,    92,    93,    41,    42,    43,    44,    -1,    46,
      -1,    31,    32,    33,    34,    35,    36,     1,    -1,    -1,
      57,    58,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    36,    -1,    74,    92,    93,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,    93,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,
      -1,    92,    93,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    36,    -1,    -1,    92,    93,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    36,    -1,    -1,    92,    93,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,
      92,    93,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      36,    -1,    -1,    92,    93,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    36,    -1,    -1,    92,    93,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,
      93,    41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,
      -1,    -1,    92,    93,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    36,    -1,    -1,    92,    93,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,    93,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,
      -1,    92,    93,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    36,    -1,    -1,    92,    93,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    36,    -1,    -1,    92,    93,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,
      92,    93,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      36,    -1,    -1,    92,    93,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    36,    -1,    -1,    92,    93,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,
      93,    41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,
      -1,    -1,    92,    93,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    36,    -1,    -1,    92,    93,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,    93,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,
      -1,    92,    93,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    36,    -1,    -1,    92,    93,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    36,    -1,    -1,    92,    93,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,
      92,    93,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      36,    -1,    -1,    92,    93,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    36,    -1,    -1,    92,    93,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,
      93,    41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,
      -1,    -1,    92,    93,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    36,    -1,    -1,    92,    93,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,    93,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,
      -1,    92,    93,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    36,    -1,    -1,    92,    93,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    36,    -1,    -1,    92,    93,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,
      92,    93,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      36,    -1,    -1,    92,    93,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    36,    -1,    -1,    92,    93,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    36,    -1,    -1,    92,
      93,    41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    73,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    36,
      -1,    -1,    92,    93,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    36,    -1,    10,    92,    93,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    57,    58,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    10,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,    75,
      25,    10,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    93,    43,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,
      75,    21,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    70,    71,    72,    -1,    74,    75,    21,    93,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    93,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    21,    -1,    23,
      94,    95,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    21,    -1,    23,    94,    95,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    21,    -1,    -1,
      94,    95,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    21,    -1,    -1,    94,    95,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    40,    -1,    -1,    28,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    40,    -1,    57,    58,
      59,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    21,    -1,    -1,
      94,    95,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    21,    -1,    -1,    94,    95,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    47,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    21,    -1,    -1,
      94,    95,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    47,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    83,    84,    85,    86,    87,    88,    89,    90,
      21,    -1,    -1,    94,    95,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    47,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    27,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    98,   102,     0,     3,    99,     4,     5,     6,     7,
       8,     9,   100,   103,    10,    14,    31,    32,    33,    34,
      35,    36,    43,    74,   104,   107,    15,   107,    43,    88,
      16,    23,    23,    99,   103,   141,    69,   101,   142,     1,
      43,    10,   107,   108,   137,   138,    24,    68,   143,     1,
      19,     1,    43,   101,     1,    70,    71,    72,   144,   145,
     149,     1,    70,    71,    72,   150,     1,    24,     1,    26,
       1,    22,    26,    68,    68,    68,    25,    25,    43,    75,
      93,   107,   137,   138,   146,   148,   149,   153,   154,    75,
      93,   107,   147,   148,    43,   145,     1,    27,    43,     1,
      27,   107,   139,   140,    23,    23,    26,    93,   107,   137,
     138,    43,    43,   105,   107,   138,   148,   151,   152,    43,
      43,   144,   148,    25,     1,    24,   113,    26,    23,    74,
     113,     1,    43,    27,    30,     1,    18,    26,    36,    41,
      42,    43,    44,    46,    57,    58,    73,    83,    86,    87,
      88,    92,    93,   117,   118,   120,    43,     1,    43,    26,
      23,    26,    43,   106,   148,   152,    26,    23,    10,    11,
      13,    17,    20,    23,    25,    31,    32,    33,    34,    36,
      43,    60,    61,    62,    63,    64,    65,    74,    76,    78,
     105,   107,   109,   110,   111,   112,   113,   114,   115,   119,
     120,   123,   126,   127,   128,   130,   131,   132,   136,   155,
     118,   113,    23,    74,   113,   140,    57,    58,   120,    22,
      26,    52,    53,    54,    55,    56,     1,   120,     1,   120,
      94,     1,   120,     1,   120,     1,   120,     1,   120,     1,
     120,     1,   120,    27,    30,    21,    28,    47,    48,    49,
      50,    51,    57,    58,    59,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    94,    95,    26,    26,    27,
     139,    22,    23,    39,    23,    30,    27,     1,    43,   106,
       1,    26,     1,    23,   120,   156,     1,    28,     1,    51,
       1,    43,     1,    43,   106,     1,    43,     1,    43,    43,
       1,    26,     1,    26,     1,    24,   115,     1,    23,     1,
      23,     1,    26,    10,    36,     1,   113,   120,    43,    25,
     115,    23,    27,   113,    27,     1,   120,    27,   118,     1,
     120,     1,   120,     1,   120,     1,   120,     1,   120,    43,
     117,   113,   120,     1,   120,     1,   120,     1,   120,     1,
     120,     1,   120,     1,   120,     1,   120,     1,   120,     1,
     120,     1,   120,     1,   120,     1,   120,     1,   120,     1,
     120,     1,   120,     1,   120,     1,   120,     1,   120,    43,
     117,     1,   120,    27,    27,   139,   113,    27,    41,    43,
     120,    40,    41,    43,   113,     1,    22,    23,    39,    23,
       1,   120,    23,     1,    23,     1,    18,    26,    36,    41,
      42,    43,    44,    46,   117,   124,   125,     1,    43,   121,
     122,     1,    22,    23,    39,     1,    22,    23,    39,    23,
       1,    22,    23,    39,     1,    22,    23,    39,    22,    23,
      39,     1,    36,   107,   120,   129,     1,   120,     1,   114,
      61,     1,   120,    43,    43,    77,    23,    22,    23,    23,
      27,     1,    96,    23,   113,   113,    27,    23,   113,    26,
      23,    22,    40,    22,    39,     1,    41,   120,     1,    40,
      41,     1,    27,   120,    26,    39,    23,     1,    23,    28,
      39,    94,     1,    23,    51,     1,    44,    46,     1,    41,
       1,    41,   120,     1,    41,     1,    41,     1,    41,     1,
      37,    38,    41,     1,    41,    44,    41,    43,     1,    23,
       1,    27,     1,    25,    26,     1,    27,    22,    22,     1,
      26,     1,   120,    23,   118,    24,    23,    41,   120,    41,
       1,    23,    40,    22,     1,    40,     1,    24,   115,    27,
     120,   120,     1,    18,   124,   120,    43,   121,     1,    23,
      40,     1,    40,     1,    23,    40,     1,    40,     1,    23,
      40,     1,    40,    23,    23,     1,    23,    40,     1,    40,
      23,    40,    22,     1,   120,     1,    24,   115,     1,    61,
     120,     1,    24,    41,    44,    43,   107,    27,    41,   116,
      40,    23,    24,    23,     1,    25,   114,    12,    27,    40,
       1,    23,    40,    39,    23,    23,    23,    23,    23,    23,
      23,    23,    23,   120,     1,    23,   114,     1,    26,    27,
       1,    66,   133,   134,    23,    23,    27,    27,    43,    25,
      30,   116,    12,    25,   115,    41,     1,   120,    25,     1,
     120,    23,    41,     1,    67,   134,   135,   113,   113,    27,
      23,    41,    25,    11,    24,   130,    12,    40,     1,    27,
       1,    27,    68,    68,    25,   113,    23,    26,    25,   114,
       1,    24,   130,     1,    24,   115,     1,    23,     1,   114,
       1,   114,   120,    25,     1,    25,   114,   114,    27,    25,
      25,     1,    24,    25,   114,    25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   100,   100,   100,
     100,   101,   101,   101,   102,   102,   103,   103,   104,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   122,   122,   123,   123,   123,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   127,   128,   129,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   133,   134,   134,   135,   135,   135,
     136,   136,   136,   136,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   147,   147,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   152,   152,   153,   154,   155,   155,   155,   156
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    13,     0,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     2,     0,     2,     0,     3,     3,
       5,     6,     3,     9,     3,     1,     3,     3,     4,     3,
       5,     5,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     5,     2,     3,     4,     5,     2,     1,
       5,     7,     5,     9,     7,     2,     2,     3,     2,     3,
       2,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     3,     3,     1,     5,     6,
       3,     5,     6,     3,     5,     6,     3,     5,     6,     3,
       5,     6,     5,     5,     9,     3,     5,     6,     3,     3,
       6,     6,     2,     3,     4,     5,     2,     3,     4,     5,
       2,     3,     4,     5,     2,     3,     4,     5,     2,     3,
       4,     5,     6,     5,     6,     5,     6,     5,     6,     5,
       6,     5,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     3,     4,     5,     1,     4,     3,
       6,     1,     3,     4,     2,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     4,     4,     3,     1,
       4,     6,     4,     4,     2,     3,     4,     5,     6,     8,
       7,     7,     2,     4,     3,     4,     1,     7,     6,    11,
      10,    10,     9,     9,     8,     2,     3,     4,     5,     6,
       9,    10,    11,     7,     9,     2,     3,     4,     5,     6,
       7,     8,     9,     2,     3,     4,     5,     2,     3,     4,
       5,     6,     7,     8,     9,     8,     2,     3,     4,     5,
       6,     7,     2,     1,     0,     4,     4,     3,     3,     0,
       2,     2,     2,     2,     6,     5,     6,     5,     6,     7,
       8,     2,     3,     4,     1,     3,     2,     0,     2,     2,
       0,     6,     7,     6,     2,     4,     4,     3,     2,     3,
       0,     2,     0,     2,     1,     6,     7,     6,     6,     5,
       6,     6,     3,     2,     1,     3,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     5,     5,     3,     3,     2,     1
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
  case 44: /* main_func: INT error  */
#line 150 "parser.y"
                { yyerror("Missing 'main' after 'int'"); }
#line 2821 "parser.tab.c"
    break;

  case 45: /* main_func: INT MAIN error  */
#line 151 "parser.y"
                     { yyerror("Missing '(' after 'main'"); }
#line 2827 "parser.tab.c"
    break;

  case 46: /* main_func: INT MAIN LPAREN error  */
#line 152 "parser.y"
                            { yyerror("Missing ')' after '('"); }
#line 2833 "parser.tab.c"
    break;

  case 47: /* main_func: INT MAIN LPAREN RPAREN error  */
#line 153 "parser.y"
                                   { yyerror("Missing '{' to start main"); }
#line 2839 "parser.tab.c"
    break;

  case 112: /* decl: INT error  */
#line 257 "parser.y"
                { yyerror("Missing identifier after 'int'"); }
#line 2845 "parser.tab.c"
    break;

  case 113: /* decl: INT ID error  */
#line 258 "parser.y"
                   { yyerror("Expected ';' or '=' after variable name"); }
#line 2851 "parser.tab.c"
    break;

  case 114: /* decl: INT ID ASSIGN error  */
#line 259 "parser.y"
                          { yyerror("Missing value after '='"); }
#line 2857 "parser.tab.c"
    break;

  case 115: /* decl: INT ID ASSIGN NUMBER error  */
#line 260 "parser.y"
                                 { yyerror("Missing ';' after initialization"); }
#line 2863 "parser.tab.c"
    break;

  case 116: /* decl: CHAR error  */
#line 261 "parser.y"
                 { yyerror("Missing identifier after 'char'"); }
#line 2869 "parser.tab.c"
    break;

  case 117: /* decl: CHAR ID error  */
#line 262 "parser.y"
                    { yyerror("Expected ';' or '=' after variable name"); }
#line 2875 "parser.tab.c"
    break;

  case 118: /* decl: CHAR ID ASSIGN error  */
#line 263 "parser.y"
                           { yyerror("Missing value after '=' in char"); }
#line 2881 "parser.tab.c"
    break;

  case 119: /* decl: CHAR ID ASSIGN STRING_LITERAL error  */
#line 264 "parser.y"
                                          { yyerror("Missing ';' after initialization"); }
#line 2887 "parser.tab.c"
    break;

  case 120: /* decl: FLOAT error  */
#line 265 "parser.y"
                  { yyerror("Missing identifier after 'float'"); }
#line 2893 "parser.tab.c"
    break;

  case 121: /* decl: FLOAT ID error  */
#line 266 "parser.y"
                     { yyerror("Expected ';' or '=' after variable name"); }
#line 2899 "parser.tab.c"
    break;

  case 122: /* decl: FLOAT ID ASSIGN error  */
#line 267 "parser.y"
                            { yyerror("Missing value after '=' in float"); }
#line 2905 "parser.tab.c"
    break;

  case 123: /* decl: FLOAT ID ASSIGN NUMBER error  */
#line 268 "parser.y"
                                   { yyerror("Missing ';' after initialization"); }
#line 2911 "parser.tab.c"
    break;

  case 124: /* decl: DOUBLE error  */
#line 269 "parser.y"
                   { yyerror("Missing identifier after 'double'"); }
#line 2917 "parser.tab.c"
    break;

  case 125: /* decl: DOUBLE ID error  */
#line 270 "parser.y"
                      { yyerror("Expected ';' or '=' after variable name"); }
#line 2923 "parser.tab.c"
    break;

  case 126: /* decl: DOUBLE ID ASSIGN error  */
#line 271 "parser.y"
                             { yyerror("Missing value after '=' in double"); }
#line 2929 "parser.tab.c"
    break;

  case 127: /* decl: DOUBLE ID ASSIGN NUMBER error  */
#line 272 "parser.y"
                                    { yyerror("Missing ';' after initialization"); }
#line 2935 "parser.tab.c"
    break;

  case 128: /* decl: BOOL error  */
#line 273 "parser.y"
                 { yyerror("Missing identifier after 'bool'"); }
#line 2941 "parser.tab.c"
    break;

  case 129: /* decl: BOOL ID error  */
#line 274 "parser.y"
                    { yyerror("Expected ';' or '=' after variable name"); }
#line 2947 "parser.tab.c"
    break;

  case 130: /* decl: BOOL ID ASSIGN error  */
#line 275 "parser.y"
                           { yyerror("Missing value after '=' in bool"); }
#line 2953 "parser.tab.c"
    break;

  case 131: /* decl: BOOL ID ASSIGN NUMBER error  */
#line 276 "parser.y"
                                  { yyerror("Missing ';' after initialization"); }
#line 2959 "parser.tab.c"
    break;

  case 132: /* decl: INT ID LBRACKET error RBRACKET SEMICOLON  */
#line 277 "parser.y"
                                               { yyerror("Missing size in int array declaration"); }
#line 2965 "parser.tab.c"
    break;

  case 133: /* decl: INT ID LBRACKET NUMBER error  */
#line 278 "parser.y"
                                   { yyerror("Missing ']' in int array declaration"); }
#line 2971 "parser.tab.c"
    break;

  case 134: /* decl: CHAR ID LBRACKET error RBRACKET SEMICOLON  */
#line 279 "parser.y"
                                                { yyerror("Missing size in char array declaration"); }
#line 2977 "parser.tab.c"
    break;

  case 135: /* decl: CHAR ID LBRACKET NUMBER error  */
#line 280 "parser.y"
                                    { yyerror("Missing ']' in char array declaration"); }
#line 2983 "parser.tab.c"
    break;

  case 136: /* decl: FLOAT ID LBRACKET error RBRACKET SEMICOLON  */
#line 281 "parser.y"
                                                 { yyerror("Missing size in float array declaration"); }
#line 2989 "parser.tab.c"
    break;

  case 137: /* decl: FLOAT ID LBRACKET NUMBER error  */
#line 282 "parser.y"
                                     { yyerror("Missing ']' in float array declaration"); }
#line 2995 "parser.tab.c"
    break;

  case 138: /* decl: DOUBLE ID LBRACKET error RBRACKET SEMICOLON  */
#line 283 "parser.y"
                                                  { yyerror("Missing size in double array declaration"); }
#line 3001 "parser.tab.c"
    break;

  case 139: /* decl: DOUBLE ID LBRACKET NUMBER error  */
#line 284 "parser.y"
                                      { yyerror("Missing ']' in double array declaration"); }
#line 3007 "parser.tab.c"
    break;

  case 140: /* decl: BOOL ID LBRACKET error RBRACKET SEMICOLON  */
#line 285 "parser.y"
                                                { yyerror("Missing size in bool array declaration"); }
#line 3013 "parser.tab.c"
    break;

  case 141: /* decl: BOOL ID LBRACKET NUMBER error  */
#line 286 "parser.y"
                                    { yyerror("Missing ']' in bool array declaration"); }
#line 3019 "parser.tab.c"
    break;

  case 159: /* expr: '*' error  */
#line 307 "parser.y"
                         { yyerror("Expected pointer expression after '*'"); }
#line 3025 "parser.tab.c"
    break;

  case 160: /* expr: '&' error  */
#line 308 "parser.y"
                         { yyerror("Expected variable after '&'"); }
#line 3031 "parser.tab.c"
    break;

  case 161: /* expr: error INC  */
#line 309 "parser.y"
                { yyerror("Missing variable before '++'"); }
#line 3037 "parser.tab.c"
    break;

  case 162: /* expr: error DEC  */
#line 310 "parser.y"
                { yyerror("Missing variable before '--'"); }
#line 3043 "parser.tab.c"
    break;

  case 169: /* expr: INC error  */
#line 317 "parser.y"
                { yyerror("Missing variable after '++'"); }
#line 3049 "parser.tab.c"
    break;

  case 170: /* expr: DEC error  */
#line 318 "parser.y"
                { yyerror("Missing variable after '--'"); }
#line 3055 "parser.tab.c"
    break;

  case 171: /* expr: '+' error  */
#line 319 "parser.y"
                { yyerror("Missing operand after '+'"); }
#line 3061 "parser.tab.c"
    break;

  case 172: /* expr: '-' error  */
#line 320 "parser.y"
                { yyerror("Missing operand after '-'"); }
#line 3067 "parser.tab.c"
    break;

  case 173: /* expr: '!' error  */
#line 321 "parser.y"
                { yyerror("Missing operand after '!'"); }
#line 3073 "parser.tab.c"
    break;

  case 174: /* expr: '~' error  */
#line 322 "parser.y"
                { yyerror("Missing operand after '~'"); }
#line 3079 "parser.tab.c"
    break;

  case 180: /* expr: expr '+' error  */
#line 328 "parser.y"
                     { yyerror("Missing operand after '+'"); }
#line 3085 "parser.tab.c"
    break;

  case 181: /* expr: expr '-' error  */
#line 329 "parser.y"
                     { yyerror("Missing operand after '-'"); }
#line 3091 "parser.tab.c"
    break;

  case 182: /* expr: expr '*' error  */
#line 330 "parser.y"
                     { yyerror("Missing operand after '*'"); }
#line 3097 "parser.tab.c"
    break;

  case 183: /* expr: expr '/' error  */
#line 331 "parser.y"
                     { yyerror("Missing operand after '/'"); }
#line 3103 "parser.tab.c"
    break;

  case 184: /* expr: expr '%' error  */
#line 332 "parser.y"
                     { yyerror("Missing operand after '%'"); }
#line 3109 "parser.tab.c"
    break;

  case 191: /* expr: expr EQ error  */
#line 339 "parser.y"
                    { yyerror("Missing operand after '=='"); }
#line 3115 "parser.tab.c"
    break;

  case 192: /* expr: expr NE error  */
#line 340 "parser.y"
                    { yyerror("Missing operand after '!='"); }
#line 3121 "parser.tab.c"
    break;

  case 193: /* expr: expr '<' error  */
#line 341 "parser.y"
                     { yyerror("Missing operand after '<'"); }
#line 3127 "parser.tab.c"
    break;

  case 194: /* expr: expr '>' error  */
#line 342 "parser.y"
                     { yyerror("Missing operand after '>'"); }
#line 3133 "parser.tab.c"
    break;

  case 195: /* expr: expr LE error  */
#line 343 "parser.y"
                    { yyerror("Missing operand after '<='"); }
#line 3139 "parser.tab.c"
    break;

  case 196: /* expr: expr GE error  */
#line 344 "parser.y"
                    { yyerror("Missing operand after '>='"); }
#line 3145 "parser.tab.c"
    break;

  case 199: /* expr: expr AND error  */
#line 347 "parser.y"
                     { yyerror("Missing operand after '&&'"); }
#line 3151 "parser.tab.c"
    break;

  case 200: /* expr: expr OR error  */
#line 348 "parser.y"
                    { yyerror("Missing operand after '||'"); }
#line 3157 "parser.tab.c"
    break;

  case 206: /* expr: expr '&' error  */
#line 354 "parser.y"
                     { yyerror("Missing operand after '&'"); }
#line 3163 "parser.tab.c"
    break;

  case 207: /* expr: expr '|' error  */
#line 355 "parser.y"
                     { yyerror("Missing operand after '|'"); }
#line 3169 "parser.tab.c"
    break;

  case 208: /* expr: expr '^' error  */
#line 356 "parser.y"
                     { yyerror("Missing operand after '^'"); }
#line 3175 "parser.tab.c"
    break;

  case 209: /* expr: expr SHIFTLEFT error  */
#line 357 "parser.y"
                           { yyerror("Missing operand after '<<'"); }
#line 3181 "parser.tab.c"
    break;

  case 210: /* expr: expr SHIFTRIGHT error  */
#line 358 "parser.y"
                            { yyerror("Missing operand after '>>'"); }
#line 3187 "parser.tab.c"
    break;

  case 217: /* expr: ID ASSIGN error  */
#line 365 "parser.y"
                      { yyerror("Missing expression after '='"); }
#line 3193 "parser.tab.c"
    break;

  case 218: /* expr: ID ADD_ASSIGN error  */
#line 366 "parser.y"
                          { yyerror("Missing expression after '+='"); }
#line 3199 "parser.tab.c"
    break;

  case 219: /* expr: ID SUB_ASSIGN error  */
#line 367 "parser.y"
                          { yyerror("Missing expression after '-='"); }
#line 3205 "parser.tab.c"
    break;

  case 220: /* expr: ID MUL_ASSIGN error  */
#line 368 "parser.y"
                          { yyerror("Missing expression after '*='"); }
#line 3211 "parser.tab.c"
    break;

  case 221: /* expr: ID DIV_ASSIGN error  */
#line 369 "parser.y"
                          { yyerror("Missing expression after '/='"); }
#line 3217 "parser.tab.c"
    break;

  case 222: /* expr: ID MOD_ASSIGN error  */
#line 370 "parser.y"
                          { yyerror("Missing expression after '%='"); }
#line 3223 "parser.tab.c"
    break;

  case 224: /* expr: expr '?' error  */
#line 372 "parser.y"
                     { yyerror("Missing middle expression in ternary operator"); }
#line 3229 "parser.tab.c"
    break;

  case 225: /* expr: expr '?' expr error  */
#line 373 "parser.y"
                          { yyerror("Missing ':' in ternary operator"); }
#line 3235 "parser.tab.c"
    break;

  case 226: /* expr: expr '?' expr ':' error  */
#line 374 "parser.y"
                              { yyerror("Missing third expression in ternary operator"); }
#line 3241 "parser.tab.c"
    break;

  case 234: /* input_stmt: CIN error  */
#line 394 "parser.y"
                { yyerror("Missing '>>' after cin"); }
#line 3247 "parser.tab.c"
    break;

  case 235: /* input_stmt: CIN SHIFTRIGHT error  */
#line 395 "parser.y"
                           { yyerror("Missing variable after '>>'"); }
#line 3253 "parser.tab.c"
    break;

  case 236: /* input_stmt: CIN SHIFTRIGHT input_list error  */
#line 396 "parser.y"
                                      { yyerror("Missing semicolon"); }
#line 3259 "parser.tab.c"
    break;

  case 253: /* output_stmt: COUT SHIFTLEFT output_list error  */
#line 424 "parser.y"
                                       {yyerror("Missing '<<' or ';' after expression");}
#line 3265 "parser.tab.c"
    break;

  case 254: /* output_stmt: COUT error  */
#line 425 "parser.y"
                 { yyerror("Invalid output statement"); }
#line 3271 "parser.tab.c"
    break;

  case 255: /* output_stmt: COUT SHIFTLEFT error  */
#line 426 "parser.y"
                           { yyerror("Missing expression after '<<'"); }
#line 3277 "parser.tab.c"
    break;

  case 256: /* output_stmt: COUT SHIFTLEFT output_list error  */
#line 427 "parser.y"
                                       { yyerror("Missing '<<' or ';' after expression"); }
#line 3283 "parser.tab.c"
    break;

  case 257: /* output_stmt: COUT SHIFTLEFT output_list SHIFTLEFT error  */
#line 428 "parser.y"
                                                 { yyerror("Missing expression or 'endl' after '<<'"); }
#line 3289 "parser.tab.c"
    break;

  case 258: /* output_stmt: COUT SHIFTLEFT output_list SHIFTLEFT ENDL error  */
#line 429 "parser.y"
                                                      { yyerror("Missing ';' after 'endl'"); }
#line 3295 "parser.tab.c"
    break;

  case 262: /* try_catch_stmt: TRY error  */
#line 437 "parser.y"
                { yyerror("Malformed try block"); }
#line 3301 "parser.tab.c"
    break;

  case 263: /* try_catch_stmt: TRY compound_stmt CATCH error  */
#line 438 "parser.y"
                                    { yyerror("Malformed catch block"); }
#line 3307 "parser.tab.c"
    break;

  case 275: /* if_stmt: IF error  */
#line 465 "parser.y"
               { yyerror("Syntax Error: Missing '(' after 'if'"); }
#line 3313 "parser.tab.c"
    break;

  case 276: /* if_stmt: IF LPAREN error  */
#line 466 "parser.y"
                      { yyerror("Syntax Error: Missing condition inside 'if'"); }
#line 3319 "parser.tab.c"
    break;

  case 277: /* if_stmt: IF LPAREN expr error  */
#line 467 "parser.y"
                           { yyerror("Syntax Error: Missing ')' after condition in 'if'"); }
#line 3325 "parser.tab.c"
    break;

  case 278: /* if_stmt: IF LPAREN expr RPAREN error  */
#line 468 "parser.y"
                                  { yyerror("Syntax Error: Missing '{' to start 'if' block"); }
#line 3331 "parser.tab.c"
    break;

  case 279: /* if_stmt: IF LPAREN expr RPAREN LBRACE error  */
#line 469 "parser.y"
                                         { yyerror("Syntax Error: Invalid statements inside 'if' block"); }
#line 3337 "parser.tab.c"
    break;

  case 280: /* if_stmt: IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE error  */
#line 470 "parser.y"
                                                           { yyerror("Syntax Error: Missing '{' or 'if' after 'else'"); }
#line 3343 "parser.tab.c"
    break;

  case 281: /* if_stmt: IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE LBRACE error  */
#line 471 "parser.y"
                                                                  { yyerror("Syntax Error: Invalid statements inside 'else' block"); }
#line 3349 "parser.tab.c"
    break;

  case 285: /* loop_stmt: FOR error  */
#line 481 "parser.y"
                { yyerror("Missing '(' after 'for'"); }
#line 3355 "parser.tab.c"
    break;

  case 286: /* loop_stmt: FOR LPAREN error  */
#line 482 "parser.y"
                       { yyerror("Missing initialization expression or declaration in 'for'"); }
#line 3361 "parser.tab.c"
    break;

  case 287: /* loop_stmt: FOR LPAREN for_init error  */
#line 483 "parser.y"
                                { yyerror("Missing ';' after initialization in 'for'"); }
#line 3367 "parser.tab.c"
    break;

  case 288: /* loop_stmt: FOR LPAREN for_init SEMICOLON error  */
#line 484 "parser.y"
                                          { yyerror("Missing condition expression in 'for'"); }
#line 3373 "parser.tab.c"
    break;

  case 289: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr error  */
#line 485 "parser.y"
                                               { yyerror("Missing ';' after condition in 'for'"); }
#line 3379 "parser.tab.c"
    break;

  case 290: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr SEMICOLON error  */
#line 486 "parser.y"
                                                         { yyerror("Missing increment expression in 'for'"); }
#line 3385 "parser.tab.c"
    break;

  case 291: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr SEMICOLON expr error  */
#line 487 "parser.y"
                                                              { yyerror("Missing ')' after 'for' expressions"); }
#line 3391 "parser.tab.c"
    break;

  case 292: /* loop_stmt: FOR LPAREN for_init SEMICOLON expr SEMICOLON expr RPAREN error  */
#line 488 "parser.y"
                                                                     { yyerror("Missing '{' after 'for' loop"); }
#line 3397 "parser.tab.c"
    break;

  case 293: /* loop_stmt: WHILE error  */
#line 491 "parser.y"
                  { yyerror("Missing '(' after 'while'"); }
#line 3403 "parser.tab.c"
    break;

  case 294: /* loop_stmt: WHILE LPAREN error  */
#line 492 "parser.y"
                         { yyerror("Missing condition inside 'while'"); }
#line 3409 "parser.tab.c"
    break;

  case 295: /* loop_stmt: WHILE LPAREN expr error  */
#line 493 "parser.y"
                              { yyerror("Missing ')' after 'while' condition"); }
#line 3415 "parser.tab.c"
    break;

  case 296: /* loop_stmt: WHILE LPAREN expr RPAREN error  */
#line 494 "parser.y"
                                     { yyerror("Missing '{' after 'while' condition"); }
#line 3421 "parser.tab.c"
    break;

  case 297: /* loop_stmt: DO error  */
#line 497 "parser.y"
               { yyerror("Missing '{' after 'do'"); }
#line 3427 "parser.tab.c"
    break;

  case 298: /* loop_stmt: DO LBRACE error  */
#line 498 "parser.y"
                      { yyerror("Missing statements inside 'do'"); }
#line 3433 "parser.tab.c"
    break;

  case 299: /* loop_stmt: DO LBRACE stmts error  */
#line 499 "parser.y"
                            { yyerror("Missing '}' after 'do' block"); }
#line 3439 "parser.tab.c"
    break;

  case 300: /* loop_stmt: DO LBRACE stmts RBRACE error  */
#line 500 "parser.y"
                                   { yyerror("Missing 'while' after 'do' block"); }
#line 3445 "parser.tab.c"
    break;

  case 301: /* loop_stmt: DO LBRACE stmts RBRACE WHILE error  */
#line 501 "parser.y"
                                         { yyerror("Missing '(' after 'while' in 'do-while'"); }
#line 3451 "parser.tab.c"
    break;

  case 302: /* loop_stmt: DO LBRACE stmts RBRACE WHILE LPAREN error  */
#line 502 "parser.y"
                                                { yyerror("Missing condition inside 'do-while'"); }
#line 3457 "parser.tab.c"
    break;

  case 303: /* loop_stmt: DO LBRACE stmts RBRACE WHILE LPAREN expr error  */
#line 503 "parser.y"
                                                     { yyerror("Missing ')' after 'do-while' condition"); }
#line 3463 "parser.tab.c"
    break;

  case 304: /* loop_stmt: DO LBRACE stmts RBRACE WHILE LPAREN expr RPAREN error  */
#line 504 "parser.y"
                                                            { yyerror("Missing ';' after 'do-while'"); }
#line 3469 "parser.tab.c"
    break;

  case 306: /* switch_stmt: SWITCH error  */
#line 512 "parser.y"
                   { yyerror("Missing '(' after 'switch'"); }
#line 3475 "parser.tab.c"
    break;

  case 307: /* switch_stmt: SWITCH LPAREN error  */
#line 513 "parser.y"
                          { yyerror("Missing expression inside 'switch'"); }
#line 3481 "parser.tab.c"
    break;

  case 308: /* switch_stmt: SWITCH LPAREN expr error  */
#line 514 "parser.y"
                               { yyerror("Missing ')' after switch condition"); }
#line 3487 "parser.tab.c"
    break;

  case 309: /* switch_stmt: SWITCH LPAREN expr RPAREN error  */
#line 515 "parser.y"
                                      { yyerror("Missing '{' to start switch body"); }
#line 3493 "parser.tab.c"
    break;

  case 310: /* switch_stmt: SWITCH LPAREN expr RPAREN LBRACE error  */
#line 516 "parser.y"
                                             { yyerror("Invalid or missing case/default blocks inside switch"); }
#line 3499 "parser.tab.c"
    break;

  case 311: /* switch_stmt: SWITCH LPAREN expr RPAREN LBRACE case_blocks error  */
#line 517 "parser.y"
                                                         { yyerror("Missing default block or closing '}' in switch"); }
#line 3505 "parser.tab.c"
    break;

  case 316: /* case_block: CASE NUMBER COLON error  */
#line 528 "parser.y"
                              { yyerror("Missing statements inside case block"); }
#line 3511 "parser.tab.c"
    break;

  case 318: /* default_block_opt: DEFAULT COLON error  */
#line 533 "parser.y"
                          { yyerror("Missing statements inside default block"); }
#line 3517 "parser.tab.c"
    break;

  case 322: /* control_stmt: BREAK error  */
#line 542 "parser.y"
                  { yyerror("Missing ';' after 'break'"); }
#line 3523 "parser.tab.c"
    break;

  case 323: /* control_stmt: CONTINUE error  */
#line 543 "parser.y"
                     { yyerror("Missing ';' after 'continue'"); }
#line 3529 "parser.tab.c"
    break;

  case 331: /* function_def: type_specifier error  */
#line 559 "parser.y"
                           { yyerror("Missing function name"); }
#line 3535 "parser.tab.c"
    break;

  case 332: /* function_def: type_specifier ID error  */
#line 560 "parser.y"
                              { yyerror("Missing '(' after function name"); }
#line 3541 "parser.tab.c"
    break;

  case 333: /* function_def: type_specifier ID LPAREN error  */
#line 561 "parser.y"
                                     { yyerror("Bad parameter list"); }
#line 3547 "parser.tab.c"
    break;

  case 338: /* param: type_specifier error  */
#line 573 "parser.y"
                           { yyerror("Missing parameter name"); }
#line 3553 "parser.tab.c"
    break;

  case 344: /* class_def: CLASS error  */
#line 587 "parser.y"
                  { yyerror("Missing class name after 'class'"); }
#line 3559 "parser.tab.c"
    break;

  case 345: /* class_def: CLASS ID inheritance error  */
#line 588 "parser.y"
                                 { yyerror("Missing '{' after class declaration with inheritance"); }
#line 3565 "parser.tab.c"
    break;

  case 346: /* class_def: CLASS ID LBRACE error  */
#line 589 "parser.y"
                            { yyerror("Invalid class body"); }
#line 3571 "parser.tab.c"
    break;

  case 348: /* inheritance: COLON error  */
#line 594 "parser.y"
                  { yyerror("Invalid inheritance syntax"); }
#line 3577 "parser.tab.c"
    break;

  case 362: /* class_member: VIRTUAL type_specifier error  */
#line 617 "parser.y"
                                 { yyerror("Invalid virtual function"); }
#line 3583 "parser.tab.c"
    break;

  case 387: /* return_stmt: RETURN return_expr error  */
#line 669 "parser.y"
        { yyerror("Missing ';' after return value"); }
#line 3589 "parser.tab.c"
    break;

  case 388: /* return_stmt: RETURN error  */
#line 671 "parser.y"
        { yyerror("Missing return value after 'return'"); }
#line 3595 "parser.tab.c"
    break;


#line 3599 "parser.tab.c"

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

#line 679 "parser.y"


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
