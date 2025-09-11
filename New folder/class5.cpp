#include <iostream>
using namespace std;

#define MAX 5   // maximum size of stack

int main() {
    int stack[MAX];
    int top = -1;

    // Pushing elements
    for (int i = 1; i <= 5; i++) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << i * 10 << endl;
        } else {
            stack[++top] = i * 10;
            cout << stack[top] << " pushed into stack." << endl;
        }
    }

    // Extra overflow check
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push more elements." << endl;
    }

    cout << "\n--- Popping Elements ---\n";

    // Popping elements
    for (int i = 0; i < 6; i++) {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop."
