#include <stdio.h>
#include <string.h>

int main() {
    
    int foundCnt = 0;
    
    for (int i = 0; i < 5; i++) {
        char name[11] = "";
        
        scanf("%s", name);
        
        // strstr: string 비교 함수
        // NULL일 경우 포함 X
        if (strstr(name, "FBI") != NULL) {
            printf("%d ", i + 1);
            foundCnt += 1;
        }
    }
    
    if (foundCnt == 0) {
        printf("HE GOT AWAY!");
    }
    
    return 0;
}
