#include <stdio.h>

int main() {
    
    int nOrig, area, n1, n2, n3, n4, n5;
    
    scanf("%d %d\n%d %d %d %d %d", &nOrig, &area, &n1, &n2, &n3, &n4, &n5);
    
    int count = nOrig * area;
    
    printf("%d %d %d %d %d", n1 - count, n2 - count, n3 - count, n4 - count, n5 - count);
    
    return 0;
}
