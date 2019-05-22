#include <vector>
using namespace std;

//class Solution {
//public:
//	void rotate(std::vector<int>& nums, int k) {
//		if (nums.size() == 0) return;
//		if (k <= 0) return;
//		for (int i = 0; i < k; i++) {
//			nums.emplace(nums.begin(), nums[nums.size() - 1]);
//			nums.pop_back();
//		}
//	}
//};

//int main() {
//	Solution s;
//	std::vector<int> test = { -1,-100,3,99 };
//	s.rotate(test,2);
//}

//class Solution {
//public:
//	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//		vector<int> result;
//		if (nums1.empty() || nums2.empty()) return result;
//			for (int i = 0; i < nums1.size(); i++) {
//				std::vector<int>::iterator it;
//				it = find(nums2.begin(), nums2.end(), nums1[i]);
//				if (it != nums2.end()) {
//					result.push_back(nums1[i]);
//					nums2.erase(it);
//				}
//			}
//			return result;
//	}
//};	
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
int main() {
	Solution s;
	std::vector<char> test1 = { 'h','e','l','l','o' };
	
	s.reverseString(test1);
}