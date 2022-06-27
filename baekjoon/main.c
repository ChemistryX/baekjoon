#include <stdio.h>

int main() {
    
    char cur;
    int cnt = 0;
    
    for (int i = 0; i < 8; i++) {
        int currentWhiteIdx = i % 2 == 0 ? 0 : 1;
        for (int j = 0; j < 8; j++) {
            scanf("%c", &cur);
            if (j == currentWhiteIdx) {
                if (cur == 'F') cnt += 1;
                currentWhiteIdx += 2;
            }
        }
        
        getchar();
    }
    
    printf("%d", cnt);
    
    return 0;
}
