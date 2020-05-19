/*  LeetCode: "Remove Nth Node From End of List"
    - Given a linked list, remove the n-th node from the end of list and return its head.
    - Assume all values of n are valid. */

#include <iostream>
#include "ListNode.h"
using namespace std;

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int size = 0;
    ListNode* end = head;
    ListNode* cpy = head;
    for ( ; end != nullptr; size++) {
        end = end->getNext();
        if (size >= n && end != nullptr)
            cpy = cpy->getNext();
    }

    if (!(size-n))
        head = cpy->getNext();
    else if (cpy->getNext() != nullptr)
        cpy->setNext(cpy->getNext()->getNext());
    else
        head = nullptr;
    return head;
}