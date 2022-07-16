#include <iostream>
#define SIZE 53

using namespace std;

int main() {
        
    int n;
    int encoded[SIZE] = {0}, decoded[SIZE] = {0};
    string origin;
    
    cin >> n;
        
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        encoded[num] += 1;
    }
    
    getchar();
    getline(cin, origin);
    
    for (int i = 0; i < n; i++) {
        if (origin[i] >= 'A' && origin[i] <= 'Z') {
            decoded[origin[i] - 'A' + 1] += 1;
        } else if (origin[i] >= 'a' && origin[i] <= 'z') {
            decoded[origin[i] - 'a' + 27] += 1;
        } else if (origin[i] == ' ') {
            decoded[0] += 1;
        }
    }
    
    bool isValid = true;
    for (int i = 0; i < SIZE; i++) {
        if (encoded[i] != decoded[i]) {
            isValid = false;
        }
    }
    
    cout << (isValid ? 'y' : 'n') << endl;
    
    return 0;
}
