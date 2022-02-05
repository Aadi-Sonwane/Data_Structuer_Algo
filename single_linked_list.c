#include <stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    // declearing nodes
    struct node *a, *b, *c;

    // memory allocations
    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));

    //  assigning the actual data to the filed
    a->data = 101;
    b->data = 102;
    c->data = 103;
    //assigning the memory address of next node
    a->next = b;
    b->next = c;
    c->next = NULL;
    // displaying the data of node we can make an anothe node ;
    struct node *temp = a;

    // displaying the data
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }

    return 0;
}