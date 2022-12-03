#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n, cnt = 1, range = 1;
    
    cin >> n;
    
    while (1) {
        range += 6 * cnt;
        if (range >= n) break;
        cnt += 1;
    }
    
    cout << (n == 1 ? 1 : cnt + 1) << endl;
    
    return 0;
}
