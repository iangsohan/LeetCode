/*  LeetCode: "Merge Two Sorted Lists"
    - Merge two sorted linked lists and return it as a new list.
    - The new list should be made by splicing together the nodes of the first two lists.    */

#include<iostream>
#include<list>
#include "ListNode.h"
using namespace std;

// You don't need to do the if else stuff if they return things
// Sometimes you put else statements to emphasize that the two paths are kinda symmetric.
// The null check inside the core isn't needed because of the null check.
// Use nullptr when refering to pointers.
// Your if statement logic on dealing with either being null is ugly
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

//Recursion time
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr)
        return l2;
    if (l2 == nullptr)
        return l1;
    if (l1->getNext() < l2->getNext()) {
        l1->setNext(mergeTwoLists(l1->getNext(), l2));
        return l1;
    } else {
        l2->setNext(mergeTwoLists(l1, l2->getNext()));
        return l2;
    }
}

//Iteration time
//Having a dummy head is pretty common when doing iteration and linked lists
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummyHead;
    dummyhead.setNext(nullptr);
    ListNode* copy = &dummyHead;
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->getNext() < l2->getNext()) {
            copy->setNext(l1);
            copy = copy->getNext();
            l1 = l1->getNext();
        }
        else {
            copy->setNext(l2);
            copy = copy->getNext();
            l2 = l2->getNext();
        }
    }
    if (l1 == nullptr)
        copy->setNext(l2);
    else
        copy->setNext(l1);
    return dummyHead.getNext;
}