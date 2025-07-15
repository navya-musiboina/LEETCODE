class Solution {
public:
     void func(string mpp[],string &ans,vector<string>&res,int i,string digits)
     {
       if(i >= digits.size())
       {
        res.push_back(ans);
        return ;
       }
       int number=digits[i]-'0';
       string sub=mpp[number];
       for(int j=0;j<sub.size();j++)
       {
        ans+=sub[j];
        func(mpp,ans,res,i+1,digits);
        ans.pop_back();
       }



     }
    vector<string> letterCombinations(string digits) 
    {
      vector<string>res;
      string ans;
      
        if(digits.size()==0)
        return  res;
      string mpp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      func(mpp,ans,res,0,digits);
      return res;
    }
};