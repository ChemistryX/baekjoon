#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n;
    vector<string> files;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        files.push_back(name);
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < files[i].length(); j++) {
            if (files[i][j] != files[i + 1][j]) files[i + 1][j] = '?';
        }
    }
    
    cout << files[n - 1] << endl;
    
    return 0;
}
