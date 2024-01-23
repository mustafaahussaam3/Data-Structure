/*
    ** Array can be passed 
    -as a parameter to a function or 
    -to be passed to the main function 

    ** when you passed an array from the main you have to send it's elements number as a parameter, because array 
        take the parameter in a pointer and it's only pointing to the array. 
    
    ** array is passed by address from main
    
*/


#include <iostream> 

using namespace std;

// void fun(int A[], int n){  //when we receive array we can take it in ( int A[] ) or ( int *A ), but it's better to use ( int *A ) because it can take pointer from array or from pointer variable 

// void fun(int *A, int n){

//     A[0] = 25;   // you can control the main array because A is passed by pointer 

// }

// int main ()
// {
//     int A[5]={1,2,3,4,5};
//     int n = 5;
//     fun(A,n); // A here is address of first element in the array 

//     cout << A[0] <<endl;
//     return 0;
// }


 /////////////////////////////////////////////////////////////////////////
int * fun (int n){ // you can use ( int [] ) instead of (*), but its better to use star as some compilers didn't accept array format  

    int *p;
    p = (int*) malloc(n*sizeof(int));  // malloc return address and we cast that address to int* so, know x has address of the place in malloc 
    return p;
}


 int main ()
 {
    int * A ;

    A = fun(5);
 
    return 0;
 }
