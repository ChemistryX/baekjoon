#include <stdio.h>

int main() {
    
    int n;
    double sum = 0, max = 0, arr[1000] = { 0 };
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = ((double) arr[i] / max) * 100;
        sum += arr[i];
    }
        
    printf("%lf", sum / n);
    
    return 0;
}
