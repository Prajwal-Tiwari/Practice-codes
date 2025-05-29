#include<stdio.h>
#include<stdlib.h>
#define MAX 10
//creating structure for queue
typedef struct 
{
    int arr[MAX];
    int front;
    int rear;
}queue;
//initializing the queue
void initialize(queue *q)
{
    q->front=-1;
    q->rear=-1;
}
//empty queue
int isEmpty(queue *q)
{
    return q
}
