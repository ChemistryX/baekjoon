#include <iostream>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, arr[10001] = {0};
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[num] += 1;
    }
    
    // i = 입력된 숫자에 해당, 1부터 시작되므로 이미 오름차순 정렬된걸로 볼 수 있음
    for (int i = 1; i <= 10000; i++) {
        // j = i 입력 횟수
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}
