#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Bal(const string express) {
    stack<char> s;
    for (char ch : express) {
        if (ch == '(' || ch == '{' || ch == '[') {
            
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            
            if (s.empty()) return false;

            
            char top = s.top();
            s.pop();

            
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    
    return s.empty();
}

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if ( Bal(expr)) {
        cout << "The brackets are balanced." << endl;
    } else {
        cout << "The brackets are not balanced." << endl;
    }

    return 0;
}
