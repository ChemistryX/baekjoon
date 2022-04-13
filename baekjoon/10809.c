#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int counts[26] = {0};
    
    // init array with default value -1
    for (int i = 0; i < sizeof(counts) / sizeof(int); i++) {
        counts[i] = -1;
    }
    
    scanf("%s", str);
    
    // do not call strlen too often, it might cause timelimit error
    unsigned long len = strlen(str);
    
    
    for (char c = 'a'; c <= 'z'; c++) {
        for (int i = 0; i < len; i++) {
            // update idx only if value is not present
            if (str[i] == c && counts[c - 'a'] == -1) {
                counts[c - 'a'] = i;
            }
        }
    }
    
    for (int i = 0; i < sizeof(counts) / sizeof(int); i++) {
        printf("%d ", counts[i]);
    }
    
    
    return 0;
}
