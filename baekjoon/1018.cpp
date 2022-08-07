#include <iostream>
#include <vector>

using namespace std;

// board must be 8x8
int invalidSlotCount(vector<vector<char>> &board, int startRow, int startCol) {
    int invalidSlotsCnt = 0;
    int shouldChangeToWhite = 0, shouldChangeToBlack = 0;
    
    for (int i = startCol; i < startCol + 8; i++) {
        for (int j = startRow; j < startRow + 8; j++) {
            // even
            if ((i + j) % 2 == 0) {
                if (board[i][j] == 'W') shouldChangeToBlack += 1;
                else shouldChangeToWhite += 1;
            // odd
            } else {
                if (board[i][j] == 'W') shouldChangeToWhite += 1;
                else shouldChangeToBlack += 1;
            }
        }
    }
    
    invalidSlotsCnt = shouldChangeToWhite < shouldChangeToBlack ? shouldChangeToWhite : shouldChangeToBlack;
    
    return invalidSlotsCnt;
}

int main() {
    
    int n, m, min = 100000;
    vector<vector<char>> board;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        vector<char> row;
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            row.push_back(ch);
        }
        board.push_back(row);
    }
    
    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            int cnt = invalidSlotCount(board, j, i);
            if (min > cnt) min = cnt;
        }
    }
    
    cout << min << endl;
        
    return 0;
}
