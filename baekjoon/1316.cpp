#include <iostream>

using namespace std;

int main() {
    
    int n, groupWordsCnt = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        
        int alphabets[26] = {0};
        bool isGroupWord = true;
        for (int j = 0; j < str.length(); j++) {
            int charIdx = str[j] - 'a';
            // should be unique
            if (alphabets[charIdx] == 0) {
                alphabets[charIdx] = 1;
            } else {
                if (str[j - 1] != str[j]) isGroupWord = false;
            }
        }
        
        if (isGroupWord) groupWordsCnt += 1;
    }
    
    cout << groupWordsCnt << endl;
    
    return 0;
}
