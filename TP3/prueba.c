int entero;
char caracter;
float real_simple_presicion;
double real_doble_presicion;

int sumar (int a, int b);
float restar(float, float);
double multiplicar(double a, double b);

int entero_2 = 8;
int entero_3 = 2 * 5;
char caracter2 = 'm';
float pi_simple_presicion = 3.14;
double real_doble_presicion = 3.14159265;

int main(){
    int a = 1;
    int b = 2;
    int _ = 3;
    sumar(a, b);
    return 0;
}

int sumar(int a, int b){
    return a+b;
}

float restar(float a, float b){
    return a-b;
}

double  multiplicar(double a, double b){
    double c = a*b;
    return (c);
}

int Columna (int c){
if (c >= 0 && c <= 9) return 2;
if (c == '_') return 1;
if (isalpha(c) )return 0;
return 3;
}