#include <stdio.h>

int main() {
    
    int n, arr[100] = {0}, v, cnt = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &v);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) cnt += 1;
    }
    
    printf("%d", cnt);
    
    return 0;
}
