class Solution {
public:
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        vector<vector<long long>> dist(m, vector<long long>(n, 1e18));

        priority_queue<pair<long long, pair<int, pair<int, int>>>,
                       vector<pair<long long, pair<int, pair<int, int>>>>,
                       greater<pair<long long, pair<int, pair<int, int>>>>>
            pq;
        dist[0][0] = 1;
        pq.push({1, {1, {0, 0}}}); // {cost, {time, {row, col}}}

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            long long cost = it.first;
            int time = it.second.first;
            int row = it.second.second.first;
            int col = it.second.second.second;

            if (row == m - 1 && col == n - 1)
                return cost;

            if (time % 2 == 0) {
                long long newcost = cost + waitCost[row][col];
                pq.push({newcost, {time + 1, {row, col}}});
            } else {
                if (row + 1 < m) {
                    long long entry = 1LL * (row + 2) * (col + 1);
                    long long newcost = cost + entry;
                    if (newcost < dist[row + 1][col]) {
                        dist[row + 1][col] = newcost;
                        pq.push({newcost, {time + 1, {row + 1, col}}});
                    }
                }

                if (col + 1 < n) {
                    long long entry = 1LL * (row + 1) * (col + 2);
                    long long newcost = cost + entry;
                    if (newcost < dist[row][col + 1]) {
                        dist[row][col + 1] = newcost;
                        pq.push({newcost, {time + 1, {row, col + 1}}});
                    }
                }
            }
        }

        return -1;
    }
};