/*  LeetCode: "Subtree of Another Tree"
    - Given two non-empty binary trees s and t, check if tree t is a subtree of s.  */

#include<iostream>
#include "TreeNode.h"
using namespace std;

bool isEqual(TreeNode* s, TreeNode* t){
    if(t == nullptr && s == nullptr)
        return true;
    if(s == nullptr || t == nullptr)
        return false;
    if (!isEqual(s->getLeft(), t->getLeft())) return false;
    if (!isEqual(s->getRight(), t->getRight())) return false;
    if (s->getVal() != t->getVal()) return false;
    return true;
}

bool isSubtree(TreeNode* s, TreeNode* t){
    if(t == nullptr)
        return true;
    if(s == nullptr)
        return false;
    return isEqual(s, t) || isSubtree(s->getLeft(), t) || isSubtree(s->getRight(), t);
}