#include <iostream>

using namespace std;

int main() {
    
    string s, n;
    int sum = 0;

    cin >> s;
        
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',' || i == s.length() - 1) {
            if (i == s.length() - 1) {
                n += s[i];
            }
            sum += stoi(n);
            n = "";
        } else {
            n += s[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
