#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		vector <vector <int>> threeSum(vector <int> & nums) {
			sort(nums.begin(), nums.end());
			
			vector <int> list;
			/*
			int eph = -0x3f3f3f3f;
			for (int i = 0; i < nums.size(); i++) {
				if (nums[i] != eph) {
					list.insert(list.end(), nums[i]);
					eph = nums[i];
				}
				else continue;
			}
			*/
			
			vector <vector <int>> ans;
			for(int i = 0; i < nums.size(); i++) {
				if(i > 0 && nums[i - 1] == nums[i]) continue;
				
 				for(int left = i + 1; left < nums.size(); left++) {
 					if(left > i + 1 && nums[left] == nums[left - 1]) continue;
 					int right = nums.size() - 1;
					while (left < right) {
						if (nums[i] + nums[left] + nums[right] < 0) {
							break;
						}
						else if (nums[i] + nums[left] + nums[right] > 0) {
							right --;
						}
						else {
							ans.push_back({nums[i], nums[left], nums[right]});
							break;
						}
					}
				}
			}
			
			return ans; 
		}
}; 

int main() {
	vector <int> nums = {0, 0, 0, 0};
	
	Solution sol;
	
	vector <vector <int>> ans;
	ans = sol.threeSum(nums);
	for(int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
