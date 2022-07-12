#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        unsigned long long len = k.length();
        
        int lastDigit = k[len - 1] - '0';
        
        cout << (lastDigit % 2 == 0 ? "even" : "odd") << endl;
    }
    
    return 0;
}
