#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    getchar();
    
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        
        string word;
        
        for (char ch : s) {
            if (ch == ' ') {
                reverse(word.begin(), word.end());
                cout << word << ' ';
                word = "";
            } else {
                word += ch;
            }
        }
        
        reverse(word.begin(), word.end());
        cout << word << endl;
    }
    
    return 0;
}
