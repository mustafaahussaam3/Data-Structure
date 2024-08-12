#include <iostream>

using namespace std; 

struct Node 
{
    int data ;
    struct Node* next ;

}*first = NULL;

void Create (int A[], int n)
{
    struct Node *temp, *last;
    first = (struct Node *)malloc (sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first ;

    for (int i = 1; i < n ; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));  //create node in heap 
        temp->data = A[i];                                  //add data to the node 
        temp->next = NULL;                                  //create the last with null
        last->next = temp;                                  // we must add this connection because without it the node will lost
        last =  temp ;                                      //make the last node created is the last pointer 
    } 
}

void Display (struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data ;
        p = p->next ;
    }
    cout << endl;
}

void RDisplay (struct Node *p)
{
    if ( p != NULL)
    {
        RDisplay(p->next);
        cout << p->data << endl ;
    }
}

int CountNodes (struct Node *p)
{
   int c = 0;
   while (p != 0)
   {
        c++;
        p = p ->next ;
   }
   return c;
}
int CountNodesRecursion ( struct Node *p)
{

    if (p == 0)
        return 0;
    else 
        return CountNodesRecursion(p->next) + 1;
}

int AddNodes( struct Node *p)
{   
    if ( p == 0)
        return 0;
    else 
        return AddNodes(p->next) + p->data;
}

int Max( struct Node *p)
{
    int max = INT32_MIN ;
    while (p)
    {
        if ( p->data > max )
            max = p->data;
        p = p->next ;  
    }
    return max;
}

int RMax ( struct Node *p)
{
    int max = 0;

    if (!p)
        return INT32_MIN;
    max = RMax(p->next);
    return max > p->data ? max : p->data ;
}

Node* RSearch ( Node* p, int key)
{
    if (!p)
        return NULL;
    if ( p->data == key )
        return p;
    return RSearch(p->next, key);
}

Node* Search ( Node* p, int key)
{
    while (p)
    {
     if ( p->data == key)
         return p;
        p = p->next;
    }
    return NULL;
}

Node* LSearch ( Node* p, int key)
{
    Node* q = NULL;
    while (p)
    {
        if ( p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
            q = p;
            p = p->next;
    }
    return NULL;
}

int main ()
{
    struct Node *temp;
    int A[] = {3,5,7,10,25,50,8,32,2};
    Create(A,9);

    temp = LSearch(first, 32);
    temp = LSearch(first, 25);
    if (temp)
        cout << "key is found " << temp->data << endl;
    else 
        cout << "key not found " << endl; 
    Display(first);
    return 0; 

}