class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        grand_dict = {}
        for num in nums:
            grand_dict[num] = grand_dict.get(num, 0) + 1

        inv_dict = {}
        max_freq = 0
        for key in grand_dict:
            freq = grand_dict[key]
            if freq not in inv_dict:
                inv_dict[freq] = [key]
            else:
                inv_dict[freq].append(key)
            max_freq = max(max_freq, freq)

        ans = []
        for freq in range(max_freq, 0, -1):
            if freq in inv_dict:
                needed = k - len(ans)
                ans.extend(inv_dict[freq][:needed])
                if len(ans) == k:
                    break

        return ans
