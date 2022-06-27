#include <stdio.h>

int gcd(int, int);

int main() {
    
    int t, a, b;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        int res = gcd(a, b);
        printf("%d %d\n", (a * b) / res, res);
    }
    
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}
