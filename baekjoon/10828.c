#include <stdio.h>
#include <string.h>

void push(int);
int pop(void);
int size(void);
int empty(void);
int top(void);

int stack[10000] = {0};
int topIdx = -1;

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        char operation[6] = "";
        scanf("%s", operation);
        
        if (strcmp(operation, "push") == 0) {
            int x;
            scanf("%d", &x);
            push(x);
        } else if (strcmp(operation, "pop") == 0) {
            printf("%d\n", pop());
        } else if (strcmp(operation, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(operation, "empty") == 0) {
            printf("%d\n", empty());
        } else if (strcmp(operation, "top") == 0) {
            printf("%d\n", top());
        }
//        printf("topIdx: %d\n", topIdx);
    }
    
    return 0;
}

void push(int x) {
    stack[++topIdx] = x;
}

int pop() {
    int res = stack[topIdx];
    
    if (empty()) {
        res = -1;
    } else {
        stack[topIdx] = 0;
        topIdx -= 1;
    }
    
    return res;
}

int size() {
    int size = topIdx + 1;
    return size;
}

int empty() {
    return topIdx == -1 ? 1 : 0;
}

int top() {
    int res = stack[topIdx];
    
    if (empty()) {
        res = -1;
    }
    
    return res;
}
