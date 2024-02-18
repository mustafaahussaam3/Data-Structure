/*
    the difference between aupper case and lower case is 32 
    A -> 65  a -> 97 
    B -> 66  b -> 98 

    so, the difference between supper cases and lower cases is 32 

*/

#include <iostream>


using namespace std;


int main ()
{
 char A[] =  "WELCOME" ;
 for (int i =0 ; A[i] != '\0' ; i++)
 {
    A[i] = A[i] + 32;   
 }
 cout << A ;
 return 0;
}