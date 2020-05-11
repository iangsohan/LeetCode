/*  LeetCode - "Path Sum"
    - Given a binary tree and a sum, determine if the tree has a root-to-leaf path with the given sum.  */

#include<iostream>
#include "TreeNode.h"
using namespace std;

bool hasPathSum(TreeNode* root, int sum) {
    if (root == nullptr) {
        return false;
    }
    if (root->getVal() == sum &&
        root->getLeft() == nullptr &&
        root->getRight() == nullptr) {
        return true;
    }
    return (hasPathSum(root->getLeft(), sum - root->getVal()) ||
            hasPathSum(root->getRight(), sum - root->getVal()));
}