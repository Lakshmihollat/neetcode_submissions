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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>nums;
        ListNode *temp=list1;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        if(nums.size()==0)
        {
            return list2;
        }
        temp=list2;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        if(nums.size()==0)
        {
            return list2;
        }
        sort(nums.begin(),nums.end());
        ListNode *head=new ListNode(nums[0]);
        temp=head;
        for(int i=1;i<nums.size();i++)
        {
            temp->next=new ListNode(nums[i]);
            temp=temp->next;
        }
        return head;
    }
};
