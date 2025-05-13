class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        rev = len(s) - 1
        s1 = s.lower()
        i = 0

        while i < rev:
            while i < rev and not (
                (ord(s1[i]) >= 97 and ord(s1[i]) <= 122) or (ord(s1[i]) >= 48 and ord(s1[i]) <= 57)
            ):
                i += 1
            while i < rev and not (
                (ord(s1[rev]) >= 97 and ord(s1[rev]) <= 122) or (ord(s1[rev]) >= 48 and ord(s1[rev]) <= 57)
            ):
                rev -= 1

            if s1[i] != s1[rev]:
                return False

            i += 1
            rev -= 1

        return True
