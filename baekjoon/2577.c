#include <stdio.h>

int main() {
    
    int a, b, c;
    char str[10];
    int count[10] = {0};
    
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    sprintf(str, "%d", a * b * c);
    
    for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
        count[str[i] - '0'] += 1;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }
    
    return 0;
}
