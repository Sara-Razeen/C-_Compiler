%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* pending_custom_msg = NULL;
extern int yylex();
extern FILE* yyin;
extern int line_no;
int error_count = 0;
void yyerror(const char *s);
FILE *token_table;
void print_token(const char *type, const char *value);
%}


%start program

%union {
    int num;
    double fnum;
    char* id;
}

%token HEADER_INCLUDE PREPROCESSOR_DEFINE PREPROCESSOR_IFDEF PREPROCESSOR_ENDIF PREPROCESSOR_IFNDEF PREPROCESSOR_ELSE PREPROCESSOR_UNDEF
%token INT IF ELSE RETURN USING NAMESPACE STD COUT ENDL MAIN CIN
%token EQ ASSIGN SEMICOLON LBRACE RBRACE LPAREN RPAREN SHIFTLEFT DOUBLE_QUOTE COMMA
%token CHAR FLOAT DOUBLE BOOL VOID STRING TRUE FALSE
%token LBRACKET RBRACKET
%token <num> NUMBER 
%token <fnum> FLOAT_NUM
%token <id> ID STRING_LITERAL CONSTANT CHAR_LITERAL 
%token LE GE AND OR SHIFTRIGHT
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%token INC DEC NE
%token FOR WHILE DO BREAK CONTINUE SWITCH CASE DEFAULT COLON 
%token CLASS PUBLIC PRIVATE PROTECTED THIS CONST VIRTUAL TRY CATCH THROW



%nonassoc LPAREN
%left FUNC_CALL        
%nonassoc UMINUS 
%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%left OR
%left AND
%left '|'
%left '^'
%left '&'
%left EQ NE
%left '<' '>' LE GE
%left SHIFTLEFT
%left '+' '-'
%left '*' '/' '%'
%left SHIFTRIGH
%right '!' '~' INC DEC


%%

program:
    includes 
    preprocessor_list declarations
    USING NAMESPACE STD SEMICOLON 
    preprocessor_list declarations
    class_defs
    function_defs 
    main_func
    function_defs 
    ;


preprocessor_list:
    /* empty */
    | preprocessor_list preprocessor_directive
    ;



preprocessor_directive:
    PREPROCESSOR_DEFINE 
    | PREPROCESSOR_IFDEF 
    | PREPROCESSOR_ENDIF
    | PREPROCESSOR_IFNDEF 
    | PREPROCESSOR_ELSE 
    | PREPROCESSOR_UNDEF
    ;


function_defs:
    function_defs function_def
    | function_defs function_decl 
    | /* empty */
    ;

includes:
    includes HEADER_INCLUDE
    | /* empty */
    ;

declarations:
    declarations declaration
    | /* empty */
    ;

declaration:
    type_specifier ID SEMICOLON
    ;

declaration_stmt:
    type_specifier ID SEMICOLON
    | type_specifier ID ASSIGN expr SEMICOLON
    | type_specifier ID LBRACKET NUMBER RBRACKET SEMICOLON
    | type_specifier ID SEMICOLON
    | type_specifier ID LBRACKET RBRACKET ASSIGN LBRACE number_list RBRACE SEMICOLON
    | type_specifier id_list SEMICOLON  /* This handles comma-separated lists */
    ;

/* Improved id_list rule */
id_list:
    ID
    | ID ASSIGN expr
    | ID ASSIGN NUMBER
    | ID LBRACKET NUMBER RBRACKET
    | id_list COMMA ID
    | id_list COMMA ID ASSIGN expr
    | id_list COMMA ID ASSIGN NUMBER
    | id_list COMMA ID LBRACKET NUMBER RBRACKET
    ;    

type_specifier:
    INT
    | FLOAT
    | DOUBLE
    | CHAR
    | BOOL
    | STRING
    | VOID
    | ID
    | CONST type_specifier
    |  type_specifier '*'
    ;
  

namespaces:
    USING NAMESPACE STD SEMICOLON
    | USING error { yyerror("Incorrect namespace syntax"); }
    ;

main_func:
    INT MAIN LPAREN RPAREN compound_stmt
    | INT error { yyerror("Missing 'main' after 'int'"); }
    | INT MAIN error { yyerror("Missing '(' after 'main'"); }
    | INT MAIN LPAREN error { yyerror("Missing ')' after '('"); }
    | INT MAIN LPAREN RPAREN error { yyerror("Missing '{' to start main"); }
    ;

expr_stmt:
    expr SEMICOLON
    | SEMICOLON
    ;

selection_stmt:
    IF LPAREN expr RPAREN stmt
    | IF LPAREN expr RPAREN stmt ELSE stmt
    ;

iteration_stmt:
    WHILE LPAREN expr RPAREN stmt
    | FOR LPAREN for_init SEMICOLON expr SEMICOLON expr RPAREN stmt
    | DO stmt WHILE LPAREN expr RPAREN SEMICOLON
    ;

jump_stmt:
    BREAK SEMICOLON
    | CONTINUE SEMICOLON
    | RETURN expr SEMICOLON
    | RETURN SEMICOLON
    ;

compound_stmt:
    LBRACE stmts RBRACE
    | LBRACE RBRACE  // empty block
    ;

stmts:
    stmts stmt
    | stmt
    | /* empty */
    ;

stmt:
    expr_stmt
    | selection_stmt
    | iteration_stmt
    | jump_stmt
    | compound_stmt
    | declaration_stmt
    | decl
    | if_stmt
    | loop_stmt
    | switch_stmt
    | control_stmt
    | output_stmt
    | return_stmt
    | input_stmt
    | try_catch_stmt
    | throw_stmt
    ;

    ;


number_list:
      NUMBER
    | number_list COMMA NUMBER
;

function_call:
    ID LPAREN arg_list RPAREN
    | ID LPAREN RPAREN
    ;

//function arguments
arg_list:
    expr
    | arg_list COMMA expr
    ;

decl:

    INT ID SEMICOLON
    | declaration_stmt 
    | INT ID ASSIGN expr SEMICOLON
    | INT ID LBRACKET NUMBER RBRACKET SEMICOLON
    | CHAR ID SEMICOLON
    | CHAR ID ASSIGN CHAR_LITERAL SEMICOLON
    | CHAR ID LBRACKET NUMBER RBRACKET SEMICOLON
    | FLOAT ID SEMICOLON
    | FLOAT ID ASSIGN NUMBER SEMICOLON
    | FLOAT ID LBRACKET NUMBER RBRACKET SEMICOLON
    | DOUBLE ID SEMICOLON
    | DOUBLE ID ASSIGN NUMBER SEMICOLON
    | DOUBLE ID LBRACKET NUMBER RBRACKET SEMICOLON
    | BOOL ID SEMICOLON
    | BOOL ID ASSIGN NUMBER SEMICOLON
    | BOOL ID LBRACKET NUMBER RBRACKET SEMICOLON
    | BOOL ID ASSIGN TRUE SEMICOLON
    | BOOL ID ASSIGN FALSE SEMICOLON
    | INT ID LBRACKET RBRACKET ASSIGN LBRACE number_list RBRACE SEMICOLON
    | STRING ID SEMICOLON
    | STRING ID ASSIGN STRING_LITERAL SEMICOLON
    | STRING ID LBRACKET NUMBER RBRACKET SEMICOLON
    | INT id_list SEMICOLON
    | FLOAT id_list SEMICOLON
    | CONST INT ID ASSIGN NUMBER SEMICOLON
    | CONST STRING ID ASSIGN STRING_LITERAL SEMICOLON
    /* your full error handling for decl */
    | INT error { yyerror("Missing identifier after 'int'"); }
    | INT ID error { yyerror("Expected ';' or '=' after variable name"); }
    | INT ID ASSIGN error { yyerror("Missing value after '='"); }
    | INT ID ASSIGN NUMBER error { yyerror("Missing ';' after initialization"); }
    | CHAR error { yyerror("Missing identifier after 'char'"); }
    | CHAR ID error { yyerror("Expected ';' or '=' after variable name"); }
    | CHAR ID ASSIGN error { yyerror("Missing value after '=' in char"); }
    | CHAR ID ASSIGN STRING_LITERAL error { yyerror("Missing ';' after initialization"); }
    | FLOAT error { yyerror("Missing identifier after 'float'"); }
    | FLOAT ID error { yyerror("Expected ';' or '=' after variable name"); }
    | FLOAT ID ASSIGN error { yyerror("Missing value after '=' in float"); }
    | FLOAT ID ASSIGN NUMBER error { yyerror("Missing ';' after initialization"); }
    | DOUBLE error { yyerror("Missing identifier after 'double'"); }
    | DOUBLE ID error { yyerror("Expected ';' or '=' after variable name"); }
    | DOUBLE ID ASSIGN error { yyerror("Missing value after '=' in double"); }
    | DOUBLE ID ASSIGN NUMBER error { yyerror("Missing ';' after initialization"); }
    | BOOL error { yyerror("Missing identifier after 'bool'"); }
    | BOOL ID error { yyerror("Expected ';' or '=' after variable name"); }
    | BOOL ID ASSIGN error { yyerror("Missing value after '=' in bool"); }
    | BOOL ID ASSIGN NUMBER error { yyerror("Missing ';' after initialization"); }
    | INT ID LBRACKET error RBRACKET SEMICOLON { yyerror("Missing size in int array declaration"); }
    | INT ID LBRACKET NUMBER error { yyerror("Missing ']' in int array declaration"); }
    | CHAR ID LBRACKET error RBRACKET SEMICOLON { yyerror("Missing size in char array declaration"); }
    | CHAR ID LBRACKET NUMBER error { yyerror("Missing ']' in char array declaration"); }
    | FLOAT ID LBRACKET error RBRACKET SEMICOLON { yyerror("Missing size in float array declaration"); }
    | FLOAT ID LBRACKET NUMBER error { yyerror("Missing ']' in float array declaration"); }
    | DOUBLE ID LBRACKET error RBRACKET SEMICOLON { yyerror("Missing size in double array declaration"); }
    | DOUBLE ID LBRACKET NUMBER error { yyerror("Missing ']' in double array declaration"); }
    | BOOL ID LBRACKET error RBRACKET SEMICOLON { yyerror("Missing size in bool array declaration"); }
    | BOOL ID LBRACKET NUMBER error { yyerror("Missing ']' in bool array declaration"); }
    ;

expr:
    ID
    | NUMBER
    | FLOAT_NUM
    | CHAR_LITERAL
    | STRING_LITERAL
    | ENDL
    | STRING
    | LPAREN expr RPAREN
    | function_call
    | expr '.' ID         // object.member
    | expr '.' function_call   // object.method()
    | THIS '.' ID
    | THIS '.' function_call
    | '*' expr           
    | '&' expr           
    | expr INC
    | expr DEC
    | '*' error          { yyerror("Expected pointer expression after '*'"); }
    | '&' error          { yyerror("Expected variable after '&'"); }
    | error INC { yyerror("Missing variable before '++'"); }
    | error DEC { yyerror("Missing variable before '--'"); }
    | '+' expr %prec UMINUS
    | '-' expr %prec UMINUS
    | '!' expr
    | '~' expr
    | INC expr
    | DEC expr
    | INC error { yyerror("Missing variable after '++'"); }
    | DEC error { yyerror("Missing variable after '--'"); }
    | '+' error { yyerror("Missing operand after '+'"); }
    | '-' error { yyerror("Missing operand after '-'"); }
    | '!' error { yyerror("Missing operand after '!'"); }
    | '~' error { yyerror("Missing operand after '~'"); }
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | expr '%' expr
    | expr '+' error { yyerror("Missing operand after '+'"); }
    | expr '-' error { yyerror("Missing operand after '-'"); }
    | expr '*' error { yyerror("Missing operand after '*'"); }
    | expr '/' error { yyerror("Missing operand after '/'"); }
    | expr '%' error { yyerror("Missing operand after '%'"); }
    | expr EQ expr
    | expr NE expr
    | expr '<' expr
    | expr '>' expr
    | expr LE expr
    | expr GE expr
    | expr EQ error { yyerror("Missing operand after '=='"); }
    | expr NE error { yyerror("Missing operand after '!='"); }
    | expr '<' error { yyerror("Missing operand after '<'"); }
    | expr '>' error { yyerror("Missing operand after '>'"); }
    | expr LE error { yyerror("Missing operand after '<='"); }
    | expr GE error { yyerror("Missing operand after '>='"); }
    | expr AND expr
    | expr OR expr
    | expr AND error { yyerror("Missing operand after '&&'"); }
    | expr OR error { yyerror("Missing operand after '||'"); }
    | expr '&' expr
    | expr '|' expr
    | expr '^' expr
    | expr SHIFTLEFT expr
    | expr SHIFTRIGHT expr
    | expr '&' error { yyerror("Missing operand after '&'"); }
    | expr '|' error { yyerror("Missing operand after '|'"); }
    | expr '^' error { yyerror("Missing operand after '^'"); }
    | expr SHIFTLEFT error { yyerror("Missing operand after '<<'"); }
    | expr SHIFTRIGHT error { yyerror("Missing operand after '>>'"); }
    | ID ASSIGN expr
    | ID ADD_ASSIGN expr
    | ID SUB_ASSIGN expr
    | ID MUL_ASSIGN expr
    | ID DIV_ASSIGN expr
    | ID MOD_ASSIGN expr
    | ID ASSIGN error { yyerror("Missing expression after '='"); }
    | ID ADD_ASSIGN error { yyerror("Missing expression after '+='"); }
    | ID SUB_ASSIGN error { yyerror("Missing expression after '-='"); }
    | ID MUL_ASSIGN error { yyerror("Missing expression after '*='"); }
    | ID DIV_ASSIGN error { yyerror("Missing expression after '/='"); }
    | ID MOD_ASSIGN error { yyerror("Missing expression after '%='"); }
    | expr '?' expr ':' expr
    | expr '?' error { yyerror("Missing middle expression in ternary operator"); }
    | expr '?' expr error { yyerror("Missing ':' in ternary operator"); }
    | expr '?' expr ':' error { yyerror("Missing third expression in ternary operator"); }
    ;



//Input_cin 
input_variable:
      ID
    | ID LBRACKET expr RBRACKET         // array access: arr[0]
    | ID '.' ID                           // member access: obj.field
    | ID '.' ID LBRACKET NUMBER RBRACKET  // member array access: obj.arr[1]
    ;

input_list:
      input_variable
    | input_list SHIFTRIGHT input_variable
    ;

input_stmt:
      CIN SHIFTRIGHT input_list SEMICOLON
    | CIN error { yyerror("Missing '>>' after cin"); }
    | CIN SHIFTRIGHT error { yyerror("Missing variable after '>>'"); }
    | CIN SHIFTRIGHT input_list error { yyerror("Missing semicolon"); }
    ;


//OUTPUT    
output_expr:
    ID
    | NUMBER
    | FLOAT_NUM
    | CHAR_LITERAL
    | STRING_LITERAL
    | ENDL
    | STRING
    | LPAREN expr RPAREN
    | function_call
    | ID LPAREN expr RPAREN
    | ID LBRACKET expr RBRACKET
    ;

output_list:
    output_list SHIFTLEFT output_expr
    | output_expr
    ;

output_stmt:
    COUT SHIFTLEFT output_list SEMICOLON
    | COUT SHIFTLEFT output_list SHIFTLEFT ENDL SEMICOLON
    | COUT SHIFTLEFT output_expr SEMICOLON
    | COUT SHIFTLEFT output_list error {yyerror("Missing '<<' or ';' after expression");}
    | COUT error { yyerror("Invalid output statement"); }
    | COUT SHIFTLEFT error { yyerror("Missing expression after '<<'"); }
    | COUT SHIFTLEFT output_list error { yyerror("Missing '<<' or ';' after expression"); }
    | COUT SHIFTLEFT output_list SHIFTLEFT error { yyerror("Missing expression or 'endl' after '<<'"); }
    | COUT SHIFTLEFT output_list SHIFTLEFT ENDL error { yyerror("Missing ';' after 'endl'"); }
    ;


try_catch_stmt:
      TRY compound_stmt CATCH LPAREN type_specifier ID RPAREN compound_stmt
    | TRY compound_stmt CATCH LPAREN type_specifier RPAREN compound_stmt
    | TRY compound_stmt CATCH LPAREN ID RPAREN compound_stmt
    | TRY error { yyerror("Malformed try block"); }
    | TRY compound_stmt CATCH error { yyerror("Malformed catch block"); }
    ;

throw_stmt:
    THROW expr SEMICOLON
    ;


for_init:
    type_specifier ID ASSIGN expr          // Declaration inside for
    | expr                                    // Normal assignment expr
    ;


if_stmt:
      IF LPAREN expr RPAREN LBRACE stmts RBRACE
    | IF LPAREN expr RPAREN LBRACE RBRACE
    | IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE LBRACE stmts RBRACE
    | IF LPAREN expr RPAREN LBRACE RBRACE ELSE LBRACE stmts RBRACE
    | IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE LBRACE RBRACE
    | IF LPAREN expr RPAREN LBRACE RBRACE ELSE LBRACE RBRACE

    // --- Else If (elseif) handling ---
    | IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE if_stmt
    | IF LPAREN expr RPAREN LBRACE RBRACE ELSE if_stmt

    // --- Error handling ---
    | IF error { yyerror("Syntax Error: Missing '(' after 'if'"); }
    | IF LPAREN error { yyerror("Syntax Error: Missing condition inside 'if'"); }
    | IF LPAREN expr error { yyerror("Syntax Error: Missing ')' after condition in 'if'"); }
    | IF LPAREN expr RPAREN error { yyerror("Syntax Error: Missing '{' to start 'if' block"); }
    | IF LPAREN expr RPAREN LBRACE error { yyerror("Syntax Error: Invalid statements inside 'if' block"); }
    | IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE error { yyerror("Syntax Error: Missing '{' or 'if' after 'else'"); }
    | IF LPAREN expr RPAREN LBRACE stmts RBRACE ELSE LBRACE error { yyerror("Syntax Error: Invalid statements inside 'else' block"); }
    ;


loop_stmt:
      FOR LPAREN for_init SEMICOLON expr SEMICOLON expr RPAREN LBRACE stmts RBRACE
    | WHILE LPAREN expr RPAREN LBRACE stmts RBRACE
    | DO LBRACE stmts RBRACE WHILE LPAREN expr RPAREN SEMICOLON

    // --- Error handling for FOR ---
    | FOR error { yyerror("Missing '(' after 'for'"); }
    | FOR LPAREN error { yyerror("Missing initialization expression or declaration in 'for'"); }
    | FOR LPAREN for_init error { yyerror("Missing ';' after initialization in 'for'"); }
    | FOR LPAREN for_init SEMICOLON error { yyerror("Missing condition expression in 'for'"); }
    | FOR LPAREN for_init SEMICOLON expr error { yyerror("Missing ';' after condition in 'for'"); }
    | FOR LPAREN for_init SEMICOLON expr SEMICOLON error { yyerror("Missing increment expression in 'for'"); }
    | FOR LPAREN for_init SEMICOLON expr SEMICOLON expr error { yyerror("Missing ')' after 'for' expressions"); }
    | FOR LPAREN for_init SEMICOLON expr SEMICOLON expr RPAREN error { yyerror("Missing '{' after 'for' loop"); }

    // --- Error handling for WHILE ---
    | WHILE error { yyerror("Missing '(' after 'while'"); }
    | WHILE LPAREN error { yyerror("Missing condition inside 'while'"); }
    | WHILE LPAREN expr error { yyerror("Missing ')' after 'while' condition"); }
    | WHILE LPAREN expr RPAREN error { yyerror("Missing '{' after 'while' condition"); }

    // --- Error handling for DO-WHILE ---
    | DO error { yyerror("Missing '{' after 'do'"); }
    | DO LBRACE error { yyerror("Missing statements inside 'do'"); }
    | DO LBRACE stmts error { yyerror("Missing '}' after 'do' block"); }
    | DO LBRACE stmts RBRACE error { yyerror("Missing 'while' after 'do' block"); }
    | DO LBRACE stmts RBRACE WHILE error { yyerror("Missing '(' after 'while' in 'do-while'"); }
    | DO LBRACE stmts RBRACE WHILE LPAREN error { yyerror("Missing condition inside 'do-while'"); }
    | DO LBRACE stmts RBRACE WHILE LPAREN expr error { yyerror("Missing ')' after 'do-while' condition"); }
    | DO LBRACE stmts RBRACE WHILE LPAREN expr RPAREN error { yyerror("Missing ';' after 'do-while'"); }
    ;


switch_stmt:
      SWITCH LPAREN expr RPAREN LBRACE case_blocks default_block_opt RBRACE

    // --- Error handling ---
    | SWITCH error { yyerror("Missing '(' after 'switch'"); }
    | SWITCH LPAREN error { yyerror("Missing expression inside 'switch'"); }
    | SWITCH LPAREN expr error { yyerror("Missing ')' after switch condition"); }
    | SWITCH LPAREN expr RPAREN error { yyerror("Missing '{' to start switch body"); }
    | SWITCH LPAREN expr RPAREN LBRACE error { yyerror("Invalid or missing case/default blocks inside switch"); }
    | SWITCH LPAREN expr RPAREN LBRACE case_blocks error { yyerror("Missing default block or closing '}' in switch"); }
    ;

case_blocks:
      case_blocks case_block
    | case_block
    | /* empty */
    ;

case_block:
      CASE NUMBER COLON stmts
    | CASE NUMBER COLON error { yyerror("Missing statements inside case block"); }
    ;

default_block_opt:
      DEFAULT COLON stmts
    | DEFAULT COLON error { yyerror("Missing statements inside default block"); }
    | /* empty */
    ;

control_stmt:
      BREAK SEMICOLON
    | CONTINUE SEMICOLON

    // --- Error handling ---
    | BREAK error { yyerror("Missing ';' after 'break'"); }
    | CONTINUE error { yyerror("Missing ';' after 'continue'"); }
    ;

//functions

function_decl:
    type_specifier ID LPAREN param_list RPAREN SEMICOLON
    | type_specifier ID LPAREN RPAREN SEMICOLON
    ;

function_def:
    type_specifier ID LPAREN param_list RPAREN compound_stmt
    | type_specifier ID LPAREN RPAREN compound_stmt
    | type_specifier ID LPAREN RPAREN  CONST compound_stmt
    | type_specifier ID LPAREN param_list RPAREN CONST compound_stmt
    | type_specifier ID ASSIGN ID LPAREN arg_list RPAREN SEMICOLON 
    | type_specifier error { yyerror("Missing function name"); }
    | type_specifier ID error { yyerror("Missing '(' after function name"); }
    | type_specifier ID LPAREN error { yyerror("Bad parameter list"); }
    ;


param_list:
    param
    | param_list COMMA param
    ;

param:
    type_specifier ID
    |/* empty */
    | type_specifier error { yyerror("Missing parameter name"); }
    ;

//classes
class_defs:
    class_defs class_def
    | /* empty */
    ;


class_def:
    CLASS ID LBRACE class_members RBRACE SEMICOLON
    | CLASS ID inheritance LBRACE class_members RBRACE SEMICOLON
    | CLASS ID LBRACE access_specifier_list RBRACE SEMICOLON
    | CLASS error { yyerror("Missing class name after 'class'"); }
    | CLASS ID inheritance error { yyerror("Missing '{' after class declaration with inheritance"); }
    | CLASS ID LBRACE error { yyerror("Invalid class body"); }
    ;

inheritance:
    COLON inheritance_specifier ID
    | COLON error { yyerror("Invalid inheritance syntax"); }
    ;

access_specifier_list:
    access_specifier member_declarations access_specifier_list
    | /* empty */
    ;

class_members:
    class_members class_member
    | /* empty */
    ;

class_member:
  access_specifier class_member_list
  | member_declaration
  | type_specifier ID LPAREN param_list RPAREN SEMICOLON
  | VIRTUAL type_specifier ID LPAREN param_list RPAREN SEMICOLON
  | type_specifier ID LPAREN param_list RPAREN compound_stmt
  | VIRTUAL type_specifier ID LPAREN RPAREN compound_stmt
  | '~'  ID LPAREN RPAREN compound_stmt 
  | VIRTUAL '~'  ID LPAREN RPAREN SEMICOLON 
  | VIRTUAL '~'  ID LPAREN RPAREN compound_stmt
  | VIRTUAL type_specifier error { yyerror("Invalid virtual function"); }
  ;

member_declarations:
    member_declarations member_declaration
    | member_declaration
    ;

member_declaration:
    type_specifier ID SEMICOLON
    | function_decl
    | function_def
    | destructor_def
    | constructor_def
    | VIRTUAL function_decl
    | VIRTUAL function_def
    ;

access_specifier:
    PUBLIC COLON
    | PRIVATE COLON
    | PROTECTED COLON
    ;

inheritance_specifier:
    PUBLIC 
    | PRIVATE 
    | PROTECTED 
    ;

class_member_list:
    class_member_list member_stmt
    | member_stmt
    | class_member_list member_declaration
    |  member_declaration
    ;

member_stmt:
    function_def
    | declaration_stmt
    ;

constructor_def:
    ID LPAREN arg_list RPAREN compound_stmt
    ;

destructor_def:
    '~'  ID LPAREN RPAREN compound_stmt
    ;
return_stmt:
      RETURN return_expr SEMICOLON
    | RETURN return_expr error 
        { yyerror("Missing ';' after return value"); }
    | RETURN error 
        { yyerror("Missing return value after 'return'"); }
    ;

return_expr:
    expr
  ;


%%

void print_token(const char *type, const char *value) {
    if (token_table) {
        fprintf(token_table, "| %-20s | %-10d | %-20s |\n", type, line_no, value);
    }
}




void yyerror(const char *s) {
    if (pending_custom_msg) {
        fprintf(stderr, "Error at line %d: %s\n", line_no, pending_custom_msg);
        pending_custom_msg = NULL;  // Reset after use
    } else {
        fprintf(stderr, "Error at line %d: %s\n", line_no, s);
    }
    error_count++;
}

void set_error_msg(const char *msg) {
    // Free previous message if it exists
    if (pending_custom_msg) {
        free((void*)pending_custom_msg);
    }
    // Duplicate the new message
    pending_custom_msg = strdup(msg);
    if (!pending_custom_msg) {
        perror("Failed to allocate error message");
        exit(1);
    }
}

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("File open failed");
            return 1;
        }
    }

    token_table = fopen("token_table.txt", "w");
    if (!token_table) {
        perror("Could not open token_table.txt");
        return 1;
    }

    fprintf(token_table, "+----------------------+------------+----------------------+\n");
    fprintf(token_table, "| %-20s | %-10s | %-20s |\n", "Token", "Line", "Value");
    fprintf(token_table, "+----------------------+------------+----------------------+\n");

    yyparse();
    if (pending_custom_msg) {
        free(pending_custom_msg);
    }
    
    fprintf(token_table, "+----------------------+------------+----------------------+\n");
    fclose(token_table);

    return error_count > 0 ? 1 : 0;
}