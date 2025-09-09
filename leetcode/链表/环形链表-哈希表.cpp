#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		bool hasCycle(ListNode* head) {
			unordered_set <ListNode*> visited;
			while (head != nullptr) {
				if (visited.count(head) != 0) {
					return true;
				}
				visited.insert(head);
				head = head->next;
			}
			return false;
		}
}; 
