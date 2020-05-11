/*  LeetCode: "Add Binary"
    - Given two binary strings, return their sum (also a binary string).
    - The input strings are both non-empty and contains only characters 1 or 0. */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string addBinary(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string c = "";
    int carry = 0;
    for(int i= 0, j=0; carry==1 || i < a.length() || j < b.length();){
        int val = carry;
        carry = 0;
        if(i < a.length()){
            val += (a[i]=='1');
            i++;
        }
        if(j < b.length()){
            val += (b[j]=='1');
            j++;
        }
        (val == 1 || val == 3) ? c+='1':c+='0';
        carry = (val >=2);
    }
    reverse(c.begin(), c.end());
    return c;
}