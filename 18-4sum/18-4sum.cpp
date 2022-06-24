class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n=nums.size();
        if(n<4) 
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {    
            for(int j=i+1;j<n;j++)
            {
               long long int t=target-1LL*nums[i]-1LL*nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back)
                { 
                 long long int sum=nums[front]+nums[back];
                    if(t>sum)
                    front++;
                    else if(t<sum)
                    back--;
                    else
                    {
                        vector<int>temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[front];
                        temp[3]=nums[back];
                        ans.push_back(temp);
                    while(front<back&&nums[front]==temp[2]) front++;
                    while(front<back&&nums[back]==temp[3]) back--;
                    }
                }
             while(j+1<n&&nums[j]==nums[j+1]) 
                    j++;   
            }
              while(i+1<n&&nums[i]==nums[i+1]) 
                    i++;
        }
        return ans;
    }
};
