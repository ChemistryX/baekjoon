#include <stdio.h>
#include <string.h>

int main() {
    
    char strA[1000001] = "", strB[1000001] = "";
    
    scanf("%s %s", strA, strB);
    
    int lenA = strlen(strA);
    int lenB = strlen(strB);
    
    int diff = lenA > lenB ? lenA - lenB : lenB - lenA;
    
    if (lenA > lenB) {
        while (diff != 0) {
            for (int i = lenB - 1; i >= 0; i--) {
                strB[i + 1] = strB[i];
            }
            strB[0] = '0';
            lenB += 1;
            diff -= 1;
        }
    } else if (lenB > lenA) {
        while (diff != 0) {
            for (int i = lenA - 1; i >= 0; i--) {
                strA[i + 1] = strA[i];
            }
            strA[0] = '0';
            lenA += 1;
            diff -= 1;
        }
    }
    
    // lenA and lenB would be same atm.
    for (int i = 0; i < lenA; i++) {
        printf("%d", (strA[i] - '0') + (strB[i] - '0'));
    }
    
    return 0;
}
