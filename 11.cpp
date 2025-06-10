class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxWat = 0;
        int lp = 0, rp = height.size() - 1 ;
        while(lp < rp){
           int wid = rp - lp;
           int hei = min(height[lp], height[rp]);
           int area = wid*hei;
           maxWat = max (maxWat , area);
           (height[lp] < height[rp]) ? lp++ : rp-- ;
        }
        
        return maxWat ;

    }
};
