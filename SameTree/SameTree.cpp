/*  LeetCode: "Same Tree"
    - Given two binary trees, write a function to check if they are the same or not.
    - Two binary trees are considered the same if they are structurally identical and the nodes have the same value.    */

#include<iostream>
#include "TreeNode.h"
using namespace std;

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) return true;
    else if (p != nullptr && q != nullptr) {
        return p->getVal() == q->getVal() &&
            isSameTree(p->getLeft(), q->getLeft()) &&
            isSameTree(p->getRight(), q->getRight());
    }
    return false;
}