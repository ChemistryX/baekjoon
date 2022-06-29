#include <stdio.h>

int main() {
    
    int t;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int num, sum = 1;
        
        scanf("%d", &num);
        
        for (int i = 2; i < num; i++) {
            if (num % i == 0) sum += i;
        }
        
        if (sum == num && num != 1) printf("Perfect\n");
        if (sum > num) printf("Abundant\n");
        if (sum < num || num == 1) printf("Deficient\n");
    }
    
    return 0;
}
