// Leetcode Problem No -> 189

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    vector<int> ans(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        int newIndex = (i + k) % nums.size(); // one thing to keep in mind whenever something like circular shift happens, most likely modulus will be used.
        ans[newIndex] = nums[i];
    }

    nums = ans;
}