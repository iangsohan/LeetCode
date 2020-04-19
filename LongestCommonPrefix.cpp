/*	LeetCode: "Longest Common Prefix"
	- Write a function to find the longest common prefix string amongst an array of strings.
	- If there is no common prefix, return an empty string "".
	- Assumes only lowercase letters.	*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string s = "";
    if (strs.size() == 0)
        return s;
    for (int j = 0; j < strs[0].size(); j++) {
        int i = 1;
        for (i = 1; i < strs.size() && j < strs[i].size(); i++) {
            if (strs[0][j] != strs[i][j])
                return s;
        }
        if (i == strs.size())
            s += strs[0][j];
    }
    return s;
}