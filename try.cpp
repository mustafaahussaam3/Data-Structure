#include <iostream>

using namespace std;

int main ()
{
    string s = {"12, 2, 3, 4, 5"};
    int n = stoi(s.substr(0, s.find(',',0) - 0));
    string s1 = s.substr(2,1);
    cout << "string" << s1 << endl ;
    cout << n << endl ;
    return 0;
}