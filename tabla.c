//Este ejercicio corresponde a la tabla de multiplicar del 7 para varios números.

#include <stdio.h>
#define  CENTINELA 0 // Acá se indica como 0 el inicio de la tabla

int main (void) {
//Acá se declaran las variables a utilizar el programa
int numero, i;
int tablas = 0;

//Acá se realiza la lectura previa: El primer número se lee antes del while -> 7
printf ("Ingrese número de la tabla (ó 0 para terminar)");
scanf ("%d",&numero);

//Acá se utiliza el WHILE con centinela: Este se repite mientras el número no sea 0
while (numero != CENTINELA)
{
    //Acá se utiliza un FOR anidado :10 vueltas por cada número -> 1,2,3....
    for (i = 1; i <=10; i++) {
        //%2d alinea con 2 espacios -> 7 x 1 = 7.....7 x 10 = 70
        printf ("%d x %2d = %2d\n",numero, i, numero * i );
    }
    tablas++; // Acá cuenta la tabla mostrada -> 1 luego 2
    //Siguiente dato al final del contador -> 3, luego 0
    printf ("Número de la tabla (0 para terminar):");
    scanf ("%d",&numero);
}
//Después del WHILE (se digitó 0) -> tablas mostradas 2
printf ("Tablas mostradas: %d\n", tablas);
return 0;

}