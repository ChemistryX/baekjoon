#include <stdio.h>
#define SIZE 3

int main() {
    
    int arr[SIZE] = {0}, max = -1, secondMax = -1;
    
    for (int i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    
    for (int i = 0; i < 3; i++) {
        if (arr[i] >= max) {
            secondMax = max;
            max = arr[i];
        } else if (secondMax < arr[i] && arr[i] < max) {
            secondMax = arr[i];
        }
    }
    
    printf("%d", secondMax);
    
    return 0;
}
