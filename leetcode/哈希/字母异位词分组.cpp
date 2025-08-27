#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		vector <vector <string>> groupAnagrams (vector <string> &strs) {
			unordered_map <string, vector <string>> mp;
			for (string & str: strs) {
				string key = str;
				sort(key.begin(), key.end());
				mp[key].emplace_back(str);
			}
			vector <vector <string>> ans;
			for (auto it = mp.begin(); it != mp.end(); it++) {
				ans.emplace_back(it -> second);
			}
			return ans;
		}
};

int main() {
	Solution sol;
	
	vector <string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
	
	vector <vector <string>> ans = sol.groupAnagrams(strs);
	
	cout << "[";
	for (int i = 0; i < ans.size(); i++) {
		cout << "[";
		
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j];
			if (j != ans[i].size() - 1) cout << ",";
		}
		
		if (i != ans.size() - 1) cout << "],";
		else cout << "]";
	}
	cout << "]";
}
