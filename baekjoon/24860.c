#include <stdio.h>

int main() {
    
    int Vk, Jk, Vlamb, Jlamb, Vh, Dh, Jh;
    
    scanf("%d %d", &Vk, &Jk);
    scanf("%d %d", &Vlamb, &Jlamb);
    scanf("%d %d %d", &Vh, &Dh, &Jh);
    
    printf("%lld", (long long) (Vk * Jk + Vlamb * Jlamb) * Vh * Dh * Jh);
 
    return 0;
}
