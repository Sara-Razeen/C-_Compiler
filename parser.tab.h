/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    HEADER_INCLUDE = 258,          /* HEADER_INCLUDE  */
    PREPROCESSOR_DEFINE = 259,     /* PREPROCESSOR_DEFINE  */
    PREPROCESSOR_IFDEF = 260,      /* PREPROCESSOR_IFDEF  */
    PREPROCESSOR_ENDIF = 261,      /* PREPROCESSOR_ENDIF  */
    PREPROCESSOR_IFNDEF = 262,     /* PREPROCESSOR_IFNDEF  */
    PREPROCESSOR_ELSE = 263,       /* PREPROCESSOR_ELSE  */
    PREPROCESSOR_UNDEF = 264,      /* PREPROCESSOR_UNDEF  */
    INT = 265,                     /* INT  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    RETURN = 268,                  /* RETURN  */
    USING = 269,                   /* USING  */
    NAMESPACE = 270,               /* NAMESPACE  */
    STD = 271,                     /* STD  */
    COUT = 272,                    /* COUT  */
    ENDL = 273,                    /* ENDL  */
    MAIN = 274,                    /* MAIN  */
    CIN = 275,                     /* CIN  */
    EQ = 276,                      /* EQ  */
    ASSIGN = 277,                  /* ASSIGN  */
    SEMICOLON = 278,               /* SEMICOLON  */
    LBRACE = 279,                  /* LBRACE  */
    RBRACE = 280,                  /* RBRACE  */
    LPAREN = 281,                  /* LPAREN  */
    RPAREN = 282,                  /* RPAREN  */
    SHIFTLEFT = 283,               /* SHIFTLEFT  */
    DOUBLE_QUOTE = 284,            /* DOUBLE_QUOTE  */
    COMMA = 285,                   /* COMMA  */
    CHAR = 286,                    /* CHAR  */
    FLOAT = 287,                   /* FLOAT  */
    DOUBLE = 288,                  /* DOUBLE  */
    BOOL = 289,                    /* BOOL  */
    VOID = 290,                    /* VOID  */
    STRING = 291,                  /* STRING  */
    TRUE = 292,                    /* TRUE  */
    FALSE = 293,                   /* FALSE  */
    LBRACKET = 294,                /* LBRACKET  */
    RBRACKET = 295,                /* RBRACKET  */
    NUMBER = 296,                  /* NUMBER  */
    FLOAT_NUM = 297,               /* FLOAT_NUM  */
    ID = 298,                      /* ID  */
    STRING_LITERAL = 299,          /* STRING_LITERAL  */
    CONSTANT = 300,                /* CONSTANT  */
    CHAR_LITERAL = 301,            /* CHAR_LITERAL  */
    LE = 302,                      /* LE  */
    GE = 303,                      /* GE  */
    AND = 304,                     /* AND  */
    OR = 305,                      /* OR  */
    SHIFTRIGHT = 306,              /* SHIFTRIGHT  */
    ADD_ASSIGN = 307,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 308,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 309,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 310,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 311,              /* MOD_ASSIGN  */
    INC = 312,                     /* INC  */
    DEC = 313,                     /* DEC  */
    NE = 314,                      /* NE  */
    FOR = 315,                     /* FOR  */
    WHILE = 316,                   /* WHILE  */
    DO = 317,                      /* DO  */
    BREAK = 318,                   /* BREAK  */
    CONTINUE = 319,                /* CONTINUE  */
    SWITCH = 320,                  /* SWITCH  */
    CASE = 321,                    /* CASE  */
    DEFAULT = 322,                 /* DEFAULT  */
    COLON = 323,                   /* COLON  */
    CLASS = 324,                   /* CLASS  */
    PUBLIC = 325,                  /* PUBLIC  */
    PRIVATE = 326,                 /* PRIVATE  */
    PROTECTED = 327,               /* PROTECTED  */
    THIS = 328,                    /* THIS  */
    CONST = 329,                   /* CONST  */
    VIRTUAL = 330,                 /* VIRTUAL  */
    TRY = 331,                     /* TRY  */
    CATCH = 332,                   /* CATCH  */
    THROW = 333,                   /* THROW  */
    FUNC_CALL = 334,               /* FUNC_CALL  */
    UMINUS = 335,                  /* UMINUS  */
    SHIFTRIGH = 336                /* SHIFTRIGH  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "parser.y"

    int num;
    double fnum;
    char* id;

#line 151 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
