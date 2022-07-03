#include <stdio.h>

int main() {
    
    int t;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int n, creditTotal = 0;
        double gpa = 0.0;
        
        scanf("%d", &n);
        
        for (int j = 0; j < n; j++) {
            int c;
            double g;
            
            scanf("%d %lf", &c, &g);
            creditTotal += c;
            gpa += c * g;
        }
        
        printf("%d %.1lf\n", creditTotal, gpa / creditTotal);
    }
    
    return 0;
}
