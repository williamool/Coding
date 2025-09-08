#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		ListNode* reverseList(ListNode* head) {
			ListNode* curr = head;
			ListNode* prev = nullptr;
			while (curr != nullptr) {
				ListNode* next = curr->next;
				curr->next = prev;
				prev = curr; 
				curr = next;
			}
			return prev;
		}
};
