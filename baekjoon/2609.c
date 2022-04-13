#include <stdio.h>

int gcd(a, b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n%d", gcd(a, b), a * b / gcd(a, b));
    
    
    return 0;
}
