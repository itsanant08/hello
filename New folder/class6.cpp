#include <iostream>
using namespace std;

int main() {
    const int MAX = 5;  
    int stack[MAX];      
    int top = -1;        
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stack[top] = 10;
        cout << "Pushed: " << stack[top] << endl;
    }
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << "Popped: " << stack[top] << endl;
        top--;
    }

    return 0;
}
