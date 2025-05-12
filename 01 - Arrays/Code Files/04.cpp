// 2-D Array

#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[][4], int rows, int cols)
{
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    return max;
}

int main()
{
    int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int rows = 2;
    int cols = 4;
    int max = findMax(arr, rows, cols);
    cout << max;
    return 0;
}