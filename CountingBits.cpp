/*  LeetCode: "Counting Bits"
    - Given a non negative integer number num.
    - For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.  */

#include <vector>
using namespace std;

vector<int> countBits(int num) {
    vector<int> ans{0};
    for (int i = 1; i <= num; i++) {
        int temp = i, count = 1;
        while (log2(temp) != (int)log2(temp)) {
            temp -= pow(2, (int)log2(temp));
            count++;
        }
        ans.push_back(count);
    }
    return ans;
}

double log2(int x) {
    return log(x)/log(2);
}