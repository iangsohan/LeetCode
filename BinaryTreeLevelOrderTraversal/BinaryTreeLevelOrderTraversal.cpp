/*  LeetCode: "Binary Tree Level Order Traversal"
    - Given a binary tree, return the level order traversal of its nodes' values.   */

#include<iostream>
#include<vector>
#include "TreeNode.h"
using namespace std;

void levelOrderHelper(TreeNode* root, vector<vector<int>>& level, int height) {
    if (root == nullptr) return;
    if (height >= level.size()) level.push_back({});
    level[height].push_back(root->getVal());
    levelOrderHelper(root->getLeft(), level, height+1);
    levelOrderHelper(root->getRight(), level, height+1);
}

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> level {};
    levelOrderHelper(root, level, 0);
    return level;
}