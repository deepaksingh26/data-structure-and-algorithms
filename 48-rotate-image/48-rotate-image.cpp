class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
       vector<vector<int>>ans;
        int r=mat.size();
        int c=mat[0].size();
        vector<int>temp;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                temp.push_back(mat[j][i]);
            }
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            temp.clear();
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                mat[i][j]=ans[i][j];
            }
        }
    }
};