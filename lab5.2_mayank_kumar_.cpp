
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int main() {
    string postfix;
    stack<int> st;
    int a, b, result;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            st.push(ch - '0');
        }
        else {
            b = st.top();
            st.pop();

            a = st.top();
            st.pop();

            switch (ch) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
                default:
                    cout << "Invalid operator";
                    return 0;
            }

            st.push(result);
        }
    }

    cout << "Result = " << st.top() << endl;

    return 0;
}
