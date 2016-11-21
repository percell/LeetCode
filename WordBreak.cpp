class Solution {
public:
    
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        if(s.length()<1) return false;
        int dp[s.length()+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int i=1; i<=s.length(); i++){
            for(int j=0; j<i; j++){
                if(dp[j] == 1){
                    string tmp = s.substr(j, i-j);
                    if(wordDict.count(tmp)) dp[i] = 1;
                }
            }
        }
        return dp[s.length()];
    }
};
