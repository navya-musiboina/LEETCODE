class Solution {
public:
//to get k elements maximum then n-k elements minimum
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int n=cardPoints.size();
        int m=n-k;
        int total=accumulate(cardPoints.begin(),cardPoints.end(),0);
        int j=0,sum=0,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum+=cardPoints[i];
            if(i-j+1==m)
            {
                mini=min(mini,sum);
                sum-=cardPoints[j];
                j++;
            }
        }
        if(mini==INT_MAX) return total;
        return total-mini;
    
        
    }
};