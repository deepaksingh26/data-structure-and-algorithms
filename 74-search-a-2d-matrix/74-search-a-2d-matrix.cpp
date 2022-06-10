class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       int r=mat.size();
       int c=mat[0].size();
        int i=0;
       for(;i<r;i++)
       {
           if(mat[i][c-1]>=target)
               break;
       }
       if(i==r)
           return false;
        int j=0;
        for(;j<c;j++)
        {
            if(mat[i][j]==target)
            break;
        }
        return j==c?false:true;
    }
};