/*  LeetCode: "Isomorphic Strings"
    - Given two strings s and t, determine if they are isomorphic.  */

#include <iostream>
using namespace std;

bool isIsomorphic(string s, string t) {
    for (int i = 0; i < s.size(); i++) {
        if (s.find(s[i]) != t.find(t[i]))
            return false;
    }
    return true;
}