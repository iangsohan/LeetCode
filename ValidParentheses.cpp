/*	LeetCode: "Valid Parentheses"
	- Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.	*/

#include<iostream>
#include<stack>
#include<unordered_map>
#include<string>
using namespace std;

bool isValid(string s) {
	unordered_map<char, char> par{ {'(', ')'}, {'{','}'}, {'[',']'} };
	stack<char> left;
	for (int i = 0; i < s.length(); i++) {
		if (left.size() != 0 && s.at(i) == par[left.top()]) {
			left.pop();
		} else {
			left.push(s.at(i));
		}
	}
	return(left.empty());
}