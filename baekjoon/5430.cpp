#include <iostream>
#include <deque>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int sizeArr;
        bool error = false, reversed = false;
        string op, strArr;
        cin >> op >> sizeArr >> strArr;
        
        deque<int> deque;

        string temp;
        for (int j = 0; j < strArr.size(); j++) {
            if (sizeArr == 0) break;
            if (strArr[j] == '[' || strArr[j] == ',' || strArr[j] == ']') {
                if (strArr[j] != '[') deque.push_back(stoi(temp));
                temp = "";
                continue;
            }
            temp += strArr[j];
        }
        
        for (int j = 0; j < op.size(); j++) {
            // 실제 reverse 연산 수행 -> TLE
            // reversed 여부 표시 후 deque활용하여 출력 시 순서만 조절
            if (op[j] == 'R') reversed = !reversed;
            if (op[j] == 'D') {
                if (deque.empty()) {
                    error = true;
                    break;
                }
                if (reversed) deque.pop_back();
                else deque.pop_front();
            }
        }
        
        if (error) {
            cout << "error" << endl;
        } else {
            cout << '[';
            while (!deque.empty()) {
                if (reversed) {
                    cout << deque.back() << (deque.size() == 1 ? "" : ",");
                    deque.pop_back();
                } else {
                    cout << deque.front() << (deque.size() == 1 ? "" : ",");
                    deque.pop_front();
                }
            }
            cout << ']' << endl;
        }
    }
    
    return 0;
}
