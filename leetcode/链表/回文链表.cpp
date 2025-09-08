#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		bool isPalindrome(ListNode* head) {
			vector <int> value;
			while(head != nullptr) {
				value.emplace_back(head->val);
				head = head->next;
			}
			int length = value.size();
			for(int i = 0; i < length / 2; i++) {
				if(value[i] != value[length - i - 1]) {
					return false;
				}
			}
			return true;
		}
};
