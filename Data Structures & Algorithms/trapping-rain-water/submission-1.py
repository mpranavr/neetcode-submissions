class Solution:
    def trap(self, height: List[int]) -> int:
        prefix_max = []
        suffix_max = []
        curr_max = 0

        for i in height:
            prefix_max.append(curr_max)
            curr_max = max(curr_max,i)
        
        curr_max = 0

        for i in reversed(height):
            suffix_max.append(curr_max)
            curr_max = max(curr_max,i)
        suffix_max.reverse()

        tot = 0
        for i in range(len(height)):
            tot = tot + max(0,min(prefix_max[i],suffix_max[i]) - height[i])
        
        return tot
        
        