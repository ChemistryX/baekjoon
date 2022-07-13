#include <iostream>

using namespace std;

int main() {
    
    int n;
    long long sum = 0, sumOrig = 0;
    
    // cin vs scanf
    // cf. https://stackoverflow.com/questions/1042110/using-scanf-in-c-programs-is-faster-than-using-cin
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int num;
        
        scanf("%d", &num);
        
        sum += num;
        sumOrig += i;
    }
    
    
    cout << sum - sumOrig << endl;
    
    return 0;
}
