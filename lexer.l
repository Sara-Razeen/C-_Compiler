%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"

int line_no = 1;
extern void print_token(const char *type, const char *value); 


%}

%option noyywrap

DIGIT       [0-9]
ID_START    [a-zA-Z_]
ID_CHAR     [a-zA-Z0-9_]
WS          [ \t]+
CHAR_CONST  \'(\\[abfnrtv\\'\"]|.)\'  
STRING_CONST \"(\\[abfnrtv\\'\"]|[^\\"])*\"

%%

{WS}                     { /* skip whitespace */ }
\n                       { line_no++; }


"#include"[ \t]*"<"[^>]+">"   { print_token("HEADER_INCLUDE", yytext); return HEADER_INCLUDE; }
"#include"[ \t]*\"[^"]+\"     { print_token("HEADER_INCLUDE", yytext); return HEADER_INCLUDE; }

"using"                 { print_token("KEYWORD", yytext); return USING; }
"namespace"             { print_token("KEYWORD", yytext); return NAMESPACE; }
"std"                   { print_token("KEYWORD", yytext); return STD; }
"cout"                  { print_token("KEYWORD", yytext); return COUT; }
"endl"                  { print_token("KEYWORD", yytext); return ENDL; }
"main"                  { print_token("KEYWORD", yytext); return MAIN; }
"int"                   { print_token("KEYWORD", yytext); return INT; }
"char"                  { print_token("KEYWORD", yytext); return CHAR; }
"float"                 { print_token("KEYWORD", yytext); return FLOAT; }
"double"                { print_token("KEYWORD", yytext); return DOUBLE; }
"string"                { print_token("KEYWORD", yytext); return STRING; }
"bool"                  { print_token("KEYWORD", yytext); return BOOL; }
"if"                    { print_token("KEYWORD", yytext); return IF; }
"else"                  { print_token("KEYWORD", yytext); return ELSE; }
"for"                   { print_token("KEYWORD", yytext); return FOR; }
"while"                 { print_token("KEYWORD", yytext); return WHILE; }
"do"                    { print_token("KEYWORD", yytext); return DO; }
"switch"                { print_token("KEYWORD", yytext); return SWITCH; }
"case"                  { print_token("KEYWORD", yytext); return CASE; }
"default"               { print_token("KEYWORD", yytext); return DEFAULT; }
"break"                 { print_token("KEYWORD", yytext); return BREAK; }
"continue"              { print_token("KEYWORD", yytext); return CONTINUE; }
"return"                { print_token("KEYWORD", yytext); return RETURN; }
"void"                  { print_token("KEYWORD", yytext); return VOID; }
"const"                 { print_token("KEYWORD", yytext); return CONST; }
"true"                  { print_token("KEYWORD", yytext); return TRUE; }
"false"                 { print_token("KEYWORD", yytext); return FALSE; }
"cin"                   { print_token("KEYWORD", yytext); return CIN; }
"class"                 { print_token("KEYWORD", yytext); return CLASS; }
"public"                { print_token("KEYWORD", yytext); return PUBLIC; }
"private"               { print_token("KEYWORD", yytext); return PRIVATE; }
"protected"             { print_token("KEYWORD", yytext); return PROTECTED; }
"this"                  { print_token("KEYWORD", yytext); return THIS; }
"virtual"               { print_token("KEYWORD", yytext); return VIRTUAL; }
"try"                   { print_token("KEYWORD", yytext); return TRY; }
"catch"                 { print_token("KEYWORD", yytext); return CATCH; }
"throw"                 { print_token("KEYWORD", yytext); return THROW; }

{DIGIT}+"."{DIGIT}+     { yylval.fnum = atof(yytext); print_token("LITERAL_FLOAT", yytext); return FLOAT_NUM; }
{DIGIT}+                { yylval.num = atoi(yytext); print_token("LITERAL_NUMBER", yytext); return NUMBER; }
{CHAR_CONST}            { yylval.id = strdup(yytext); print_token("LITERAL_CHAR", yytext); return CHAR_LITERAL; }
{STRING_CONST}          { yylval.id = strdup(yytext); print_token("LITERAL_STRING", yytext); return STRING_LITERAL; }

{ID_START}{ID_CHAR}*    { yylval.id = strdup(yytext); print_token("IDENTIFIER", yytext); return ID; }

"//".*                  { /* Ignore single line comment */ }
"/*"([^*]|\*+[^*/])*"*/" { /* Ignore multi-line comment */ }

"~"                     { print_token("OPERATOR", yytext); return '~'; }
"=="                    { print_token("OPERATOR", yytext); return EQ; }
"="                     { print_token("OPERATOR", yytext); return ASSIGN; }
"!="                    { print_token("OPERATOR", yytext); return NE; }
"<="                    { print_token("OPERATOR", yytext); return LE; }
">="                    { print_token("OPERATOR", yytext); return GE; }
"&&"                    { print_token("OPERATOR", yytext); return AND; }
"||"                    { print_token("OPERATOR", yytext); return OR; }
"<<"                    { print_token("OPERATOR", yytext); return SHIFTLEFT; }
">>"                    { print_token("OPERATOR", yytext); return SHIFTRIGHT; }
"+="                    { print_token("OPERATOR", yytext); return ADD_ASSIGN; }
"-="                    { print_token("OPERATOR", yytext); return SUB_ASSIGN; }
"*="                    { print_token("OPERATOR", yytext); return MUL_ASSIGN; }
"/="                    { print_token("OPERATOR", yytext); return DIV_ASSIGN; }
"%="                    { print_token("OPERATOR", yytext); return MOD_ASSIGN; }
"++"                    { print_token("OPERATOR", yytext); return INC; }
"--"                    { print_token("OPERATOR", yytext); return DEC; }

";"                     { print_token("PUNCTUATION", yytext); return SEMICOLON; }
","                     { print_token("PUNCTUATION", yytext); return COMMA; }
"\""                   { print_token("PUNCTUATION", yytext); return '"'; }
"{"                     { print_token("PUNCTUATION", yytext); return LBRACE; }
"}"                     { print_token("PUNCTUATION", yytext); return RBRACE; }
"("                     { print_token("PUNCTUATION", yytext); return LPAREN; }
")"                     { print_token("PUNCTUATION", yytext); return RPAREN; }
"["                     { print_token("PUNCTUATION", yytext); return LBRACKET; }
"]"                     { print_token("PUNCTUATION", yytext); return RBRACKET; }
"<"                     { print_token("PUNCTUATION", yytext); return '<'; }
">"                     { print_token("PUNCTUATION", yytext); return '>'; }
"&"                     { print_token("PUNCTUATION", yytext); return '&'; }
"|"                     { print_token("PUNCTUATION", yytext); return '|'; }
"^"                     { print_token("PUNCTUATION", yytext); return '^'; }
"!"                     { print_token("PUNCTUATION", yytext); return '!'; }
"+"                     { print_token("PUNCTUATION", yytext); return '+'; }
"-"                     { print_token("PUNCTUATION", yytext); return '-'; }
"*"                     { print_token("PUNCTUATION", yytext); return '*'; }
"/"                     { print_token("PUNCTUATION", yytext); return '/'; }
"%"                     { print_token("PUNCTUATION", yytext); return '%'; }
"?"                     { print_token("PUNCTUATION", yytext); return '?'; }
":"                     { print_token("PUNCTUATION", yytext); return COLON; }
"."                     { print_token("PUNCTUATION", yytext); return '.'; }

.                       { printf("Unknown character: %c at line %d\n", *yytext, line_no); }

%%
