class Solution {
public:

// if it is facing down on some card and not facing up on any(same cards) card.

    int flipgame(vector<int>& fronts, vector<int>& backs) 
    {
        int n=fronts.size();
        set<int>s;
        for(int i=0;i<n;i++)
        {
            if(fronts[i]==backs[i])
            s.insert(fronts[i]);
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(s.find(fronts[i])==s.end())
            mini=min(mini,fronts[i]);
            if(s.find(backs[i])==s.end())
            mini=min(mini,backs[i]);
        }
        return mini==INT_MAX?0:mini;
    }
};