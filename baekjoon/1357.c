#include <stdio.h>

int rev(n) {
    int rev = 0;
    while (n != 0) {
        if (rev != 0) rev *= 10;
        int temp = n % 10;
        rev += temp;
        n /= 10;
    }
    
    return rev;
}

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    printf("%d", rev(rev(x) + rev(y)));
    
    return 0;
}
