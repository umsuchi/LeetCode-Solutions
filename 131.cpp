class Solution {
public:
    bool ispalindrome(string p){
        string s1 = p;
        reverse(s1.begin(), s1.end());
        
        return p == s1;
    }

    void getparts(string s, vector<string> &partitions, vector<vector<string>> &ans){
        if(s.size() == 0) {
            ans.push_back(partitions);
            return;
        }

        for(int i=0; i<s.size(); i++){
            string p = s.substr(0, i+1);

            if(ispalindrome(p)){
                partitions.push_back(p);
                getparts(s.substr(i+1), partitions, ans);

                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;

        getparts(s, partitions, ans);

        return ans;
    }
};
