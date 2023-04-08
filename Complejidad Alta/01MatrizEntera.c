/**
 * Escribe un programa en C que lea una matriz de números enteros de tamaño N x N 
 * (donde N es un número entero ingresado por el usuario) desde el teclado y 
 * encuentre el número de elementos que se repiten en al menos dos filas o dos columnas.
*/

#include <stdio.h>

int main() {
    int n, contador = 0;
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &n);

    int matriz[n][n];
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int repetido = 0;
            // Verificar si el elemento se repite en la misma fila
            for (int k = j + 1; k < n; k++) {
                if (matriz[i][j] == matriz[i][k]) {
                    repetido = 1;
                    break;
                }
            }
            if (repetido) {
                contador++;
                break;
            }
            // Verificar si el elemento se repite en la misma columna
            repetido = 0;
            for (int k = i + 1; k < n; k++) {
                if (matriz[i][j] == matriz[k][j]) {
                    repetido = 1;
                    break;
                }
            }
            if (repetido) {
                contador++;
                break;
            }
        }
    }

    printf("El numero de elementos que se repiten en al menos dos filas o dos columnas es: %d", contador);
    return 0;
}
