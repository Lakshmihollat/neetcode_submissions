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
        unordered_map<int,ListNode*>mp;
        while(head!=nullptr)
        {
            if(mp.count(head->val))
            {
                if(mp[head->val]==head)
                    return true;
            }else{
                mp[head->val]=head;
            }
            head=head->next;
        }
        return false;
    }
};
