/**
 * Ejercicio: Crea un programa en C 
 * que solicite al usuario un número entero, 
 * y luego imprima un mensaje que indique si 
 * el número es positivo, negativo o cero.
*/

#include <stdio.h>

int main(){
    int numero;
    printf("ingrese un numero: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("el numero es negativo");
    }else {
        printf("el numero es positivo");
    }

    return 0;
}