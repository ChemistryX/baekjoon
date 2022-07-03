#include <stdio.h>

int main() {
    
    int h, m, s, d;
    
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &d);
    
    h += d / 3600;
    d %= 3600;
    m += d / 60;
    d %= 60;
    s += d;
    
    m += s / 60;
    s %= 60;
    h += m / 60;
    m %= 60;
    h %= 24;
    
    printf("%d %d %d", h, m, s);
    
    return 0;
}
