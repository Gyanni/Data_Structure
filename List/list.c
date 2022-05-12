#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void insertNode(List** list, int item) {
    List* newNode = (List*)malloc(sizeof(List));
    if (!newNode) {
        fprintf(stderr, "Insufficient Memory");
        exit(EXIT_FAILURE);
    }

    newNode->data = item; 
    newNode->next = NULL;
    
    if (!*list) {
        *list = newNode;
        return;
    }

    List* cur = *list;
    while (cur->next) cur = cur->next;
    cur->next = newNode;
}

void printList(List* list) {
    if (!list) {
        printf("Empty list!\n");
        return;
    }

    printf("List member : %d", list->data);
    while (list->next) {
        list = list->next;
        printf(", %d", list->data);
    }
}