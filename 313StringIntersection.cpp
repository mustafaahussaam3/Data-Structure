#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;

string FindIntersection(string strArr[]) {
    unordered_set<int> set1, set2;
    stringstream ss1(strArr[0]), ss2(strArr[1]);
    string token;

    // Parse the first string and store numbers in set1
    while (getline(ss1, token, ',')) {
        int num = stoi(token);
        set1.insert(num);
    }

    // Parse the second string and store numbers in set2
    while (getline(ss2, token, ',')) {
        int num = stoi(token);
        set2.insert(num);
    }

    // Find intersection of set1 and set2
    unordered_set<int> intersection;
    for (int num : set1) {
        if (set2.count(num) > 0) {
            intersection.insert(num);
        }
    }

    if (intersection.empty()) {
        return "false";
    } else {
        stringstream result_ss;
        for (int num : intersection) {
            result_ss << num << ",";
        }
        string result = result_ss.str();
        // Remove the trailing comma
        result.pop_back();
        return result;
    }
}

int main(void) { 
    string A[] = {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"};
    cout << FindIntersection(A);
    return 0;
}
