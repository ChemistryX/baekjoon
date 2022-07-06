#include <stdio.h>
#include <string.h>

int main() {
    
    int n, d, cnt = 0;

    scanf("%d %d", &n, &d);
    
    for (int i = 1; i <= n; i++) {
        char numStr[100001] = "";
        sprintf(numStr, "%d", i);
        int len = strlen(numStr);
        for (int j = 0; j < len; j++) {
            if (numStr[j] - '0' == d) cnt += 1;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
