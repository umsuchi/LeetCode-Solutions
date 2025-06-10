class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sMax = 0;
        for(int i : nums){
            sMax += i;
            maxSum = max(sMax , maxSum);
            if(sMax<0)
              sMax = 0 ;

        }
        return maxSum;
    }
};
