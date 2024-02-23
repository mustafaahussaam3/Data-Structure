/*
    Anagram means that two strings has the same character despite of its places 
    * you have to check first if the two strings of the same size then you process in the algorithm 
    * you can use bitset also if there is no duplicated characters in the array
*/
#include <iostream>

using namespace std;
int Anagram ( char *A, char *B)
{
    int H[26] = {0} ;
    int i,j;

    for (i = 0; A[i] != '\0' ; i++)
        H[A[i] - 97] += 1;
    for (j = 0; B[j] != '\0' ; j++)
    {
        H[B[j] - 97] -= 1;
        if (H[B[j]-97] < 0)
            return 0;
    }
    if (i != j) return 0;
    else return 1;
}

int main ()
{
    char A[] = "decimal" ;
    char B[] = "medical" ;

    if (Anagram(A,B))
        cout << "Anagram Arrays" << endl;
    else 
        cout << "not Anagram Arrays" << endl;

    return 0;
}