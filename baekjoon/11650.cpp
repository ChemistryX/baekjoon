#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first == b.first ? a.second < b.second : a.first < b.first;
}

int main() {
    
    int n;
    vector<pair<int, int>> points;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }
    
    sort(points.begin(), points.end(), compare);
    
    for (auto &item : points) {
        cout << item.first << " " << item.second << '\n';
    }
        
    return 0;
}
