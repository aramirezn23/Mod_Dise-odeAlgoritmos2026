//Ventas de una cadena de sodas por sucursal y por día
// Que logra? : Guardar en una matriz las ventas de 3 sucrsales en 4 días
// Suma cada sucursal (fila) y cada día por medio de la (columna) e identificar la surcursal que más vendió, con su nombre guardado en una cadena.
//Resultado esperado: Centro 470, Norte 350, Sur 410; por día 330 270 330; Sucursal con más ventas: Centro (470).

#include <stdio.h>
#include <string.h>  //strcpy
#include <stdlib.h>
#define SUC 3        //Filas por sucursales
#define DIAS 4      //Columnas  días

int main (void) {
    //Iniciamos con el arreglo de cadenas: Una fila por nombre (hasta 9 letras + ´\0´)
    char nombres [SUC] [10] = {"Centro","Norte", "Sur"};
    
    //Ventas en miles de colones
    int ventas [SUC] [DIAS] = {{120, 100, 130,120},
                              {90,80,100,80},
                              {120,90,100,100}};
    
    char mejor [10]; //Nombre sucursal con más ventas
    int s, d, total, totalDia, mayor = 0;
    
    //Encabezado: D1 a D4
    printf ("%-8s","");
    for (d = 0; d < DIAS; d++) {
        printf ("D%d", d+1);
    }
    printf (" | Total\n");

    // RECORRIDO POR FILAS
    for (s = 0; s < SUC; s++)   {
        total = 0;  //Reinicia cada fila
        printf ("%-8s",nombres[s]); //Nombre a la izquierda
        for (d = 0; d < DIAS; d++)  {
            printf ("%5d", ventas [s][d]);
            total += ventas [s] [d];
        }
        printf ("  | %5d\n",total); //470,370,410

        //Guardar la variable con mayor total; strcpy copia el nombre
        if (total > mayor) {
            mayor = total;
            strcpy (mejor, nombres [s]); //Mejor = Centro
        }
    }

    //RECORRIDO POR COLUMNAS. For externo recorre los días
    printf("%-8s", "Día");
    for (d = 0; d < DIAS; d++) {
        totalDia = 0;
        for (s = 0; s < SUC; s++) {
            totalDia += ventas [s] [d];
        }
        printf ("%5d", totalDia); //330 , 270, 330, 300 
    }
    printf ("\n");
    //SALIDAS: Sucursal con más ventas: Centro con 470
    printf ("Sucursal con más ventas: %s (%d)\n", mejor, mayor);
    system ("pause");
    return 0;
}
