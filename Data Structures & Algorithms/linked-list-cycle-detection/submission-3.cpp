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
        vector<ListNode*>ans;
        ListNode* temp=head;
        if(head==nullptr || head->next==nullptr)return false;
        while(temp!=nullptr)
        {
            if(find(ans.begin(),ans.end(),temp)!=ans.end())return true;
            else{
            ans.push_back(temp);
            }
            temp=temp->next;
        }
        return false;
    }
};
