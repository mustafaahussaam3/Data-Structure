/*
    you can add what you want of operators and change only in the table 

    symb  outpre  instackpre
    +,-     1          2
    *,-     3          4
    ^       6          5
    (       7          0
    )       0          ?
    
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int outStackPre(char x)
{
    if ( x  == '+' || x == '-')
        return 1;
    else if ( x == '*' || x == '/')
        return 3;
    else if ( x == '^')
        return 6;
    else if ( x == '(')
        return 7;
    else if ( x == ')')
        return 0 ;
    else 
        return -1;
}

int inStackPre(char x)
{
    if ( x  == '+' || x == '-')
        return 2;
    else if ( x == '*' || x == '/')
        return 4;
    else if ( x == '^')
        return 5;
    else if ( x == '(')
        return 0;
    else  
        return -1;
}

int isOperand(char x)
{
    if ( x == '+' || x == '-' || x == '*' || x == '/' || x == '^' || x == '(' || x == ')')
        return 0;
    else 
        return 1;
}

string infToPostAsso(string infix)
{
    stack<char> st;
    string postfix;
    int i = 0;
    while ( i < infix.size())
    {
        if (isOperand(infix[i]))
        {
            postfix.push_back(infix[i++]);
        }
        else if (!isOperand(infix[i]))
        {
            if (st. empty() || (inStackPre(st.top()) < outStackPre(infix[i])))
                st.push(infix[i++]);
            else if ( inStackPre(st.top()) > outStackPre(infix[i]))
            {
                postfix.push_back(st.top());
                st.pop();
            }
           else 
                st.pop();
        }
    }
    while (!st.empty() && st.top() != ')')
    {
        postfix.push_back(st.top());
        st.pop();
    }
    return postfix ;  
}

int Eval(string s)
{
    stack<char> st;
    int x2,x1,r = 0;

    for ( int i = 0; s[i] != '\0'; i++)
    {
        if (isOperand(s[i]))
            st.push(s[i] - '0');
        else 
        {   
            x2 = st.top();
            st.pop();
            x1 = st.top();
            st.pop();
            switch(s[i])
            {
                case '+': r = x1 + x2; break;
                case '-': r = x1 - x2; break;
                case '*': r = x1 * x2; break;
                case '/': r = x1 / x2; break;
            }
            st.push(r);
        }   
        } 
        return st.top();
}   

int main ()
{
    string infix = "1+2*5-9+8*8/7-9+5*2-6*8-6+6+6+6-9*8";
    string postfix = infToPostAsso(infix);
    cout << postfix << endl ;
    cout << 1+2*5-9+8*8/7-9+5*2-6*8-6+6+6+6-9*8 <<endl;
    cout << Eval(postfix) << endl ;
    return 0;
}