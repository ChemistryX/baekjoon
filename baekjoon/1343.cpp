#include <iostream>

using namespace std;

int main() {
    
    int xCnt = 0;
    bool isValid = true;
    string s, res;
    
    cin >> s;
    
    // s = XX.XX => XX.XX.
    s += '.';
        
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'X') xCnt += 1;
        if (s[i] == '.') {
            res += '.';
            // .에 도달했을 때 무조건 xCnt가 2의 배수여야 함
            // ex) X.X => break
            if (xCnt % 2 == 0) {
                xCnt = 0;
            } else {
                break;
            }
        }
        
        // BB
        if (xCnt == 2 && s[i + 1] != 'X') {
            res += "BB";
            xCnt = 0;
        }
        
        // AAAA
        if (xCnt == 4) {
            res += "AAAA";
            xCnt = 0;
        }
    }
    
    if (xCnt != 0) isValid = false;
    
    cout << (isValid ? res : "-1") << endl;
    
    return 0;
}
