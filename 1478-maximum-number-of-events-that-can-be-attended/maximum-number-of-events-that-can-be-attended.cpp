class Solution {
public:
   

    int maxEvents(vector<vector<int>>& events) 
    {
        int n=events.size(),maxDay=0;
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        maxDay=max(maxDay,events[i][1]);
          int day;
         int index=0,ans=0;
        while(index<n || !pq.empty())
        {
            if (pq.empty()) {
                day = events[index][0];
            }

             while(index<n && day>=events[index][0])
           {
             pq.push(events[index][1]);
             index++;
           }
             while(!pq.empty() && pq.top()<day)
           pq.pop();
           //need to remove all the elements that are already expired
           if(!pq.empty())
           {
            pq.pop();
            ans++;
           }
           day++;
         

        }
        return ans; 
    }
};