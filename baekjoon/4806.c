#include <stdio.h>
#include <string.h>

int main() {
    
    char ch;
    int lineCnt = 0;
    
    while (1) {
        ch = getchar();
        
        if (ch == EOF) break;
        if (ch == '\n') lineCnt += 1;
    }
    
    printf("%d", lineCnt);
    
    return 0;
}
