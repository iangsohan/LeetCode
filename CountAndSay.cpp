/*  LeetCode: "Count and Say"
    - Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. */

#include<iostream>
using namespace std;

string countAndSay(int n) {
    string s = "";
    int freq = 1;
    for (int i = 1; i <= n; i++) {
        string t = "";
        for (int j = 1; j < s.length(); j++) {
            if (s[j-1] == s[j]) freq++;
            else {
                t += to_string(freq);
                t += s[j-1];
                freq = 1;
            }
        }
        if (i < 3) s += "1";
        else {
            s = t;
            s += to_string(freq);
            s += "1";
            freq = 1;
        }
    }
    return s;
}