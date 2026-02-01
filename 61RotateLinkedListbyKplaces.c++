class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* curr = head;
        int count = 0;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }
        
        k = k % count;
        if (k==0) {
            return head;
        }

        for (int i=0; i<k; i++) {
            fast = fast->next;
        }

        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* head2 = slow->next;
        slow->next = nullptr;
        fast->next = head;

        return head2;


    }
};