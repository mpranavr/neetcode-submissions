class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        if n == 1:
            return [0]
        stk = []
        ans = []

        for i in range(n-1,-1,-1):
            
            if i == n-1:
                ans.append(0)
                stk.append(i)
            else:
                while len(stk)!=0 and temperatures[stk[-1]]<=temperatures[i]:
                    stk.pop()
                    
                
                if not stk:
                    ans.append(0)
                else:
                    ans.append(stk[-1]-i)
                stk.append(i)
            

        return ans[::-1]
