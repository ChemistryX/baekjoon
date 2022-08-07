#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    
    int n;
    
    cin >> n;
    
    vector<pair<int, string>> data;
    
    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        data.push_back(make_pair(age, name));
    }
    
    // stable_sort: 만약 정렬 대상(나이) 같은 경우 기존 입력 순서대로 유지
    // -> "나이가 같으면 먼저 가입한 사람이 앞에 오는 순서~" 라는 문제 조건에 부합하기에 사용
    stable_sort(data.begin(), data.end(), compare);
    
    for (int i = 0; i < n; i++) {
        cout << data[i].first << " " << data[i].second << '\n';
    }
        
    return 0;
}
