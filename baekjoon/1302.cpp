#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<string, int> books;
    string bestName;
    int n, bestCnt = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        books[name]++;
    }
    
    // for문으로 map iterate 하는 방법
    // cf. https://www.delftstack.com/howto/cpp/how-to-iterate-over-map-in-cpp/#use-range-based-for-loop-to-iterate-over-std-map-key-value-pairs
    for (auto const& [key, value] : books) {
        if (bestCnt < value) {
            bestCnt = value;
            bestName = key;
        }
    }
    
//    cout << "bestName: " << bestName << ", bestCnt: " << bestCnt << endl;
    cout << bestName << endl;
    
    return 0;
}
