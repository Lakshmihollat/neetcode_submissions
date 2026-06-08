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

/*class Solution {
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
*/

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        ListNode* prev = slow->next = nullptr;
        while (second != nullptr) {
            ListNode* tmp = second->next;
            second->next = prev;
            prev = second;
            second = tmp;
        }

        ListNode* first = head;
        second = prev;
        while (second != nullptr) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            second->next = tmp1;
            first = tmp1;
            second = tmp2;
        }
    }
};