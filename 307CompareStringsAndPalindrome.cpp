/* 
    Palindrome : means if you reverse the string it will remians the same 
    for example : Madame if we reverse it, it will be also madame , liril , nitin , azza 

    you can first reverse the string on another array then compare it or yyou can compare the last element with the first element
     if they are the same then the string is equals and looping on each element 
*/
#include <iostream>

using namespace std;
int Palindrome(char *a)
{   
    int i, j = 0;
    for ( i = 0 ; a[i] != '\0' ; i++)
    {
    }
    i -= 1;
    for (; j < i; i--, j++)
    {
        if ( a[i] != a[j])
        return 0;
    }
    return 1;
}

int main ()
{
    char A[] = "liril";
    char B[] = "painter";
    int i,j;
    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0' ; i++ , j++)
        if (A[i] != B[j]) break;
    if (A[i] == B[j]) printf("equal \n");
    else if (A[i] > B[j]) printf("greater \n");
    else if (A[i] < B[j]) printf("smaller \n");

    if (Palindrome(A)) 
        cout << "valid";
    else 
        cout << "not valid";
    return 0;


}