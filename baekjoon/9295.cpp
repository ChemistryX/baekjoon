#include <iostream>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int d1, d2;
        cin >> d1 >> d2;
        cout << "Case " << i + 1 << ": " << d1 + d2 << endl;
    }
    
    return 0;
}
