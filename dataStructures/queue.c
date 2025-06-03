#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

void enqueue(node **queue, int num) {
    node *aux, *new = malloc(sizeof(node));

    if (new) {
        new->number = num;
        new->next = NULL;
        if (*queue == NULL) {
            *queue = new;
        } else {
            aux = *queue;
            while (aux->next != NULL) {
                aux = aux->next;
            }
            aux->next = new;
        }
    } else {
        printf("Erro ao alocar memória\n");
    }
}

void printQueue(node *queue) {
    while (queue != NULL) {
        printf("%d -> ", queue->number);
        queue = queue->next;
    }
    printf("NULL\n");
}

int main(void) {
    node *queue = NULL;

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printQueue(queue);

    return 0;
}
