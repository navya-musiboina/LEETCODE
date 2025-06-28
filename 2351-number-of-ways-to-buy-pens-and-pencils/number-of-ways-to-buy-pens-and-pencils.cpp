class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) 
    {
       int n=total/cost1;
   //    cout<<n<<endl;
       long long count=0;
       for(int i=0;i<=n;i++)
       {
        int pen=i*cost1;
        int ans=(total-pen)/(cost2);
        count+=ans+1;
    
       }
       return count;
    }
};