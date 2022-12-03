#include <iostream>
#include <map>

using namespace std;

int main() {
    
    int n, m, count = 0;
    // string, dummy
    map<string, int> dic;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        dic.insert({ str, 0 });
    }
    
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        if (dic.find(str) != dic.end()) count += 1;
    }
    
    cout << count << endl;
    
    return 0;
}
