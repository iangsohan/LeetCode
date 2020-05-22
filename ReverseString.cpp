/*  LeetCode: "Reverse String"
    - Write a functions that reverse a string with each character indexed in an array.  */

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    for (int i = s.size()-1; i > -1; i--) {
        s.push_back(s[i]);
        s.erase(s.begin()+i);
    }
}