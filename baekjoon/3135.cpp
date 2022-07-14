#include <iostream>

using namespace std;

int main() {
    
    int a, b, n, freqs[6] = {0}, currentFreq = 0, diffMin = 10000, minDiffIdx = -1, cnt = 0;
    
    cin >> a >> b >> n;
    
    freqs[0] = a;
    
    for (int i = 1; i <= n; i++) {
        cin >> freqs[i];
    }
    
    for (int i = 0; i < n + 1; i++) {
        int diff = freqs[i] - b;
        diff = diff < 0 ? diff * -1 : diff;
        if (diffMin > diff) {
            minDiffIdx = i;
            diffMin = diff;
            currentFreq = freqs[i];
        }
    }
    
    if (minDiffIdx > 0) cnt += 1;
    int diffCnt = minDiffIdx == 0 ? diffMin : currentFreq - b;
    diffCnt = diffCnt < 0 ? diffCnt * -1 : diffCnt;
    
    cout << diffCnt + cnt << endl;
        
//    cout << "currentFreq: " << currentFreq << ", minDiffIdx: " << minDiffIdx << ", diffMin: " << diffMin << " , cnt: " << diffCnt + cnt << endl;;
    
    return 0;
}
