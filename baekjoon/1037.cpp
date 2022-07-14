#include <iostream>

using namespace std;

int main() {
    
    int cnt, max = 1, min = 1000001;
    
    cin >> cnt;
    
    for (int i = 0; i < cnt; i++) {
        int divisor;
        
        cin >> divisor;
        
        if (divisor > max) max = divisor;
        if (divisor < min) min = divisor;
    }
    
    cout << min * max << endl;
    
    return 0;
}
