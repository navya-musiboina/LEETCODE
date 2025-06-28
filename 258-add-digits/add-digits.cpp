class Solution {
public:
//if any number is divisible by 9 then sum of its numbers it divisible by 9
/*
For n = 9875:

Sum digits: 9+8+7+5 = 29

29 mod 9 = 2 → Digital root = 2

For n = 18:

Sum digits: 1+8 = 9

18 mod 9 = 0 → Digital root = 9 (since divisible by 9)
*/  
    int addDigits(int num) 
    {
        if(num==0)return 0;
        if(num%9==0) return 9;
        return num%9;
        
    }
};