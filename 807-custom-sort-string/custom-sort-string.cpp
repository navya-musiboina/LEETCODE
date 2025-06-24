class Solution {
public:
    string customSortString(string order, string s) 
    {
        map<char, int> mpp;
        for (char ch : s)
            mpp[ch]++;

        string ans = "";

        for (int i = 0; i < order.size(); i++) 
        {
            for (auto& it : mpp) 
            {
                if (it.first == order[i] && it.second > 0) 
                {
                    ans.append(it.second, order[i]);
                    it.second = 0;
                }
            }
        }

        for (auto& it : mpp) 
        {
            if (it.second > 0)
                ans.append(it.second, it.first);
        }

        return ans;
    }
};
