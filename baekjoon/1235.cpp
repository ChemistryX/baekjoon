#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    
    int n;
    vector<string> data;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        data.push_back(s);
    }
    
    int len = (int) data[0].length();
    
    for (int i = len - 1; i >= 0; i--) {
        // str, cnt
        map<string, int> counts;
        for (int j = 0; j < n; j++) {
            counts[data[j].substr(i , len - i)] += 1;
        }
        if (counts.size() == n) {
            cout << len - i << endl;
            break;
        }
    }
       
    return 0;
}
