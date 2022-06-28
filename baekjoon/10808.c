#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100] = "";
    int cnt[26] = {0};
    
    scanf("%s", str);
    
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        int idx = str[i] - 'a';
        cnt[idx] += 1;
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", cnt[i]);
    }
    
    return 0;
}
