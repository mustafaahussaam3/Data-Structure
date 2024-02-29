#include <iostream>

using namespace std;

struct Node 
{
    int data;
    struct Node *next;
}*top = nullptr;

void push ( int x )
{
    Node *t = new Node;
    if (t  == nullptr)
    {
        printf("Stack Overflow \n");
    }
    else 
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    Node *t;
    int x = -1;
    if ( top == NULL)
        printf("Stack is Empty \n");
    else 
    {
        t = top;
        top = top -> next;
        x = t -> data;
        free(t);
    }
    return x;
}

void Display ()
{
    Node *p;

    while ( p !=  NULL)
    {
        printf ("%d ", p->data);
        p = p->next;
    }
    printf ("\n");
}

int main()
{

} 