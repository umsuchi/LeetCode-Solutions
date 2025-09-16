class Solution {
public:
    int binsearch(vector<int>& nums, int tar, int l, int h) {
        if(l <= h){
            int mid = l + (h - l)/2;

            if(nums[mid] == tar) return mid;
            else if(nums[mid] < tar) return binsearch(nums, tar, mid+1, h);
            else return binsearch(nums, tar, l, mid-1); 
        }

        return -1;
    }

    int search(vector<int> &nums, int tar){
        return binsearch(nums, tar, 0, nums.size()-1);
    }
};
