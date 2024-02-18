#include <iostream>

using namespace std;


int main ()
{
    char A[] = "python";
    char B[7];
    int i = 0, j = 0, temp;
    for (; A[j] != '\0'; j++)
    {
    }
    // i = 5
    // for (; i >=0; j++, i--)
    // {
    //     B[j] = A[i-1] ; 
    // }
    // B[j-1] = '\0';
    j -= 1;
    for (; i < j; i++ , j--)
    {
        temp = A[j];
        A[j] = A[i];
        A[i] = temp ;
    }
    printf("%s", A);
    return 0;
}