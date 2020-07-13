/*	LeetCode: "Unique Paths"
	- Given the number of rows and columns in a grid, determine the number of paths to the bottom right corner.
    - Assume only right and down movements. */

#include <vector>
using namespace std;

int uniquePaths(int m, int n) {
    vector<int> vec(m, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            vec[j] = vec[j-1] + vec[j];
        }
    }
    return vec.back();
}