/*  LeetCode: "Balanced Binary Tree"
    - Given a binary tree, determine if it is height-balanced.  */

#include<iostream>
#include "TreeNode.h"
usinga namespace std;

int isBalancedHelper(TreeNode* root, bool& balanced){
    if(!balanced)
        return 0;
    if(root == nullptr)
        return 0;
    int leftH = isBalancedHelper(root->getLeft(), balanced);
    int rightH = isBalancedHelper(root->getRight(), balanced);
    if(abs(leftH-rightH)>1){
        balanced = false;
        return 0;
    }
    return max(leftH, rightH) + 1;
}

bool isBalanced(TreeNode* root) {
    bool balanced = true;
    isBalancedHelper(root, balanced);
    return balanced;
}