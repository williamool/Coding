#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
	public:
		ListNode* detectCycle(ListNode* head) {
			unordered_set <ListNode*> visited;
			ListNode* curr = head;
			while(curr != nullptr) {
				if(visited.count(curr) != 0) {
					return curr;
				}
				visited.insert(curr);
				curr = curr->next;
			}
			return nullptr;
		}
};
