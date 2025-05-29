#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
typedef struct stack 
{
    int arr[MAX_SIZE];
    int top;
} Stack;

//initializing the stack
void initialize(Stack *s)
{
    s->top==-1;
}

//if the stack is empty
int isEmpty(Stack *s)
{
    return s->top ==-1;
}

//if the stack is full
int isFull(Stack *s)
{
    return s->top == MAX_SIZE-1;
}

//code for pushing an element
void push(Stack *s, int x)
{
    if(isFull(s))
    {
        printf("the stack is already full :(\n");
        return;
    }
    s->arr[++(s->top)] = x;
}

//code for poping an element
void pop(Stack *s)
{
    if(isEmpty(s))
    {
        printf("the stack is already empty :|\n");
        return;
    }
    int y=s->arr[s->top];
    s->top--;
 printf("%d\n ", y);
}

//main function
int main()
{
    Stack *s;
    initialize(s);
    push(s, 10);
    push(s,20);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    return 0;
    
}

