class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size(), n = mat[0].size();
        int r=0, c=n-1;
        while(r < m && c >= 0){
            if(tar == mat[r][c]) return 1;
            else if(tar < mat[r][c]) c--;
            else if(tar > mat[r][c]) r++;
        }
        
        return 0;
    }
};
