#include <iostream>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int alphabetsCnt[26] = {0};
        int sum = ('A' + 'Z') * 13;
        string s;
        
        cin >> s;
                
        for (int j = 0; j < s.length(); j++) {
            alphabetsCnt[s[j] - 'A'] += 1;
            if (alphabetsCnt[s[j] - 'A'] == 1) sum -= s[j];
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
