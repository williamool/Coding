#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int subarraySum(vector <int> & nums, int k) {
			vector <int> pre;
			for(int i = 0; i < nums.size(); i++) {
				if(i > 0) pre.emplace(pre.end(), pre[i - 1] + nums[i]);
				else pre.emplace(pre.end(), nums[i]);
			}
			
			int ans = 0;
			unordered_map <int, int> mp;
			mp[0] = 1;
			for(int i = 0; i < nums.size(); i++) {
				int need = pre[i] - k;
				ans += mp[need];
				mp[pre[i]] ++;
			}
			return ans;
		} 
}; 

int main() {
	vector <int> nums = {1, 2, 3};
	int k = 3;
	Solution sol;
	
	cout << sol.subarraySum(nums, k) << endl;
	return 0;
}
