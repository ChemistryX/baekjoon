#include <iostream>
#define SIZE 10001
using namespace std;

int d(int);

int main() {
    
    int arr[SIZE] = {0};
        
    for (int i = 0; i < SIZE; i++) {
        int num = d(i);
        if (num < SIZE) arr[num] = 1;
    }
    
    for (int i = 0; i < SIZE; i++) {
        if (!arr[i]) cout << i << endl;
    }
    
    return 0;
}

int d(int n) {
    int res = n;
    while (n != 0) {
        int digit = n % 10;
        res += digit;
        n /= 10;
    }
    
    return res;
}
