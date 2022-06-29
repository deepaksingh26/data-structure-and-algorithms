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
        int sum=0,carry=0;
        ListNode *first= l1;
        ListNode* sec=l2;
        ListNode* dummy=new ListNode(0);
        ListNode *temp=dummy;
        while(first||sec||carry)
        {  
            sum=0;
           sum=carry;
        if(first)
            sum+=first->val;
        if(sec)
            sum+=sec->val;
            temp->next=new ListNode(sum%10); 
            carry=sum/10;
            if(first)
                first=first->next;
            if(sec)
                sec=sec->next;
            temp=temp->next;
        }
        
        return dummy->next;
    }
};