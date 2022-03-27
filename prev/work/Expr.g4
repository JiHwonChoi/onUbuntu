/* Expr.g4 */
grammar Expr;

// parser rules
prog : (assn ';' NEWLINE? | expr ';' NEWLINE?)*;
expr : expr ('*'|'/') expr
     | expr ('+'|'-') expr
     | num
     | ID
     | '(' expr ')'
	;
assn : ID '=' num
;
num : INT
	| DOUBLE
;


// lexer rules
NEWLINE: [\r\n]+ ;
INT    : '-'?[0-9]+ ;
DOUBLE : ('+'|'-')?[0-9]+'.'[0-9]+ ;
WS     : [ \t\r\n]+ -> skip;
ID     : [a-zA-Z_][a-zA-Z_0-9]* ;

 
