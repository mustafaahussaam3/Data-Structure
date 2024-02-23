#include <iostream>
#include <string>
using namespace std;

string FindIntersection(string strArr[], int arrLength) {

string parse;
int index;
  for ( int i = 0; strArr[0][i] != '\n'; i++)
  {
    if (strArr[0] == ", ")
      index = 
    else 
      parse = strArr[0].
  }
  int index = strArr[0].find(", ");
  string parse = strArr[0].substr(index -1,1);
  int x = stoi(parse);
  
  return strArr[0];
}

int main(void) { 
  // keep this function call here
  string A[] = {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"};
  int arrLength = sizeof(A) / sizeof(*A);
  cout << FindIntersection(A, arrLength);
  return 0;
    
}
