#include <stdio.h>

int main() {
    
    int a, b, c, side, n1, n2;
    
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        
        if (a == 0 && b == 0 && c == 0) break;
        
        if ((a > b && b > c) || (a > c && c > b)) {
            side = a;
            n1 = b;
            n2 = c;
        } else if ((b > a && a > c) || (b > c && c > a)) {
            side = b;
            n1 = a;
            n2 = c;
        } else {
            side = c;
            n1 = a;
            n2 = b;
        }
                
        printf("%s", side * side == n1 * n1 + n2 * n2 ? "right\n" : "wrong\n");
    }
    
    return 0;
}
