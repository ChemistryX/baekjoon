#include <iostream>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, idx = 0;
        
        cin >> n;
        
        for (int j = 0; n > 0; j++) {
            if (n % 2 == 1) cout << idx << ' ';
            n /= 2;
            idx += 1;
        }
        cout << '\n';
    }
    
    return 0;
}
