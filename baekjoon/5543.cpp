#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    int burgerMin = INT_MAX, beverageMin = INT_MAX;
    
    for (int i = 0; i < 3; i++) {
        int current;
        cin >> current;
        if (current < burgerMin) burgerMin = current;
    }
    
    for (int i = 0; i < 2; i++) {
        int current;
        cin >> current;
        if (current < beverageMin) beverageMin = current;
    }
    
    cout << burgerMin + beverageMin - 50 << endl;
    
    return 0;
}
