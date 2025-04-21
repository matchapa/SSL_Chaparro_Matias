%{
#include "parser.tab.h"
int yyerror (char *s);
%}

%option noyywrap
%option yylineno

operador_de_asignacion                                  "="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="
operador_unario                                         "&"|"*"|"+"|"-"|"~"|"!"
identificador											[a-zA-Z_][a-zA-Z0-9_]*
cadena                                                  \"[^\n"]*\"
constante_decimal                                       -?[1-9][0-9]*
constante_octal                                         0[0-7]*
constante_hexadecimal                                   0[xX][0-9a-fA-F]+
constante_entera                                        [{constante_decimal}|{constante_octal}|{constante_hexadecimal}]
constante_flotante                                      [0-9]*[.][0-9]+([eE][+-]?[0-9]+)?|[0-9]+[eE][+-]?[0-9]+ 
constante_caracter                                      \'.\'
tipo_de_dato 											void|char|short|int|long|float|double|signed|unsigned



%%


","                                                     { return ','; }
"?"						    					        { return '?'; }
":"							    						{ return ':'; }
"|"                                                     { return '|'; }
"^"									    				{ return '^'; }
"&"										    			{ return '&'; }
"<"										    			{ return '<'; }
">"										    			{ return '>'; }
"+"										    			{ return '+'; }
"-"										    			{ return '-'; }
"*"										    			{ return '*'; }
"/"										    			{ return '/'; }
"%"										    			{ return '%'; }
"("										    			{ return '('; }
")"										    			{ return ')'; }
"["										    			{ return '['; }
"]"										    			{ return ']'; }
"{"										    			{ return '{'; }
"}"										    			{ return '}'; }
"."										    			{ return '.'; }


"||"                                                    { return OR;}
"&&"		    									    { return AND; }
"=="			    									{ return IGUALDAD; }
"!="				    								{ return DISTINTO; }
"<="                                                    { return MENOR_IGUAL; }
">="                                                    { return MAYOR_IGUAL; }
"<<"							    					{ return DESPLAZAMIENTO_A_IZQUIERDA; }
">>"								    				{ return DESPLAZAMIENTO_A_DERECHA; }
"++"									    			{ return INCREMENTO; }
"--"										    		{ return DECREMENTO; }
"->"										    		{ return APUNTA; }


sizeof                                                  { return SIZEOF; }


{operador_de_asignacion}                                { return OPERADOR_DE_ASIGNACION; }
{operador_unario}                                       { return OPERADOR_UNARIO; }
{identificador}                                         { return IDENTIFICADOR; }
{cadena}                                                { return CADENA; }
{constante_entera}                                      { yylval.s.entero = atoi(yytext); return CONSTANTE_ENTERA; }
{constante_flotante}                                    { return CONSTANTE_FLOTANTE; }
{constante_caracter}                                    { return CONSTANTE_CARACTER; }
{tipo_de_dato}                                          { return TIPO_DE_DATO; }


[ \t\n]										    			{ ; }
.												    		{ yyerror("Caracter no valido"); }


%%