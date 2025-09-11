#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;
    cout << "Enter postfix expression (single digits): ";
    cin >> exp;

    stack<int> st;

    for (char ch : exp) {
        if (ch >= '0' && ch <= '9') {
            st.push(ch - '0');   
        } else {
            int b = st.top(); 
            st.pop();
            int a = st.top(); 
            st.pop();

            if (ch == '+')
            { 
                st.push(a + b);
            }
            if (ch == '-'){
                 st.push(a - b);
            if (ch == '*') st.push(a * b);
            if (ch == '/') st.push(a / b);
        }
    }
    #include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;
    cout << "Enter postfix expression (single digits): ";
    cin >> exp;

    stack<int> st;

    for (char ch : exp) {
        if (ch >= '0' && ch <= '9') {
            st.push(ch - '0');   // push number
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (ch == '+') st.push(a + b);
            if (ch == '-') st.push(a - b);
            if (ch == '*') st.push(a * b);
            if (ch == '/') st.push(a / b);
        }
    }
    cout << "Answer = " << st.top();
}

}

