#include <stdio.h>

int main() {
    
    int h, m;
    
    scanf("%d %d", &h, &m);
    
    if (m - 45 > 0) {
        m -= 45;
    } else if (m - 45 < 0) {
        h = h - 1 < 0 ? 23 : h - 1;
        m = 60 - (45 - m);
    } else {
        m -= 45;
    }
    
    printf("%d %d", h, m);
    
    return 0;
}
