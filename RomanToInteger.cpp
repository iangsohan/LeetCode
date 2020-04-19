/*	LeetCode: "Roman to Integer"
	- Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.	*/

#include<iostream>
#include<unordered_map>
using namespace std;

int romanToInt(string s) {
    int romanToInt(string s) {
        int ans = 0;
        int tmp = 0;
        unordered_map<char, int> umap = { {'I', 1},{'V', 5}, {'X', 10}, {'L', 50},
                                         {'C', 100}, {'D', 500}, {'M', 1000} };
        for (int i = 0; i < s.length(); i++) {
            ans += umap[s[i]];
            if (tmp < umap[s[i]]) {
                ans -= tmp * 2;
                tmp = 0;
            }
            tmp = umap[s[i]];
        }
        return ans;
    }
}