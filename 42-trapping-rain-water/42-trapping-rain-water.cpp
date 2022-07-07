class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        int *left=new int[n];
        int *right=new int [n];
        left[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            left[i]=max(nums[i],left[i-1]);
        }
        right[n-1]=nums[n-1];
        int i=n-2;
        for(;i>=0;i--)
        {
            right[i]=max(nums[i],right[i+1]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(left[i],right[i])-nums[i];
        }
        return ans;
    }
};