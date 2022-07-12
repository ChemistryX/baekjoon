#include <iostream>

using namespace std;

int main() {
        
    int n, best = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int dices[3] = {0};
        
        cin >> dices[0] >> dices[1] >> dices[2];
        
        int d1 = dices[0], d2 = dices[1], d3 = dices[2], prize = 0;

        if (d1 == d2 && d2 == d3 && d3 == d1) prize = 10000 + d1 * 1000;
        if (d1 != d2 && d2 != d3 && d3 != d1) {
            int max = -1;
            for (int i = 0; i < 3; i++) {
                if (max < dices[i]) max = dices[i];
            }
            prize = max * 100;
        }
        if (d1 == d2 && d2 != d3) prize = 1000 + d1 * 100;
        if (d2 == d3 && d3 != d1) prize = 1000 + d2 * 100;
        if (d3 == d1 && d1 != d2) prize = 1000 + d3 * 100;
        
        if (best < prize) best = prize;
    }
    
    cout << best << endl;
    
    return 0;
}
