#include <stdio.h>

int main() {
    
    int aX, aY, aZ, cX, cY, cZ;
    
    scanf("%d %d %d\n%d %d %d", &aX, &aY, &aZ, &cX, &cY, &cZ);
    
    printf("%d %d %d", cX - aZ, cY / aY, cZ - aX);
    
    return 0;
}
