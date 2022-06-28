#include <stdio.h>

int main() {
    
    int x, n, sum = 0;
    
    scanf("%d\n%d", &x, &n);
    
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        sum += (a * b);
    }
    
    printf("%s", sum == x ? "Yes" : "No");
    
    return 0;
}
