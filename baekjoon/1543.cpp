#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int cnt = 0;
    string doc, query;
    
    getline(cin, doc);
    getline(cin, query);
    
    size_t pos = 0;
    while ((pos = doc.find(query, pos)) != string::npos) {
        cnt += 1;
        pos += query.length();
    }
    
    cout << cnt << endl;
    
    return 0;
}
