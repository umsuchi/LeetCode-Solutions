class Solution {
public:
    // bool isAlphanumaric(char c){
    //     if((c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z'))
    //         return 1;
    //     else return 0;
    // }
    bool isPalindrome(string s) {
        int l = 0, h = s.length() - 1;

        while(l < h){
            if(!iswalnum(s[l])) {l++; continue;}
            if(!iswalnum(s[h])) {h--; continue;}
            if(tolower(s[l]) != tolower(s[h]))return 0;
            l++, h--;
        }
        
        return 1;
    }
};
