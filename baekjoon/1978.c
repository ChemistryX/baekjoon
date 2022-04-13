#include <stdio.h>

int main() {
    
    int n, primeCnt = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int temp, cnt = 0;
        scanf("%d", &temp);
        
        if (temp == 1) cnt += 1;
        for (int j = 2; j < temp; j++) {
            if (temp % j == 0) cnt++;
            
        }
        
        primeCnt = cnt == 0 ? primeCnt + 1 : primeCnt;
    }
    
    printf("%d", primeCnt);
    
    return 0;
}
