#include <stdio.h>
#include <string.h>

int main() {
    
    char vowels[] = { 'A', 'a', 'E',' e', 'I', 'i', 'O', 'o', 'U', 'u' };
    
    while (1) {
        char str[256] = "";
        gets(str);
        if (strcmp(str, "#") == 0) break;
        int len = strlen(str);
        int cnt = 0;
        for (int i = 0; i < len; i++) {
            char current = str[i];
            int vowelsCnt = 10;
            for (int j = 0; j < vowelsCnt; j++) {
//                printf("%c %c\n", vowels[j], current);
                if (vowels[j] == current) cnt += 1;
            }
        }
        
        printf("%d\n", cnt);
    }
    
    return 0;
}
