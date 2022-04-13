#include <stdio.h>

int main() {
    
    int n, m, k, ansN = 0, ansM = 0;
    
    scanf("%d %d %d", &n, &m, &k);
  
// sol 1)
//    for (int i = 1; i <= n * m; i++) {
//        if (i == k) {
//            ansM = i / n;
//            break;
//        }
//
//        if (i % m == 0) {
//            ansN += 1;
//        }
//    }
    
    // sol 2
    ansN = k / m;
    ansM = k % m;
    
    printf("%d %d", ansN, ansM);
    
    return 0;
}
