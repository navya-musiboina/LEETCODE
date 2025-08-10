class Solution {
public:
    int reverse(int x) 
    {
      long n=x,sum=0;
      while(n!=0)
      {
        sum=(long long)sum*10+n%10;
        n=n/10;
      }
      if(sum<INT_MAX && sum>INT_MIN)
      return int(sum);
      return 0;

    }
};