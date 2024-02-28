#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

string isBalance(string s)
{   
    char x;
    int count = 0;
    stack <char> st;
    stringstream ss;
    for (int i = 0; i < s.size(); i++)
    {   
        if ( s[i] == '(' || s[i] == '[') 
        {
             x = s[i];
             count++;
             st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']')
        {
            if (st.empty())
                return "0";
            else 
                if ( s[i] < 50 && x < 50)
                    st.pop();
                else if ( s[i] < 100 && x < 100)
                    st.pop();
                else 
                    return "0";
        }
    }
    if (st.empty())
    {
         ss << 1 << " " << count ;
         return ss.str();
    }
    else 
         return "0";
    
}

int main()
{
    string s = "(mustafa)(hussam)]";
    string t = "(c([mu]er)) y(xe[e])(0sffdssfsf[2354][234])";
    cout << isBalance(s) << endl;

    return 0;
}