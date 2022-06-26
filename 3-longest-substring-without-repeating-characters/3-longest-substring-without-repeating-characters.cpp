class Solution {
public:
    
int solve(string str) {
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
}
    int lengthOfLongestSubstring(string s) {
    //    int maxi=INT_MIN;
    //     unordered_set<int>st;
    //     int l=0,r=0;
    //     for(int r=0;r<s.length();r++)
    //     {
    //         if(st.find(s[r])!=st.end())
    //         {
    //             while(l<r&& st.find(s[r])!=st.end())
    //             {
    //                 l++;
    //                 st.erase(s[l]);
    //             }
    //         }
    //         st.insert(s[r]);
    //         maxi=max(maxi,r-l+1);
    //     }
    //  return maxi;
        return solve(s);
    }
};