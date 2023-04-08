/**
 * implementación de un árbol binario de búsqueda en C. En este 
 * ejemplo, se define la estructura del nodo del árbol y se implementan 
 * funciones para insertar un nuevo nodo en el árbol y para buscar
 *  un valor específico en el árbol:
*/

#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de un nodo del árbol
struct node {
    int value;
    struct node *left;
    struct node *right;
};

// Función para crear un nuevo nodo del árbol
struct node* create_node(int value) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Función para insertar un nuevo nodo en el árbol
struct node* insert_node(struct node* root, int value) {
    if (root == NULL) {
        return create_node(value);
    }
    if (value < root->value) {
        root->left = insert_node(root->left, value);
    } else if (value > root->value) {
        root->right = insert_node(root->right, value);
    }
    return root;
}

// Función para buscar un valor en el árbol
struct node* search_node(struct node* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }
    if (value < root->value) {
        return search_node(root->left, value);
    } else {
        return search_node(root->right, value);
    }
}

// Función principal para probar la implementación del árbol
int main() {
    struct node* root = NULL;
    root = insert_node(root, 50);
    insert_node(root, 30);
    insert_node(root, 20);
    insert_node(root, 40);
    insert_node(root, 70);
    insert_node(root, 60);
    insert_node(root, 80);

    struct node* result = search_node(root, 60);
    if (result == NULL) {
        printf("El valor no se encuentra en el arbol.\n");
    } else {
        printf("El valor se encuentra en el arbol.\n");
    }

    return 0;
}
