#include <stdio.h>

int main() {
    int vector[5] = {1, 2, 3, 4, 5};
    int i, suma = 0;
    
    // Sumar todos los elementos del vector
    for (i = 0; i < 5; i++) {
        suma += vector[i];
    }
    
    // Imprimir el resultado
    printf("La suma de todos los elementos del vector es: %d", suma);
    
    return 0;
}
