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
        vector<int>nums;
        if(lists.size()==0)
        {
            return nullptr;
        }
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp=lists[i];
            while(temp)
            {
                nums.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(nums.begin(),nums.end());
        ListNode *head=new ListNode(nums[0]);
        ListNode *temp=head;
        for(int i=1;i<nums.size();i++)
        {
            temp->next=new ListNode(nums[i]);
            temp=temp->next;
        }
        return head;
    }
};
