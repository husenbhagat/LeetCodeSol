//#include <iostream>
//using namespace std;
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int position = 0;
//		if (nums.size() == 0) return 0;
//		for (int i = 0; i < nums.size(); i++) {
//			if (i + 1 < nums.size()) {
//				if (nums[i] == nums[i + 1]) {
//				}
//				else {
//					nums[position + 1] = nums[i + 1];
//					position++;
//				}
//			}
//		}
//		return (position + 1);
//	}
//};

//class Solution {
//public:
//	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//		vector <int> result;
//		if (nums1.empty() || nums2.empty()) return result;
//	}
//};

//class Solution {
//public:
//	void reverseString(vector<char>& s) {
//		
//	}
//};

#include <iostream>
#include <string>
#include <conio.h>
#include <vector>

//int main() {
//	int n;
//	std::string word;
//	std::vector<std::string> words;
//	std::cin >> n;
//	for (int i = 0; i < n; i++) {
//		std::cin >> word;
//		words.push_back(word);
//	}
//	for (int i = 0; i < n; i++) {
//		word = words[i];
//		if (word.length() <= 10) {
//			std::cout << word << std::endl;
//			continue;
//		}
//		int size = word.length() - 2;
//		word = word[0] + std::to_string(size) + word[word.length() - 1];
//		std::cout << word<< std::endl;
//	}
//	_getch();
//}