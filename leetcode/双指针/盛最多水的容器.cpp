#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int maxArea(vector <int> & height) {
			int left = 0, right = size(height) - 1;
			int maxpool = min(height[left], height[right]) * (right - left);
			while (left != right) {
				maxpool = max(maxpool, min(height[left], height[right]) * (right - left));
				if (height[left] >= height[right]) {
					right --;	
				}
				else left ++;
			}
			return maxpool;
		}
};
