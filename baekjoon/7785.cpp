#include <iostream>
#include <map>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    map<string, int, greater<string>> logs;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string name, status;
        cin >> name >> status;
        int statusToInt = status == "enter" ? 0 : 1;
        logs[name] = statusToInt;
    }
        
    for (auto log : logs) {
        if (log.second == 0) cout << log.first << '\n';
    }
    
    return 0;
}
