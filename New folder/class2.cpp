#include <iostream>
using namespace std;

int odd(int arr[], int n) {
    int r = 0;
    for(int i = 0; i < n; i++) {
        r^= arr[i];
    }
    return r;
}

int main() {
    int arr[] = {2, 3, 4, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    n =odd(arr, n);
    cout << "Number appearing odd number of times: " << n;
    return 0;
}