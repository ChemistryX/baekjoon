#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    int xCnt[1000] = {0}, yCnt[1000] = {0}, xMax = INT_MIN, yMax = INT_MIN;
    
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;
        xCnt[x] += 1;
        yCnt[y] += 1;
        if (x > xMax) xMax = x;
        if (y > yMax) yMax = y;
    }
    
    int len = xMax > yMax ? xMax : yMax;
    int x = 0, y = 0;
    
    for (int i = 1; i <= len; i++) {
        if (xCnt[i] == 1) x = i;
        if (yCnt[i] == 1) y = i;
    }
    
    cout << x << " " << y << endl;
    
    return 0;
}
