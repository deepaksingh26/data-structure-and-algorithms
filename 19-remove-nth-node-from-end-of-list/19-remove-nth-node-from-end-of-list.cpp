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
        if(!head||n==0) return head;
        ListNode *front= head;
        int len=0;
        while(front)
        {
            len++;
            front=front->next;
        }
      if(len==n)
       return head=head->next;   
    
    ListNode* prev=head,*curr;
    int i=len-n-1;
    while(i>=1)
    {
        prev=prev->next;
        i--;
    }
    if(prev->next)
       curr=prev->next;
    prev->next=curr->next;
    return head;
    }
};