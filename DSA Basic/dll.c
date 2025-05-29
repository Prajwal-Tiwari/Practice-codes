#include <stdio.h>
#include <stdlib.h>
// creating a double linked list node
typedef struct node
{
    int value;
    struct node *prev;
    struct node *next;
} Node;

// function to create a node
Node *createnode(int data)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    if (!newnode)
    {
        printf("Memory Error!!!");
        exit(1);
    }
    newnode->prev = NULL;
    newnode->value = data;
    newnode->next = NULL;
    return newnode;
}

// insertion of a new node
void insertion(Node **h, int data)
{
    Node *Newnode = (Node *)malloc(sizeof(Node));
    Newnode->value = data;
    Newnode->next = (*h);
    Newnode->prev = NULL;
    if ((*h) != NULL)
        (*h)->prev = Newnode;

    (*h)= Newnode;
}

// function to traverse the list
void traverselist(Node *p)
{
    if (p == NULL)
    {
        printf("end");
        return;
    }
    printf("%d -> ", p->value);
    traverselist(p->next);
}

// main function
int main()
{
    Node *head = createnode(10);
    head->next = createnode(20);
    head->next->next = createnode(30);
    head->next->next->next = createnode(40);
    head->next->next->next->next = createnode(50);
    printf("the linked list is given by:    ");
    traverselist(head);
    insertion(&head, 100);
    insertion(&head, 190);
    printf("\n the linked list after insertion of 100 is given as:  ");
    traverselist(head);
}
