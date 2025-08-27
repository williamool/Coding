#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int longestConsecutive(vector <int> & nums) {
			unordered_set <int> st(nums.begin(), nums.end());
			int ans = 0;
			for (int x : st) {
				if (st.count(x - 1)) continue;
				
				int y = x + 1;
				while (st.count(y) != 0) {
					y ++;
				}
				
				ans = max(ans, y - x);
			}
			return ans;
		}
};

int main() {
	vector <int> nums = {0};
	Solution sol;
	
	int ans = sol.longestConsecutive(nums);
	
	cout << ans << endl;
	return 0;
}
