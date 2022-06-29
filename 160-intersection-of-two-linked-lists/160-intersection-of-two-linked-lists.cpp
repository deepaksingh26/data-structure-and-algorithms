/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB)
            return nullptr;
       ListNode  *first=headA;
       ListNode *sec=headB;
       while(first!=sec)
       {
           first= first==nullptr?headB:first->next;
           sec=sec==nullptr?headA:sec->next;
       }
        return sec;
    }
};