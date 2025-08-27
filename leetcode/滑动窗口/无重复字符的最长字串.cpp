#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int lengthOfLongestSubstring(string s) {
			unordered_set <char> oc;
			int ans = 0;
			int right = -1;
			for(int left  = 0; left < s.size(); left++) {
				if (left != 0) {
					oc.erase(s[left - 1]);
				}
				while (right + 1 < s.size() && oc.count(s[right + 1]) == 0) {
					oc.insert(s[right + 1]);
					right ++;
					ans = max(ans, right - left + 1);
				}
			}
			return ans;
		}
};
