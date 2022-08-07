#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string a, string b) {
    return a.size() == b.size() ? a < b : a.size() < b.size();
}

int main() {
    
    int n;
    vector<string> vec;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    
    sort(vec.begin(), vec.end(), compare);
    
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
        
    for (const auto &item : vec) {
        cout << item << endl;
    }
    
    return 0;
}
