%{ // Definiciones y declariaciones de C 
#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"

extern int yylex();
extern FILE * yyin;
extern int yylineno;
void yyerror(char *s);
%} 

// Definiciones de Bison
%error-verbose

%union {
    struct yylval_struct{
        char *cadena;
        int tipo;
        int entero;
        float real;
    } s;
}

%token <s> OPERADOR_DE_ASIGNACION
%token <s> OR
%token <s> AND
%token <s> IGUALDAD
%token <s> DISTINTO
%token <s> MENOR_IGUAL
%token <s> MAYOR_IGUAL
%token <s> DESPLAZAMIENTO_A_DERECHA
%token <s> DESPLAZAMIENTO_A_IZQUIERDA
%token <s> INCREMENTO
%token <s> DECREMENTO
%token <s> OPERADOR_UNARIO
%token <s> SIZEOF
%token <s> APUNTA
%token <s> IDENTIFICADOR
%token <s> CADENA
%token <s> CONSTANTE_ENTERA
%token <s> CONSTANTE_FLOTANTE
%token <s> CONSTANTE_CARACTER
%token <s> TIPO_DE_DATO

%right '='
%left '+' '-'
%left '*' '/' '%'
%left '^'
%left '(' ')'
%left '<' '>'
%left '?' ':'
%left OR
%left AND
%left '|'
%left '&'
%left IGUALDAD DISTINTO
%left MENOR_IGUAL MAYOR_IGUAL
%left DESPLAZAMIENTO_A_DERECHA DESPLAZAMIENTO_A_IZQUIERDA
%left '~' '!'
%left '[' ']'
%left '{' '}'


%start expresion

%% // Reglas

// EXPRESIONES -> DECLARACIONES -> SENTENCIAS

// Constantes
constante:
        CONSTANTE_ENTERA
    |   CONSTANTE_FLOTANTE
    |   CONSTANTE_CARACTER
;

// Expresiones
expresion:
        expresion_de_asignacion
    |   expresion ',' expresion_de_asignacion
;

expresion_de_asignacion:
        expresion_condicional
    |   expresion_unaria OPERADOR_DE_ASIGNACION expresion_de_asignacion
;

expresion_condicional:
        expresion_O_logico
    |   expresion_O_logico '?' expresion ':' expresion_condicional
;

expresion_O_logico:
        expresion_Y_logico
    |   expresion_O_logico OR expresion_Y_logico
;

expresion_Y_logico:
        expresion_O_inclusivo
    |   expresion_Y_logico AND expresion_O_inclusivo
;

expresion_O_inclusivo:
        expresion_O_excluyente
    |   expresion_O_inclusivo '|' expresion_O_excluyente
;

expresion_O_excluyente:
        expresion_Y
    |   expresion_O_excluyente '^' expresion_Y
;

expresion_Y:
        expresion_de_igualdad
    |   expresion_Y '&' expresion_de_igualdad
;

expresion_de_igualdad:
        expresion_relacional
    |   expresion_de_igualdad IGUALDAD expresion_relacional
    |   expresion_de_igualdad DISTINTO expresion_relacional
;

expresion_relacional:
        expresion_de_corrimiento
    |   expresion_relacional '<' expresion_de_corrimiento
    |   expresion_relacional '>' expresion_de_corrimiento
    |   expresion_relacional MENOR_IGUAL expresion_de_corrimiento
    |   expresion_relacional MAYOR_IGUAL expresion_de_corrimiento
 ;

 expresion_de_corrimiento:
        expresion_aditiva
    |   expresion_de_corrimiento DESPLAZAMIENTO_A_IZQUIERDA expresion_aditiva
    |   expresion_de_corrimiento DESPLAZAMIENTO_A_DERECHA expresion_aditiva
;

expresion_aditiva:
        expresion_multiplicativa
    |   expresion_aditiva '+' expresion_multiplicativa
    |   expresion_aditiva '-' expresion_multiplicativa
;

expresion_multiplicativa:
        expresion_de_conversion
    |   expresion_multiplicativa '*' expresion_de_conversion
    |   expresion_multiplicativa '/' expresion_de_conversion
    |   expresion_multiplicativa '%' expresion_de_conversion
;

expresion_de_conversion:
        expresion_unaria
    |   '(' nombre_de_tipo ')' expresion_de_conversion
;

expresion_unaria:
        expresion_sufijo
    |   INCREMENTO expresion_unaria
    |   DECREMENTO expresion_unaria
    |   OPERADOR_UNARIO expresion_de_conversion
    |   SIZEOF expresion_unaria
    |   SIZEOF '(' nombre_de_tipo ')'
;

expresion_sufijo:
        expresion_primaria
    |   expresion_sufijo '[' expresion ']'
    |   expresion_sufijo '(' lista_de_argumentos_opt ')'
    |   expresion_sufijo '.' IDENTIFICADOR
    |   expresion_sufijo APUNTA IDENTIFICADOR
    |   expresion_sufijo INCREMENTO
    |   expresion_sufijo DECREMENTO
;

lista_de_argumentos_opt:
        lista_de_argumentos
    |
;

lista_de_argumentos:
        expresion_de_asignacion
    |   lista_de_argumentos ',' expresion_de_asignacion
;

expresion_primaria:
        IDENTIFICADOR
    |   constante
    |   CADENA
    |   '(' expresion ')'

/* expresion_constante: expresion_condicional; */

// Declaraciones


nombre_de_tipo:
        TIPO_DE_DATO 
    |
; // EXPANDIR A PUNTERO, STRUCT, ENUM, TYPEDEF




%% // Codigo C

void yyerror(char *s){
	printf("Error en la linea %d: %s\n", yylineno, s);
}

int main(int argc, const char *argv[]){
    #if YYDEBUG
        yydebug = 1;
    #endif

    // Verifica que se este pasando la cantidad correcta de argumentos, siendo uno el archivo a analizar
    if(argc != 2){
        puts("Error: Se requiere el nombre del archivo a analizar. Ej: ./a.exe \"archivo.c\" ");
        return 1;
    }
    yyin = fopen(argv[1], "r");
    yyparse();
    return 0;
}