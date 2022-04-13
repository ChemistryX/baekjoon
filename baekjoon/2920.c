#include <stdio.h>

int main() {
    
    int before = 0, increaseCnt = 0, arr[8] = {0};
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        scanf("%d", &arr[i]);
        
        before = arr[i - 1];
        
        if (arr[i] > before) {
            increaseCnt += 1;
        }
    }
    
    printf("%s", increaseCnt == 8 ? "ascending" : increaseCnt == 1 ? "descending" : "mixed");
    
    return 0;
}
