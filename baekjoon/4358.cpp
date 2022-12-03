#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    
    // part, cnt
    map<string, double> data;
    string s;
    double cnt = 0;
    
    while (getline(cin, s)) {
        cnt += 1;
        if (data.find(s) != data.end()) {
            data[s] += 1;
        } else {
            data[s] = 1;
        }
    }
    
    // 소숫점 아래 자리 설정
    cout << fixed;
    cout.precision(4);
        
    for (const auto &item : data) {
        cout << item.first << " " << (item.second / cnt) * 100 << endl;
    }
    
    return 0;
}
