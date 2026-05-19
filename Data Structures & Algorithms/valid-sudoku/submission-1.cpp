class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> row(9), col(9), square(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') continue;

                if (row[i].find(board[i][j]) != row[i].end()) {
                    return false;
                }
                row[i][board[i][j]]++;


                if (col[j].find(board[i][j]) != col[j].end()) {
                    return false;
                }
                col[j][board[i][j]]++;


                int idx = (i / 3) * 3 + (j / 3);

                if (square[idx].find(board[i][j]) != square[idx].end()) {
                    return false;
                }
                square[idx][board[i][j]]++;
            }
        }

        return true;
    }
};