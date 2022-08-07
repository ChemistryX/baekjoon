#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b) {
    return a > b;
}

int main() {
    
    string n;
    bool found = false;
    int digitSum = 0;

    cin >> n;
    
    sort(n.begin(), n.end(), desc);
    
    for (int i = 0; i < n.length(); i++) {
        digitSum += n[i] - '0';
    }
    
    if (digitSum % 3 == 0 && n[n.length() - 1] == '0') found = true;
    
    cout << (found ? n : "-1") << endl;
    
    return 0;
}
