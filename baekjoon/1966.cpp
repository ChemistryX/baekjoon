#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m, printedDocsCnt = 0;
        queue<pair<char, int>> printQueue;
        priority_queue<int> priorityQueue;
        
        cin >> n >> m;
        
        for (int j = 0; j < n; j++) {
            int priority;
            cin >> priority;
            
            printQueue.push(make_pair(j, priority));
            priorityQueue.push(priority);
        }
        
        while(!printQueue.empty()) {
            int currentId = printQueue.front().first;
            int currentPriority = printQueue.front().second;
            
            // 존재하는 우선 순위 중 가장 높은 것 보다 현재 우선 순위가 낮다면
            if (priorityQueue.top() > currentPriority) {
                // 큐 제일 뒤로 이동
                printQueue.push(printQueue.front());
                printQueue.pop();
            // priorityQueue.top() == currentPriority인 경우 인쇄
            // (priorityQueue.top() < currentPriority 인 상황은 존재 x)
            } else {
                printQueue.pop();
                priorityQueue.pop();
                printedDocsCnt += 1;
                
                if (currentId == m) {
                    cout << printedDocsCnt << endl;
                }
            }
        }
    }
    
    return 0;
}
