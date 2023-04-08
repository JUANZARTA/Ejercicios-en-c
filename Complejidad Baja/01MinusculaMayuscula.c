/**
 * codigo en c que me pida el nombre y me lo devuelva en mayuscula
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char nombre[100];
    printf("Ingrese su nombre: ");
    fgets(nombre, 100, stdin); // lee la entrada del usuario
    printf("Su nombre en mayusculas es: ");
    for(int i = 0; nombre[i]; i++){
        putchar(toupper(nombre[i])); // convierte cada letra a mayúscula y la imprime en la pantalla
    }
    return 0;
}
