#include <iostream>
#include <limits.h>
using namespace std;

void reverseArray(int arr[], int size) {
    int i = 0; 
    int j = size - 1;

    while (i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i];
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    reverseArray(arr, size);
    return 0;
}