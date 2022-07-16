#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    getchar();
        
    for (int i = 0; i < n; i++) {
        string s;
        
        getline(cin, s);
        
        s[0] = (s[0] >= 'a' && s[0] <= 'z') ? 'A' + s[0] - 'a' : s[0];
        cout << s << endl;
    }
    
    return 0;
}
