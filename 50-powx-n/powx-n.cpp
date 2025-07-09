/*
When n = -2^31 = -2147483648 (i.e., INT_MIN), this value cannot be represented as a positive int because:

INT_MAX = 2^31 - 1 = 2147483647

-INT_MIN = 2^31 = 2147483648 → this exceeds the max value an int can hold
*/

class Solution {
public:
 
     double myPow(double x, int n) 
    {
        long long nn=n;
        if(n<0)
        nn=-nn;
        double ans=1;
        while(nn>0)
        {
            if(nn%2==0)
            {
                nn=nn/2;
                x=x*x;
            }
            else
            {
                nn=nn-1;
                ans=ans*x;
            }
        }
        if(n>0)
        return ans;
        else
        return 1.0/(ans);



    }
};
