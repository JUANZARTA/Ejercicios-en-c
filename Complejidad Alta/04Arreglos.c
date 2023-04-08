/**
 * Supongamos que se nos da una matriz de enteros y queremos encontrar el valor 
 * máximo presente en la matriz. Aquí hay una implementación en C de una función 
 * que busca el valor máximo en un arreglo unidimensional de enteros:
 * 
*/

#include <stdio.h>

int encontrar_maximo(int arr[], int n) {
    int maximo = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
    }
    return maximo;
}

int main() {
    int arreglo[] = {4, 2, 6, 1, 8, 5, 9, 3, 7};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int maximo = encontrar_maximo(arreglo, longitud);
    printf("El valor máximo en el arreglo es: %d", maximo);
    return 0;
}
