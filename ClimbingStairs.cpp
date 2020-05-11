/*  LeetCode: "Climbing Stairs"
    - You are climbing a stair case. It takes n steps to reach to the top.
    - Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?  */

#include<iostream>
#include<vector>
using namespace std;

int climbStairs(int n) {
    if(n<= 1)
        return n;
    n ++;
    vector<int> stairs(n+1, 0);
    stairs[1] = 1;
    for(int i = 2; i <= n; i++){
        stairs[i] = stairs[i-1] + stairs[i-2];
    }
    return stairs[n];
}