#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    
    string input;
    int result = 0;
    
    cin >> input;
    
    // string tokenizer 이용 마이너스 부호 기준 문자열 분리
    // cf. https://plein-de-verite.tistory.com/339
    vector<string> tokens;
    stringstream sstream(input);
    string s;
    
    while (getline(sstream, s, '-')) {
        tokens.push_back(s);
    }
    
    for (int i = 0; i < tokens.size(); i++) {
        string token = tokens[i];
        int tempSum = 0;
        string tempStr = "";
        for (int j = 0; j < token.length(); j++) {
            if (token[j] == '+' || j == token.length() - 1) {
                if (j == token.length() - 1) tempStr += token[j];
                tempSum += stoi(tempStr);
                tempStr = "";
            } else {
                tempStr += token[j];
            }
        }
        
        if (i == 0) result = tempSum;
        else result -= tempSum;
    }
    
    cout << result << endl;

    return 0;
}
