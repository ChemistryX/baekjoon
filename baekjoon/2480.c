#include <stdio.h>

int main() {
    
    int a, b, c, reward = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == b && b == c && c == a) {
        reward = 10000 + a * 1000;
    } else if (a == b) {
        reward = 1000 + a * 100;
    } else if (b == c) {
        reward = 1000 + b * 100;
    } else if (c == a) {
        reward = 1000 + c * 100;
    } else if (a > b && a > c) {
        reward = a * 100;
    } else if (b > c && b > a) {
        reward = b * 100;
    } else if (c > a && c > b) {
        reward = c * 100;
    }
    
    printf("%d", reward);
    
    return 0;
}
