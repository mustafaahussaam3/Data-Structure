#include <iostream>

using namespace std;

float exp (int x, int n)
{
    static float p = 1;
    static float f = 1;
    float z;
  
    if (n == 0)
        return 1;
    else 
    { 
        z = exp(x, n -1);
        p *=x;
        f *=n;
        return z + (p/f);
    }

}

int main ()
{
    cout << exp(5,10) << endl ; // exp(exponent power, number of derivatives or taylor resolution)
    return 0;
}