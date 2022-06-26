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


int longestSubstrDistinctChars (string str)
{
      int maxans = 0;
  unordered_set < int > set;
  int l = 0;
  for (int r = 0; r < str.length(); r++) // outer loop for traversing the string
  {
    if (set.find(str[r]) != set.end()) //if duplicate element is found
    {
      while (l < r && set.find(str[r]) != set.end()) {
        set.erase(str[l]);
        l++;
      }
    }
    set.insert(str[r]);
    maxans = max(maxans, r - l + 1);
  }
  return maxans;
    // int l=0;int maxi=0;
    // unordered_set<int>st;
    // for(int r=0;r<S.length();r++)
    // {
    //     if(st.find(S[r])!=st.end()){
    //         st.erase(S[l]);
    //         l++;
    //     }
    //     st.insert(S[r]);
    //     maxi=max(maxi,r-l+1);
    // }
    // return maxi;
}