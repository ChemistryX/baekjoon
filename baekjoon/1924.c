#include <stdio.h>

int main() {
    // 0 - SUN, 1 - MON, 2 - TUE, 3 - WED, 4 - THU, 5 - FRI, 6 - SAT
    int m, d, day = 0;
    
    scanf("%d %d", &m, &d);
    
    // 월 반복
    for (int i = 1; i <= m; i++) {
        int end = (i == m) ? d : (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) ? 31 : i == 2 ? 28 : 30;
        // 일 반복
        for (int j = 1; j <= end; j++) {
            day += 1;
        }
    }
    
    switch (day % 7) {
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
    }
    
    return 0;
}
