#include <iostream>

using namespace std;

int main() {
    
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    string ab = to_string(a) + to_string(b);
    string cd = to_string(c) + to_string(d);
    long long res = stoll(ab) + stoll(cd);
    
    cout << res;
    
    return 0;
}
