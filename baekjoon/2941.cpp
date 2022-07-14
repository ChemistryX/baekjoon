#include <iostream>

using namespace std;

int main() {
    
    int cnt = 0;
    string s;
    
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        cnt += 1;
        
        // c= / c-
        if (s[i] == 'c') {
            if (s[i + 1] == '=' || s[i + 1] == '-') {
                i += 1;
            }
        }
        
        // dz=
        if (s[i] == 'd') {
            if (s[i + 1] == 'z') {
                if (s[i + 2] == '=') {
                    i += 1;
                }
            }
        }
        
        // d-
        if (s[i] == 'd') {
            if (s[i + 1] == '-') {
                i += 1;
            }
        }
        
        // lj
        if (s[i] == 'l') {
            if (s[i + 1] == 'j') {
                i += 1;
            }
        }
        
        // nj
        if (s[i] == 'n') {
            if (s[i + 1] == 'j') {
                i += 1;
            }
        }
        
        // s=
        if (s[i] == 's') {
            if (s[i + 1] == '=') {
                i += 1;
            }
        }
        
        // z=
        if (s[i] == 'z') {
            if (s[i + 1] == '=') {
                i += 1;
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
