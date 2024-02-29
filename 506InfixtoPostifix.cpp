#include <iostream>
#include <cstring>

using namespace std;

struct Node 
{
    char data;
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

char pop()
{
    Node *t;
    char x = -1;
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

int pre(char x)
{
    if(x=='+' || x=='-')
         return 1;
    else if(x=='*' || x=='/')
         return 2;
    return 0;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
         return 0;
    else
         return 1;
}

char *InfToPost(char * infix)
{
    int len = strlen(infix);
    char *postfix = (char*)malloc((len + 2)*sizeof(char));
    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix [i++];
        else if (!isOperand(infix[i]))
        {
            if (pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else 
                postfix[j++] = pop();
        }
    }
    while ( top != NULL)
        postfix[j++] = pop();
    postfix[j] = '\0';
    return postfix ;
}

int main()
{
    char *infix = "a+b*c-d/e*e+f-g";
    push ('#');
    char *postfix ;

    postfix = InfToPost(infix); 

    printf("%s", postfix) ;
} 