#include <stdio.h>

int main() {
    
    int h, m, c;
    
    scanf("%d %d", &h, &m);
    scanf("%d", &c);
    
    h += c / 3600;
    c %= 3600;
    m += c;
    
    h += m / 60;
    m %= 60;
    h %= 24;
    
    printf("%d %d", h, m);
    
    return 0;
}
