#include <stdio.h>

int main() {
    
    int youngest, middle;
    
    scanf("%d\n%d", &youngest, &middle);
    
    printf("%d", middle + (middle - youngest));

    return 0;
}
