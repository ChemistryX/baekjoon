#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    
    int n, min = INT_MAX, max = INT_MIN, range, mid;
    double sum = 0.0, avg;
    
    cin >> n;
    
    int *arr = new int[n];
    int cnt[8001] = {0};
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
        cnt[arr[i] + 4000] += 1;
    }
    
    sort(arr, arr + n);

    int bestCnt = 0, mode = arr[0];
    int flag = 0;
    
    for (int i = 0; i < n; i++) {
        int currentCnt = cnt[arr[i] + 4000];
        if (currentCnt > bestCnt) {
            bestCnt = currentCnt;
            mode = arr[i];
            flag = 0;
        } else if (currentCnt == bestCnt && mode != arr[i] && flag == 0) {
            flag = 1;
            mode = arr[i];
        }
    }
    
    avg = sum / n;
    mid = arr[n / 2];
    range = max - min;
    
    // 1 1 2 2 3 3 3
    
    // 1 1 2 2 3 3
    
    cout << (int) round(avg) << '\n' << mid << '\n' << mode << '\n' << range << '\n';
    
    delete[] arr;
    
    return 0;
}
