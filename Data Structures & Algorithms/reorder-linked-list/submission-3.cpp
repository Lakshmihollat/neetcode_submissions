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
    void reorderList(ListNode* head) {
        vector<int>nums;
        ListNode* temp=head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int length=nums.size();
        temp=head;
        for(int i=0;i<(length/2);i++)
        {
            temp->val=nums[i];
            temp=temp->next;
            temp->val=nums[length-i-1];
            temp=temp->next;
        }
        if(length%2!=0)
        {
            temp->val=nums[(length/2)];
        }
        
    }
};
