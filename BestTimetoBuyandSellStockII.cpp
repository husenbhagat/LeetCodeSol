class Solution {
public:
	int maxProfit(std::vector<int>& prices) {
		int profit = 0;//
		if (prices.size() == 0) return profit;
		for (size_t i = 0; i < prices.size(); i++) {
			if ((i + 1) < prices.size()) {
				if (prices[i] < prices[i + 1]) {
					profit += prices[i + 1] - prices[i];
				}
			}
		}
		return profit;
	}
};
