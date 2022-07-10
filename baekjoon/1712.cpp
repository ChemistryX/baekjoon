#include <iostream>

using namespace std;

int main() {
    
    long long a, b, c, cnt = 1;
    
    cin >> a >> b >> c;
    
    if (b >= c) {
        cnt = -1;
    } else {
        cnt = a / (c - b) + 1;
    }
    
    cout << cnt << endl;
    
    return 0;
}
