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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)
        {
            return nullptr;
        }
        if(head->next==nullptr && n==1)
        {
            return nullptr;
        }
        vector<int>nums;
        ListNode* temp=head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int target=nums.size()-n;
        if(target == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        int ct=0;
        temp=head;
        ListNode *prev=temp;
        while(ct!=target)
        {
            prev=temp;
            temp=temp->next;
            ct++;
        }
        prev->next=temp->next;
        delete(temp);
        return head;
    }
};
