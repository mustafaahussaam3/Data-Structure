#include <iostream> 

using namespace std;


int main ()
{
    char A[] = "How are you";
    int i = 0, count = 0, words;

    for (i = 0; A[i] != '\0' ; i++)
    {
        if (A[i] == ' ' && A[i-1] != ' ') count ++; // we checking also for the white spaces 
    }
    words = count + 1;
    cout << words ;
    return 0;
}