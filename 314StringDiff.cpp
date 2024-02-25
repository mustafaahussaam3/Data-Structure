
#include <iostream>
#include <string>
using namespace std;

string FindDiff(string strArr[]) {

    for (int i = 0 ; i < strArr[0].length(); i++)
    {
        if (strArr[0][i] != strArr[1][i] )
        {
            return "false";
        }
    }
    return "True";
}


int main(void) { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. */

  string A[] = {"110010", "110010"};
  cout << FindDiff(A);
  return 0;
}