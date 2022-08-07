#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    
    string s, t, tempS, tempT;
    
    cin >> s >> t;
        
    int lcmRes = lcm(s.size(), t.size());
    
    for (int i = 0; i < lcmRes / s.size(); i++) tempS += s;
    for (int i = 0; i < lcmRes / t.size(); i++) tempT += t;

    cout << (tempS == tempT) << endl;
    
    return 0;
}
