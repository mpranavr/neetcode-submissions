class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = 0
        right = 0
        max_len = 0
        has = {}
        max_freq = 0
        
        for right in range(len(s)):
            has[s[right]] = has.get(s[right],0) + 1

            max_freq = max(max_freq,has[s[right]])

            while (right-left + 1) - max_freq > k:

                has[s[left]] -= 1
                left += 1
            max_len = max(max_len,right-left+1)
        return max_len