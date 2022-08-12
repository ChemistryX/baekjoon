#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n, m;
    vector<int> c1, c2;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        c1.push_back(num);
    }
    
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        c2.push_back(num);
    }
    
    sort(c1.begin(), c1.end());
    
    for (int i = 0; i < m; i++) {
        int card = c2[i];
        int cnt = upper_bound(c1.begin(), c1.end(), card) - lower_bound(c1.begin(), c1.end(), card);
        
        cout << cnt << ' ';
    }
    
    return 0;
}
