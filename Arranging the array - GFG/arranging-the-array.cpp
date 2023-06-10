//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int>v1,v2,ans;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                v1.push_back(arr[i]);
                else
                v2.push_back(arr[i]);
            }
            int t=0;
            while(t<v1.size())
            {
                ans.push_back(v1[t++]);
            }
            t=0;
            while(t<v2.size())
            {
                ans.push_back(v2[t++]);
            }
            for(int p=0;p<n;p++)
            {
                arr[p]=ans[p];
            }
           return; 
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends