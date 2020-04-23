/*	LeetCode: "Implement strStr()"
	- Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.	*/

#include<iostream>
#include<string>
using namespace std;

int strStr(string haystack, string needle) {
    int nLen = needle.length();
    if (nLen == 0)
        return 0;
    for (int i = 0; i < haystack.length(); i++) {
        if (haystack.substr(i, nLen).compare(needle) == 0)
            return i;
    }
    return -1;
}