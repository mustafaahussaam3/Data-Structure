/* 
    it's simply to use the formula of the first N natural number that is ( n(n+1)/2 ) but we will use the recursive function instead for learning purpose 
    but it consume alot of time and stack so, in coding use the formula

    int sum (int n) { return n*(n+1)/2 ;} it takes O(1) time  and space is O(1)

    ** we can use loop also it takes O(n) and space is O(1)

    int sum (int n ){ 
        int i, s = 0;
        for (i = 1; i <= n; i++){
            s = s+i;
        }
        return s;
    }
*/

// it takes O(n) time and it takes more stack for each function so the space is O(n)
#include <iostream>

using namespace std;

int sum (int n)
{
    if (n == 0)
     return 0;
    else 
     return sum(n-1) + n;
}

int main()
{
    cout << sum(5) << endl ;
    return 0;
}