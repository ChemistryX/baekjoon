#include <iostream>

using namespace std;

int main() {
    
    int v, aCnt = 0, bCnt = 0;
    string s;
    
    cin >> v;
    cin >> s;
    
    int len = s.length();
    
    for (int i = 0; i < len; i++) {
        char cur = s[i];
        if (cur == 'A') {
            aCnt += 1;
        } else if (cur == 'B') {
            bCnt += 1;
        }
    }
    
    cout << (aCnt == bCnt ? "Tie" : (aCnt > bCnt ? "A" : "B")) << endl;
    
    return 0;
}
