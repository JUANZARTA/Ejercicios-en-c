#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);
    printf("Los numeros primos menores o iguales a %d son:\n", n);
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
