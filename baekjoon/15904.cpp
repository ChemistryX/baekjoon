#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    string s;
    stack<char> initials;
    
    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++) {
        // "U" C P C
        if (s[i] == 'U' && initials.size() == 0) {
            initials.push('U');
        }
        
        // U "C" P C
        if (s[i] == 'C' && initials.size() == 1) {
            initials.push('C');
        }
        
        // U C "P" C
        if (s[i] == 'P' && initials.size() == 2) {
            initials.push('P');
        }
        
        // U C P "C"
        if (s[i] == 'C' && initials.size() == 3) {
            initials.push('C');
        }
    }
    
    cout << "I " << (initials.size() == 4 ? "love" : "hate") << " UCPC" << endl;
    
    
    return 0;
}
