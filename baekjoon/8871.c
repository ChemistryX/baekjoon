#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    int min = 2 * (n + 1);
    int max = 3 * (n + 1);
    
    printf("%d %d", min, max);
    
    return 0;
}
    
