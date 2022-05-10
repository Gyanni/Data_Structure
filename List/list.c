#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void insertList(List* list, int index) {
    List* newNode = (List*)malloc(sizeof(List));
    if (!newNode) {
        fprintf(stderr, "Insufficient Memory");
        exit(EXIT_FAILURE);
    }

    if (!list) {
        list = newNode;
        return;
    }

    while (list->next) list = list->next;
    list->next = newNode;
}

void printList(List* list) {
    if (!list) printf("Empty list!\n");

    printf("List member : %d", list->data);
    while (list->next) {
        list = list->next;
        printf("List member : %d", list->data);
    }
}