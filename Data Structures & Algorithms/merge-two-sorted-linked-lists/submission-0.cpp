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
        vector<int>ans;
        if(list1==nullptr && list2==nullptr)return list1;
        if(list1==nullptr)return list2;
        if(list2==nullptr)return list1;
        ListNode* temp=list1;
        while(temp!=nullptr)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp!=nullptr)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* list3=new ListNode(ans[0]);
        temp=list3;
        int i=1;
        while(i!=ans.size())
        {
            ListNode* node = new ListNode(ans[i]);
            temp->next=node;
            i++;
            temp=temp->next;
            
        }
        return list3;
    }
};

