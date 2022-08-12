#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    string s;
    vector<string> tokens;
    
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        tokens.push_back((string) s[i]);
    }
    
    return 0;
}
