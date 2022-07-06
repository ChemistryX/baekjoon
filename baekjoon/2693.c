#include <stdio.h>

int main() {
    
    int t;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int a[10] = {0};
        
        for (int j = 0; j < 10; j++) {
            scanf("%d", &a[j]);
        }
        
        for (int j = 0; j < 10 - 1; j++) {
            for (int k = 0; k < 10 - j - 1; k++) {
                if (a[k] > a[k + 1]) {
                    int temp = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = temp;
                }
            }
        }
        printf("%d\n", a[7]);
    }
    
    return 0;
}
