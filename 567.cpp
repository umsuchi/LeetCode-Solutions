class Solution {
public:
    bool isfreq(int fre1[], int fre2[]){
        for(int i = 0; i < 26; i++)
            if(fre1[i] != fre2[i]) return 0;

        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i = 0; i < s1.length(); i++) freq[s1[i] - 'a']++;

        int windsize = s1.length();
        for(int i = 0; i < s2.length(); i++) {
            int windid = 0, ind = i;
            int windfreq[26] = {0};

            while(windid < windsize && ind < s2.length()){
                windfreq[s2[ind] - 'a']++;
                windid++, ind++;
            }

            if(isfreq(freq, windfreq)) return 1;

        }
        return 0;
    }
};
