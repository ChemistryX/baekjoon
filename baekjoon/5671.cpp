#include <iostream>

using namespace std;

int main() {
    
    while (1) {
        int n, m;
        
        cin >> n >> m;
        // C++ EOF 처리 관련
        // cf. https://takeknowledge.tistory.com/20
        if (cin.eof()) break;
        int cnt = m - n + 1;
        
        for (int i = n; i <= m; i++) {
            int numbersCnt[10] = {0}, shouldSkip = 0;
            
            int num = i;
            
            while (num != 0) {
                int digit = num % 10;
                numbersCnt[digit] += 1;
                num /= 10;
            }
            
            for (int j = 0; j < 10; j++) {
                if (numbersCnt[j] >= 2) shouldSkip = 1;
            }
            
            
            if (shouldSkip) {
                cnt -= 1;
            }
            
        }
        cout << cnt << endl;
    }
    
    
    return 0;
}
