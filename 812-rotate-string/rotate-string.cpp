class Solution {
public:
    bool rotateString(string s, string goal) 
    {
     if(s.size()!=goal.size()) return false;
     s=s+s;
     int index=s.find(goal);
     if(index==-1) return false;
     return true;

        
    }
};