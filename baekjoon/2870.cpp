#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool str_as_int_asc(string s1, string s2) {
    return s1.length() == s2.length() ? s1 < s2 : s1.length() < s2.length();
}

int main() {
    
    int n;
    vector<string> numbers;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        bool flag = false;
        string temp = "";
        for (int j = 0; j <= s.length(); j++) {
            if (!(s[j] >= '0' && s[j] <= '9') || s[j] == 0) {
                // cf. https://stackoverflow.com/a/31226728
                temp.erase(0, min(temp.find_first_not_of('0'), temp.size() - 1));
                if (flag) numbers.push_back(temp);
                flag = false;
                temp = "";
            } else {
                flag = 1;
                temp += s[j];
            }
        }
    }
    
    sort(numbers.begin(), numbers.end(), str_as_int_asc);
    
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    
    return 0;
}
