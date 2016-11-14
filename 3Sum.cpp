ass Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vv;
        if(nums.size()<3) return vv;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            cout<<nums[i]<<" ";
        };
        cout<<endl;
        int pt1 = 0;
        int pt2 = 1;
        int pt3 = nums.size()-1;
        
        while(pt1!=pt3 && pt2<pt3){
            int i1 = nums[pt1];
            int i2 = nums[pt2];
            int i3 = nums[pt3];
            cout<<i1<<" "<<i2<<" "<<i3<<endl;
            if((i1+i2+i3)==0){
                vector<int> tmp {i1, i2, i3};
                vv.push_back(tmp);
                while(nums[pt2]==i2 && pt2<pt3){
                    pt2++;
                }
                while(nums[pt3]==i3 && pt3>pt2){
                    pt3--;
                }
                
            }
            else if((i1+i2+i3)>0){
                while(nums[pt3]==i3 && pt3>pt2){
                    pt3--;
                }
                pt2 = pt1+1;
            }
            else {
                while(nums[pt2]==i2 && pt2<pt3){
                    pt2++;
                }
                
            }
            if(pt2>=pt3){
                    while(nums[pt1]==i1 && pt1<pt3){
                        pt1++;
                     }
                    pt2 = pt1+1;
                    pt3 = nums.size()-1;
            }
        }
        return vv;
    }
};
