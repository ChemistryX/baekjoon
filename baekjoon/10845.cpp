#include <iostream>
#include <string.h>

using namespace std;

void push(int);
int pop(void);
int size(void);
int empty(void);
int front(void);
int back(void);

int queue[10000] = {0};
int backIdx = -1;

int main() {
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        char operation[6] = "";
        cin >> operation;
        
        if (strcmp(operation, "push") == 0) {
            int x;
            cin >> x;
            push(x);
        } else if (strcmp(operation, "pop") == 0) {
            cout << pop() << endl;
        } else if (strcmp(operation, "size") == 0) {
            cout << size() << endl;
        } else if (strcmp(operation, "empty") == 0) {
            cout << empty() << endl;
        } else if (strcmp(operation, "front") == 0) {
            cout << front() << endl;
        } else if (strcmp(operation, "back") == 0) {
            cout << back() << endl;
        }
    }
    
    return 0;
}

void push(int x) {
    queue[++backIdx] = x;
}

int pop() {
    int res = queue[0];
    
    if (empty()) {
        res = -1;
    } else {
        for (int i = 0; i < backIdx + 1; i++) {
            queue[i] = queue[i + 1];
        }
        backIdx -= 1;
    }
    
    return res;
}

int size() {
    int size = backIdx + 1;
    return size;
}

int empty() {
    return backIdx == -1 ? 1 : 0;
}

int front() {
    int res = queue[0];
    
    if (empty()) {
        res = -1;
    }
    
    return res;
}

int back() {
    int res = queue[backIdx];
    
    if (empty()) {
        res = -1;
    }
    
    return res;
}
