class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row=0;
        int col=matrix[0].size()-1;
        int n=matrix.size();
        while(row<n && col>=0)
        {
            if(matrix[row][col]<target)
            row++;
            else if(matrix[row][col]>target)
            col--;
            else
            return true;

        }
        return false;
    }

};