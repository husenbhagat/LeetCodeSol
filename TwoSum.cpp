class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		if (nums.empty()) return result;
		for (size_t i = 0; i < nums.size(); i++) {
			if (!result.empty()) result.pop_back();
			int balance = target - nums[i];
			
				result.push_back(i);
				for (int j = i + 1; j < nums.size(); j++) {
					if (balance == nums[j]) { 
						result.push_back(j); 
						return result; 
					}
				
			}
		}
		return result;
	}
};
