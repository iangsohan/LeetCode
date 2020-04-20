/*  LeetCode: "Merge Two Sorted Lists"
    - Merge two sorted linked lists and return it as a new list.
    - The new list should be made by splicing together the nodes of the first two lists.    */

#include<iostream>
#include<list>
#include "ListNode.h"
using namespace std;

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL || l2 == NULL) {
        if (l1 == NULL) {
            return l2;
        }
        return l1;
    } else if (l1->getVal() > l2->getVal()) {
        if (l2->getNext() != NULL) {
            l2->setNext(mergeTwoLists(l1, l2->getNext()));
        } else {
            l2->setNext(l1);
        }
        return l2;
    } else {
        if (l1->getNext() != NULL) {
            l1->setNext(mergeTwoLists(l1->getNext(), l2));
        } else {
            l1->setNext(l2);
        }
        return l1;
    }
}