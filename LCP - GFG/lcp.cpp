// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        sort(ar,ar+n);
        string s1=ar[0];
        string s2=ar[n-1];
        int i=0,j=0;
        string store;
        while(s1[i]==s2[j])
        {
           
            store.push_back(s1[i]);
             i++;
            j++;
        }
        if(store.size()==0)
         return "-1";
       return store; 
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends