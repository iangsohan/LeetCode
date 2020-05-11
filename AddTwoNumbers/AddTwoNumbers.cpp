/*	LeetCode: "Add Two Numbers"
    - Given two non-empty linked lists representing two non-negative integers.
    - The digits are stored in reverse order and each of their nodes contain a single digit.
    - Add the two numbers and return it as a linked list.
    - Assume the two numbers do not contain any leading zero, except the number 0 itself.   */

#include<iostream>
#include "ListNode.h"
using namespace std;

void addTwoNumbersHelper(ListNode*& l1, ListNode*& l2, int carry) {
    if (l2 == nullptr && carry == 0) return;
    if (l2 == nullptr) {
        ListNode* num2 = new ListNode;
        num2->setVal(0);
        l2 = num2;
    }
    if (l1 == nullptr) {
        ListNode* num1 = new ListNode;
        num1->setVal(0);
        l1 = num1;
    }
    l1->setVal(l1->getVal() + l2->getVal() + carry);
    if (l1->getVal() > 9) {
        l1->setVal(l1->getVal() % 10);
        carry = 1;
    } else
        carry = 0;
    addTwoNumbersHelper(l1->getNext(), l2->getNext(), carry);
    delete l2;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    addTwoNumbersHelper(l1, l2, 0);
    return l1;
}