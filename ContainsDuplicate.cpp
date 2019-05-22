#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	bool containsDuplicate(std::vector<int>& nums) {
		if (nums.size() == 0) return false;
		sort(nums.begin(), nums.end());
		for (size_t i = 0; i < nums.size(); i++) {
			if (i == nums.size() - 1) continue;
			if (nums[i] ==nums[i + 1]) return true;
		}
		return false; 
	}
};
