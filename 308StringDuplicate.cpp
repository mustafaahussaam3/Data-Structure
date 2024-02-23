/* 
    figure out the duplicate using hash table 
*/

#include <iostream>

using namespace std;


int main()
{
    char A[] = "finding" ;
    int H[26] = {0};

    for ( int i = 0 ; A[i] != '\0' ; i++)
    {
        H[A[i] - 97] += 1;
    }

    for( int i  = 0; i < 26; i++)
    {
        if (H[i] > 1)
            printf ("%c %d\n", i + 97, H[i]);
    }
    return 0;
}