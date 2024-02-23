#include <iostream>

using namespace std ; 


int main ()
{
    char A[] = "finding" ;
    long int H = 0, x =0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        x = 1 << (A[i] - 97); 
        if ( (x & H) > 0) //masking 
            printf(" %c is duplicated \n", A[i]); 
        else 
            H = x | H ;  //merging 
    }
    return 0;
}
