class Solution {
public:
     

     vector<int>ans;
     void func(int i,int n)
     {
        if(i>n) return;
        ans.push_back(i);
        func(i*10,n);

        if(i%10!=9)
        func(i+1,n);         
     }
    vector<int> lexicalOrder(int n) 
    {
             func(1,n);
             return ans;       
    }
};
