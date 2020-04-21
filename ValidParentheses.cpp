/*	LeetCode: "Valid Parentheses"
	- Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.	*/

#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
	stack<char> btm, top;

	if (s.length() % 2 != 0)
		return false;
	if (s.length() == 0)
		return true;

	for (int i = 0; i < s.length(); i++) {
		btm.push(s[i]);
	}

	top.push(btm.top());
	btm.pop();
	while (btm.size() != 0) {
		while (btm.size() > 0 && top.size() > 0 && top.top() - btm.top() < 3 && top.top() - btm.top() > 0) {
			top.pop();
			btm.pop();
		}

		if (btm.size() > 0) {
			top.push(btm.top());
			btm.pop();
		}
	}

	if (top.size() == 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	string x = "([)[]]{}";
	if (isValid(x)) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
}