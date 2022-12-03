#include <iostream>

using namespace std;

int main() {
    
    int res[10001] = {0}, cnt = 0;
    bool flag = false;
    string a, b;
    
    cin >> a >> b;
    
    int aLen = (int) a.length();
    int bLen = (int) b.length();
        
    string temp = "";
    if (aLen > bLen) {
        int diff = aLen - bLen;
        while (diff--) temp += "0";
        b = temp + b;
        bLen = aLen;
    } else {
        int diff = bLen - aLen;
        while (diff--) temp += "0";
        a = temp + a;
        aLen = bLen;
    }
    
//    cout << a << endl << b << endl;
    
    while (aLen || bLen) {
        int numA = a[aLen - 1] - '0';
        int numB = b[bLen - 1] - '0';
        numA += flag ? 1 : 0;
        res[cnt++] += (numA + numB) % 10;
        if (numA + numB >= 10) flag = 1;
        else flag = 0;

        aLen -= 1;
        bLen -= 1;
    }
    
    if (flag) cout << 1;
    
    for (int i = cnt - 1; i >= 0; i--) cout << res[i];
    
    return 0;
}
