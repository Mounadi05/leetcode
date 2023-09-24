class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(begin(prices),end(prices));
        if (prices.size() == 1) return (money >= prices[0]) ? money - prices[0] : money;
        else return money >= (prices[0] + prices[1]) ? money - prices[0] - prices[1] : money;
         
    }
};