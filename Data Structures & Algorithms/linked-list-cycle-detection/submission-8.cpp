class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return true;
            }
        }

        return false;
    }
};
/*
class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> seen;
        ListNode* temp = head;

        while(temp) {
            if(seen.count(temp)) {
                return true;
            }
            seen.insert(temp);
            temp = temp->next;
        }

        return false;
    }
};
*/