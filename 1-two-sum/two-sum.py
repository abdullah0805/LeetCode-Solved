class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ans = []
        numbers = {}
        n = len(nums)
        for i in range(n):
            if nums[i] not in numbers:
                numbers[nums[i]] = []
                numbers[nums[i]].append(i)
            else:
                numbers[nums[i]].append(i) 
        for i in range(n):
            if (target - nums[i]) in numbers and [i] != numbers[target - nums[i]]:
                # print(nums[i],[i], numbers[nums[i]])
                c = numbers[nums[i]]
                if len(c) != 0:
                    a = numbers[nums[i]].pop()
                    ans.append(a)
                d = numbers[target - nums[i]]
                if len(d) != 0:
                    a = numbers[target - nums[i]].pop()
                    ans.append(a)
                    return ans
        # print(ans)
        return ans

            


        
        