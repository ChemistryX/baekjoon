#include <stdio.h>

int main() {
    
    int n, arr[1000] = {0};
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int currentStreak = 1;
    int start = 1000, end = 1;
    int bestDiff = 0;
        
    for (int i = 0; i <= n - 1; i++) {
        if (arr[i] < arr[i + 1] && currentStreak > 0) {
            currentStreak += 1;
            if (start >= 1000) {
                start = arr[i];
                end = 1;
            }
        } else {
            if (end <= 1) {
                end = arr[i];
                int diff = end - start;
                if (diff > bestDiff) bestDiff = diff;
                start = 1000;
            }
            
            currentStreak = 1;
        }
    }
    
    printf("%d", bestDiff);
}
