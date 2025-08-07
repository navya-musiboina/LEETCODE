class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int i=0,j=n-1,maxi=0;
        while(i<j)
        {
            maxi=max(maxi,min(height[i],height[j])*(j-i) );
            if(height[i]>height[j])
            j--;
            else
            i++;
        }
        return maxi;
    }
};