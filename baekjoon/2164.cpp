#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    int n;
    queue<int> queue;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        queue.push(i);
    }
    
    // n = 3
    // [1, 2, 3]
    // 1번째 시행 (size = 3)
    // pop -> [2, 3]
    // queue.front() = 2, queue.push(2) => [2, 3, 2]
    // pop -> [3, 2]
    // 2번째 시행 (size = 2)
    // pop -> [2]
    // queue.front() = 2, queue.push(2) => [2, 2]
    // pop -> [2]
    // 3번째 시행 (size = 1) -> break

    while (queue.size() > 1) {
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }
    
    cout << queue.front() << endl;
    
    return 0;
}
