#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void moveZeroes(vector <int> & nums) {
			int left = 0, right = 0, length = nums.size();
			while (right < length) {
				//0 1 0 3 12
				//1 0 0 3 12
				if (nums[right] != 0) {
					swap(nums[left], nums[right]);
					left ++;
				}
				right ++;
			}
		}
};
