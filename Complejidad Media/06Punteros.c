#include <stdio.h>

void sumar(int *a, int *b, int *c) {
  *c = *a + *b;
}

int main() {
  int x = 15, y = 25, z;
  
  sumar(&x, &y, &z);
  printf("%d\n", z);
  
  return 0;
}