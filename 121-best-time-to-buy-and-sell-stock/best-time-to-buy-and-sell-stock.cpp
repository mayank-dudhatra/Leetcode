class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;

        for(int price : prices){
            if(price<minprice){
                minprice = price;
            }

            int profit = price - minprice;

            if(maxprofit < profit){
                maxprofit = profit;
            }
        }

        return maxprofit;
    }
};