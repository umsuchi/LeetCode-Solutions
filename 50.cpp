class Solution {
public:
    double myPow(double x, int n) {
        
        long binN = n ;
        if(n < 0){
            x = 1/x;
            binN = -binN ;
        } 
        double ans = 1;
        while(binN > 0){
            if(binN % 2 == 1){
                ans *= x;
            }
            x *= x;
            binN /= 2;
        }
        return ans ;
    }
};
