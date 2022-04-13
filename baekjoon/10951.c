#include <stdio.h>

int main() {
    
    int a, b;
    int res;
    
    /*
     * scanf의 반환값 이용
     * cf. https://kimdohyeon.tistory.com/29
     */
    while (1) {
        res = scanf("%d %d", &a, &b);
        if (res == -1) break;

        printf("%d\n", a + b);
    }
    
    return 0;
}
