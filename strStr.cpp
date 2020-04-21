/*	LeetCode: "Implement strStr()"
	- Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.	*/

#include<iostream>
#include<string>
using namespace std;


// Correct, but too slow!
int strStr(string h, string n) {
    if (n == "")
        return 0;
    for (int i = 0; i < h.length(); i++) {
        if (h[i] == n[0]) {
            int x = strStr(h.substr(i + 1, h.length() - 1), n.substr(1, n.length() - 1));
            if (x == 0) {
                return i;
            } else if (x == -1) {
                return -1;
            }
        }
    }
    return -1;
}

int main() {
    cout << strStr("mississippi", 
        "issip") << endl;

    return 0;
}