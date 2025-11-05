class Solution {
public:
    bool isvalid(vector<vector<int>> &grid, int r, int c, int n, int val){
        if(r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != val) return 0;

        if(val == n*n - 1) return 1;

        int  a1 = isvalid(grid, r-2, c+1, n, val+1);
        int  a2 = isvalid(grid, r-1, c+2, n, val+1);
        int  a3 = isvalid(grid, r+2, c+1, n, val+1);
        int  a4 = isvalid(grid, r+1, c+2, n, val+1);
        int  a5 = isvalid(grid, r+2, c-1, n, val+1);
        int  a6 = isvalid(grid, r+1, c-2, n, val+1);
        int  a7 = isvalid(grid, r-1, c-2, n, val+1);
        int  a8 = isvalid(grid, r-2, c-1, n, val+1);

        return a1 || a2 || a3 || a4 || a5 || a6 || a7 || a8;
    }

    bool checkValidGrid(vector<vector<int>> &grid) {
        return isvalid(grid, 0, 0, grid.size(), 0);
    }
};
