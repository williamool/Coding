#include <bits/stdc++.h>
using namespace std;

class Solution {
	public: 
		vector <vector <int>> merge(vector <vector <int>> & intervals) {
			sort(intervals.begin(), intervals.end());
			
			vector <vector <int>> ans;
			int right_interval = intervals[0][1], left_interval = intervals[0][0];
			
			for(int i = 1; i < intervals.size(); i++) {
				if (intervals[i][0] > right_interval) {
					ans.push_back({left_interval, right_interval});
					left_interval = intervals[i][0];
					right_interval = intervals[i][1];
				}
				else if (intervals[i][1] > right_interval) {
					right_interval = intervals[i][1];
				}
			}
			ans.push_back({left_interval, right_interval});
			return ans;
		} 
};
