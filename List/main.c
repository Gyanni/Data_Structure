#include <stdio.h>
#include "list.h"

int main() {

    // 1. Insert Test
    List* myList = NULL;
    printf("\n");
    printf("1. Insert Test\n");

    insertNode(&myList, 1);
    insertNode(&myList, 3);
    insertNode(&myList, 5);
    printList(myList);

    // 2. Delete Node
    printf("\n");
    printf("2. Delete Test\n");

    printf("Execute Delete!\n");
    deleteNode(&myList);
    printList(myList);

}