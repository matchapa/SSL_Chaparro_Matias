%{
#include "parser.tab.h"
#include <string.h>
int yyerror (char *s);
%}

constante_decimal										    [1-9][0-9]*
constante_octal                                             0[0-7]*
constante_hexadecimal                                       0[xX][0-9a-fA-F]+
constante_entera                                            [{constante_decimal}|{constante_octal}|{constante_hexadecimal}]
constante_flotante                                          [0-9]*[.][0-9]+([eE][+-]?[0-9]+)?|[0-9]+[eE][+-]?[0-9]+ 
constante_caracter                                          \'.\'
cadena                                                      \"[^\n"]*\"
tipo_de_dato 											    void|char|short|int|long|float|double|signed|unsigned
calificador_de_tipo											const|volatile
identificador											    [a-zA-Z_][a-zA-Z0-9_]*
operador_de_asignacion                                      "="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="
operador_unario                                             "&"|"*"|"+"|"-"|"~"|"!"
struct_o_union                                              struct|union


%option noyywrap
%option yylineno


%% 

";"                                                         { return ';'; }
"("                                                         { return '('; }
")"                                                         { return ')'; }
"{"				    										{ return '{'; }
"}"					    									{ return '}'; }
"?"						    								{ return '?'; }
":"							    							{ return ':'; }
"|"								    						{ return '|'; }
"^"									    					{ return '^'; }
"&"										    				{ return '&'; }
"<"											    			{ return '<'; }
">"												    		{ return '>'; }
"+"													    	{ return '+'; }
"-"														    { return '-'; }
"*"															{ return '*'; }
"/"			    											{ return '/'; }
"%"	    													{ return '%'; }
"~"		    												{ return '~'; }
"!"				    										{ return '!'; } 
"["					    									{ return '['; }
"]"						    								{ return ']'; }
"."							    							{ return '.'; }
"="								    						{ return '='; }
","                                                         { return ','; }

"..."                                                       { return ELIPSIS; }
"||"	    												{ return OR; }
"&&"		    											{ return AND; }
"=="			    										{ return IGUALDAD; }
"!="				    									{ return DISTINTO; }
"<="					    								{ return MENOR_IGUAL; }
">="						    							{ return MAYOR_IGUAL; }
"<<"							    						{ return DESPLAZAMIENTO_A_IZQUIERDA; }
">>"								    					{ return DESPLAZAMIENTO_A_DERECHA; }
"++"									    				{ return INCREMENTO; }
"--"										    			{ return DECREMENTO; }
"->"											    		{ return APUNTA; }	

                                                        



auto                                                        { return AUTO; }
register                                                    { return REGISTER; }
static                                                      { return STATIC; }
extern                                                      { return EXTERN; }
typedef                                                     { return TYPEDEF; }
enum                                                        { return ENUM; }
case                                                        { return CASE; }
default                                                     { return DEFAULT; }
if                                                          { return IF; }
else                                                        { return ELSE; }
switch                                                      { return SWITCH; }
while                                                       { return WHILE; }
do                                                          { return DO; }
for                                                         { return FOR; }
goto                                                        { return GOTO; }
continue                                                    { return CONTINUE; }
break                                                       { return BREAK; }
return                                                      { return RETURN; }
sizeof											    	    { return SIZEOF; }

{tipo_de_dato}                                              { strcpy(yylval.s.cadena, yytext); return TIPO_DE_DATO; }
{calificador_de_tipo}                                       { return CALIFICADOR_DE_TIPO; }
{identificador}                                             { strcpy(yylval.s.cadena, yytext); return IDENTIFICADOR; }
{operador_de_asignacion}                                    { return OPERADOR_DE_ASIGNACION; }
{operador_unario}                                           { return OPERADOR_UNARIO; }
{constante_entera}                                          { yylval.s.entero = atoi(yytext); return CONSTANTE_ENTERA; }
{constante_caracter}                                        { return CONSTANTE_CARACTER; }
{constante_flotante}                                        { return CONSTANTE_FLOTANTE; }
{cadena}                                                    { return CADENA; }
{struct_o_union}                                            { return STRUCT_O_UNION; }

[ \t\n]										    			{ ; }
.												    		{ yyerror(yytext); }


%%