#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 10;

class Solution {
	public:
		int maxSubArray(vector <int> & nums) {
			int f[maxn]; //f[i]表示以i为结尾的最大子序和
			int ans = nums[0];
			f[0] = nums[0];
			for(int i = 1; i < nums.size(); i++) {
				f[i] = max(f[i - 1] + nums[i], nums[i]);
				ans = max(ans, f[i]);
			}
			return ans; 
		}
};
