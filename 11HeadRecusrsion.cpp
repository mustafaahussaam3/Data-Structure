/*
    if the recursive call is the first statement in the recursive function then it's a head recursion 
    ** all the statements is occur at the returning time 

    @ Mustafa Hussam Eldin 
*/


#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n-1);
        cout << n <<endl;
    }
}

int main ()
{
    int x = 3; 
    fun(x);

    return 0;
}