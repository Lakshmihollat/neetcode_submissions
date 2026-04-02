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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int ct=0;
        ListNode* temp=head;
        while(temp)
        {
            ct++;
            temp=temp->next;
        }
        temp=head;
        vector<int>ans;

        vector<int>part;
        for(int i=0;i<ct;i++)
        {
            part.push_back(temp->val);
            temp=temp->next;
            if((i+1)%k==0)
            {
                reverse(part.begin(),part.end());
                ans.insert(ans.end(),part.begin(),part.end());
                part.clear();
            }
        }
        ans.insert(ans.end(),part.begin(),part.end());
        
        temp=head;
        for(int i=0;i<ct;i++)
        {
            temp->val = ans[i];
            temp=temp->next;
        }
        return head;
    }
};
