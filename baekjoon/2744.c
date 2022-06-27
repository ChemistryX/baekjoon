#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100] = "";
    
    scanf("%s", str);
    
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    
    for (int i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    
    return 0;
}
