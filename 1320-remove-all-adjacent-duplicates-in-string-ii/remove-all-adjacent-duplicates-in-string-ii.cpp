class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && st.top().first==s[i])
            st.top().second++;
            else
            st.push({s[i],1});
            if(st.top().second==k)
            st.pop();

        }
        string ans="";
        while(!st.empty())
        {
            char ch=st.top().first;
            int fre=st.top().second;
            st.pop();
           
                ans.append(fre,ch);
              
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};