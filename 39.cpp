class Solution {
public:
    set<vector<int>> s;
    void getcom(vector<int> &a, int ind, int tar, vector<vector<int>> &ans, vector<int> &comb){

        if(ind == a.size() || tar < 0) return;
        if(tar == 0){
            if(s.find(comb) == s.end()){
                ans.push_back({comb});
                s.insert(comb);
            }
            
            return;
        }

        comb.push_back(a[ind]);

        getcom(a, ind+1, tar-a[ind], ans, comb); // single
        getcom(a, ind, tar-a[ind], ans, comb); // multiple
        comb.pop_back();
        getcom(a, ind+1, tar, ans, comb); // exclusion 
    }

    vector<vector<int>> combinationSum(vector<int> &a, int tar) {
        vector<vector<int>> ans;
        vector<int> comb;

        getcom(a, 0, tar, ans, comb);

        return ans;
    }
};
