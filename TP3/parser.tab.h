
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIPO_DE_DATO = 258,
     IDENTIFICADOR = 259,
     CALIFICADOR_DE_TIPO = 260,
     STRUCT_O_UNION = 261,
     ENUM = 262,
     ELIPSIS = 263,
     CASE = 264,
     DEFAULT = 265,
     IF = 266,
     SWITCH = 267,
     ELSE = 268,
     DO = 269,
     WHILE = 270,
     FOR = 271,
     GOTO = 272,
     CONTINUE = 273,
     BREAK = 274,
     RETURN = 275,
     OPERADOR_DE_ASIGNACION = 276,
     OR = 277,
     AND = 278,
     IGUALDAD = 279,
     DISTINTO = 280,
     MENOR_IGUAL = 281,
     MAYOR_IGUAL = 282,
     DESPLAZAMIENTO_A_DERECHA = 283,
     DESPLAZAMIENTO_A_IZQUIERDA = 284,
     INCREMENTO = 285,
     DECREMENTO = 286,
     SIZEOF = 287,
     OPERADOR_UNARIO = 288,
     APUNTA = 289,
     CADENA = 290,
     CONSTANTE_ENTERA = 291,
     CONSTANTE_CARACTER = 292,
     CONSTANTE_FLOTANTE = 293,
     AUTO = 294,
     REGISTER = 295,
     STATIC = 296,
     EXTERN = 297,
     TYPEDEF = 298,
     THEN = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 17 "parser.y"

    struct yylval_struct{
        char cadena[200];
        int tipo;
        int entero;
        float real;
    } s;



/* Line 1676 of yacc.c  */
#line 107 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


