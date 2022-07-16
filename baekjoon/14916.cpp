#include <iostream>

using namespace std;

int main() {
    
    int n, chargeCnt = 0;
    
    cin >> n;
    
    while (n > 0) {
        if (n % 5 == 0) {
            n -= 5;
            chargeCnt += 1;
        } else if (n > 5 && (n / 5) % 2 == 0) {
            n -= 5;
            chargeCnt += 1;
        } else if (n > 5 && (n / 5) % 2 != 0) {
            n -= 2;
            chargeCnt += 1;
        } else if (n < 5) {
            n -= 2;
            chargeCnt += 1;
        }
    }
    
    cout << (n != 0 ? -1 : chargeCnt)<< endl;
    
    return 0;
}
