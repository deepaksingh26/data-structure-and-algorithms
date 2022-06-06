class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
          set<int> R;
    set<int> C;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==0)
                {
                    R.insert(i);
                   C.insert(j);
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(R.find(i)!=R.end()||C.find(j)!=C.end())
                {
                  mat[i][j]=0;
                }
            }
        }  

    }
};