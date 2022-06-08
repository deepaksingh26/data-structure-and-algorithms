class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>>ans;
        sort(in.begin(),in.end());
        int start=in[0][0];
        int end=in[0][1];
        for(int i=1;i<in.size();i++)
        {
            if(in[i][0]<=end)
            {
                if(in[i][1]>end)
                  end=in[i][1];
                    
            }
            else{
                ans.push_back({start,end});
                start=in[i][0];
                end=in[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};