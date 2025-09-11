class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n = grid.size(), a, b;
        int sum1=0, sum2=0;

        for(int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                sum1 += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }

                s.insert(grid[i][j]);
            }
        }

        sum2 = n*n * (n*n + 1) / 2;
        b = sum2 + a - sum1;
        ans.push_back(b);

        return ans;
    }
};
