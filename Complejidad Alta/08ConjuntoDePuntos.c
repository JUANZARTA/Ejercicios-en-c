/**
 * ejemplo de un algoritmo con complejidad temporal alta 
 * (O(n^3)) y espacial alta (O(n^2)) que realiza la
 *  multiplicación de dos matrices cuadradas:
*/

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &n);

    int matriz1[n][n], matriz2[n][n], resultado[n][n];

    printf("Ingrese los elementos de la matriz 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la matriz 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Inicializar la matriz resultado con ceros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicar las matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprimir la matriz resultado
    printf("La matriz resultante es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
