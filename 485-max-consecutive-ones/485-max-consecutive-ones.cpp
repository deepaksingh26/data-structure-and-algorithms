class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            count++;
            else 
            {
                maxi=max(maxi,count);
                count=0;
            }
        }
        if(count)
            maxi=max(maxi,count);
        return maxi;
    }
};