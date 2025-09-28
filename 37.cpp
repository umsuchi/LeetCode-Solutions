class Solution {
public:

    bool issafe(vector<vector<char>> &board, int row, int col, char dig){
        for(int j=0; j<9; j++){
            if(board[row][j] == dig) return 0;
        }

        for(int i=0; i<9; i++){
            if(board[i][col] == dig) return 0;
        }

        int srow = (row/3) * 3;
        int scol = (col/3) * 3;

        for(int i=srow; i<=srow+2; i++){
            for(int j=scol; j<=scol+2; j++){
                if(board[i][j] == dig)
                    return 0;
            }
        }

        return 1;
    }

    bool helper(vector<vector<char>> &board, int row, int col){
        if(row == 9) return 1;

        int nextrow = row, nextcol = col + 1;
        if(nextcol == 9){
            nextrow = row + 1;
            nextcol = 0;
        }

        if(board[row][col] != '.') return helper(board, nextrow, nextcol);

        for(char i='1'; i<='9'; i++){
            if(issafe(board, row, col, i)){
                board[row][col] = i;
                if(helper(board, nextrow, nextcol)) return 1;

                board[row][col] = '.';
            }
        }

        return 0;
    }

    void solveSudoku(vector<vector<char>> &board) {
        helper(board, 0, 0);
    }
};
