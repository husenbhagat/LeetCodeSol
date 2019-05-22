class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int erasedCount = 0;
		if (nums.empty()) return;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) {
				nums.erase(nums.begin() + i);
				erasedCount++;
				i--;
				//nums.push_back(0);
			}
		}
		for (int i = 0; i < erasedCount; i++) {
			nums.push_back(0);
		}
	}
};
