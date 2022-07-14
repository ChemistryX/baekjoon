#include <iostream>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int sum = 0;
        string s;
        
        cin >> s;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (i % 2 == 0) {
                int num = (s[i] - '0') * 2;
                if (num >= 10) {
                    int digitSum = 0;
                    while (num != 0) {
                        digitSum += num % 10;
                        num /= 10;
                    }
                    s[i] = digitSum + '0';
                } else {
                    s[i] = num + '0';
                }
            }
            sum += s[i] - '0';
        }
        cout << (sum % 10 == 0 ? 'T' : 'F') << endl;
    }
    
    return 0;
}
