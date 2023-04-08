#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   printf("Ingrese el tamaño del arreglo: ");
   scanf("%d", &n);
   
   // Asignación de memoria dinámica para el arreglo de enteros
   int *arr = (int*) malloc(n * sizeof(int));
   if (arr == NULL) {
      printf("No se pudo asignar memoria dinámica.");
      return 1;
   }
   
   // Llenar el arreglo con valores ingresados por el usuario
   printf("Ingrese los valores para el arreglo:\n");
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   
   // Imprimir los valores del arreglo
   printf("El arreglo ingresado es:\n");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   
   // Liberar la memoria asignada para el arreglo
   free(arr);
   
   return 0;
}
