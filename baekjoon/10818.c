#include <stdio.h>
#include <limits.h>

int main() {
    
    int n, min = INT_MAX, max = INT_MIN;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        
        if (temp > max) max = temp;
        if (temp < min) min = temp;
    }
    
    printf("%d %d", min, max);
    
    return 0;
}

