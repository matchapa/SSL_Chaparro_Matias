%{ // Definiciones y declariaciones de C 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
        char cadena[200];
        int tipo;
        int entero;
        float real;
    } s;
}



// %token son terminales
%token <s> TIPO_DE_DATO
%token <s> IDENTIFICADOR
%token <s> CALIFICADOR_DE_TIPO
%token <s> STRUCT_O_UNION
%token <s> ENUM
%token <s> ELIPSIS
%token <s> CASE
%token <s> DEFAULT
%token <s> IF
%token <s> SWITCH
%token <s> ELSE
%token <s> DO
%token <s> WHILE
%token <s> FOR
%token <s> GOTO
%token <s> CONTINUE
%token <s> BREAK
%token <s> RETURN
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
%token <s> SIZEOF
%token <s> OPERADOR_UNARIO
%token <s> APUNTA
%token <s> CADENA
%token <s> CONSTANTE_ENTERA
%token <s> CONSTANTE_CARACTER
%token <s> CONSTANTE_FLOTANTE
%token <s> AUTO
%token <s> REGISTER
%token <s> STATIC
%token <s> EXTERN
%token <s> TYPEDEF

%type <s> declarador_directo
%type <s> especificadores_de_declaracion
%type <s> declarador


// Menor Precedencia
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
// Mayor Precedencia

%nonassoc THEN
%nonassoc ELSE

%start unidad_de_traduccion

%% // Reglas

unidad_de_traduccion:		
		declaracion_externa
	|	unidad_de_traduccion declaracion_externa
;

declaracion_externa:
        definicion_de_funcion
    |   declaracion
;

definicion_de_funcion:
        especificadores_de_declaracion declarador lista_de_declaraciones proposicion_compuesta
    |   especificadores_de_declaracion declarador proposicion_compuesta
    |   declarador lista_de_declaraciones proposicion_compuesta
    |   declarador proposicion_compuesta
;

declaracion:
        especificadores_de_declaracion lista_declaradores_init ';'
    |   especificadores_de_declaracion ';'
;

lista_de_declaraciones:
        declaracion
    |   lista_de_declaraciones  declaracion
;

especificadores_de_declaracion:
        especificador_de_categoria_de_almacenamiento opt_especificadores_de_declaracion
    |   especificador_de_tipo opt_especificadores_de_declaracion
    |   CALIFICADOR_DE_TIPO opt_especificadores_de_declaracion
;

especificador_de_categoria_de_almacenamiento:
        AUTO
    |   REGISTER
    |   STATIC
    |   EXTERN
    |   TYPEDEF
;

opt_especificadores_de_declaracion:
        especificadores_de_declaracion
    |
;

especificador_de_tipo:
        TIPO_DE_DATO
    |   especificador_estructura_o_union
    |   especificador_enum
;

especificador_estructura_o_union:
        STRUCT_O_UNION IDENTIFICADOR '{' lista_declaraciones_struct '}'
    |   STRUCT_O_UNION '{' lista_declaraciones_struct '}'
    |   STRUCT_O_UNION IDENTIFICADOR
;

lista_declaraciones_struct:
        declaracion_struct
    |   lista_declaraciones_struct declaracion_struct
;

lista_declaradores_init:
        declarador_init
    |   lista_declaradores_init ',' declarador_init
;

declarador_init:
        declarador
    |   declarador '=' inicializador
;

declaracion_struct:
        lista_calificador_especificador lista_declaradores_struct ';'
;

lista_calificador_especificador:
        especificador_de_tipo lista_calificador_especificador
    |   especificador_de_tipo
    |   CALIFICADOR_DE_TIPO lista_calificador_especificador
    |   CALIFICADOR_DE_TIPO
;

lista_declaradores_struct:
        declarador_struct
    |   lista_declaradores_struct ',' declarador_struct
;

declarador_struct: 
        declarador 
    /* |   declarador ':' expresion_constante */
    /* |   ':' expresion_constante */
;

especificador_enum:
        ENUM IDENTIFICADOR '{' lista_de_enumerador '}'
    |   ENUM '{' lista_de_enumerador '}'
    |   ENUM IDENTIFICADOR
;

lista_de_enumerador:
        enumerador
    |   lista_de_enumerador ',' enumerador
;

enumerador:
        IDENTIFICADOR
    |   IDENTIFICADOR '=' expresion_constante
;

declarador:
        apuntador declarador_directo
    |   declarador_directo
;

declarador_directo:
        IDENTIFICADOR
    |   '(' declarador ')'
    |   declarador_directo '[' expresion_constante ']'
    |   declarador_directo '[' ']'
    |   declarador_directo '(' lista_tipos_de_parametro ')'     { printf("Funcion: %s\n\tLinea:%d\n", $<s>1.cadena, yylineno); }
    |   declarador_directo '(' lista_de_identificadores ')'
    |   declarador_directo '(' ')'
;

apuntador:
       '*' opt_lista_calificadores_de_tipo
    |   '*' opt_lista_calificadores_de_tipo apuntador
;


opt_lista_calificadores_de_tipo:
        lista_calificadores_de_tipo
    |
;

lista_calificadores_de_tipo:
        CALIFICADOR_DE_TIPO 
    |   lista_calificadores_de_tipo CALIFICADOR_DE_TIPO
;

lista_tipos_de_parametro:
        lista_de_parametros
    |   lista_de_parametros ',' ELIPSIS
;

lista_de_parametros:
        declaracion_parametro
    |   lista_de_parametros ',' declaracion_parametro
;

declaracion_parametro:
        especificadores_de_declaracion declarador { printf("Parametro: %s\n\tTipo: %s\n", $<s>2.cadena, $<s>1.cadena); }
    |   especificadores_de_declaracion declarador_abstracto
    |   especificadores_de_declaracion
;

lista_de_identificadores:
        IDENTIFICADOR
    |   lista_de_identificadores ',' IDENTIFICADOR
;

inicializador:
        expresion_de_asignacion
    |   '{' lista_de_inicializadores '}'
    |   '{' lista_de_inicializadores ',' '}'
;

lista_de_inicializadores:
        inicializador
    |   lista_de_inicializadores ',' inicializador
;

nombre_de_tipo:
        lista_calificador_especificador declarador_abstracto
    |   lista_calificador_especificador
;

declarador_abstracto:
        apuntador
    |   apuntador declarador_abstracto_directo
    |   declarador_abstracto_directo
;

declarador_abstracto_directo:
        '(' declarador_abstracto ')'
    |   declarador_abstracto_directo '[' expresion_constante ']'
    |   '[' expresion_constante ']'
    |   declarador_abstracto_directo '[' ']'
    |   '[' ']'
    |   declarador_abstracto_directo '(' lista_tipos_de_parametro ')'
    |   '(' lista_tipos_de_parametro ')'
    |   declarador_abstracto_directo '(' ')'
    |   '(' ')'
; // Tengo opciones sin ningun declarador

proposicion:
        proposicion_etiquetada 
    |   proposicion_expresion
    |   proposicion_compuesta
    |   proposicion_de_seleccion
    |   proposicion_de_iteracion
    |   proposicion_de_salto
;

proposicion_etiquetada:
        IDENTIFICADOR ':' proposicion
    |   CASE expresion_constante ':' proposicion
    |   DEFAULT ':' proposicion
;

proposicion_expresion:
        opt_expresion ';'
;

proposicion_compuesta:
        '{' lista_de_declaraciones lista_de_proposiciones '}'
    |   '{' lista_de_proposiciones '}'
    |   '{' lista_de_declaraciones '}'
    |   '{' '}'
;

lista_de_proposiciones:
        proposicion
    |   lista_de_proposiciones proposicion
;

proposicion_de_seleccion:
        IF '(' expresion ')' proposicion %prec THEN 
    |   IF '(' expresion ')' proposicion ELSE proposicion
    |   SWITCH '(' expresion ')' proposicion
;


proposicion_de_iteracion:
        WHILE '(' expresion ')' proposicion
    |   DO proposicion WHILE '(' expresion ')' ';'
    |   FOR '(' opt_expresion ';' opt_expresion ';' opt_expresion ')' proposicion
;

opt_expresion:
        expresion
    |   
;

proposicion_de_salto:
        GOTO IDENTIFICADOR ';'
    |   CONTINUE ';'
    |   BREAK ';'
    |   RETURN opt_expresion ';'
;

expresion:
        expresion_de_asignacion
    |   expresion ',' expresion_de_asignacion
;

expresion_de_asignacion:
        expresion_condicional
    |   expresion_unaria '=' expresion_de_asignacion
    /* |   expresion_unaria OPERADOR_DE_ASIGNACION expresion_de_asignacion */
;   // Por simplificacion se quitaron los opperadores de asignacion or la asignacion normal

expresion_condicional:
        expresion_logica_OR
    |   expresion_logica_OR '?' expresion ':' expresion_condicional
;

expresion_constante:
        expresion_condicional
;

expresion_logica_OR:
        expresion_logica_AND
    |   expresion_logica_OR OR expresion_logica_AND
;

expresion_logica_AND:
        expresion_OR_inclusivo
    |   expresion_logica_AND AND expresion_OR_inclusivo
;

expresion_OR_inclusivo:
        expresion_OR_exclusivo
    |   expresion_OR_inclusivo '|' expresion_OR_exclusivo
;

expresion_OR_exclusivo:
        expresion_AND 
    |   expresion_OR_exclusivo '^' expresion_AND
;

expresion_AND:
        expresion_de_igualdad
    |   expresion_AND '&' expresion_de_igualdad
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
        expresion_cast
    |   expresion_multiplicativa '*' expresion_cast
    |   expresion_multiplicativa '/' expresion_cast
    |   expresion_multiplicativa '%' expresion_cast
;

expresion_cast:
        expresion_unaria
    |   '(' nombre_de_tipo ')' expresion_cast
;

expresion_unaria:
        expresion_posfija
    |   INCREMENTO expresion_unaria
    |   DECREMENTO expresion_unaria
    |   OPERADOR_UNARIO expresion_cast
    |   SIZEOF expresion_unaria
    |   SIZEOF '(' nombre_de_tipo ')'
;

expresion_posfija:
        expresion_primaria
    |   expresion_posfija '[' expresion ']'
    |   expresion_posfija '(' lista_de_expresiones_argumento ')'
    |   expresion_posfija '(' ')'
    |   expresion_posfija '.' IDENTIFICADOR
    |   expresion_posfija APUNTA IDENTIFICADOR
    |   expresion_posfija INCREMENTO
    |   expresion_posfija DECREMENTO
;

expresion_primaria:
        IDENTIFICADOR
    |   constante
    |   CADENA
    |   '(' expresion ')'
;

lista_de_expresiones_argumento:
        expresion_de_asignacion
    |   lista_de_expresiones_argumento ',' expresion_de_asignacion
;

constante:
        CONSTANTE_ENTERA
    |   CONSTANTE_CARACTER
    |   CONSTANTE_FLOTANTE  
; // Falta constante enumeracion





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
        puts("Error: Se requiere el nombre del archivo a analizar. Ej: ./a.exe archivo.c ");
        return 1;
    }
    yyin = fopen(argv[1], "r");
    yyparse();
    return 0;
}
