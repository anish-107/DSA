#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* address;
} Node;


int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* Head;
    Head = NULL;

    for (int i = 0; i < n; i++) {
        if (Head == NULL) {
            Head = (Node*)malloc(sizeof(Node));
            Head -> data = arr[i];
            Head -> address = NULL;
        } else {
            Node* temp = (Node*)malloc(sizeof(Node));
            temp -> data = arr[i];
            temp -> address = Head;
            Head = temp;
        }
    }

    Node* temp = Head;
    while(temp) {
        printf("%d ", temp -> data);
        temp = temp -> address;
    }
    printf("\n");

    Node* current = Head;
    temp = NULL;

    while(current) {
        temp = current -> address;
        printf("The node with data %d is being deleted.\n", current -> data);
        free(current);
        current = temp;
    }

    Head = NULL;

    printf("All nodes have been deleted, and Head points to %p\n", Head);

    return 0;
}