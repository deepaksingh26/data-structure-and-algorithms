// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    int l=0;
    int maxi=0;
    unordered_set<int>st;
    for(int r=0;r<S.length();r++)
    {
        if(st.find(S[r])!=st.end()){
           while(l<r && st.find(S[r])!=st.end())
           {
                st.erase(S[l]);
                l++;
           }
        }
        st.insert(S[r]);
        maxi=max(maxi,r-l+1);
    }
    return maxi;
}