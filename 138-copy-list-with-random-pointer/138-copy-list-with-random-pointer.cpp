/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       unordered_map<Node*,Node*>mpp; 
        Node* front=head;
        Node *temp,*start;
        while(front)
        {  if(front==head)
           {
            start=temp=new Node(front->val);
            mpp[front]=start;
            }
         else
            { temp->next=new Node(front->val);
             mpp[front]=temp->next;
             temp=temp->next;}
            front=front->next;
        }
        Node *p=head;
        while(p)
        {
            mpp[p]->random=mpp[p->random];
            p=p->next;
        }
        return start;
    }
};