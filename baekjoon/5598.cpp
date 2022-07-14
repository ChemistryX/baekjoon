#include <iostream>

using namespace std;

int main() {
    
    string s;
    
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        char decoded = s[i] - 3 < 'A' ? s[i] + 23 : s[i] - 3;
        cout << decoded;
    }
    
    return 0;
}
