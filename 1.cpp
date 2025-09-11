class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i = 0 ; i<nums.size() ; i++){
           int f = nums[i], s = tar - f;

           if(m.find(s) != m.end()){
            ans.push_back(i);
            ans.push_back(m[s]);
            break;
           }
           m[f] = i;
        }
        return ans;

        
    }
};
