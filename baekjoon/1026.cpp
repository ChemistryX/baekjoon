#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n, a[50] = {0}, b[50] = {0}, sum = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a, a + n);
        
    for (int i = 0; i < n; i++) {
        int max = b[0];
        int maxIdx = 0;
        for (int j = 0; j < n; j++) {
            if (b[j] > max) {
                max = b[j];
                maxIdx = j;
            }
        }
        b[maxIdx] = -1;
        sum += a[i] * max;
    }
    
    cout << sum << endl;

    return 0;
}
