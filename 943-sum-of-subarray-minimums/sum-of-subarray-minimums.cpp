class Solution {
public:
   /*[3,1,2,4]
   we need to check individula contributions
    example for  [1],[1,2],[1,2,4] on right
    on left it [3,1] also
    basically we need to find next smaller elemt of 3 and previos smaller element of 3

   */
      int mod=1e9+7;
    vector<int> nextsmall(vector<int>&arr)
    {
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>= arr[i]) st.pop();
            
            if(!st.empty())
            ans[i]=st.top();
            else
            ans[i]=n;
            st.push(i);
        }
        return ans;
    }
    vector<int>prevsmall(vector<int>&arr)
    {
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]> arr[i]) st.pop();
            if(!st.empty())
            ans[i]=st.top();
            else
            ans[i]=-1;
            st.push(i);
        }
        return ans;
    }



    int sumSubarrayMins(vector<int>& arr) 
    {
        int n=arr.size();

        vector<int>ns=nextsmall(arr);
        vector<int>ps=prevsmall(arr);
        int count=0;
        for(int i=0;i<n;i++)
        {
            int left=i-ps[i];
            int right=ns[i]-i;
            count=(count+(left*(long long)right*arr[i]))%mod;
        }
        return count;
    }
};