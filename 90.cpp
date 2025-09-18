class Solution {
public:
    void allsubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &subsets){
        if(i == nums.size()){
            subsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        allsubsets(nums, ans, i+1, subsets);

        ans.pop_back();

        int ind = i+1;

        while(ind < nums.size() && nums[ind] == nums[ind - 1]) ind++;

        allsubsets(nums, ans, ind, subsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        vector<vector<int>> subsets;

        allsubsets(nums, ans, 0, subsets);

        return subsets;
    }
};
