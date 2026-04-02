class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;

        while (temp) {
            len++;
            temp = temp->next;
        }

        // If head needs to be removed
        if (n == len) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;
        for (int i = 1; i < len - n; i++) {
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;

        return head;
    }
};
