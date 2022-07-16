#include <iostream>

using namespace std;

int main() {
    
    string s;
    int happyCnt = 0, sadCnt = 0;
    
    getline(cin, s);
        
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == ':' && s[i + 1] == '-') {
            if (s[i + 2] == ')') {
                happyCnt += 1;
                i += 2;
            }
            if (s[i + 2] == '(') {
                sadCnt += 1;
                i += 2;
            }
        }
    }
    
    if (happyCnt == 0 && sadCnt == 0) {
        cout << "none" << endl;
    } else {
        cout << ((happyCnt == sadCnt) ? "unsure" : (happyCnt > sadCnt) ? "happy" : "sad") << endl;
    }
    
    
    return 0;
}
