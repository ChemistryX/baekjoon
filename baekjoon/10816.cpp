#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    vector<int> cards;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int card;
        cin >> card;
        cards.push_back(card);
    }
    
    sort(cards.begin(), cards.end());
    
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int card;
        cin >> card;
        // 이진 탐색 관련 참조
        // cf. https://chanhuiseok.github.io/posts/algo-55/
        int cnt = upper_bound(cards.begin(), cards.end(), card) - lower_bound(cards.begin(), cards.end(), card);
        
        cout << cnt << ' ';
    }

    return 0;
}
