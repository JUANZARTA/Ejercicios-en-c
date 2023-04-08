/**
 *implementar un grafo no dirigido utilizando una matriz de adyacencia en C
*/

#define MAX_VERTICES 100

typedef struct {
  int vertices[MAX_VERTICES][MAX_VERTICES];
  int num_vertices;
} Grafo;

void inicializar_grafo(Grafo* grafo, int num_vertices) {
  int i, j;
  grafo->num_vertices = num_vertices;
  for (i = 0; i < num_vertices; i++) {
    for (j = 0; j < num_vertices; j++) {
      grafo->vertices[i][j] = 0;
    }
  }
}

void agregar_arista(Grafo* grafo, int vertice1, int vertice2) {
  grafo->vertices[vertice1][vertice2] = 1;
  grafo->vertices[vertice2][vertice1] = 1;
}

void eliminar_arista(Grafo* grafo, int vertice1, int vertice2) {
  grafo->vertices[vertice1][vertice2] = 0;
  grafo->vertices[vertice2][vertice1] = 0;
}

int esta_conectado(Grafo* grafo, int vertice1, int vertice2) {
  return grafo->vertices[vertice1][vertice2];
}

int main() {
  Grafo grafo;
  inicializar_grafo(&grafo, 5);
  agregar_arista(&grafo, 0, 1);
  agregar_arista(&grafo, 1, 2);
  agregar_arista(&grafo, 2, 3);
  agregar_arista(&grafo, 3, 4);
  agregar_arista(&grafo, 4, 0);
  if (esta_conectado(&grafo, 0, 3)) {
    printf("Los vertices 0 y 3 estan conectados\n");
  } else {
    printf("Los vertices 0 y 3 no estan conectados\n");
  }
  return 0;
}
