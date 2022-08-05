#include <iostream>

using namespace std;

int main() {
    
    int n, k, coins[1000000] = {0}, cnt = 0;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    int startIdx = n - 1;
    
    while (k > 0) {
        int current = coins[startIdx];
//        cout << "k= " << k << ", startIdx= " << startIdx << ", current= " << current << endl;
        if (coins[startIdx] > k) {
            startIdx -= 1;
            continue;
        } else {
                        
            if (k - current >= 0) {
                k -= current;
                cnt += 1;
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
