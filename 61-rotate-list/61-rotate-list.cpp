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
      ListNode* reverseList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode* curr=head;
        ListNode* nxt=head->next;
        ListNode* r=nullptr;
        while(curr)
        {
            curr->next=r;
            r=curr;
            curr=nxt;
          if(nxt)  nxt=nxt->next;   
        }
        return r;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0)
            return head;
        ListNode* start= reverseList(head);
        int count=0;
        head=start;
        while(head)
        {
           count++;
           head=head->next;
        }
        k=k%count;
        if(k==0)
        return reverseList(start); 
        ListNode* f=start;
        while(k-1>0)
        {
            start=start->next;
            k--;
        }
         ListNode*  temp=start->next;
        start->next=nullptr;
         ListNode* p=f=reverseList(f);
        while(f->next!=nullptr)
            f=f->next;
        temp=reverseList(temp);
        f->next=temp;
        return p; 
    }
};