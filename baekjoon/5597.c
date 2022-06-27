#include <stdio.h>

int main() {
    
    int num, arr[30] = {0};
    
    for (int i = 0; i < 30; i++) {
        arr[i] = i + 1;
    }
    
    for (int i = 0; i < 28; i++) {
        scanf("%d", &num);
        for (int i = 0; i < 30; i++) {
            if (arr[i] == num) arr[i] = 0;
        }
    }
    
    for (int i = 0; i < 30; i++) {
        if (arr[i] != 0) printf("%d\n", arr[i]);
    }
    
    return 0;
}
