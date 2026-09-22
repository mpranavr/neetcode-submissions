class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        ans = Counter(nums)
        print(ans)
        for i in nums:
            if ans[i]!=1:
                return True
            
        return False
