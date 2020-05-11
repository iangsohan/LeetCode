
#ifndef TREENODE_H
#define TREENODE_H

#include<iostream>
using namespace std;

class TreeNode {
public:
	TreeNode();
	int getVal();
	TreeNode* getLeft();
	TreeNode* getRight();
	void setVal(int i);
	void setLeft(TreeNode* n);
	void setRight(TreeNode* n);

private:
	int val;
	TreeNode* left;
	TreeNode* right;
};

#endif