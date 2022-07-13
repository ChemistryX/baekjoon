#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int data[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10}, timeTotal = 0;
    string word;

    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        timeTotal += data[word[i] - 'A'];
    }
    
    cout << timeTotal << endl;
    
    
    return 0;
}
