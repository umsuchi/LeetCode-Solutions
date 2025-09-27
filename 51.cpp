class Solution {
public:
    bool issafe(vector<string> &board, int row, int col, int n){
        for(int j=0; j<n; j++){
            if(board[row][j] == 'Q') return 0;
        }

        for(int i=0; i<n; i++){
            if(board[i][col] == 'Q') return 0;
        }

        for(int i=row, j=col; i>=0 && j>=0; i--, j--){
            if(board[i][j] == 'Q') return 0;
        }

        for(int i=row, j=col; i>=0 && j<n; i--, j++){
            if(board[i][j] == 'Q') return 0;
        }

        return 1;
    }

    void queens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
        if(row == n){
            ans.push_back({board});
            return;
        }

        for(int j=0; j<n; j++){
            if(issafe(board, row, j, n)){
                board[row][j] = 'Q';
                queens(board, row+1, n, ans);
                board[row][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        queens(board, 0, n, ans);

        return ans;
    }
};
