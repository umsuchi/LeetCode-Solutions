class Solution {
public:
    bool searchRow(vector<vector<int>> &mat, int tar, int row){
        int n = mat[0].size();
        int l = 0, h = n - 1;

        while(l <= h){
            int mid = l + (h - l) / 2;
            if(tar == mat[row][mid]) return 1;
            else if(tar > mat[row][mid]) l = mid + 1;
            else h = mid - 1;
        }

        return 0;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int tar) {
        int m = matrix.size(), n = matrix[0].size();

        int srow = 0, erow = m - 1;
        while(srow <= erow){
            int midrow = srow + (erow - srow) / 2;

            if(tar >= matrix[midrow][0] && tar <= matrix[midrow][n - 1])
                return searchRow(matrix, tar, midrow);
            else if(tar >= matrix[midrow][n - 1]) srow = midrow + 1;
            else erow = midrow - 1;
        }
      
        return 0;
    }
};
