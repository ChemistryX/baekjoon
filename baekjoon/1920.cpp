#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, arr[100000] = {0};
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int toSearch, leftIdx = 0, rightIdx = n - 1, found = 0;
        cin >> toSearch;
        
        // binary search algorithm
        while (leftIdx <= rightIdx) {
            int midIdx = (leftIdx + rightIdx) / 2;
            
            if (arr[midIdx] == toSearch) {
                found = 1;
                break;
            } else if (arr[midIdx] > toSearch) {
                rightIdx = midIdx - 1;
            } else if (arr[midIdx] < toSearch) {
                leftIdx = midIdx + 1;
            }
        }
        
        cout << (found ? 1 : 0) << '\n';
    }
    
    return 0;
}
