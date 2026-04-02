/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        vector<ListNode*> arr; // store node addresses, not values
    ListNode* temp = head;

    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    while (temp != nullptr) {
        if (find(arr.begin(), arr.end(), temp) != arr.end()) {
            return true; // Node already visited → cycle
        }
        arr.emplace_back(temp);
        temp = temp->next;
    }

    return false;
    }
};
