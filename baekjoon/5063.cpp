#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int r, e, c;
        
        cin >> r >> e >> c;
        
        int diff = e - c;
        
        if (r > diff) {
            cout << "do not advertise" << endl;
        } else if (r < diff) {
            cout << "advertise" << endl;
        } else {
            cout << "does not matter" << endl;
        }
    }
    
    
    
    return 0;
}
