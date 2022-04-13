#include <stdio.h>
#include <string.h>

int main() {
    
    // 입력값 소문자화
    // for a -> z
    //  for str
    //      a == str[j] => count[0] += 1?
    
    char str[1000000];
    int counts[26] = {0};
    int max = 0;
    int maxIdx = 0;
    
    scanf("%s", str);
    
    // do not call strlen too often, it might cause timelimit error
    unsigned long len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    
    
    for (char c = 'a'; c <= 'z'; c++) {
        for (int i = 0; i < len; i++) {
            if (str[i] == c) counts[c - 'a'] += 1;
        }
    }
    
    for (int i = 0; i < sizeof(counts) / sizeof(int); i++) {
        if (counts[i] > max) {
            max = counts[i];
            maxIdx = i;
        } else if (counts[i] == max && max != 0) {
            // duplicate identifier
            maxIdx = -1;
        }
    }
    
    printf("%c", maxIdx == -1 ? '?' : maxIdx + 'A');
    
    return 0;
}
