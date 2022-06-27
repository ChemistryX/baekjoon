#include <stdio.h>

int main() {
    
    int ch;
    
    // cf. https://blockdmask.tistory.com/340
    
    while (1) {
        ch = getchar();
        
        if (ch == EOF) break;
        putchar(ch);
    }
    
    return 0;
}
