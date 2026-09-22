class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        hes = Counter(nums).most_common(k)

        return [ke for ke,val in hes]
        