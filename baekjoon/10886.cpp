#include <iostream>

using namespace std;

int main() {
    
    int n, sum = 0;
    
    cin >> n;
    
    int point = n / 2 + 1;
        
    for (int i = 0; i < n; i++) {
        int current;
        cin >> current;
        sum += current;
    }
    
    cout << (sum >= point ? "Junhee is cute!" : "Junhee is not cute!") << endl;
    
    return 0;
}
