class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char,int>> rows(9),cols(9),squares(9);
        char prcs ;
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                prcs = board[i][j];

                if(prcs == '.'){
                    continue;
                }

                if(rows[i][prcs]>0){
                    return false;
                }else {
                    rows[i][prcs]++;

                     }

                if(cols[j][prcs]>0){
                    return false;
                }else {
                    cols[j][prcs]++;
                }

                int idx =  (i/3)*3 + (j/3);
                if (squares[idx][prcs] > 0){
                    return false;
                }
                squares[idx][prcs]++;
            }
        }
        return true;
    }
};
