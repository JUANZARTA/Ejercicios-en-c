/**
 *Escribe un programa en C que genere una lista de números aleatorios y 
 *luego ordene la lista utilizando el algoritmo de ordenamiento de selección.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarSeleccion(int arr[], int n) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        intercambiar(&arr[i], &arr[minIndex]);
    }
}

int main() {
    int n;
    printf("Ingrese el tamaño de la lista: ");
    scanf("%d", &n);
    
    int lista[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        lista[i] = rand() % 100;
    }
    
    printf("Lista original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
    
    ordenarSeleccion(lista, n);
    
    printf("Lista ordenada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
    
    return 0;
}
