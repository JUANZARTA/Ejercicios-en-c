#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3] = {
        (1,2,3),
        (3,4,5),
        (7,8,9)
        };
    int i, j, suma = 0;
    //Suma los elementos de la matriz:
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            suma += matriz[i][j];
        }
    }
    
    // Imprimir el resultado
    printf("La suma de todos los elementos de la matriz es: %d", suma);
    /**
     * Nota: diferencia de matrices y vectores
     * Ejemplo:
     * int vector[5]; // Un vector de enteros de tamaño 5
     * int matriz[3][4]; // Una matriz de enteros de 3 filas y 4 columnas
    */
    return 0;
}