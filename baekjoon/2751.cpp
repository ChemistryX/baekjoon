#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n;
    vector<int> vec;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < n; i++) {
        cout << vec[i] << '\n';
    }
    
    return 0;
}
