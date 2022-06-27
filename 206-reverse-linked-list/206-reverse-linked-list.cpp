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
};