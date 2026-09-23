class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = prices[0]
        curr_profit = 0
        max_profit = 0
        if(len(prices)==1):
            return 0

        for i in range(len(prices)):

            if prices[i]<min_price:
                min_price = prices[i]
                continue

            curr_profit =  prices[i]-min_price

            max_profit = max(max_profit,curr_profit)
        return max_profit