/**
 *  Escribe un programa en C que pida 
 * al usuario que ingrese un número 
 * entero positivo y luego imprima el 
 * número invertido. Por ejemplo, si el 
 * usuario ingresa 123, el programa debe imprimir 321.
*/

#include <stdio.h>

int invertirNumero(int num) {
    int inverso = 0;
    while (num > 0) {
        int digito = num % 10;
        inverso = inverso * 10 + digito;
        num /= 10;
    }
    return inverso;
}

int main() {
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    int inverso = invertirNumero(num);
    printf("El numero invertido es: %d", inverso);
    return 0;
}
