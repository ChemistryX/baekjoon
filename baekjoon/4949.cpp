#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    
    
    while (1) {
        stack<char> stack;
        string s;

        getline(cin, s);
        
        if (s == ".") break;
                
        for (char c : s) {
            if (c == '(' || c == '[') {
                stack.push(c);
            } else if (c == ')') {
                if (stack.empty() || stack.top() != '(') {
                    // ([)와 같은 case 방지 위해 stack에 push 수행
                    stack.push(c);
                    break;
                }
                stack.pop();
            } else if (c == ']') {
                if (stack.empty() || stack.top() != '[') {
                    stack.push(c);
                    break;
                }
                stack.pop();
            }
        }
        
        cout << (stack.empty() ? "yes" : "no") << endl;
    }
    
    return 0;
}
