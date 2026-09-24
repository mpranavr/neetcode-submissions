class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        right = 0
        has = {}
        curr_len = 0
        max_len = 0
        while(left<=right and right<len(s)):
            if s[right] not in has:
                has[s[right]] = 1
                right += 1
            else:
                
                while s[right] in has:
                    del has[s[left]]
                    left += 1
            max_len = max(max_len, len(has.keys()))     
        return max_len
            

        