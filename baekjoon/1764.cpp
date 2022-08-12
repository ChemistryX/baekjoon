#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n, m;
    vector<string> neverHeard, neverSeen, intersection;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        neverHeard.push_back(name);
    }
    
    sort(neverHeard.begin(), neverHeard.end());
        
    for (int i = 0; i < m; i++) {
        string name;
        cin >> name;
        neverSeen.push_back(name);
    }
    
    sort(neverSeen.begin(), neverSeen.end());
    
    set_intersection(neverHeard.begin(), neverHeard.end(), neverSeen.begin(), neverSeen.end(), back_inserter(intersection));
    
    int size = intersection.size();
    cout << size << endl;
    for (int i = 0; i < size; i++) {
        cout << intersection[i] << endl;
    }
    
    
    return 0;
}
