class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
        map<int,int> mm;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            pair<int, int> p = make_pair(nums[i], i);
            mm.insert(p);
        }
        
        for(int i=0; i<nums.size(); i++){
            int diff = target-nums[i];
            if(mm.find(diff) != mm.end() && mm[diff]!=i){
                v.push_back(i);
                v.push_back(mm[diff]);
                return v;
            }
        }
        return v;
    }
};
