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
    INT = 259,                     /* INT  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    RETURN = 262,                  /* RETURN  */
    USING = 263,                   /* USING  */
    NAMESPACE = 264,               /* NAMESPACE  */
    STD = 265,                     /* STD  */
    COUT = 266,                    /* COUT  */
    ENDL = 267,                    /* ENDL  */
    MAIN = 268,                    /* MAIN  */
    CIN = 269,                     /* CIN  */
    EQ = 270,                      /* EQ  */
    ASSIGN = 271,                  /* ASSIGN  */
    SEMICOLON = 272,               /* SEMICOLON  */
    LBRACE = 273,                  /* LBRACE  */
    RBRACE = 274,                  /* RBRACE  */
    LPAREN = 275,                  /* LPAREN  */
    RPAREN = 276,                  /* RPAREN  */
    SHIFTLEFT = 277,               /* SHIFTLEFT  */
    DOUBLE_QUOTE = 278,            /* DOUBLE_QUOTE  */
    COMMA = 279,                   /* COMMA  */
    CHAR = 280,                    /* CHAR  */
    FLOAT = 281,                   /* FLOAT  */
    DOUBLE = 282,                  /* DOUBLE  */
    BOOL = 283,                    /* BOOL  */
    VOID = 284,                    /* VOID  */
    STRING = 285,                  /* STRING  */
    TRUE = 286,                    /* TRUE  */
    FALSE = 287,                   /* FALSE  */
    LBRACKET = 288,                /* LBRACKET  */
    RBRACKET = 289,                /* RBRACKET  */
    NUMBER = 290,                  /* NUMBER  */
    FLOAT_NUM = 291,               /* FLOAT_NUM  */
    ID = 292,                      /* ID  */
    STRING_LITERAL = 293,          /* STRING_LITERAL  */
    CONSTANT = 294,                /* CONSTANT  */
    CHAR_LITERAL = 295,            /* CHAR_LITERAL  */
    LE = 296,                      /* LE  */
    GE = 297,                      /* GE  */
    AND = 298,                     /* AND  */
    OR = 299,                      /* OR  */
    SHIFTRIGHT = 300,              /* SHIFTRIGHT  */
    ADD_ASSIGN = 301,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 302,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 303,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 304,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 305,              /* MOD_ASSIGN  */
    INC = 306,                     /* INC  */
    DEC = 307,                     /* DEC  */
    NE = 308,                      /* NE  */
    FOR = 309,                     /* FOR  */
    WHILE = 310,                   /* WHILE  */
    DO = 311,                      /* DO  */
    BREAK = 312,                   /* BREAK  */
    CONTINUE = 313,                /* CONTINUE  */
    SWITCH = 314,                  /* SWITCH  */
    CASE = 315,                    /* CASE  */
    DEFAULT = 316,                 /* DEFAULT  */
    COLON = 317,                   /* COLON  */
    CLASS = 318,                   /* CLASS  */
    PUBLIC = 319,                  /* PUBLIC  */
    PRIVATE = 320,                 /* PRIVATE  */
    PROTECTED = 321,               /* PROTECTED  */
    THIS = 322,                    /* THIS  */
    CONST = 323,                   /* CONST  */
    VIRTUAL = 324,                 /* VIRTUAL  */
    TRY = 325,                     /* TRY  */
    CATCH = 326,                   /* CATCH  */
    THROW = 327,                   /* THROW  */
    FUNC_CALL = 328,               /* FUNC_CALL  */
    UMINUS = 329,                  /* UMINUS  */
    SHIFTRIGH = 330                /* SHIFTRIGH  */
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

#line 145 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
