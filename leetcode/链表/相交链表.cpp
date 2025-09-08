#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
			unordered_set <ListNode*> visited;
			ListNode* temp = headA;
			while(temp != nullptr) {
				visited.insert(temp);
				temp = temp->next;
			}
			temp = headB;
			while(temp != nullptr) {
				if(visited.count(temp) != 0) {
					return temp;
				}
				temp = temp->next;
			}
			return nullptr;
		}
};
