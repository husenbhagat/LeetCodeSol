class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int position = 0;
        if (nums.size() == 0) return 0;
		for (int i = 0; i < nums.size(); i++) {
			if (i+1 < nums.size()) {
			if (nums[i] == nums[i + 1]) {
			}
			else {
				nums[position + 1] = nums[i + 1];
				position++;
			}
			}
		}
		return (position + 1);
	}
};
