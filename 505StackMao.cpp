#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <map>

using namespace std;

string isBalanced(string s)
{

    map <char, char> mapping;
    mapping['}'] = '{' ;
    mapping[')'] = '(' ;
    mapping[']'] = '[' ;

    map <char, char>::iterator it;
    stack <char> st;
    int count = 0;
    for ( int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push (s[i]);
            count ++ ;
        }
        else if (s[i] == '}' || s[i] == ')' || s[i] == ']')
        {
            if (st.empty())
                return "0";
            else 
            {
                char temp  = st.top();
                it = mapping.find(s[i]);
                if (temp = it->second)
                {
                    st.pop();
                }
                else 
                    return "0";
            }
        }
    }
    stringstream ss;
    ss << 1 << " " << count;
    return st.empty() ? ss.str() : "0" ;

}
int main ()
{
    string A = "{([a+b]*[c-d])/e}";
    cout << isBalanced(A) << endl;
 
    string B = "{([a+b]}*[c-d])/e}";
    cout << isBalanced(B) << endl;
 
    string C = "{([{a+b]*[c-d])/e}";
    cout << isBalanced(C) << endl;

    string D = "a+b";
    cout << isBalanced(D) << endl;

    return 0;
}