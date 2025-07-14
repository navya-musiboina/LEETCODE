class Solution {
public:
     void func(string digits,string output,int i,vector<string>&res,string mpp[])
     {
        if(i==digits.size())
        {
            res.push_back(output);
            return;
        }
        int num=digits[i]-'0';
        string value=mpp[num];
        for(int j=0;j<value.size();j++)
        {
            output.push_back(value[j]);
            func(digits,output,i+1,res,mpp);
            output.pop_back();
        }
     }
    vector<string> letterCombinations(string digits) 
    {
        vector<string>res;
        string output;
        if(digits.size()==0)
        return res;
        int index=0;
        string mpp[10]={"", "", "abc","def","ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
        func(digits,output,index,res,mpp);
        return res;
    }
};