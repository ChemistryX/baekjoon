#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int num;
        int sum = 0;
        double avg = 0.0;
        int aboveAvgCnt = 0;
        scanf("%d", &num);
        int arr[1000] = {0};

        for (int j = 0; j < num; j++) {
            int score;
            scanf("%d", &score);
            arr[j] = score;
            sum += score;
        }
        
        avg = sum / (double) num;
        
        for (int j = 0; j < num; j++) {
            if (arr[j] > avg) aboveAvgCnt += 1;
        }
        
        printf("%.3lf%%\n", aboveAvgCnt / (double) num * 100);
    }
    
    return 0;
}
