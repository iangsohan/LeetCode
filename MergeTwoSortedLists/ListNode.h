
#ifndef LISTNODE_H
#define LISTNODE_H

#include<iostream>
using namespace std;

class ListNode {
public:
	ListNode();
	int getVal();
	ListNode* getNext();
	void setVal(int i);
	void setNext(ListNode* n);

private:
	int val;
	ListNode* next;
};


#endif