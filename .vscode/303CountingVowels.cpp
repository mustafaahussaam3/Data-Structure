#include <iostream>

using namespace std;

int main ()
{
    char A[] = "How are you!" ;
    int i = 0, vcount = 0, ccount ;
    for (;i < A[i] != '\0'; i++ )
    {
        if (A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'u' || A[i] == 'U')
        vcount ++;
        else if (A[i] >= 65 && A[i] <= 90 && A[i] >= 97 && A[i] <= 122)
        ccount ++;
    }
    cout << vcount << ccount << endl ; 

    return 0;
}