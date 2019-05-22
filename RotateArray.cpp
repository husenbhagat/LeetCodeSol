class Solution {
public:
	void rotate(std::vector<int>& nums, int k) {
		if (nums.size() == 0) return;
		if (k <= 0) return;
		for (int i = 0; i < k; i++) {
			nums.emplace(nums.begin(), nums[nums.size() - 1]);
			nums.pop_back();
		}
	}
};
