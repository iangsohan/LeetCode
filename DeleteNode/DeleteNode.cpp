/*  LeetCode: "Delete Node in a Linked List"
    - Write a function to delete a node in a singly linked list, given only access to that node.    */

#include <iostream>
#include "ListNode.h"
using namespace std;

void deleteNode(ListNode* node) {
    while (node->getNext() != nullptr) {
        node->setVal(node->getNext()->getVal());
        if (node->getNext()->getNext() == nullptr)
            node->setNext(nullptr);
        else
            node = node->getNext();
    }
}