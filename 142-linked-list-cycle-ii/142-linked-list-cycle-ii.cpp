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
    ListNode *detectCycle(ListNode *head)
    { 
        if(!head||head->next==head)
            return head;
      unordered_set<ListNode *>st;
      ListNode *front=head;
      while(front)
      {
          if(st.find(front)!=st.end())
              return front;
          st.insert(front);
          front=front->next;
      }
      return nullptr;
    }
};