/**
 * Ejercicio: Crea un programa en C que solicite al usuario 
 * su nombre y su edad, y luego imprima un mensaje de saludo 
 * que incluya ambos datos.
*/
#include <stdio.h>

int main(){
    char nombre[30] = "";
    int edad = 0;
    
    printf("Ingrese el nombre: ");
    scanf("%s", nombre);
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    
    printf("Buenos dias, Bienvenido Sr(a) %s, su edad es: %d", nombre, edad);
    return 0;
}