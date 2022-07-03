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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode* r,*p=head;
    if(!head||!head->next)
        return head;
        int count=0;
        ListNode* front=head;
        while(front)
        {
            count++;
            front=front->next;
        }
        k=k%count;
        while(k>0)
        {
            ListNode* start=head;
            r,p=head;
            while(p->next!=nullptr)
            {
                r=p;
                p=p->next;
            }
            head=p;
            p->next=start;
            r->next=nullptr;
            k--;
        }
        return p;
    }
};