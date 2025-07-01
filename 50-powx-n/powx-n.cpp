class Solution {
public:
 
     double myPow(double x, int n) 
    {
        long long nn=n;
        if(n<0)
         nn=(long long)-1*n;
        double ans=1.0;

        while(nn>0)
        {
            if(nn%2==0)
            {
                x=x*x;
                nn=nn/2;
            }
            else
            {
                ans=ans*x;
                nn--;
            }
        }
        if(n<0)
        return (double)1/ans;

        else
        return ans;

    }
};
