/**
 * Ejercicio: Escribe un programa en C que pida al usuario 
 * que ingrese una opción de operación matemática (suma, 
 * resta, multiplicación o división) y dos números, y luego 
 * imprima el resultado de aplicar la operación elegida a los dos números.
*/

#include <stdio.h>

int main() {
    char opcion;
    float num1, num2, resultado;
    
    printf("Ingrese una opcion (s/r/m/d): ");
    scanf(" %c", &opcion);
    
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &num1, &num2);
    
    switch(opcion) {
        case 's':
            resultado = num1 + num2;
            printf("La suma de %.2f y %.2f es: %.2f", num1, num2, resultado);
            break;
        case 'r':
            resultado = num1 - num2;
            printf("La resta de %.2f y %.2f es: %.2f", num1, num2, resultado);
            break;
        case 'm':
            resultado = num1 * num2;
            printf("La multiplicacion de %.2f y %.2f es: %.2f", num1, num2, resultado);
            break;
         case 'd':
            if (num2 == 0) {
                printf("No se puede dividir por cero");
            } else {
                resultado = num1 / num2;
                printf("La division de %.2f y %.2f es: %.2f", num1, num2, resultado);
            }
            break;
        default:
            printf("Opcion invalida");
            break;
    }
    
    return 0;
}