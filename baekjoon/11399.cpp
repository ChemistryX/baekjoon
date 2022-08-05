#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n, p[1000] = {0}, time[1000] = {0};
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    sort(p, p + n);
    
    int sum = p[0];
    time[0] = sum;
    
    for (int i = 1; i < n; i++) {
        sum += p[i];
        time[i] = sum;
    }
    
    int timeTotal = 0;
    
    for (int i = 0; i < n; i++) {
        timeTotal += time[i];
    }
    
    cout << timeTotal << endl;
    
    return 0;
}
