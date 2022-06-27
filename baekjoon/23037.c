#include <stdio.h>

int sq(int, int);

int main() {
    
    int n, sum = 0;
    
    scanf("%d", &n);
    
    while (n != 0) {
        int digit = n % 10;
        
        sum += sq(digit, 5);
                
        n /= 10;
    }
    
    printf("%d", sum);
    
    return 0;
}

int sq(int n, int m) {
    int ans = n;
    
    for (int i = 0; i < m - 1; i++) ans *= n;
    
    return ans;
}
