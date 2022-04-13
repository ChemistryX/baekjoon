#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int streak = 1;
        int point = 0;
        char ans[80] = {'X', };
        
        scanf("%s", ans);
        
        for (int j = 0; j < sizeof(ans) / sizeof(char); j++) {
            if (ans[j] == 'O') {
                point += 1 * streak;
                if (ans[j + 1] == 'O') {
                    streak += 1;
                } else {
                    streak = 1;
                }
            }
        }
        printf("%d\n", point);
    }
    
    
    return 0;
}
