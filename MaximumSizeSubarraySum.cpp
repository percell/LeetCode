ass Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        if(nums.size() == 0) return 0;
        cout<<nums[0]<<endl;
        for(int i=1; i<nums.size(); i++){
            nums[i]+= nums[i-1];
            cout<<nums[i]<<endl;
        }
        int max = 0;
        unordered_map<int, int> mm;
        mm[0] = -1;
        for(int j=0; j<nums.size(); j++){
            int diff = nums[j] - k;
            cout<<diff;
            if(mm.count(diff)){
                if((j-mm[diff])>max) max = j-mm[diff];
            }
        
                if(!mm.count(nums[j]))
                    mm[nums[j]] = j;
           
            cout<<endl;
        }
        return max;
    }
};
