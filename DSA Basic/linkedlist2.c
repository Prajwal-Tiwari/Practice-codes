#include <stdio.h>
#include <stdlib.h>
// creating a node
typedef struct Node
{
    int data;
    struct Node *next;
} node;
// function for creating a node
node *createnode(int value)
{
    node *newnode = (node *)malloc(sizeof(node));

    if (!newnode)
    {
        printf("Memory Error");
        exit(1);
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
// function to traverse the list
void traverseList(node *p)
{
    if (p == NULL)
    {
        printf("end");
        return;
    }
    printf("%d->", p->data);
    traverseList(p->next);
}
// searching of the element in the linked list
node *searchkey(node *head, int key)
{
    node *current = head;
    while (current != NULL)
    {
        if (current->data == key)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// main function
int main()
{
    node *head = createnode(10);
    head->next = createnode(20);
    head->next->next = createnode(30);
    printf("the linked list is given by: ");
    traverseList(head);
    node *searchedkey = searchkey(head, 20);
    printf("the number %d is found",searchedkey->data);
}