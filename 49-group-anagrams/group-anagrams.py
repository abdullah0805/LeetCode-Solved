class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        dic = {
            "a": 1,
            "b": 10,
            "c": 100,
            "d": 1000,
            "e": 10000,
            "f": 100000,
            "g": 1000000,
            "h": 10000000,
            "i": 100000000,
            "j": 1000000000,
            "k": 10000000000,
            "l": 100000000000,
            "m": 1000000000000,
            "n": 10000000000000,
            "o": 100000000000000,
            "p": 1000000000000000,
            "q": 10000000000000000,
            "r": 100000000000000000,
            "s": 1000000000000000000,
            "t": 10000000000000000000,
            "u": 100000000000000000000,
            "v": 1000000000000000000000,
            "w": 10000000000000000000000,
            "x": 100000000000000000000000,
            "y": 1000000000000000000000000,
            "z": 10000000000000000000000000
        }

        sum_dict = {}
        for i in range(len(strs)):
            sum_val = 0
            for char in strs[i]:
                sum_val += dic[char]

            key = (len(strs[i]), sum_val)  # Include length to avoid collisions
            if key not in sum_dict:
                sum_dict[key] = [i]
            else:
                sum_dict[key].append(i)

        ans = []
        for index_list in sum_dict.values():
            group = []
            for index in index_list:
                group.append(strs[index])
            ans.append(group)
        return ans
