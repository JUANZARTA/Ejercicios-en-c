/**
 * Suponga que se tiene una función swap que intercambia el
 * valor de dos variables enteras. Sin embargo, en lugar de 
 * pasar las variables directamente a la función, se desea 
 * implementar la función utilizando punteros. Es decir, se 
 * desea implementar una función que intercambie el valor de 
 * dos variables enteras utilizando punteros. El siguiente código 
 * muestra cómo se puede implementar esta función:
*/

#include <stdio.h>

void swap(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Antes del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("Después del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
