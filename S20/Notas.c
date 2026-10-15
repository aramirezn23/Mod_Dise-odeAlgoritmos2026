//Se trabaja este documento con arreglos.
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main (void) {
    double notas [N]; //Acá se define el arreglo
    double suma = 0, promedio,mayor, menor;
    int i;
    //Acá se leen los datos

    for (i = 0; i < N; i++) {
        //Acá se validan los datos ingresados
        do
        {
            printf ("Nota %d (0 a 100): ", i+1);
            scanf ("%lf", &notas[(i)]); //Guarda en notas [i]
        } while (notas[i] < 0 || notas [i] > 100);
        suma += notas [i];
    }
    promedio = suma / N;
    //Acá se compara usando > y < el mayor y menor

    mayor = notas [0];
    menor = notas [0];

    for (i = 0; i < N; i++) {
        if (notas [i] > mayor) {
            mayor = notas [i];
        }
        if (notas [i] < menor) {
            menor = notas [i];
        }
    }
    printf ("Promedio: %.2f\n", promedio);
    printf ("Mayor %.lf Menor: %.lf\n", mayor, menor);

    //Segundo recorrido
    printf ("Sobre el promedio: ");
    for (i = 0; i < N; i++) {
        if (notas[i] > promedio) {
            printf ("%.lf¨", notas [i]);
        }
    }
    printf ("\n");
    system ("pause");
    return 0;
}