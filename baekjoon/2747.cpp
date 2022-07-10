#include <iostream>

using namespace std;

// 피보나치 w/o 재귀함수
// @10870.c
int main() {
    
    int n, fibo[46] = {0};
    
    cin >> n;
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    // 3
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    cout << fibo[n];
    
    return 0;
}
