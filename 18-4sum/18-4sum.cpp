// #define ll long long int
// class Solution {
// public:
    
//     int binarySearch(vector<int>&nums,int low,int high,int tar){
//         while(low<=high){
//             ll mid = low + (high-low)/2;
//             if(nums[mid]>tar) high = mid-1;
//             else if(nums[mid]<tar) low = mid+1;
//             else {
//                 return 1;
//             }
//         }
//         return 0;
                    
//     }
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size(); 
//        set<vector<int>>temp;
//         sort(nums.begin(),nums.end());
//         for(int i =0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 for(int k=j+1;k<n;k++)
//                 {
//                     ll t=(ll)target-(ll)nums[i]-(ll)nums[j]-(ll)nums[k];
//                     if(binarySearch(nums,k+1,n-1,t))
//                     {
                       
//                         temp.insert({nums[i],nums[j],nums[k],t});
//                     }
//                 }
//             }
//         }
//         vector<vector<int>>ans;
//         for(auto it:temp)
//         {
//             ans.push_back(it);
//         }
//         return ans;
//     }
    
// };
// #define ll long long int
// class Solution {
// public:
    
//     int binarySearch(vector<int>&nums,int low,int high,int tar){
//         while(low<=high){
//             ll mid = low + (high-low)/2;
//             if(nums[mid]>tar) high = mid-1;
//             else if(nums[mid]<tar) low = mid+1;
//             else {
//                 return 1;
//             }
//         }
//         return 0;
                    
//     }
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size(); 
//        set<vector<int>>temp;
//         sort(nums.begin(),nums.end());
//         for(int i =0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 for(int k=j+1;k<n;k++)
//                 {
//                     ll t=(ll)target-(ll)nums[i]-(ll)nums[j]-(ll)nums[k];
//                     if(binarySearch(nums,k+1,n-1,t))
//                     {
//                         vector<int> ds;
//                         ds.push_back(nums[i]);
//                         ds.push_back(nums[j]);
//                         ds.push_back(nums[k]);
//                         ds.push_back(t);
//                         temp.insert(ds);
//                     }
//                 }
//             }
//         }
//         vector<vector<int>>ans;
//         for(auto it:temp)
//         {
//             ans.push_back(it);
//         }
//         return ans;
//     }
    
// };
#define ll long long int

class Solution {
    int bs(int low,int high,vector<int>&nums,ll tar){
      
        
        while(low<=high){
            ll mid = low + (high-low)/2;
            if(nums[mid]>tar) high = mid-1;
            else if(nums[mid]<tar) low = mid+1;
            else {
                return 1;
            }
        }
        return 0;
                    
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<=n-1;k++){
                    
                    
                     ll tar = (ll)target - (ll)nums[i] - (ll)nums[j] - (ll)nums[k];
                    if(bs(k+1,n-1,nums,tar)){
                        vector<int> ds;
                        ds.push_back(nums[i]);
                        ds.push_back(nums[j]);
                        ds.push_back(nums[k]);
                        ds.push_back(tar);
                        ans.insert(ds);
                    }
                    
                    
                }
            }
        }
        
        vector<vector<int>> finalAns;
        
        for(auto &it : ans ) finalAns.push_back(it);
        return finalAns;
        
    }
};