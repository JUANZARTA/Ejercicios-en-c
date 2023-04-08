#include <stdio.h>

double calcularPromedio(int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }
    return (double)suma / size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    double promedio = calcularPromedio(arr, size);
    printf("El promedio es: %.2f", promedio);
    return 0;
}
