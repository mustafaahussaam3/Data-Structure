/*
    this method is faster because it taking less number of multiplication than Taylor Series using Recursion without talking common factor  
    --> double divided by integer gets double 
    --> integer divided by double gets integer 
*/

#include <iostream>


using namespace std ;

double exp(int x, int n)
{  
    static double sum = 1;

    if ( n == 0 )
        return sum;

    sum = 1 + x*sum/n;
    return exp(x,n-1);
}

int main ()
{
    cout << exp(2,15)<< endl;
    return 0;
}