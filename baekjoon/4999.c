#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[1001], str2[1001];
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    printf("%s", len1 < len2 ? "no" : "go");
    
    return 0;
}
