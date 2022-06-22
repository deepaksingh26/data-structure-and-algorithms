class Solution {
int merge(int low,int mid,int high,vector<int> &nums){
        
        int j = mid+1;
        int inv = 0;
        
        // yha apan check krenge inv 
        
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i]>2*(long)nums[j]){
                j++;
            }
            inv += (j-(mid+1)); 
        }
        j = mid+1;
         int i = low;
        vector<int> temp;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }
            else {
                temp.push_back(nums[j++]);
            }
        }
        
        while(i<=mid) temp.push_back(nums[i++]);
        while(j<=high) temp.push_back(nums[j++]);
        
        for(int k=low;k<=high;k++) nums[k] = temp[k-low];
        
        return inv;
    }
    
    int mergeSort(int low,int high,vector<int> &nums){
        if(low>=high) return 0;
        int inv = 0;
        int mid = low + (high-low)/2;
        inv += mergeSort(low,mid,nums);
        inv += mergeSort(mid+1,high,nums);
        
        inv += merge(low,mid,high,nums);
        
        return inv;
    }

public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();

        return mergeSort(0,n-1,nums);
    }
};