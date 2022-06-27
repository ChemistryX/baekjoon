#include <stdio.h>
#include <string.h>

int main() {
    
    char s[100] = "";
    
    gets(s);
    
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        char res = s[i];
        if ((res >= 'a' && res <= 'z')) {
            res = (res + 13 - 'a') % 26 + 'a';

        } else if (res >= 'A' && res <= 'Z') {
            res = (res + 13 - 'A') % 26 + 'A';
        }
        
        printf("%c", res);
    }
}
