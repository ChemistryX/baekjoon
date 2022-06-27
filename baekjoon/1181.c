#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20000

void swap(int*, int*);

int main() {
    
    int n, indexes[MAX_SIZE] = {0}, lengths[MAX_SIZE] = {0};
    char arr[MAX_SIZE][51] = {};
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        int len = strlen(arr[i]);
        indexes[i] = i;
        lengths[i] = len;
    }
    
    // TODO: 정렬 알고리즘 O(n log n)으로 개선 필요
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (lengths[j] > lengths[j + 1]) {
                swap(&indexes[j], &indexes[j + 1]);
                swap(&lengths[j], &lengths[j + 1]);
            } else if (lengths[j] == lengths[j + 1]) {
                // 사전 순 정렬
                if (strcmp(arr[indexes[j]], arr[indexes[j + 1]]) > 0) {
                    char temp[51] = "";
                    strcpy(temp, arr[indexes[j]]);
                    strcpy(arr[indexes[j]], arr[indexes[j + 1]]);
                    strcpy(arr[indexes[j + 1]], temp);
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[indexes[i]], arr[indexes[i + 1]]) == 0) continue;
        printf("%s\n", arr[indexes[i]]);
//        printf("idx: %d len:%d\n", indexes[i], lengths[i]);
    }
    
    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
