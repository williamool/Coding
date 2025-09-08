class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // 1. 快慢指针找中点
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. 反转后半部分
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // 3. 前半部分和反转后的后半部分比较
        ListNode* p1 = head;
        ListNode* p2 = prev; // 反转后半部分的头
        while (p2) {
            if (p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};

