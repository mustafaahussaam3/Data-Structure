#include <iostream>
#include <map>

using namespace std;


int main ()
{   
    map<int, int> mp;
    map<int, int>::iterator it;

    mp[1] = 2;
    mp[2] = 4;
    mp[3] = 2;
    mp[1] = 100;
    mp[2] = 200;
    mp[3] = 100;

    for (it = mp.begin (); it != mp.end(); it++)
    {   
        cout << it->first << " " << it->second << endl;
    }

    char *s;
    s = {'a','b','c','d'};
        
    return 0;

}

    // string s = {"12, 2, 3, 4, 5"};
    // int n = stoi(s.substr(0, s.find(',',0) - 0));
    // string s1 = s.substr(2,1);
    // cout << "string" << s1 << endl ;
    // cout << n << endl ;