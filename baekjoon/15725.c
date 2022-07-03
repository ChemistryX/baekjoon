#include <stdio.h>
#include <string.h>

int main() {
    
    int idx = 0, xFound = 0;
    char str[20] = "";
    char c[20] = "";
    
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'x') {
            xFound = 1;
            break;
        } else {
            c[idx] = str[i];
            idx += 1;
        }
    }
    
    if (idx == 0) {
        printf("1");
    } else if (idx == 1 && c[0] == '-') {
        printf("-1");
    } else if (xFound) {
        printf("%s", c);
    } else {
        printf("%d", 0);
    }
    
    return 0;
}
