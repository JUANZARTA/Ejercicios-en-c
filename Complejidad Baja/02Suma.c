#include <stdio.h>

int main(){
    int x;
    int y;
    int resultado;
    printf("Suma de enteros\n");
    printf("ingrese el primer valor: ");
    scanf("%i", &x);
    printf("ingrese el segundo valor: ");
    scanf("%i", &y);
    resultado = x + y;
    printf("El resultado de %d + %d es: %d", x, y, resultado);
    return 0;
}