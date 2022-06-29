#include <stdio.h>
#include <limits.h>

int main() {
    
    int m, n, sum = 0, min = INT_MAX;
    
    scanf("%d%d", &m, &n);
    
    for (int i = m; i <= n; i++) {
        int cnt = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) cnt += 1;
            if (cnt > 0) break;
        }
        if (cnt == 0 && i != 1) {
            sum += i;
            if (i < min) min = i;
        }
    }
    
    if (sum == 0) {
        printf("%d", -1);
    } else {
        printf("%d\n%d", sum, min);
    }
    
    return 0;
}
