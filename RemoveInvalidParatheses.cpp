class Solution {
public:
    vector<vector<int>> dp;
    int dfs(string s, set<string>& sol, int i, string t, int count){
        if(i==s.size()){
            if(count == 0){
                sol.insert(t);
                return t.size();
            }
            return 0;
        }
        if(count<0) return 0;
        if(dp[i][count] == 0) return 0;
        int maxp = 0;
        if(s[i] == '(' || s[i] == ')'){
            int next = s[i] == '(' ? count+1 : count-1;
            maxp = max(dfs(s, sol, i+1, t+s[i], next), maxp);
            maxp = max(dfs(s, sol, i+1, t, count), maxp);
        }
        else maxp = max(maxp, dfs(s, sol, i+1, t+s[i], count));
        return dp[i][count] = maxp;
    }
    
    vector<string> removeInvalidParentheses(string s) {
        set<string> sol;
        dp.assign(s.size()+1, vector<int>(s.size()+1,-1));
        int maxp = dfs(s, sol, 0, "", 0);
        vector<string> ans;
        for(auto it = sol.begin(); it != sol.end(); it++) if((*it).size() == maxp){
            ans.push_back(*it);
        }
        return ans;
    }
    
    
};
