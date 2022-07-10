#include <iostream>
#include <string>

using namespace std;

int main() {
        
    char op;
    string a, b;
    
    cin >> a >> op >> b;
    
    int aLen = a.length();
    int bLen = b.length();
    
    if (op == '+') {
        int max = aLen > bLen ? aLen : bLen;
        int min = aLen < bLen ? aLen : bLen;
        int startIdx = max - min;
        for (int i = startIdx; i < max; i++) {
            if (aLen > bLen) {
                a[i] = b[i + min - max];
            } else if (aLen < bLen) {
                b[i] = a[i + min - max];
            }
        }
        if (aLen == bLen) {
            b[0] = '2';
        }
        cout << (aLen > bLen ? a : b) << endl;
    } else if (op == '*') {
        char c[200] = "";
        c[0] = '1';
        for (int i = 1; i <= aLen + bLen - 2; i++) {
            c[i] = '0';
        }
        
        cout << c << endl;
    }
    
    return 0;
}
