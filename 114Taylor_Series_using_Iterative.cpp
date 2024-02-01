/*
    it will take O(n) with iterative 
*/
#include <iostream>

using namespace std;

double exp(int x, int n)
{
    double s; 

    for (;n>0;n--)
    {
        s = 1 + x*s / n;
    }
    return s;
}

int main ()
{   
    cout << exp(2,15) << endl ;
    return 0;
}