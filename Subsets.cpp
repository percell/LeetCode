class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        sort(nums.begin(), nums.end());
        set<int> ss;
        for(int i: nums){
            ss.insert(i);
        }
        vector<int> copy (ss.begin(), ss.end());
        vector<int> tmp;
        dfs(copy, 0, sol, tmp);
        
        return sol;
    }
    
    void dfs(vector<int>& nums, int i, vector<vector<int>>& sol, vector<int>& tmp){
        if(i==nums.size()) {
            sol.push_back(tmp);
            return;
        }
        dfs(nums, i+1, sol, tmp);
        tmp.push_back(nums[i]);
        dfs(nums, i+1, sol, tmp);
        tmp.pop_back();
    }
};
