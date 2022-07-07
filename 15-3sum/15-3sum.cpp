class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int target=0;
        for(int i=0;i<nums.size();i++)
        {
            target=-nums[i];
            int left=i+1;
            int high=nums.size()-1;
           
        while(left<high)
            {
            if(nums[left]+nums[high]>target)
            high--;
            else if(nums[left]+nums[high]<target)
                left++;
            else
            {
                vector<int>temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[left]);
                temp.push_back(nums[high]);
                ans.push_back(temp);
                      while(left<high&&nums[left]==temp[1])
                    left++;
                 while(left<high&&nums[high]==temp[2])
                    high--;  
            }
            }
            while(i+1<nums.size()&&nums[i]==nums[i+1])
                    i++; 
        }
        return ans;
    }
};