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
    ListNode* reverseList(ListNode* head) {
        /*vector<int>arr;
        ListNode *temp=head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        reverse(arr.begin(),arr.end());
        ListNode *newtemp=head;
        for(int i=0;i<arr.size();i++)
        {
            newtemp->val=arr[i];
            newtemp=newtemp->next;
        }
        
        return head;*/
        vector<int>nums;
        ListNode* temp=new ListNode();
        temp=head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        reverse(nums.begin(),nums.end());

        temp=head;
        int i=0;
        while(i !=nums.size())
        {
            temp->val=nums[i];
            temp=temp->next;
            i++;
        }
        delete(temp);
        return head;
    }
};
