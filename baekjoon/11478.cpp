#include <iostream>
#include <map>

using namespace std;

int main() {
    
    // part, dummy
    map<string, int> data;
    string s;
    
    cin >> s;
    
    int current = 1;
    int len = (int) s.length();
    
    while (current <= len) {
        for (int i = 0; i < len; i++) {
            if (i + current > len) break;
//            cout << s.substr(i, current) << endl;
            data.insert({ s.substr(i, current), 0 });
        }
        current += 1;
    }
    
    cout << data.size() << endl;
    
    return 0;
}
