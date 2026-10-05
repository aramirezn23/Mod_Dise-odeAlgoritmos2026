//Hola.c - Prueba de entorno para la Unidad #2

#include <stdio.h>
int main (void) {
    int edad;
    //Muestra mensajes por pantalla
    printf ("Entorno listo para la unidad #2");
    //Pedir y leer un número
    printf ("Digite su edad: ");
    scanf ("%d", &edad);

    //Mostrar la salida
    printf ("Edad registrada: %d\n", edad);
    return 0;
}