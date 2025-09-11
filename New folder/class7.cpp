#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary: ";
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit) {
            for (; i >= 0; i--) cout << ((num >> i) & 1);
            break;
        }
    }
    cout << endl;
    

    return 0;
}