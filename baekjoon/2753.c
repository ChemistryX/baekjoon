#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    printf("%d", n % 4 == 0 ? n % 100 != 0 ? 1 : n % 400 == 0 ? 1 : 0 : 0);
    
    return 0;
}
