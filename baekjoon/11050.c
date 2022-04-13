#include <stdio.h>

int main() {
    
    int n, k, nFact = 1, kFact = 1, nkFact = 1;
    
    scanf("%d %d", &n, &k);
    
    for (int i = 1; i <= n; i++) {
        nFact *= i;
    }
    
    for (int i = 1; i <= k; i++) {
        kFact *= i;
    }
    
    for (int i = 1; i <= n - k; i++) {
        nkFact *= i;
    }
        
    printf("%d", nFact / (kFact * nkFact));
    
    return 0;
}
