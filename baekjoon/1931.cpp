#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Schedule {
    int start;
    int end;
};

bool sortByEndTime(Schedule a, Schedule b) {
    // 만약 종료 시간이 같다면
    if (a.end == b.end) {
        // 시작 시간이 빠른 순으로 정렬
        return a.start < b.start;
    } else {
        // 종료 시간 빠른 순으로 정렬
        return a.end < b.end;
    }
}

int main() {
    
    int n;
    
    cin >> n;
    
    vector<Schedule> schedules(n);
    
    for (int i = 0; i < n; i++) {
        int start, end;
        
        cin >> start >> end;
        
        schedules[i].start = start;
        schedules[i].end = end;
    }
    
    sort(schedules.begin(), schedules.end(), sortByEndTime);
    
    int availableCnt = 0, currentEndTime = 0;
    
    for (int i = 0; i < n; i++) {
        if (currentEndTime <= schedules[i].start) {
//            cout << "(" << schedules[i].start << ", " << schedules[i].end << ")" << endl;
            currentEndTime = schedules[i].end;
            availableCnt += 1;
        }
    }
    
    cout << availableCnt << endl;
    
    return 0;
}
