/*  LeetCode: "Maximum Depth of Binary Tree"
    - Given a binary tree, find its maximum depth.  */

#include<iostream>
#include "TreeNode.h"
using namespace std;

int maxDepth(TreeNode* root) {
    if (root == nullptr) return 0;
    return 1 + max(maxDepth(root->getLeft()), maxDepth(root->getRight()));
}