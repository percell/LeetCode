class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int maxPrice =0;
        int min = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<min) min=prices[i];
            else{
                maxPrice = max(maxPrice, prices[i]-min);
            }
        }
        return maxPrice;
    }
};
