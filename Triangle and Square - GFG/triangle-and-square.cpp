// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int countSquare(int b)
    {   
	    b=b-2;
	     b=b/2;
	     return (b*(b+1))/2;
    }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int B,count;
    	cin>>B;
    	Solution ob;
    	count = ob.countSquare(B);
    	cout<<count<<endl;
    }
}  // } Driver Code Ends