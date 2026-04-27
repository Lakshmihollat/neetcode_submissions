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