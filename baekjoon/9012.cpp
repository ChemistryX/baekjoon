#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        stack<char> stack;
        string s;
        
        cin >> s;
        
        for (int j = 0; j < s.length(); j++) {
            if (!stack.empty() && stack.top() == '(' && s[j] == ')') {
                stack.pop();
                continue;
            }
            stack.push(s[j]);
        }
        
        cout << (stack.empty() ? "YES" : "NO") << endl;
    }
        
    return 0;
}
