#include <stdio.h>

int sumaDigitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10; // se suma el último dígito
        num /= 10; // se quita el último dígito del número
    }
    return suma;
}

int main() {
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    int suma = sumaDigitos(num);
    printf("La suma de los digitos de %d es: %d", num, suma);
    return 0;
}
