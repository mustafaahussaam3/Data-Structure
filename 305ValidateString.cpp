#include <iostream>

using namespace std ;

int validate(const char *x)
{
    for (int i = 0; x[i] != 0; i++)
    {
        if ( !(x[i] >= 65 && x[i] <= 90) && !( x[i] <= 97 && x[i] >= 122 ) && !( x[i] >= 48 && x[i] <= 57 ) )
        return 0; 
    }
    return 1;
}


int main()
{
    const char *name = "ASIL%2340";

    if (validate(name))
    cout << "valid" << endl;
    else
    cout << "not valid" << endl ;


    return 0;
}