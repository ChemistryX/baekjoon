#include <iostream>

using namespace std;

int main() {
    
    int n, cnt = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i < 100) {
            cnt += 1;
        } else if (i < 1000) {
            int oneDigit = i % 10, tenDigit = i % 100 / 10, hunDigit = i / 100;
            // 등차중항 성질 이용
            if (oneDigit + hunDigit == tenDigit * 2) cnt += 1;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
