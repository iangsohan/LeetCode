/*  LeetCode: "Binary Tree Level Order Traversal II"
    - Given a binary tree, return the bottom-up level order traversal of its nodes' values. */

#include<iostream>
#include<vector>
#include "TreeNode.h"

void levelOrderHelper(TreeNode* root, vector<vector<int>>& level, int height) {
    if (root == nullptr) return;
    if (height >= level.size()) level.push_back({});
    level[height].push_back(root->getVal());
    levelOrderHelper(root->getLeft(), level, height+1);
    levelOrderHelper(root->getRight(), level, height+1);
}

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> level {};
    levelOrderHelper(root, level, 0);
    reverse(level.begin(), level.end());
    return level;
}