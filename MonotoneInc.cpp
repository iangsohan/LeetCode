/*  LeetCode: "Flip String to Monotone Increasing"
    - Given a binary string, return the minimum number of flips for the string to be monotone increasing.   */

#include <string>
#include <algorithm>
using namespace std;

int minFlipsMonoIncr(string S) {
    int one = 0, ans = 0;
    for (auto c : S) {
        if (c == '1')
            one++;
        else
            ans++;
        ans = min(ans, one);

    }
    return ans;
}