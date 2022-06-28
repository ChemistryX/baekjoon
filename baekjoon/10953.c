#include <stdio.h>

int main() {
    
    int t;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        char str[4] = "";
        
        scanf("%s", str);
        int a = str[0] - '0';
        int b = str[2] - '0';
        
        printf("%d\n", a + b);
    }
    
    return 0;
}
