#include <stdio.h>

int main() {
    int x, y, w, h, min = 1001, arr[4] = {0};
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    arr[0] = x;
    arr[1] = y;
    arr[2] = w - x;
    arr[3] = h - y;
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (min > arr[i]) min = arr[i];
    }
    
    printf("%d", min);
    
    return 0;
}
