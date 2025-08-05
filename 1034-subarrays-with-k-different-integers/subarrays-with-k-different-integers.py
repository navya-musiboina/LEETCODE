class Solution(object):
    def atleast(self, nums, k):
        count_map = {}
        j = 0
        count = 0
        n = len(nums)

        for i in range(n):
            count_map[nums[i]] = count_map.get(nums[i], 0) + 1

            while len(count_map) >= k:
                count += n - i
                count_map[nums[j]] -= 1
                if count_map[nums[j]] == 0:
                    del count_map[nums[j]]
                j += 1

        return count

    def subarraysWithKDistinct(self, nums, k):
        return self.atleast(nums, k) - self.atleast(nums, k + 1)
