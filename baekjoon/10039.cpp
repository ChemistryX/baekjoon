#include <iostream>

using namespace std;

int main() {
    
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        int score;
        cin >> score;
        sum += score < 40 ? 40 : score;
    }
    
    cout << sum / 5 << endl;
    
    return 0;
}
