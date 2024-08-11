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

struct Nodes 
{
    int data ;
    struct Nodes* next ;

}*second = NULL;

void Creates (int A[], int n)
{
    struct Nodes *temp, *last;
    second = (struct Nodes *)malloc (sizeof(struct Nodes));
    second->data = A[0];
    second->next = NULL;
    last = second ;

    for (int i = 1; i < n ; i++)
    {
        temp = (struct Nodes *)malloc(sizeof(struct Nodes));  //create node in heap 
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
        cout << p->data << endl ;
        p = p->next ;
    }
}

 int res = 0;
 int count = 1;

 int addTwoNumbers( Node* l1,  Nodes* l2) 
 {
    if ( l1 == NULL && l2 == NULL)
    {
        return 0;
    }
    res = (l1->data + l2->data) * count + res;
    count = count * 10 ;
    addTwoNumbers(l1->next, l2->next);
}

int main ()
{
    int l1[] = {9,9,9,9,9};
    int l2[] = {9,9,9,9};

    Create (l1, 5);
    Creates(l2, 4);

    addTwoNumbers(first, second);
    cout << res << endl; 

}