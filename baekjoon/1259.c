#include <stdio.h>
#include <string.h>

int main() {
    
    char n[100000];
    
    while (1) {
        scanf("%s", n);
        if (n[0] == '0') break;
        unsigned long len = strlen(n);
        int noMatch = 0;
        
        for (int i = 0; i < len; i++) {
            if (n[i] != n[len - i - 1]) {
                noMatch += 1;
                break;
            }
        }
        
        printf("%s\n", noMatch == 0 ? "yes" : "no");
    }
    
    
    
    return 0;
}
