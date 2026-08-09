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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        /*ListNode* newhead=new ListNode();
        ListNode* t=newhead;
        ListNode*temp=head;
        while(temp && temp->next!=nullptr)
        {
            int a=temp->val;
            int b=temp->next->val;
            int g=__gcd(a,b);
            t->next=new ListNode(a);
            t=t->next;
            t->next=new ListNode(g);
            t=t->next;
            temp=temp->next; 
        }
        if(temp)
        {
            t->next=new ListNode(temp->val);
        }
        return newhead->next;*/
        ListNode* temp = head;
        while(temp != nullptr && temp->next!=nullptr)
        {
            int a=temp->val;
            int b=temp->next->val;
            int c= __gcd(a,b);
            ListNode* newNode = new ListNode(c , temp->next);
            temp->next=newNode;
            temp=temp->next;//newnode
            temp=temp->next;//2nd node used

        }
        return head;
    }
};