#include <iostream>
using namespace std;

#define MAX 100
void push(int stack[], int &top, int val) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        stack[++top] = val;
    }
}
int pop(int stack[], int &top) {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return -1;
    } else {
        return stack[top--];
    }
}
void convert(int num, int base) {
    int stack[MAX], top = -1;

        while (num > 0) {
        push(stack, top, num % base);
        num /= base;
    }

    while (top != -1) {
        int digit = pop(stack, top);
        if (digit < 10) 
            cout << digit;
        else 
            cout << char(digit - 10 + 'A'); 
    }
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary: ";
    convert(num, 2);

    cout << "\nOctal: ";
    convert(num, 8);

    cout << "\nHexadecimal: ";ṇ
    convert(num, 16);

    cout << endl;
    return 0;
}
