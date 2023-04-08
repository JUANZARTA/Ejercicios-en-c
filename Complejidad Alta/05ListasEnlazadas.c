/**
 *implementación de una lista enlazada simple en C que incluye las }
 *operaciones básicas de inserción y eliminación:
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Función para insertar un nodo al inicio de la lista
void insertarInicio(struct Node** head_ref, int new_data) {
    // Asignar memoria para el nuevo nodo
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    // Asignar el valor y el siguiente nodo
    new_node->data = new_data;
    new_node->next = (*head_ref);
    // Asignar el nuevo nodo como la cabeza de la lista
    (*head_ref) = new_node;
}

// Función para eliminar un nodo de la lista
void eliminar(struct Node** head_ref, int key) {
    // Inicializar dos nodos, uno para el nodo actual y otro para el anterior
    struct Node* temp = (*head_ref), *prev;
    // Caso especial si se desea eliminar el primer nodo
    if (temp != NULL && temp->data == key) {
        (*head_ref) = temp->next;
        free(temp);
        return;
    }
    // Buscar el nodo con la llave deseada
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    // Si no se encontró la llave en la lista
    if (temp == NULL) return;
    // Eliminar el nodo encontrado
    prev->next = temp->next;
    free(temp);
}

// Función para imprimir la lista enlazada
void imprimirLista(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Función principal para probar la implementación
int main() {
    // Inicializar la cabeza de la lista como nulo
    struct Node* head = NULL;
    // Insertar algunos nodos
    insertarInicio(&head, 1);
    insertarInicio(&head, 2);
    insertarInicio(&head, 3);
    insertarInicio(&head, 4);
    // Imprimir la lista
    printf("Lista enlazada: ");
    imprimirLista(head);
    printf("\n");
    // Eliminar un nodo
    eliminar(&head, 3);
    // Imprimir la lista después de la eliminación
    printf("Lista enlazada después de eliminar el nodo con valor 3: ");
    imprimirLista(head);
    printf("\n");
    return 0;
}
