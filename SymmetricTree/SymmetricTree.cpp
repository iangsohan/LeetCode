/*  LeetCode - "Symmetric Tree"
    - Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).    */

#include<iostream>
#include "TreeNode.h"
using namespace std;

void inOrder(TreeNode* left, TreeNode* right, bool& symmetric) {
    if(left == nullptr && right == nullptr)
        return;
    if(left == nullptr || right == nullptr){
        symmetric = false;
        return;
    }
    inOrder(left->getLeft(), right->getRight(), symmetric);
    if (left->getVal() != right->getVal())
        symmetric = false;
    inOrder(left->getRight(), right->getLeft(), symmetric);        
}

bool isSymmetric(TreeNode* root) {
    bool symmetric = true;
    if (root == nullptr) return symmetric;
    inOrder(root->getLeft(), root->getRight(), symmetric);
    return symmetric;
}