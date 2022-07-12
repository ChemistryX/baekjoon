#include <iostream>

using namespace std;

int main() {
        
    long long s, sum = 0, n = 0;
    
    cin >> s;
    
    while (sum <= s) {
        n += 1;
        sum += n;
    }
    
    cout << n - 1 << endl;
    
    return 0;
}
