#include <iostream>
#include <cmath>

using namespace std;

int main() {
        
    int r;
    
    cin >> r;
    
    // precision 소수점 아래만 다루기
    cout << fixed;
    // 소수점 아래 6자리 까지 표시
    cout.precision(6);
    cout << r * r * M_PI << endl;
    cout <<  r * r * (double) 2 << endl;
    
    return 0;
}
