#include <stdio.h>

int main() {
    int m, n, min = 10000, sum = 0;
    
    scanf("%d\n%d", &m, &n);
    
    for (int i = m; i <= n; i++) {
        for (int j = 1; j <= 100; j++) {
            if (i == j * j) {
                sum += i;
//                printf("called @ %d\n", i);
                if (min > i) min = i;
            }
        }
    }
    
    if (sum == 0) printf("%d", -1);
    else printf("%d\n%d", sum, min);
    
    return 0;
}
