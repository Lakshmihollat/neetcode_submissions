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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        vector<int>ans;
        while(l1 || l2 || carry)
        {
             int v1 = (l1 != nullptr) ? l1->val : 0;
            int v2 = (l2 != nullptr) ? l2->val : 0;
            int sum=v1+v2+carry;
            int diff=sum%10;
            carry=sum/10;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
            ans.push_back(diff);
        }
        ListNode* head=new ListNode();
        ListNode* temp=head;
        for(int i=0;i<ans.size();i++)
        {
            temp->next=new ListNode(ans[i]);
            temp=temp->next;
        }
        return head->next;
    }
};
