class Solution {
public:
    void sortColors(vector<int>& nums) {
       map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        nums.clear();
        for(auto it:mpp)
        {
            int sec=it.second;
            for(int i=0;i<sec;i++)
            {
                nums.push_back(it.first);
            }
        }
    }
};