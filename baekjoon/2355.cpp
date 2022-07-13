#include <iostream>

using namespace std;

int main() {
    
    long a, b;
    
    cin >> a >> b;
    
    long aOrig = a, bOrig = b;
    
    a = aOrig < bOrig ? aOrig : bOrig;
    b = aOrig < bOrig ? bOrig : aOrig;
        
    long long res = (a + b) * (b - a + 1) / 2;
    
    cout << res << endl;
    
    return 0;
}
