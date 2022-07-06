#include <stdio.h>
#include <string.h>

int main() {
    
    int lowerCnt = 0, upperCnt = 0, numCnt = 0, blankCnt = 0;
    char ch;
    
    while (1) {
        ch = getchar();
        
        if (ch == EOF) break;
        
        if (ch == '\n') {
            printf("%d %d %d %d\n", lowerCnt, upperCnt, numCnt, blankCnt);
            lowerCnt = 0;
            upperCnt = 0;
            numCnt = 0;
            blankCnt = 0;
        }
        
        if (ch >= 'A' && ch <= 'Z') upperCnt += 1;
        if (ch >= 'a' && ch <= 'z') lowerCnt += 1;
        if (ch >= '0' && ch <= '9') numCnt += 1;
        if (ch == ' ') blankCnt += 1;
    }
    
    
    return 0;
}
