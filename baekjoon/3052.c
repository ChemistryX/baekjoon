#include <stdio.h>
#include <string.h>

int main() {

    int arr[42] = {0}, cnt = 0;
    
    for (int i = 0; i < 10; i++) {
        int temp;
        scanf("%d", &temp);
        // temp % 42번 idx에 1씩 증가
        // 즉 나머지가 같은 수가 있으면 해당 나머지를 index로 갖는 배열 arr에 나머지가 같은 수의 숫자만큼 1씩 더해진다.
        // 따라서 서로 다른 나머지의 수를 구하려면 해당 배열에서 값이 0이 아닌 수들의 합을 구하면 된다.
        arr[temp % 42] += 1;
    }
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] != 0) cnt += 1;
    }
    
    printf("%d", cnt);
    
    
    return 0;
}
