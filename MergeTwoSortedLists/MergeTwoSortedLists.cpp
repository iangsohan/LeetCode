/*  LeetCode: "Merge Two Sorted Lists"
    - Merge two sorted linked lists and return it as a new list.
    - The new list should be made by splicing together the nodes of the first two lists.    */

#include<iostream>
#include<list>
#include "ListNode.h"
using namespace std;

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr)
        return l2;
    if (l2 == nullptr)
        return l1;
    if (l1->getVal() < l2->getVal()) {
        l1->setNext(mergeTwoLists(l1->getNext(), l2));
        return l1;
    } else {
        l2->setNext(mergeTwoLists(l1, l2->getNext()));
        return l2;
    }
}