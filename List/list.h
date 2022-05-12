#ifndef LIST_H
#define LIST_H

typedef struct List_ {
    int data;
    struct List_* next;
} List;

void insertNode(List**, int);
void deleteNode(List**);
void printList(List*);
int getListLength(List*);

#endif