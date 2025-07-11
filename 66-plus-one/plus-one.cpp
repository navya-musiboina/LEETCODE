class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int i=digits.size()-1;
        int carry=1;
        while(i>=0)
        {
            int sum=digits[i]+carry;
            carry=sum/10;
            digits[i]=sum%10;
            i--;
        }
        if(carry>0)
        digits.insert(digits.begin(),carry);
        return digits;
    }
};