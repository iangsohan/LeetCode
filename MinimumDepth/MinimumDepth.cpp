/*  LeetCode - "Minimum Depth of Binary Tree"
    - Given a binary tree, find its minimum depth.  */

#include<iostream>
#include "TreeNode.h"
using namespace std;

int minDepth(TreeNode* root) {
    if (root == nullptr) return 0;
    if (root->getLeft() == nullptr) return 1 + minDepth(root->getRight());
    else if (root->getRight() == nullptr) return 1 + minDepth(root->getLeft());
    return 1 + min(minDepth(root->getLeft()), minDepth(root->getRight()));
}