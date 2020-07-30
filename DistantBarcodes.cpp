/*  LeetCode: "Distant Barcodes"
    - Given an array of barcodes, rearrange the barcodes so that no two adjacent barcodes are equal.    */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> rearrangeBarcodes(vector<int>& barcodes) {        
    unordered_map<int, int> umap;
    for (auto barcode : barcodes)
        umap[barcode]++;
    priority_queue <codeToCount, vector<codeToCount>, sortByCount> pqueue;
    for (auto itr : umap)
        pqueue.push({itr.first, itr.second});
    vector<int> ans;
    int lastCode = 0;
    codeToCount temp1, temp2;
    while (ans.size() != barcodes.size()) {
        temp1 = pqueue.top();
        pqueue.pop();
        if (temp1.value != lastCode) {
            ans.push_back(temp1.value);
            lastCode = temp1.value;
            pqueue.push({temp1.value, temp1.count-1});
        } else {
            temp2 = pqueue.top();
            pqueue.pop();
            ans.push_back(temp2.value);
            lastCode = temp2.value;
            pqueue.push(temp1);
            pqueue.push({temp2.value, temp2.count-1});
        }
    }
    return ans;        
}

struct codeToCount {
    int value;
    int count;
};

struct sortByCount{
    bool operator() (codeToCount& l, codeToCount& r) {
        return l.count < r.count;
    }
};