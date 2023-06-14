//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int n, int k) {
       long long ans =0;
          priority_queue<int> pq;
          for(int i =0;i<n;i++){
              pq.push(A[i]);
          }
          while(k--){
              int temp=pq.top();
              pq.pop();
              pq.push(temp/2);
              ans+=temp;
          }
          return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends