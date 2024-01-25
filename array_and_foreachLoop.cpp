/*
    when we used for each loop with the array, we will find that it can works with the main fucntion but it cannot works in the derived functions and that 
    because for each loop cannot works with pointer, and inside the derived function the array is passed through pointer so the for each cannot work

    also, same when we use sizeof in derived function it see the array name as pointer not as array at all so, it will gives unexpected answer
@ Mustafa Hussam Eldin
*/


#include <iostream>


using namespace std ;

//it will gives error so, instead use for loop
// void fun( int * A){

//     for (int x:A)
//     cout << x << endl;
// }
void fun( int * A){

    for (int i = 0; i < 5; ++i)
    cout << A[i] <<" ";

}

int main ()
{
    int A[] = {2,4,6,8,10};
    
    for(int x:A){
        cout << x << endl;
    }

    fun(A);



    return 0;    
}