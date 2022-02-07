//
//  main.cpp
//  q6-best time to buy and sell stock
//
//  Created by vatsal nanda on 07/02/22.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPriceSeenSoFar = prices[0];
        for(int i = 1 ; i < prices.size(); i++){
            if(prices[i] > minPriceSeenSoFar) {
                //  profit can be booked
                profit = max(profit, prices[i]- minPriceSeenSoFar);
            } else
               minPriceSeenSoFar =  min(minPriceSeenSoFar, prices[i] );
        }
        return profit;
  }
};
