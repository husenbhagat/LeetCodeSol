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
