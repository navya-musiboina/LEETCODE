#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long func(vector<int>& piles, int k) {
        long long count = 0;
        for (int i = 0; i < piles.size(); i++) {
            // Correct way to compute ceiling of piles[i] / k
            count += (piles[i] + k - 1) / k;
        }
        return count;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long start = 1;
        long long end = *max_element(piles.begin(), piles.end());
        long long ans = -1;

        while (start <= end) {
            long long mid = (start + end) / 2;
            long long hours = func(piles, mid);

            if (hours <= h) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return (int)ans;
    }
};
