#include <iostream>

using namespace std;

int main() {
    
    int sum, diff;
    
    cin >> sum >> diff;
    
    int a = (sum + diff) / 2, b = (sum - diff) / 2;
    if (sum < diff) {
        cout << -1 << endl;
    } else {
        if (a - b == diff && a + b == sum) cout << a << ' ' << b << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}
