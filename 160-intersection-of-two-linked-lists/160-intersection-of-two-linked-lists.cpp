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
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) 
    {   
        ListNode *front=l1,*second=l2;
        int len=0;
        map<ListNode*,int>s;
        while(front)
        {
            s[front]++;
            front=front->next;
        }
        while(second)
        {
            if(s.find(second)!=s.end())
                return second;
            second=second->next;
        }
        return nullptr;
    }
};