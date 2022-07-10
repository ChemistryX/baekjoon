#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string text;

    // iostream의 getline과 string의 getline 차이점
    // cf. https://velog.io/@jxlhe46/C-getline-%ED%95%A8%EC%88%98
    while (getline(cin, text)) {
        cout << text << endl;
    }
    
    return 0;
}
