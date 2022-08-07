#include <iostream>

using namespace std;

int main() {
    
    string s;
    int zeroChunksCnt = 0, oneChunksCnt = 0;
    
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != s[i + 1]) {
            if (s[i] == '0') zeroChunksCnt += 1;
            if (s[i] == '1') oneChunksCnt += 1;
        }
    }
    
    cout << (zeroChunksCnt > oneChunksCnt ? oneChunksCnt : zeroChunksCnt) << endl;
    
    return 0;
}
