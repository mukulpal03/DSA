#include <iostream>
using namespace std;

int getUnique (int arr[], int n) {
    int ans = 0;   // kisi number ka bhi zero se xor karte h toh wahi number output m aata h

    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[9] = {2, 10, 11, 10, 2, 13, 15, 13, 15};
    int n = 9;

    int finalAns = getUnique(arr, n);
    cout << finalAns << endl;

    return 0;
}