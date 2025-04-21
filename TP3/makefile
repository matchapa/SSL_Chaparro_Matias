# Definicion de variables
CC = gcc
CFLAGS = -g
LEX = flex
YACC = bison

# Archivos y objetos
SRC = scanner.l parser.y #misFunciones.c
HDR = misFunciones.h
OBJ = lex.yy.c parser.tab.c #misFunciones.o

# Nombre del ejecutable a compilar
OUTPUT = tp3.exe

# Compilar ejecutable
$(OUTPUT): $(OBJ) 
	$(CC) $(CFLAGS) -o $(OUTPUT) $(OBJ) -lm

# Compilar flex
lex.yy.c: scanner.l parser.tab.h
	$(LEX) scanner.l

# Compilar Bison
parser.tab.c parser.tab.h: parser.y
	$(YACC) -d -v parser.y

# Compilar funciones
# misFunciones.o: misFunciones.c
#	$(CC) $(CFLAGS) -c misFunciones.c

# Regla para limpiar archivos creados 
clean: 
	rm -f $(OUTPUT) $(OBJ) parser.tab.h parser.output

# Regla phony para que "clean" no sea confundido con un archivo llamado "clean"
.PHONY: clean