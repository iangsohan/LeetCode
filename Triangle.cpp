/*  LeetCode: "Triangle"
    - Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.  */

#include <vector>
#include <algorithm>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
    vector<int> vec{triangle.front().front()}, copy;
    for (int row = 1; row < triangle.size(); row++) {
        vec.push_back(vec.back()+1);
        copy = vec;
        for (int col = 0; col < triangle[row].size(); col++) {
            if (col == 0)
                copy[col] = triangle[row][col]+vec[col];
            else if (col == triangle[row].size())
                copy[col] = triangle[row][col]+vec[col-1];
            else
                copy[col] = triangle[row][col] + min(vec[col], vec[col-1]);
        }
        vec = copy;
    }
    sort(vec.begin(), vec.end());
    return vec.front();
}