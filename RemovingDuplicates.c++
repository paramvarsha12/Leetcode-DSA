ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        ListNode* curr = head;

        while (curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                ListNode* dup = curr->next;
                curr->next = dup->next;
                delete dup;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};