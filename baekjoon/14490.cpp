#include <iostream>

using namespace std;

int gcd(int, int);

int main() {
    
    int n = 0, m = 0;
    string s, temp;
    
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ':' || i == s.length() - 1) {
            if (i == s.length() - 1) {
                temp += s[i];
                m = stoi(temp);
            }
            if (s[i] == ':') {
                n = stoi(temp);
            }
            temp = "";
        } else {
            temp += s[i];
        }
    }
    
    int toDivide = gcd(n, m);
        
    cout << n / toDivide << ":" << m / toDivide << endl;
    
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}
