#include <stdio.h>

int main() {
    
    int max = 0, maxIdx = 0;
    
    for (int i = 1; i <= 9; i++) {
        int temp;
        scanf("%d", &temp);
        
        if (temp > max) {
            max = temp;
            maxIdx = i;
        }
    }
    
    printf("%d\n%d", max, maxIdx);
    
    return 0;
}
