#include <stdio.h>

int main() {
    
    int n, t, c, p, cnt = 0;
    
    scanf("%d %d %d %d", &n, &t, &c, &p);
    
    while (n > t) {
        n -= t;
        cnt += 1;
    }
    
    printf("%d", cnt * c * p);
    
    return 0;
}
