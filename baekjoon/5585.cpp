#include <iostream>
#define MONEY 1000

using namespace std;

int main() {
    
    int n, coins[] = {1, 5, 10, 50, 100, 500}, cnt = 0;
    
    cin >> n;
    
    n = MONEY - n;
    
    int startIdx = 5;
    
    while (n > 0) {
        int current = coins[startIdx];
//        cout << "n= " << n << ", startIdx= " << startIdx << ", current= " << current << endl;
        if (coins[startIdx] > n) {
            startIdx -= 1;
            continue;
        } else {
                        
            if (n - current >= 0) {
                n -= current;
                cnt += 1;
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
