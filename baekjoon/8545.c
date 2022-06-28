#include <stdio.h>

int main() {
    
    char str[4] = "";
    
    for (int i = 0; i < 3; i++) {
        scanf("%c", &str[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("%c", str[2 - i]);
    }
    
    return 0;
}
