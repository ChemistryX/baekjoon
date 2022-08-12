#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<string> vec;
    int maxLen = 0;
    
    for (int i = 0; i < 5; i++) {
        string s;
        cin >> s;
        int len = s.length();
        if (len > maxLen) maxLen = len;
        vec.push_back(s);
    }
        
    for (int i = 0; i < maxLen; i++) {
        for (int j = 0; j < 5; j++) {
            if (vec[j][i] == '\0') continue;
            cout << vec[j][i];
        }
    }
    
    return 0;
}
