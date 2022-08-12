#include <iostream>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int k, n, peopleCnt[15][14] = {0};
        
        cin >> k >> n;
        
        
        // 0층에 해당하는 주민 수 할당
        for (int j = 0; j < n; j++) {
            peopleCnt[0][j] = j + 1;
        }
        
        for (int j = 1; j <= k; j++) {
            for (int m = 0; m < n; m++) {
                for (int l = 0; l <= m; l++) {
                    peopleCnt[j][m] += peopleCnt[j - 1][l];
                }
            }
        }
        
//        for (int j = k; j >= 0; j--) {
//            for (int m = 0; m < n; m++) {
//                cout << peopleCnt[j][m] << ' ';
//            }
//            cout << endl;
//        }
        cout << peopleCnt[k][n - 1] << endl;
    }

    return 0;
}
