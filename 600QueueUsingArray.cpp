#include <iostream>

using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void initQueue(Queue *q, int size)
{
    q->size = size ;
    q->front = q->rear = -1;
    q->Q = (int*)malloc(size * sizeof(int));
}

void enqueue(Queue *q, int x)
{   
    if ( q->rear == q->size -1)
        printf("Queue is Full");
    else 
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
        printf ("Queue is Empty");
    else 
    {
        q->front++ ;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(Queue *q)
{
    if (q->front == q->rear)
        return 1;
    else 
        return 0;
}

int isFull(Queue *q)
{
    if (q->rear == q->size -1)
        return 1;
    else 
        return 0;
}

void Display(Queue* q)
{
    for (int i = q->front; i < q->rear; i++)
    {
        printf("%d ", q->Q[i]);
    }
    printf("\n");
}

int main()
{
    struct Queue q;
    initQueue(&q,5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    dequeue(&q);
    enqueue(&q, 40);
    enqueue(&q, 50);
    Display(&q);
    return 0;
}