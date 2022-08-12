#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
        
    string str, bombStr;
    vector<char> strVec;
    
    cin >> str >> bombStr;
    
    for (int i = 0; i < str.length(); i++) {
        strVec.push_back(str[i]);
        if (strVec.size() < bombStr.length()) continue;
        
        bool matched = true;
//        cout << "i: " << i << endl;
        for (int j = 0; j < bombStr.length(); j++) {
//            cout << "strVec idx: " << strVec.size() - j - 1 << " bombStr idx: " << bombStr.length() - j - 1 << endl;
//            cout << "strVec: " << strVec[strVec.size() - j - 1] << " bombStr: " << bombStr[bombStr.length() - j - 1] << endl;
            if (strVec[strVec.size() - j - 1] != bombStr[bombStr.length() - j - 1]) matched = false;
        }
        
        if (matched) {
//            cout << "matched" << endl;
            for (int j = 0; j < bombStr.length(); j++) {
                strVec.pop_back();
            }
        }
    }
    
    if (strVec.empty()) cout << "FRULA";
    else for (char ch : strVec) cout << ch;
    
    return 0;
}
