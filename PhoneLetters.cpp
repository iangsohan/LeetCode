/*  LeetCode: "Letter Combinations of a Phone Number"
    - Given a string containing digits from 2-9, return all letter combinations that the number could represent.    */

#include<iostream>
#include<vector>
using namespace std;

void helper(char digit, vector<string>& svec, vector<string> dlet) {
    vector<string> temp = svec;
    int len = dlet[digit-'0'].length();
    while (svec.size() < len)
        svec.push_back("");
    for (int j = 0; j < len-1; j++)
        svec.insert(svec.end(), temp.begin(), temp.end());
    for (int j = 0; j < svec.size(); j += svec.size()/len) {
        for (int k = 0; k < svec.size()/len; k++)            
            svec[j+k] += dlet[digit-'0'][j/(svec.size()/len)];
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> dlet {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> svec {};
    if (digits.length() < 1) return {};
    for (int i = 0; i < digits.length(); i++)
        helper(digits[i], svec, dlet);
    return svec;
}