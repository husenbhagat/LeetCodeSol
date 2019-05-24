#include <algorithm>
class Solution {
public:
    bool isAnagram(string s, string p) {
        if (s.length() != p.length()) return false;
	    std::sort(s.begin(),s.end());
	    std::sort(p.begin(), p.end());
	    if (s == p)
            return true;
	    return false;
    }
};
