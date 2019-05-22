class Solution {
public:
	void reverseString(vector<char>& s) {
		if (s.empty()) return;
		for (int i = 0; i < s.size(); i++) {
			s.emplace(s.begin() + i, s[s.size()-1]);
			s.pop_back();
		}
	}
};
