#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    int n, k;
    queue<int> queue;
    
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) queue.push(i);
    
    cout << '<';
        
    while (queue.size() > 0) {
        for (int i = 0; i < k - 1; i++) {
            queue.push(queue.front());
            queue.pop();
        }
        cout << queue.front();
        if (queue.size() > 1) cout << ", ";
        queue.pop();
    }
    
    cout << '>';
   
        
    return 0;
}

