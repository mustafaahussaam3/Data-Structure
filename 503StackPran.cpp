#include <iostream>

using namespace std;

class Node 
{
public:
    char data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack(){ top = NULL;}
    void push(char x);
    char pop();
    void Display();
    int isBalance(string s);
};

void Stack::push (char x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack is Full " << endl;
    }
    else 
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char Stack::pop()
{
    char x = -1;
    Node *t = new Node;
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl ;
    }
    else 
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void Stack::Display()
{
    Node *p;
    p = top;   
    while (p != NULL)
    {
        cout << p->data << " "; 
        p = p->next;
    }
    cout << endl;
}

int Stack::isBalance(string s)
{    
    for (int i =0; s[i]!= '\0' ; i++)
    {
        if (s[i] == '(')
            push(s[i]);
        else if (s[i] == ')')
        {
            if (top == NULL)
                return 0;
            else 
                pop();    
        }
    }
    if (top == NULL)
        return 1;
    else 
        return 0;
}
int main()
{
    Stack stk;
    string s = "((a+b)*(c-d))()()(()))";
    cout << stk.isBalance(s);
    return 0;
}