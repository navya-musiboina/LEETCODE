class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
       map<pair<int,int>,int>mpp;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            mpp[{i,j}]=1;
        }
       }
       for(auto it:mpp)
       {
        int row=it.first.first;
        int col=it.first.second;
        for(int i=0;i<m;i++)
        matrix[row][i]=0;
        for(int j=0;j<n;j++)
        matrix[j][col]=0;
       }

    }
};