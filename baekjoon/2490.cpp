#include <iostream>

using namespace std;

int main() {
    
    for (int i = 0; i < 3; i++) {
        int cnt1 = 0;
        for (int j = 0; j < 4; j++) {
            int current;
            cin >> current;
            if (current == 1) cnt1 += 1;
        }
        switch (cnt1) {
            case 4:
                cout << 'E' << endl;
                break;
            case 3:
                cout << 'A' << endl;
                break;
            case 2:
                cout << 'B' << endl;
                break;
            case 1:
                cout << 'C' << endl;
                break;
            case 0:
                cout << 'D' << endl;
                break;
        }
    }
    
    return 0;
}
