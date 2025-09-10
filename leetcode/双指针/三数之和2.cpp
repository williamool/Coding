#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> & nums) {
        unordered_map<int, int> num;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int L = nums.size();
        for (int i = 0; i < L; i++) {
            num[nums[i]]++;
        }
        int i = 0;
        while(i < L) {
        	//cout << i << endl;
            int left = i + 1, right = L - 1;
            while (left < right) {
            	//cout << left << " " << right << endl;
                if (nums[i] + nums[left] + nums[right] == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    if(nums[i] == nums[left]) left = left + num[nums[left]] - 1;
                    else left = left + num[nums[left]];
                } else if (nums[i] + nums[left] + nums[right] > 0) {
                    right = right - num[nums[right]];
                } else {
                	if(nums[i] == nums[left]) left = left + num[nums[left]] - 1;
                    else left = left + num[nums[left]];
                }
            }
            i = i + num[nums[i]];
        }
        return ans;
    }
};

int main() {
    vector <int> nums = {1, -1, -1, 0};

    Solution sol;
    vector <vector <int>> res = sol.threeSum(nums);

    for (auto &triplet : res) {
        cout << "[ ";
        for (int x : triplet) cout << x << " ";
        cout << "]" << endl;
    }

    return 0;
}

