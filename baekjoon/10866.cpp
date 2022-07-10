#include <iostream>
#include <string.h>

using namespace std;

void push_back(int);
void push_front(int);
int pop_front(void);
int pop_back(void);
int size(void);
int empty(void);
int front(void);
int back(void);

int deque[10001] = {0};
int backIdx = -1;

int main() {
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        char operation[11] = "";
        cin >> operation;
        
        if (strcmp(operation, "push_back") == 0) {
            int x;
            cin >> x;
            push_back(x);
        } else if (strcmp(operation, "push_front") == 0) {
            int x;
            cin >> x;
            push_front(x);
        } else if (strcmp(operation, "pop_back") == 0) {
            cout << pop_back() << endl;
        } else if (strcmp(operation, "pop_front") == 0) {
            cout << pop_front() << endl;
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

void push_back(int x) {
    deque[++backIdx] = x;
}

void push_front(int x) {
    for (int i = backIdx; i >= 0; i--) {
        deque[i + 1] = deque[i];
    }
    deque[0] = x;
    backIdx += 1;
}

int pop_front() {
    int res = deque[0];
    
    if (empty()) {
        res = -1;
    } else {
        for (int i = 0; i < backIdx + 1; i++) {
            deque[i] = deque[i + 1];
        }
        backIdx -= 1;
    }
    
    return res;
}

int pop_back() {
    int res = deque[backIdx];
    
    if (empty()) {
        res = -1;
    } else {
        deque[backIdx] = 0;
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
    int res = deque[0];
    
    if (empty()) {
        res = -1;
    }
    
    return res;
}

int back() {
    int res = deque[backIdx];
    
    if (empty()) {
        res = -1;
    }
    
    return res;
}
