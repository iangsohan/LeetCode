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

//You created a temporary variable to build the answer when you didn't have to.
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
        return "";
    for (int curLen = 0; curLen < strs[0].length(); curLen++) {
        for (int i = 1; i < strs.size(); i++) {
            if (curLen == strs[i].size() || strs[0][curLen] != strs[i][curLen])
                return strs[0].substr(0, curLen);
        }
    }
    return strs[0];
}

//Faster solution but it's hard to understand why without having taken comp arch.
//Memory that is close together is faster to access.
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
        return "";
    string compare = strs[0];
    int maxLen = compare.length();
    for (int i = 1; i < strs.size(); i++) {
        maxLen = min(maxLen, strs[i].length());
        for (int j = 0; j < maxLen; j++) {
            if (compare[j] != strs[i][j]) {
                maxLen = j;
                break;
            }
        }
    }
    return compare.substr(maxLen);
}

//Standard library solution
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
        return "";
    auto compare = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        auto firstMismatch = mismatch(compare.begin(), compare.end(), strs[i].begin());
        int len = distance(compare.begin(), firstMismatch.first);
        compare = compare.substr(0, len);
    }
    return compare;
}

//Last but not least if there are a stupid number of strings and the strings are stupid long there is the
//parallelization solution. This is a SDE 2 level interview answer. I don't want overwhelm you.
//If you get to this point, then I'll teach you.