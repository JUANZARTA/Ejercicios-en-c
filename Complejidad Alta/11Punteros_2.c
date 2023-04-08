#include <stdio.h>

int main() {
    int num = 10;
    int *p; // Declaración del puntero p
    
    p = &num; // Asignación de la dirección de num a p
    
    printf("Valor de num: %d\n", num);
    printf("Dirección de num: %p\n", &num);
    printf("Valor de p: %p\n", p);
    printf("Valor apuntado por p: %d\n", *p);
    
    return 0;
}
