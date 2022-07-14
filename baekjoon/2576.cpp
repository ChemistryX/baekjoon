#include <iostream>

using namespace std;

int main() {
    
    int sumOdd = 0, min = 100;
    
    for (int i = 0; i < 7; i++) {
        int n;
        
        cin >> n;
        
        if (n % 2 != 0) {
            sumOdd += n;
            if (n < min) min = n;
        }
    }
    
    cout << (sumOdd == 0 ? -1 : sumOdd) << endl;
    if (sumOdd > 0) cout << min << endl;
    
    return 0;
}
