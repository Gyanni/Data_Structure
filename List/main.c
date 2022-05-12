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

    myList = NULL;
    printf("\n");


}