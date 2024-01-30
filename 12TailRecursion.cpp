/*
    when recursive function has recursive call as last statment in the function, then it will callled tail recursion 
    also, everything is preforming at calling time.
    ** at returning time it doesn't have to perform anything at all 
    
    @ Mustafa Hussam Eldin 
*/
#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n <<endl;
        fun(n-1);

    }
}

int main ()
{
    int x = 3; 
    fun(x);

    return 0;
}