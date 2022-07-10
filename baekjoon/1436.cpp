#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, cnt = 0, current = 665;
    
    cin >> n;
    
    while (cnt < n) {
        current += 1;
        string res = to_string(current);
        
        // 문자열 찾기 함수: 찾고자 하는 문자열이 존재하지 않을 경우 string::npos 반환
        // cf. https://codereader37.tistory.com/156
        if (res.find("666") != string::npos) {
            cnt += 1;
        }
    }
    
    cout << current << endl;
    
    return 0;
}
