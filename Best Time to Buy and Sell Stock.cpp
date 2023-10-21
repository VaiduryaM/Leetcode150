//121. Best Time to Buy and Sell Stock


class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
       int profit = 0;
       int left = 0, right = 0;

       while(right < prices.size() ){
           if(prices[left] < prices[right]){
               profit = max(profit, prices[right]-prices[left]);
           }
           else{
               left = right;
           }
            right++;
       }

       return profit;
    }
};