#include <iostream>
#include <limits.h>
using namespace std;

int minNumberInArray(int arr[], int size)
{
    int minNum = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }

    return minNum;
}

int main()
{
    int arr[] = {10, 8, 31, 4, 3, 1, 51};
    int size = 7;

    int minNum = minNumberInArray(arr, size);
    cout << minNum;
    return 0;
}