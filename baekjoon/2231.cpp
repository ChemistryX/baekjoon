#include <iostream>

using namespace std;

int d(int);

int main() {
    
    int n, found = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int num = d(i);
        if (num == n) {
            cout << i << endl;
            found = 1;
            break;
        }
    }
    
    if (!found) cout << 0;
    
    return 0;
}

int d(int n) {
    int res = n;
    while (n != 0) {
        int digit = n % 10;
        res += digit;
        n /= 10;
    }
    
    return res;
}
