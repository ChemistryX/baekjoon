#include <stdio.h>

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int aReversed = (a % 10) * 100 + (a % 100 / 10) * 10 + (a / 100);
    int bReversed = (b % 10) * 100 + (b % 100 / 10) * 10 + (b / 100);
    
    printf("%d", aReversed > bReversed ? aReversed : bReversed);
    
    return 0;
}
