#include <iostream>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int h, w, n, arr[9801] = {0};
        cin >> h >> w >> n;
        
        int currentRoomNm = 101;
        int cnt = 0;
        for (int j = 0; j < w; j++) {
            for (int k = 0; k < h; k++) {
                arr[cnt] = currentRoomNm;
                currentRoomNm += 100;
                cnt += 1;
            }
            currentRoomNm = 100 + (j + 2);
        }
        
        cout << arr[n - 1] << endl;
    }

    return 0;
}
