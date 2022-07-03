#include <stdio.h>
#include <string.h>

int main() {
    
    char str[101] = "";
    int matchedCnt = 0;
    
    scanf("%s", str);
    
    int len = strlen(str);
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] == str[len - 1 - i]) matchedCnt += 1;
    }
    
    printf("%d", matchedCnt == len / 2 ? 1 : 0);
    
    return 0;
}
