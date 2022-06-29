#include <stdio.h>
#include <string.h>

int main() {
    
    int sum = 0, cnt = 0;
    char str[21] = "";
    
    scanf("%s", str);
    
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        char cur = str[i];
        int chToNum = cur >= 'A' && cur <= 'Z' ? cur - 'A' + 27 : cur - 'a' + 1;
        sum += chToNum;
    }
    
    for (int i = 2; i < sum; i++) {
        if (sum % i == 0) cnt += 1;
    }
    
//    printf("%d\n", sum);
    
    if (cnt == 0) {
        printf("It is a prime word.");
    } else {
        printf("It is not a prime word.");
    }
    
    return 0;
}

