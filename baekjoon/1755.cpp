#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.second < b.second;
}

int main() {
    
    int m, n;
    map<int, string> numbers = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}
    };
    map<int, string> map;
    
    cin >> m >> n;
    
    for (int i = m; i <= n; i++) {
        string s = to_string(i);
        string generated;
        for (int j = 0; j < s.length(); j++) {
            generated += numbers[s[j] - '0'];
        }
        map[i] = generated;
//        cout << generated << endl;
    }
    
    vector<pair<int, string>> temp(map.begin(), map.end());
    
    sort(temp.begin(), temp.end(), compare);
    
    int i = 0;
    for (auto &item : temp) {
        if (i != 0 && i % 10 == 0) cout << endl;
        cout << item.first << ' ';
        i += 1;
    }
    
    return 0;
}
