class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
       /* int n=grid.size();
        int m=grid[0].size();
        int total=n*m;
        k=k%total;
        vector<int>a(total);
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        a[i*m+j]=grid[i][j];
        }
        vector<int>shifted(total);
        for(int i=0;i<total;i++)
        shifted[(i+k)%total]=a[i];
        for(int i=0;i<total;i++)
        grid[i/m][i%m]=shifted[i];
        return grid;*/


        int n=grid.size(),m=grid[0].size();
        int total=n*m;
        k=k%total;

        vector<vector<int>>res(n,vector<int>(m));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int index=(i*m+j+k)%total;
                res[index/m][index%m]=grid[i][j];
            }
        }
        return res;
    }
};