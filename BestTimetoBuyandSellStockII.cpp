#include <vector>

//class Solution {
//public:
//	int maxProfit(std::vector<int>& prices) {
//		int profit = 0;
//		if (prices.size() == 0) return profit;
//		for (size_t i = 0; i < prices.size(); i++) {
//			if ((i + 1) < prices.size()) {
//				if (prices[i] < prices[i + 1]) {
//					profit += prices[i + 1] - prices[i];
//				}
//			}
//		}
//		return profit;
//	}
//};

//int main() {
//	Solution s;
//	std::vector<int> test;
//	test = { 7,6,4,3,1 };
//	int len = s.maxProfit(test);
//}
#include <vector>
using namespace std;
//
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int erasedCount = 0;
//		if (nums.empty()) return;
//		for (int i = 0; i < nums.size(); i++) {
//			if (nums[i] == 0) {
//				nums.erase(nums.begin() + i);
//				erasedCount++;
//				i--;
//				//nums.push_back(0);
//			}
//		}
//		for (int i = 0; i < erasedCount; i++) {
//			nums.push_back(0);
//		}
//	}
//};
#include <math.h>
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		if (digits.empty()) return digits;
		for (int i = digits.size() - 1; i >= 0; i--) {
			int n = digits[i] + 1;
			if (i == 0 && (digits[i] + 1) >= 10) {
				digits[i] = 0;
				digits.insert(digits.begin(), 1); 
				return digits;
			}
			if (n >= 10) { 
				digits[i] = 0; 
				continue;
			}
			else {
				digits[i]++;
				return digits;
			}
		}
		return digits;
	}
};
//int main() {
//	Solution s;
//	std::vector<int> test, res;
//	test = { 1,9,9,9 };
//	res = s.plusOne(test);
//}