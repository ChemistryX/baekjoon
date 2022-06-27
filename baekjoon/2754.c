#include <stdio.h>

int main() {
    
    char grade[2] = "";
    
    scanf("%s", grade);
    
    switch (grade[0]) {
        case 'A':
            switch (grade[1]) {
                case '+':
                    printf("4.3");
                    break;
                case '0':
                    printf("4.0");
                    break;
                case '-':
                    printf("3.7");
                    break;
            }
            break;
        case 'B':
            switch (grade[1]) {
                case '+':
                    printf("3.3");
                    break;
                case '0':
                    printf("3.0");
                    break;
                case '-':
                    printf("2.7");
                    break;
            }
            break;
        case 'C':
            switch (grade[1]) {
                case '+':
                    printf("2.3");
                    break;
                case '0':
                    printf("2.0");
                    break;
                case '-':
                    printf("1.7");
                    break;
            }
            break;
        case 'D':
            switch (grade[1]) {
                case '+':
                    printf("1.3");
                    break;
                case '0':
                    printf("1.0");
                    break;
                case '-':
                    printf("0.7");
                    break;
            }
            break;
        case 'F':
            printf("0.0");
            break;
    }
    
    return 0;
}
