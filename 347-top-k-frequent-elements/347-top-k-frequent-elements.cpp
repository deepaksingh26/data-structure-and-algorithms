class Solution {
private:
   
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
      vector<int>v;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto it: mp){
            pq.push(make_pair(it.second,it.first));
        }
        while(k-- && pq.size()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};