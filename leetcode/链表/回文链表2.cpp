class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // 1. ����ָ�����е�
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. ��ת��벿��
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // 3. ǰ�벿�ֺͷ�ת��ĺ�벿�ֱȽ�
        ListNode* p1 = head;
        ListNode* p2 = prev; // ��ת��벿�ֵ�ͷ
        while (p2) {
            if (p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};

