#include <stdio.h>
#include <string.h>

int main() {
    
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int r;
        char str[20];
        scanf("%d %s", &r, str);
        
        for (int j = 0; j < strlen(str); j++) {
            for (int k = 0; k < r; k++) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
