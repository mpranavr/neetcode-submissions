class Solution:
    def isValid(self, s: str) -> bool:
        has = []

        if len(s) == 1:
            return False

        for i in s:

            if i=='{' or i=="[" or i=='(':
                has.append(i)
            else:

                if i == ')':
                    if len(has) == 0 or len(has)!=0 and has.pop() != '(':
                        return False
                elif i == '}':
                    if len(has) == 0 or len(has)!=0 and has.pop() != '{':
                        return False
                elif i == ']':
                    if len(has) == 0 or len(has)!=0 and has.pop() != '[':
                        return False
            
        return len(has) == 0




        