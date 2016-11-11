class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int shift = -1;
       for(int i=0; i<nums.size(); i++){
           if(nums[i]==0){
               shift++;
           }
           else{
               if(shift!=-1){
                   nums[i-shift-1] = nums[i];
                   nums[i] = 0;
               }
           }
       }
    }
};
