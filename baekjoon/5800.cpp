#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int k;
    
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        int n, min = 101, max = -1, scores[50] = {0};
        
        cin >> n;
        
        for (int j = 0; j < n; j++) {
            int score;
            
            cin >> score;
            
            scores[j] = score;
            
            if (score < min) min = score;
            if (score > max) max = score;
        }
        
        // asc order
        sort(scores, scores + n);
                
        int bestGap = 0;
        
        for (int j = 0; j < n - 1; j++) {
            int gap = scores[j + 1] - scores[j];
            if (bestGap < gap) bestGap = gap;
        }
        
        cout << "Class " << i + 1 << endl;
        cout << "Max " << max << ", Min " << min << ", Largest gap " << bestGap << endl;
    }
    
    return 0;
}
