#include <stdio.h>

int main() {
    
    int n, m, data[10][10];
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &data[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", data[i][m - j - 1]);
        }
        printf("\n");
    }
 
    return 0;
}
