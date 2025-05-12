// Leetcode Problem No -> 268

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int totalSum = (n * (1 + n)) / 2; // formula to find sum of range 1 to n, n * a + l / 2, where n = np. of terms, a = first term, l = last term.
    int missingNum = totalSum - sum;

    return missingNum;
}

// Another approach using XOR

int missingNumber(vector<int> &nums)
{
    int xorFull = 0, xorNums = 0;
    int n = nums.size();

    for (int i = 0; i <= n; i++)
    {
        xorFull ^= i;
    }

    for (int num : nums)
    {
        xorNums ^= num;
    }

    return xorFull ^ xorNums;
}
