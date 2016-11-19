class Solution {
public:
    vector<int> foo;
    bool isHappy(int n) {
      
        if (n==1) return true;
        if(std::find(foo.begin(), foo.end(), n) != foo.end()) return false;
        foo.push_back(n);
        int count = n/10;
        int sum = 0;
        int tmp = n/10;
        while(n>0){
            sum += (n - 10*count) * (n-10*count);
            n = n/10;
            count =(int) n/10;
        }
       
        return isHappy(sum);
    }
};
