#include <iostream>

using namespace std;

int main() {
    
    int n, kilo5Cnt = 0, kilo3Cnt = 0, isInvalid = 0;
    
    cin >> n;
    
    while (1) {
        if (n % 5 == 0) {
            kilo5Cnt += n / 5;
            break;
        } else {
            if (n >= 3) {
                n -= 3;
                kilo3Cnt += 1;
            } else {
                isInvalid = 1;
                break;
            }
        }
    }
        
    cout << (isInvalid ? -1 : kilo5Cnt + kilo3Cnt) << endl;
    
    return 0;
}
