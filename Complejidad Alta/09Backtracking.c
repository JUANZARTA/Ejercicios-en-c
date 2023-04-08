/**
 * Dado un arreglo de enteros, encuentre todas las posibles 
 * combinaciones de elementos que sumen un valor objetivo determinado.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

void find_combinations(int arr[], int n, int sum, int temp[], int index) {
    if (sum == 0) {
        printf("{ ");
        for (int i = 0; i < index; i++) {
            printf("%d ", temp[i]);
        }
        printf("}\n");
        return;
    }

    if (sum < 0 || index >= n) {
        return;
    }

    temp[index] = arr[index];
    find_combinations(arr, n, sum - arr[index], temp, index + 1);
    temp[index] = 0;
    find_combinations(arr, n, sum, temp, index + 1);
}

int main() {
    int arr[MAX_N], temp[MAX_N], n, sum;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    printf("Ingrese los elementos del arreglo: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Ingrese el valor objetivo: ");
    scanf("%d", &sum);

    printf("Combinaciones:\n");
    find_combinations(arr, n, sum, temp, 0);

    return 0;
}
