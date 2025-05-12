// Leetcode Problem No -> 75

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int index = 0;

    while (index <= right)
    { // because after right there will be 2's only so no need to traverse further
        if (nums[index] == 0)
        {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if (nums[index] == 2)
        {
            swap(nums[index], nums[right]);
            right--; // No need to do index++ coz we don't know what number will be swapped at come at index.
        }
        else {
            index++;
        }
    }
}