#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        
        cin >> s;
        
        int i1 = stoi(s);
        reverse(s.begin(), s.end());
        int i2 = stoi(s);
        
        int res = i1 + i2;
        string s2 = to_string(res);
        
        int symmetric = 1;
        
        for (int i = 0; i < s2.length() / 2; i++) {
            if (s2[i] != s2[s2.length() - i - 1]) {
                symmetric = 0;
                break;
            }
        }
        
        cout << (symmetric ? "YES" : "NO") << endl;
    }
    
    return 0;
}
