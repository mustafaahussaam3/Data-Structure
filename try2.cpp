#include <iostream>

using namespace std ;


struct Node {
 int data; 
 struct Node* next;
}*first;
struct Stack {
int top;
int size; 
int *A;
};
struct Array {
int A[20];
int length; 
int size;
};
void create_ll(int A[], int size) 
{
    struct Node* temp;
    struct Node* last;
    first = (struct Node*)malloc( sizeof(struct Node*));
    first->data = A[0];
    first->next = NULL; 
    last =  first; 
    for ( int i = 1; i < size ; i++)
    {
        temp = (struct Node*)malloc( sizeof(struct Node*));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp; 
        last = temp;
    }
}
void create_st(struct Stack* st)
{
    st->top = -1;
    printf("Enter Stack size \n");
    scanf("%d",&st->size);
    st->A = (int*) malloc(st->size*sizeof(int));
}
void push(struct Stack* st, int data) 
{
    if (st->top == (st->size - 1))
    {
        printf("Stack Over Flow \n");
    }
    else 
    {
        st->top ++ ;
        st->A[st->top] = data;
    }

}
int pop(struct Stack* st) 
{
    int x = -1; 
    if ( st->top == -1)
    {
        printf("stack underflow \n");
    }
    else 
    {
        x = st->A[st->top--];
    }
    return x;

}
int peek (struct Stack*st, int index)
{
    int x = -1;
    if ( (st->top - index + 1) < 0)
    {
        printf("incorrect index \n");
    }
    else 
    {
        x = st->A[st->top - index + 1];
    }
    return x;
}
int is_empty (struct Stack st)
{
    if ( st.top == -1 ) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int is_full (struct Stack st)
{
    if (st.top == st.size - 1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}

int binary_search(Array *a)
{

}

int linear_search(Array *a)
{

}

int 
int main ()
{
    Array A = {{1,2,3,4,5,6,7},7,20};

}