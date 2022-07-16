#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int p, max = 0;
        string bestName;
        
        cin >> p;
        
        for (int j = 0; j < p; j++) {
            int c;
            string name;
            cin >> c >> name;
            
            if (c > max) {
                max = c;
                bestName = name;
            }
        }
        cout << bestName << endl;
    }
    
    return 0;
}
