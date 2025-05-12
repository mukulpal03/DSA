// Leetcode Problem No -> 2643

#include<iostream>
#include<vector>
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    vector<int> ans;
    int oneCount = 0;
    int row = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > oneCount)
        {
            oneCount = count;
            row = i;
        }
    }

    ans.push_back(row);
    ans.push_back(oneCount);

    return ans;
}