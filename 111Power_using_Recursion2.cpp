/* 
    here we will reduce the time to half that the algorithm will only make the recursion n/2 times by checking the power of the exponent 
    --> if it's even it will execute by a formula 
    --> if it's odd it will have one more multiply and execute by its formula 
*/


#include <iostream>

using namespace std ; 


int pow (int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow(m*m,n/2);
    else 
        return m * pow(m*m,(n-1)/2);
}

int main ()
{
    cout << pow(2,6) << endl;
    return 0;
}