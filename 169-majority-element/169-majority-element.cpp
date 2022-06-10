class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int maxi=0;
        int ans;
        for(auto it:mpp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};