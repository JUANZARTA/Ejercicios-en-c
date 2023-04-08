/**
 * Ejercicio: Crea un programa en C que solicite al
 * usuario un número entero positivo, y luego 
 * imprima los números enteros desde 1 hasta el 
 * número ingresado por el usuario.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num; // Variables para almacenar el número ingresado por el usuario y el contador del ciclo
    int i;
    // Solicitar al usuario un número entero positivo
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    
    // Imprimir los números enteros desde 1 hasta el número ingresado por el usuario
    for (int i = 1; i <= num; i++) { // Ejecutar el ciclo desde 1 hasta el número ingresado por el usuario
        printf("%d ", i); // Imprimir el número actual
    }
    
    return 0;
}
