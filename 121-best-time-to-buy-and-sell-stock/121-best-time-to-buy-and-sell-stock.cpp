class Solution {
public:
    int maxProfit(vector<int>& p) {
        int m=p[0],mp=0;
        for(int i=0;i<p.size();i++)
        {
                m=min(m,p[i]);
                mp=max(mp,p[i]-m);
        }
        return mp;
    }
};
