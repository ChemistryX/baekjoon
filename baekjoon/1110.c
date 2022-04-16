#include <stdio.h>

int main() {

    int n, n2, cycle = 0;
    
    scanf("%d", &n);
    
    do {
        cycle += 1;
        int orig = cycle == 1 ? n : n2;
        int tenDigit = orig / 10;
        int oneDigit = orig % 10;
        
        n2 = ((tenDigit + oneDigit) % 10) + oneDigit * 10;
    } while (n2 != n);
    
    printf("%d", cycle);
    
    return 0;
}
