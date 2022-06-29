#include <stdio.h>
#include <string.h>

int main() {
    
    char strA[10001] = "", strB[10001] = "";
    unsigned long long sum = 0;
    
    scanf("%s %s", strA, strB);
    
    
    int lenA = strlen(strA);
    int lenB = strlen(strB);
    
    for (int i = 0; i < lenA; i++) {
        for (int j = 0; j < lenB; j++) {
            sum += (strA[i] - '0') * (strB[j] - '0');
        }
    }
    
//    printf("%s\n%s", strA, strB);
    printf("%llu", sum);
    
    return 0;
}
