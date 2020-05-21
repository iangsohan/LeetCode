/*  LeetCode: "Group Anagrams"
    - Given an array of strings, group anagrams together.   */

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> umap;
    vector<vector<string>> ans;
    for (int i = 0; i < strs.size(); i++) {
        string copy = strs[i];
        sort(strs[i].begin(), strs[i].end());
        umap[strs[i]].push_back(copy);
    }
    for (auto itr = umap.begin(); itr != umap.end(); ++itr)
        ans.push_back(itr->second);
    return ans;
}