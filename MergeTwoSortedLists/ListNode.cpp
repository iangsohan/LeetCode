#include <iostream>
#include "ListNode.h"

using namespace std;

ListNode::ListNode() {
    val = 0;
    next = NULL;
}

int ListNode::getVal() {
    return val;
}

ListNode* ListNode::getNext() {
    return next;
}

void ListNode::setVal(int i) {
    val = i;
}

void ListNode::setNext(ListNode* n) {
    next = n;
}