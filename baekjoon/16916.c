#include <stdio.h>
#include <string.h>

int main() {
    
    char s[1000001] = "", p[1000001] = "";
    
    scanf("%s", s);
    scanf("%s", p);
    
    printf("%d", strstr(s, p) != NULL ? 1 : 0);
    
    return 0;
}
