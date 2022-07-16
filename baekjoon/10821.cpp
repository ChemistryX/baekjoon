#include <iostream>

using namespace std;

int main() {
    
    int cnt = 1;
    string s;
    
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',') cnt += 1;
    }
    
    cout << cnt << endl;
    
    return 0;
}
