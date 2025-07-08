class Solution {
public:
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        vector<vector<long long>> dist(m, vector<long long>(n, 1e18));

        using Node = pair<long long, pair<int, pair<int, int>>>;
        priority_queue<Node, vector<Node>, greater<Node>> pq;

        dist[0][0] = 1;
        pq.push({1, {1, {0, 0}}}); // {cost, {time, {row, col}}}

        while (!pq.empty()) {
            auto [cost, state] = pq.top(); pq.pop();
            auto [time, pos] = state;
            auto [row, col] = pos;

            if (row == m - 1 && col == n - 1)
                return cost;

            if (time % 2 == 0) {
                // Option 1: Wait and stay
              //  pq.push({cost + waitCost[row][col], {time + 2, {row, col}}});

                // Option 2: Wait + move down
                if (row + 1 < m) {
                    long long entry = 1LL * (row + 2) * (col + 1);
                    long long newcost = cost + waitCost[row][col] + entry;
                    if (newcost < dist[row + 1][col]) {
                        dist[row + 1][col] = newcost;
                        pq.push({newcost, {time + 2, {row + 1, col}}});
                    }
                }

                // Option 3: Wait + move right
                if (col + 1 < n) {
                    long long entry = 1LL * (row + 1) * (col + 2);
                    long long newcost = cost + waitCost[row][col] + entry;
                    if (newcost < dist[row][col + 1]) {
                        dist[row][col + 1] = newcost;
                        pq.push({newcost, {time + 2, {row, col + 1}}});
                    }
                }
            } else {
                // Odd time: move directly
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
