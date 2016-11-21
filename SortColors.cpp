class Solution {
public:
    void sortColors(vector<int>& nums) {
       int red = 0;
       int blue = nums.size()-1;
       while(nums[red]==0) red++;
       while(nums[blue]==2) blue--;
       int i = red;
       while(red<=blue && i<=blue){
           if(nums[i]==0){
               int tmp = nums[red];
               nums[red] = nums[i];
               nums[i] = tmp;
               red++;
           }
           if(nums[i]==2){
               int tmp = nums[blue];
               nums[blue] = nums[i];
               nums[i] = tmp;
               blue--;
           }
           if(i < red) i = red;
           if(nums[i]==1){
               i++;
           }

       }
    }
};
