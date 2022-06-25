class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int>st;
        for(int i=0;i<nums.size();i++)
          st.insert(nums[i]);
        int maxi=INT_MIN;
        int num;
        int curr;
       for(int i=0;i<nums.size();i++)
       {      
     if(st.find(nums[i]-1)==st.end())
     {              num=1;
                  curr=nums[i]+1;
    while(st.find(curr)!=st.end())
       {  num++;
            curr++;
       }
          maxi=max(maxi,num);
       }
       }
        return maxi;
    }
};