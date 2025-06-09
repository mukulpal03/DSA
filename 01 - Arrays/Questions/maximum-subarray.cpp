// Leetcode Problem No -> 53
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Kadane's algorithm

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int val: nums) {
        currSum += val;
        maxSum = max(maxSum, currSum);
            if (currSum < 0)
            currSum = 0;
        }

    return maxSum;
}