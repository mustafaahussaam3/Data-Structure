#include <iostream>

using namespace std ;

struct Stack 
{
    int size;
    int top;
    int *S;
};

void create (struct Stack *st)
{
    printf ("Enter Size \n");
    scanf("%d", &st->size) ;
    st->top = -1;
    st->S = (int *) malloc ( st->size * sizeof(int) );
}

void Display (struct Stack st)
{
    for (int i = st.top ; i >= 0; i--)
    {
        printf("%d", st.S[i]);
    }
    printf("\n");
}

void push (struct Stack *st, int x)
{
    if (st->top == st->size - 1)
        printf("Stack Overflow \n");
    else 
    {
        st->top ++ ;
        st->S[st->top] = x;
    }
}

int pop (struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        printf("Stack Underflow \n");
    else 
    {
        x = st->S[st->top--] ; // index = top_stack - position -1 
    }
    return x;   
} 

int peek (struct Stack st, int index)
{
    int x = -1;
    if ( (st.top - index + 1) < 0)
        printf ("Invalif Index \n");
    else 
        x = st.S[st.top - index + 1];  // index = top_stack - position + 1
    return x;
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    else 
        return 0;
}

int isFull(struct Stack st)
{
    if (st.top == (st.size - 1))
        return 1;
    else 
        return 0;
}

int stackTop(struct Stack st)
{
    if (!isEmpty(st))
        return st.S[st.top] ;
    else 
        return -1;
}
 
int main()
{
    Stack st;
    create (&st);

    push (&st,10);
    push (&st,20);
    push (&st,30);
    push (&st,40);

    
    cout << peek(st,2) << endl ;

    Display (st);
    return 0;
}