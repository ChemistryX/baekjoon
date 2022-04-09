#include <stdio.h>

int main() {
    
    int k, q, l, b, kn, p, kOrig = 1, qOrig = 1, lOrig = 2, bOrig = 2, knOrig = 2, pOrig = 8;
    
    scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &kn, &p);
    
    printf("%d %d %d %d %d %d" , kOrig - k, qOrig - q, lOrig - l, bOrig - b, knOrig - kn, pOrig - p);
    
    return 0;
}
