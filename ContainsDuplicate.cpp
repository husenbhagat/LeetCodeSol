#include <vector>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//	bool containsDuplicate(std::vector<int>& nums) {
//		if (nums.size() == 0) return false;
//		sort(nums.begin(), nums.end());
//		for (size_t i = 0; i < nums.size(); i++) {
//			if (i == nums.size() - 1) continue;
//			if (nums[i] == nums[i + 1]) return true;
//		}
//		return false; 
//	}
//};

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (size_t i = 0; i < nums.size(); i+=2) {
			if (i == nums.size() - 1) return nums[i];
			if (nums[i] != nums[i + 1])
			{
				return nums[i];
			}
		}
		return nums[nums.size() - 1];
	}
};
//int main() {
//	Solution s;
//	std::vector <int> nums = { 1,2,1,2,3 };
//	int result = s.singleNumber(nums);
//}

//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> result;
//		if (nums.empty()) return result;
//		for (size_t i = 0; i < nums.size(); i++) {
//			if (!result.empty()) result.pop_back();
//			int balance = target - nums[i];
//			
//				result.push_back(i);
//				for (int j = i + 1; j < nums.size(); j++) {
//					if (balance == nums[j]) { 
//						result.push_back(j); 
//						return result; 
//					}
//				
//			}
//		}
//		return result;
//	}
//};
//#include<math.h>
//class Solution {
//public:
//	int reverse( int x) {
//		std::vector<int> result;
//		int neg = 0;
//		if (x < 0) { neg = -1; try { x *= neg; }
//		catch (...) { x = unsigned(x); }
//		}
//		if (x == 0) return x;
//		while ( x > 0) {
//		result.push_back( x % 10);
//		x /= 10;
//		}
//		int count = result.size();
//		for (int i = 0; i < result.size(); i++) {
//			x += result[i] * pow(10,--count);
//		}
//		if (x < 0) x = 0;
//		if (neg == -1) try { x *= neg; }
//		catch (...) { x = int(x); }
//		return x;
//	}
//};
//int main() {
//	Solution s;
//	std::vector <int> nums = { 3,2,4 };
//	 int n = s.reverse(1534236469);
//}