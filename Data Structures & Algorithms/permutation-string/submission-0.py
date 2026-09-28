class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        has = {}
        has1 = {}

        if len(s1)>len(s2):
            return False
        
        left = 0
        #right = 0
        for right in range(len(s1)):
            has1[s1[right]] = has1.get(s1[right],0) + 1

        print(has1)

            

        for right in range(len(s2)):
            has[s2[right]] = has.get(s2[right],0) + 1
            print(right-left)
            
            if right - left + 1  > len(s1):
                has[s2[left]] -= 1

                if has[s2[left]] == 0:
                    del has[s2[left]]
                left += 1
            print(has)
            if has == has1:
                return True
        
        return False
                



        




        