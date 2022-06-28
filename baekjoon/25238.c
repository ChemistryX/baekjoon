#include <stdio.h>

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    // 부동소수점 연산 정확성 문제(큰 수로 변환 후 연산 -> 나누기)
    // cf. https://www.acmicpc.net/board/view/92086
    double calc = (a * (100 - b)) / 100;
    
    printf("%d", calc >= 100 ? 0 : 1);
    
    return 0;
}
