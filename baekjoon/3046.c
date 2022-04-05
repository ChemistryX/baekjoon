#include <stdio.h>

int main() {
    
    int R1, S;
    
    scanf("%d %d", &R1, &S);
    
    // R1 + R2 / 2 = S
    // R1 + R2 = 2S
    
    printf("%d", S * 2 - R1);
    
    return 0;
}
