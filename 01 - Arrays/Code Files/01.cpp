#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "Address of arr" << &arr; // address of operator
    cout << "Address of arr" << arr;  // toh bhi same output coz arr stores base address
    cout << "size of arr" << sizeof(arr);

    int brr[5] = {1, 2, 3};

    return 0;
}