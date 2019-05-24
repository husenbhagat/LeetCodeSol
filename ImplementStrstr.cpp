class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()) return -1;
	if (needle == "") return 0;
	if (haystack == needle) return 0;
	int a = haystack.find(needle);
	return a;
    }
};
