#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n, rank[50] = {0};
    vector<pair<int, int>> people;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        
        cin >> x >> y;
        
        people.push_back(make_pair(x, y));
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (people[i].first < people[j].first && people[i].second < people[j].second) rank[i] += 1;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << rank[i] + 1 << ' ';
    }
    
    return 0;
}
