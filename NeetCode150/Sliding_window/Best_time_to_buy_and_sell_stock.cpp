class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // price[i] is the price of neetcoin on the ith day
        // can choose to buy stock on one day and sell another day
        //return max profit
        // if no transactions are made then profit is 0 for the day

        int left = 0, right = 1;
        int profit = 0, max_profit = 0;
        while(right < prices.size())
        {
            if(prices[left] < prices[right]){
            profit = prices[right] - prices[left];
            max_profit = max(max_profit,profit);
            
           }
           else {
            left = right;
           }

            right++;



        }
        return max_profit;
    }
};
