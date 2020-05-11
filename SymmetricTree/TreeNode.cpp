#include <iostream>
#include "TreeNode.h"

using namespace std;

TreeNode::TreeNode() {
    val = 0;
    left = nullptr;
    right = nullptr;
}

int TreeNode::getVal() {
    return val;
}

TreeNode* TreeNode::getLeft() {
    return left;
}

TreeNode* TreeNode::getRight() {
    return right;
}

void TreeNode::setVal(int i) {
    val = i;
}

void TreeNode::setLeft(TreeNode* l) {
    left = l;
}

void TreeNode::setRight(TreeNode* r) {
    right = r;
}