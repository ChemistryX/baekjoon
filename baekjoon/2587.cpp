#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int arr[5] = {0}, sum = 0;
    
    for (int i = 0; i < 5; i++) {
        int n;
        
        cin >> n;
        
        arr[i] = n;
        sum += n;
    }
    
    sort(arr, arr + 5);
    
    cout << sum / 5 << endl;
    cout << arr[2] << endl;
    
    return 0;
}
