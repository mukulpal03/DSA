// Leetcode Problem No -> 48

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // step 1 - transpose of matrx

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i; j < matrix[i].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // step 2 - reverse the rows
    for (int i = 0; i < matrix.size(); i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}