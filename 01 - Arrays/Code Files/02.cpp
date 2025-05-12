// looping through an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}