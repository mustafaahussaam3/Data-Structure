#include <iostream>

using namespace std; 


int main (){

    int x[5]={1,2,3,4,5}; 

    for (int i = 0; i < 5 ; i++)
    {
        cout << &x[i] << endl ;
        cout << *(x + i) << endl ;
        cout << x[i] << endl ; 
        cout << *x + i << endl ;
        cout << x + i << endl;
    }

}