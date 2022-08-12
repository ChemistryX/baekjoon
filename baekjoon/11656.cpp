#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    string s;
    vector<string> strings;
    
    cin >> s;
    
    int lengthOrig = s.length();
    
    for (int i = 0; i < lengthOrig; i++) {
        strings.push_back(s);
        s.erase(s.begin());
    }
    
    sort(strings.begin(), strings.end());
    
    for (int i = 0; i < strings.size(); i++) cout << strings[i] << endl;
    
    return 0;
}
