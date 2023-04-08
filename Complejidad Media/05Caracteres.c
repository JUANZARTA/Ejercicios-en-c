/**
 * Escribe un programa en C que pida al usuario ingresar
 * una cadena de caracteres y luego imprima el número de 
 * caracteres que contiene la cadena, deteniéndose cuando 
 * se ingresa un punto (.) como último carácter de la cadena.
*/

#include <stdio.h>

int main() {
    char cadena[100];
    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, 100, stdin);
    int numCaracteres = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == '.') {
            break;
        }
        numCaracteres++;
    }
    printf("La cadena tiene %d caracteres.\n", numCaracteres);
    return 0;
}
