class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size(), ind = 0;

        for(int i = 0; i < n; i++){
            char ch = chars[i];
            int c = 0;

            while(i < n && chars[i] == ch) c++, i++;

            if(c == 1) chars[ind++] = ch;
            else{
                chars[ind++] = ch;
                string s = to_string(c);
                for(char d : s) chars[ind++] = d;
            }

            i--;
        }
        chars.resize(ind);
        return ind;
    }
};
