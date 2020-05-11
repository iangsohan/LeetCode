/*  LeetCode: "Remove Duplicates from Sorted List"
    - Given a sorted linked list, delete all duplicates such that each element appear only once.    */

#include<iostream>
#include "ListNode.h"
using namespace std;

void deleteDuplicatesHelper(ListNode*& head) {
    if (head == nullptr) return;
    ListNode* remove;
    while (head->getNext() != nullptr) {
        if (head->getVal() == head->getNext()->getVal()) {
            remove = head->getNext();
            head->setNext(head->getNext()->getNext());
            delete(remove);
        } else break;
    }
    deleteDuplicatesHelper(head->getNext());
}

ListNode* deleteDuplicates(ListNode* head) {
    deleteDuplicatesHelper(head);
    return head;
}