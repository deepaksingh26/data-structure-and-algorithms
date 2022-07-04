// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
       Node* reverse(Node* head) {
        if(!head||!head->next)
            return head;
        Node* curr=head;
        Node* nxt=head->next;
        Node* r=nullptr;
        while(curr)
        {
            curr->next=r;
            r=curr;
            curr=nxt;
          if(nxt)  nxt=nxt->next;   
        }
        return r;
    }
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
       if(!head||!head->next||k==0)
       return head;
       Node*t,*p=head;
       while(k-1>0)
       {
           p=p->next;
           k--;
       }
       Node *nex=t=p->next;
       if(nex==NULL)
       return head;
       p->next=nullptr;
       while(nex->next!=nullptr)
       {
           nex=nex->next;
       }
       nex->next=head;
       return t;
    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends