/*
    you will not get the value without 2 astrics in 2d array 
    in this example will gives the same address 
    to get the value you have to use this formula *(*(baseNumber + rowNumber) + columnNumber)

    author: Mustafa Hussam Eldin 
*/

#include <iostream>

using namespace std ;



int main ()
{
    int x[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    cout << x+3 << endl << *(x+3) << endl << *(x+2)+3 << endl << x << endl << *(*x) ;

    return 0;
}