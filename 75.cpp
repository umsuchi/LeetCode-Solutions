class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0, mid = 0, h = n - 1;

        while(mid <= h){
            if(nums[mid] == 0) swap(nums[l], nums[mid]), mid++, l++;
            else if(nums[mid] == 1) mid++;
            else swap(nums[h], nums[mid]), h--;
        }
    }
}; // 3 pointers ,,,  Dutch National Flag Algorithm
