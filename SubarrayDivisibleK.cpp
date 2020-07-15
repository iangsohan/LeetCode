/*  LeetCode: "Subarray Sums Divisible by K"
    - Given an array A of integers, return the number of (contiguous, non-empty) subarrays that have a sum divisible by K.  */

#include <vector>
#include <unordered_map>
using namespace std;

// int subarraysDivByK(vector<int>& A, int K) {
//     int count = 0;
//     vector<int> vec{0};
//     for (auto i : A) {
//         for (int j = 0; j < vec.size(); j++) {
//             vec[j] = vec[j] + i;
//             if (!(vec[j] % K))
//                 count++;
//         }
//         vec.push_back(0);
//     }
//     return count;
// }

int subarraysDivByK(vector<int>& A, int K) {
    unordered_map<int, int> prefix_sum = {{0,1}};
    int ctr = 0, mod = 0;
    for (int x : A)
        mod = (mod+(x%K)+K)%K,
        ctr += prefix_sum[mod]++;
    return ctr;
}