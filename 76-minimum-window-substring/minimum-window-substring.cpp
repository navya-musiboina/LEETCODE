class Solution {
public:
    bool isValid(map<char, int>& mpp1, map<char, int>& mpp2) {
        for (auto& it : mpp1) {
            if (mpp2[it.first] < it.second)
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
     //   if (t.size() > s.size()) return "";
        map<char, int> mpp1;
        for (char c : t) mpp1[c]++;

        map<char, int> mpp2;
        int j = 0;
        int minLen = INT_MAX;
        int start = -1;
       string ans;
        for (int i = 0; i < s.size(); i++) {
           /// if (mpp1.find(s[i]) != mpp1.end())
                mpp2[s[i]]++;

            while (isValid(mpp1, mpp2)) {
                if (i - j + 1 < minLen) 
                {
                    minLen = i - j + 1;
                    start = j;
             //       ans=s.substr(j,minLen);//leads to memory limit exceeding
                }
                if (mpp1.find(s[j]) != mpp1.end()) {
                    mpp2[s[j]]--;
                    if (mpp2[s[j]] == 0)
                        mpp2.erase(s[j]);
                }
                j++;
            }
        }
       // return ans;
      if (start == -1) return "";
        return s.substr(start, minLen);
    }
};