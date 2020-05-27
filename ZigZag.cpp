/*  LeetCode: "ZigZag Conversion"
    - Given a string and the number of desired rows, convert string into a zigzag formation.    */

#include <iostream>
#include <vector>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1)
        return s;
    bool slant = false;
    vector<vector<char>> vec;
    for (int i = 0; i < numRows; i++)
        vec.push_back({});
    for (int i = 0; i < s.length(); i++) {
        if ((i % (2*numRows-2)) < numRows)
            vec[i % (2*numRows-2)].push_back(s[i]);
        else
            vec[2*numRows-2 - i % (2*numRows-2)].push_back(s[i]);
    }
    string x = "";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            x += vec[i][j];
        }
    }
    return x;
}