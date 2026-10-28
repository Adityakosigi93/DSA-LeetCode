class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        mini=prices[0]
        profit=0
        for i in range(len(prices)):
            mini=min(mini,prices[i])
            profit=max(profit,prices[i]-mini)
        return profit