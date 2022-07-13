#include <iostream>

using namespace std;

int main() {
    
    int bestScore = 0, bestIdx = 0;
    
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int score;
            cin >> score;
            sum += score;
        }
        if (bestScore < sum) {
            bestScore = sum;
            bestIdx = i + 1;
        }
    }
    
    cout << bestIdx << " " << bestScore << endl;
    
    return 0;
}
