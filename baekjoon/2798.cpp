#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n, m, arr[100] = {0};
    vector<int> vec;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
//                cout << i << " " << j << " " << k << endl;
                int sum = arr[i] + arr[j] + arr[k];
//                cout << sum << endl;
                if (sum <= m) vec.push_back(sum);
            }
        }
    }
    
    sort(vec.begin(), vec.end());
    
    cout << vec.back() << endl;

    return 0;
}
