#include <stdio.h>
#include <string.h>

int main() {
    
    char str[10] = "";
    
    scanf("%s", str);
    
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    
    return 0;
}
