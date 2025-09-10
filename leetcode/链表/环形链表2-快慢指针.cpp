#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		ListNode* detectCycle(ListNode* head) {
			int flagg = 0;
			ListNode* fast = head;
			ListNode* slow = head;
			while(flagg == 0) {
				if(fast == nullptr || fast->next == nullptr) return nullptr;
				fast = fast->next->next;
				slow = slow->next;
				if(fast == slow) flagg = 1;
			}
			ListNode* flag = head;
			while(flag != slow) {
				flag = flag->next;
				slow = slow->next;
			}
			return flag;
		}
};
