#include <iostream>
#include <climits>
#include <map>

using namespace std;

int main() {
    
    map<string, double> names;
    int n;
    double min = 1000000, max = 0;
    string oldest, youngest;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string name;
        int d, m, y;
        
        cin >> name >> d >> m >> y;
        
        // 연도 -> 임의의 threshold 변경 알고리즘
        names[name] = d + (m * 12) + (y * 12 * 30);
    }
    
    for (auto const& [key, value] : names) {
//        cout << "[" << key << ", " << value << "]" << endl;
        if (value > max) {
            max = value;
            youngest = key;
        }
        if (value < min) {
            min = value;
            oldest = key;
        }
    }
    
    cout << youngest << endl << oldest << endl;
    
    return 0;
}
