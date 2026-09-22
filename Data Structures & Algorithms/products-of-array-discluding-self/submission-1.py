class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = []
        pfr = 1
        for i in nums:
            ans.append(pfr)
            pfr = pfr * i;

        pfr = 1
        for i in range(len(nums)-1,-1,-1):
            
            ans[i] = ans[i] * pfr
            pfr = pfr * nums[i]
            

        return ans