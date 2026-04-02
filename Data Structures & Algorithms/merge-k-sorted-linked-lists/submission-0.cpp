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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* t=lists[i];
            while(t)
            {
                ans.push_back(t->val);
                t=t->next;
            }
        }
        sort(ans.begin(),ans.end());
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        for(int i=0;i<ans.size();i++)
        {
            ListNode* newNode = new ListNode(ans[i]);
            temp->next=newNode;
            temp=temp->next;
        }
        temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
};
